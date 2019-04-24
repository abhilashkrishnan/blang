package blaze;

import blaze.exception.InvalidProgramException;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.TerminalNode;
import org.jetbrains.annotations.Nullable;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class BlazeLangVisitor extends BlazeBaseVisitor<Void> {

    private static final class UnresolvedAddress {
        private final int position;
        private final String label;

        public UnresolvedAddress(String label, int position) {
            this.label = label;
            this.position = position;
        }
    }

    private static final int UNRESOLVED_JUMP_ADDRESS = -1;
    private final List<Integer> program = new ArrayList<>();
    private final List<UnresolvedAddress> labelsToResolve = new ArrayList<>();
    private final Map<String, Integer> labelsAddresses = new HashMap<>();

    private int getCurrentAddress() {return program.size();}

    @Override
    public Void visitLabel(BlazeParser.LabelContext ctx) {
        // When a label is found, saves the current address for later
        String labelText = ctx.IDENTIFIER().getText();
        labelsAddresses.put(labelText, getCurrentAddress());
        return null;
    }

    @Override
    public Void visitHalt(BlazeParser.HaltContext ctx) {
        // When a HALT instruction is found, adds a HALT instruction to the program
        program.add(Instructions.HALT);
        return null;
    }

    @Override
    public Void visitPush(BlazeParser.PushContext ctx) {
        visitOneArgumentInstruction(ctx.NUMBER(), Instructions.PUSH);
        return null;
    }

    @Override
    public Void visitAdd(BlazeParser.AddContext ctx) {
        program.add(Instructions.ADD);
        return null;
    }

    @Override
    public Void visitSub(BlazeParser.SubContext ctx) {
        program.add(Instructions.SUB);
        return null;
    }

    @Override
    public Void visitMul(BlazeParser.MulContext ctx) {
        program.add(Instructions.MUL);
        return null;
    }

    @Override
    public Void visitDiv(BlazeParser.DivContext ctx) {
        program.add(Instructions.DIV);
        return null;
    }

    @Override
    public Void visitNot(BlazeParser.NotContext ctx) {
        program.add(Instructions.NOT);
        return null;
    }

    @Override
    public Void visitAnd(BlazeParser.AndContext ctx) {
        program.add(Instructions.AND);
        return null;
    }

    @Override
    public Void visitOr(BlazeParser.OrContext ctx) {
        program.add(Instructions.OR);
        return null;
    }

    @Override
    public Void visitPop(BlazeParser.PopContext ctx) {
        program.add(Instructions.POP);
        return null;
    }

    @Override
    public Void visitDup(BlazeParser.DupContext ctx) {
        program.add(Instructions.DUP);
        return null;
    }

    @Override
    public Void visitIseq(BlazeParser.IseqContext ctx) {
        program.add(Instructions.ISEQ);
        return null;
    }

    @Override
    public Void visitIsge(BlazeParser.IsgeContext ctx) {
        program.add(Instructions.ISGE);
        return null;
    }

    @Override
    public Void visitIsgt(BlazeParser.IsgtContext ctx) {
        program.add(Instructions.ISGT);
        return null;
    }

    @Override
    public Void visitJmp(BlazeParser.JmpContext ctx) {
        visitUnresolvedJump(ctx.IDENTIFIER(), Instructions.JMP);
        return null;
    }

    @Override
    public Void visitJif(BlazeParser.JifContext ctx) {
        visitUnresolvedJump(ctx.IDENTIFIER(), Instructions.JIF);
        return null;
    }

    @Override
    public Void visitLoad(BlazeParser.LoadContext ctx) {
        visitOneArgumentInstruction(ctx.NUMBER(), Instructions.LOAD);
        return null;
    }

    @Override
    public Void visitStore(BlazeParser.StoreContext ctx) {
        visitOneArgumentInstruction(ctx.NUMBER(), Instructions.STORE);
        return null;
    }

    @Override
    public Void visitCall(BlazeParser.CallContext ctx) {
        visitUnresolvedJump(ctx.IDENTIFIER(), Instructions.CALL);
        return null;
    }

    @Override
    public Void visitRet(BlazeParser.RetContext ctx) {
        program.add(Instructions.RET);
        return null;
    }

    private void visitOneArgumentInstruction(TerminalNode numer, int instruction) {
        int value = Integer.valueOf(numer.getText());
        program.add(instruction);
        program.add(value);
    }

    private void visitUnresolvedJump(TerminalNode identifier, int instruction) {
        // Add the given instruction, save the unresolved label and add a placeholder for the jump address
        program.add(instruction);
        String labelText = identifier.getText();
        labelsToResolve.add(new UnresolvedAddress(labelText, getCurrentAddress()));
        program.add(UNRESOLVED_JUMP_ADDRESS);
    }

    /**
     * Returns the current program in a format suitable for the CPU execution.
     */
    public int[] generateProgram() {
        resolveLabels();

        // Horrible code to convert a List<Integer> to an int[]
        int[] result = new int[this.program.size()];
        for (int i = 0; i < this.program.size(); i++) {
            result[i] = this.program.get(i);
        }
        return result;
    }

    /**
     * Transforms all the unresolved labels into correct addresses.
     */
    private void resolveLabels() {
        for (UnresolvedAddress unresolvedAddress : labelsToResolve) {
            // Map the jump to its real address, by checking the label's address
            @Nullable Integer destination = labelsAddresses.get(unresolvedAddress.label);
            if (destination == null) {
                throw new InvalidProgramException("Unresolved label " + unresolvedAddress.label);
            }

            // Replace the placeholder with the jump address
            assert program.get(unresolvedAddress.position) == UNRESOLVED_JUMP_ADDRESS;
            program.set(unresolvedAddress.position, destination);
        }

        // Clean up
        labelsToResolve.clear();
    }


    /**
     * Generates a program from a given parser, or throws an exception if the program is invalid.
     */
    public static int[] generateProgram(BlazeParser parser) throws InvalidProgramException {
        BlazeLangVisitor programVisitor = new BlazeLangVisitor();
        programVisitor.visit(parser.program());
        return programVisitor.generateProgram();
    }

    /**
     * Generates a program from a given ANTLR input, or throws an exception if the program is invalid.
     */
    public static int[] generateProgram(CharStream input) throws InvalidProgramException {
        BlazeLexer lexer = new BlazeLexer(input);
        CommonTokenStream tokenStream = new CommonTokenStream(lexer);
        BlazeParser parser = new BlazeParser(tokenStream);
        return generateProgram(parser);
    }
}
