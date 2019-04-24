// Generated from blaze\Blaze.g4 by ANTLR 4.7
package blaze;
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link BlazeParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface BlazeVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link BlazeParser#program}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitProgram(BlazeParser.ProgramContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#line}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLine(BlazeParser.LineContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#emptyLine}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitEmptyLine(BlazeParser.EmptyLineContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#label}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLabel(BlazeParser.LabelContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#instruction}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInstruction(BlazeParser.InstructionContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#halt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitHalt(BlazeParser.HaltContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#push}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPush(BlazeParser.PushContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#add}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAdd(BlazeParser.AddContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#sub}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSub(BlazeParser.SubContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#mul}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMul(BlazeParser.MulContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#div}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDiv(BlazeParser.DivContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#not}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNot(BlazeParser.NotContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#and}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAnd(BlazeParser.AndContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#or}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitOr(BlazeParser.OrContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#pop}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPop(BlazeParser.PopContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#dup}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDup(BlazeParser.DupContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#iseq}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIseq(BlazeParser.IseqContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#isge}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIsge(BlazeParser.IsgeContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#isgt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIsgt(BlazeParser.IsgtContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#jmp}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitJmp(BlazeParser.JmpContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#jif}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitJif(BlazeParser.JifContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#load}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLoad(BlazeParser.LoadContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#store}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStore(BlazeParser.StoreContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#call}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCall(BlazeParser.CallContext ctx);
	/**
	 * Visit a parse tree produced by {@link BlazeParser#ret}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitRet(BlazeParser.RetContext ctx);
}