// Generated from blaze\Blaze.g4 by ANTLR 4.7
package blaze;
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link BlazeParser}.
 */
public interface BlazeListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link BlazeParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(BlazeParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(BlazeParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#line}.
	 * @param ctx the parse tree
	 */
	void enterLine(BlazeParser.LineContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#line}.
	 * @param ctx the parse tree
	 */
	void exitLine(BlazeParser.LineContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#emptyLine}.
	 * @param ctx the parse tree
	 */
	void enterEmptyLine(BlazeParser.EmptyLineContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#emptyLine}.
	 * @param ctx the parse tree
	 */
	void exitEmptyLine(BlazeParser.EmptyLineContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#label}.
	 * @param ctx the parse tree
	 */
	void enterLabel(BlazeParser.LabelContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#label}.
	 * @param ctx the parse tree
	 */
	void exitLabel(BlazeParser.LabelContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#instruction}.
	 * @param ctx the parse tree
	 */
	void enterInstruction(BlazeParser.InstructionContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#instruction}.
	 * @param ctx the parse tree
	 */
	void exitInstruction(BlazeParser.InstructionContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#halt}.
	 * @param ctx the parse tree
	 */
	void enterHalt(BlazeParser.HaltContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#halt}.
	 * @param ctx the parse tree
	 */
	void exitHalt(BlazeParser.HaltContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#push}.
	 * @param ctx the parse tree
	 */
	void enterPush(BlazeParser.PushContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#push}.
	 * @param ctx the parse tree
	 */
	void exitPush(BlazeParser.PushContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#add}.
	 * @param ctx the parse tree
	 */
	void enterAdd(BlazeParser.AddContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#add}.
	 * @param ctx the parse tree
	 */
	void exitAdd(BlazeParser.AddContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#sub}.
	 * @param ctx the parse tree
	 */
	void enterSub(BlazeParser.SubContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#sub}.
	 * @param ctx the parse tree
	 */
	void exitSub(BlazeParser.SubContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#mul}.
	 * @param ctx the parse tree
	 */
	void enterMul(BlazeParser.MulContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#mul}.
	 * @param ctx the parse tree
	 */
	void exitMul(BlazeParser.MulContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#div}.
	 * @param ctx the parse tree
	 */
	void enterDiv(BlazeParser.DivContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#div}.
	 * @param ctx the parse tree
	 */
	void exitDiv(BlazeParser.DivContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#not}.
	 * @param ctx the parse tree
	 */
	void enterNot(BlazeParser.NotContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#not}.
	 * @param ctx the parse tree
	 */
	void exitNot(BlazeParser.NotContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#and}.
	 * @param ctx the parse tree
	 */
	void enterAnd(BlazeParser.AndContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#and}.
	 * @param ctx the parse tree
	 */
	void exitAnd(BlazeParser.AndContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#or}.
	 * @param ctx the parse tree
	 */
	void enterOr(BlazeParser.OrContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#or}.
	 * @param ctx the parse tree
	 */
	void exitOr(BlazeParser.OrContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#pop}.
	 * @param ctx the parse tree
	 */
	void enterPop(BlazeParser.PopContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#pop}.
	 * @param ctx the parse tree
	 */
	void exitPop(BlazeParser.PopContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#dup}.
	 * @param ctx the parse tree
	 */
	void enterDup(BlazeParser.DupContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#dup}.
	 * @param ctx the parse tree
	 */
	void exitDup(BlazeParser.DupContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#iseq}.
	 * @param ctx the parse tree
	 */
	void enterIseq(BlazeParser.IseqContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#iseq}.
	 * @param ctx the parse tree
	 */
	void exitIseq(BlazeParser.IseqContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#isge}.
	 * @param ctx the parse tree
	 */
	void enterIsge(BlazeParser.IsgeContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#isge}.
	 * @param ctx the parse tree
	 */
	void exitIsge(BlazeParser.IsgeContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#isgt}.
	 * @param ctx the parse tree
	 */
	void enterIsgt(BlazeParser.IsgtContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#isgt}.
	 * @param ctx the parse tree
	 */
	void exitIsgt(BlazeParser.IsgtContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#jmp}.
	 * @param ctx the parse tree
	 */
	void enterJmp(BlazeParser.JmpContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#jmp}.
	 * @param ctx the parse tree
	 */
	void exitJmp(BlazeParser.JmpContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#jif}.
	 * @param ctx the parse tree
	 */
	void enterJif(BlazeParser.JifContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#jif}.
	 * @param ctx the parse tree
	 */
	void exitJif(BlazeParser.JifContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#load}.
	 * @param ctx the parse tree
	 */
	void enterLoad(BlazeParser.LoadContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#load}.
	 * @param ctx the parse tree
	 */
	void exitLoad(BlazeParser.LoadContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#store}.
	 * @param ctx the parse tree
	 */
	void enterStore(BlazeParser.StoreContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#store}.
	 * @param ctx the parse tree
	 */
	void exitStore(BlazeParser.StoreContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#call}.
	 * @param ctx the parse tree
	 */
	void enterCall(BlazeParser.CallContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#call}.
	 * @param ctx the parse tree
	 */
	void exitCall(BlazeParser.CallContext ctx);
	/**
	 * Enter a parse tree produced by {@link BlazeParser#ret}.
	 * @param ctx the parse tree
	 */
	void enterRet(BlazeParser.RetContext ctx);
	/**
	 * Exit a parse tree produced by {@link BlazeParser#ret}.
	 * @param ctx the parse tree
	 */
	void exitRet(BlazeParser.RetContext ctx);
}