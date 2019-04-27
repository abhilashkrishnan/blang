
#pragma once


#include "antlr4-runtime.h"
#include "BlazeParserListener.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of BlazeParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  BlazeParserBaseListener : public BlazeParserListener {
public:

  virtual void enterCompilationUnit(BlazeParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(BlazeParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterPackageDeclaration(BlazeParser::PackageDeclarationContext * /*ctx*/) override { }
  virtual void exitPackageDeclaration(BlazeParser::PackageDeclarationContext * /*ctx*/) override { }

  virtual void enterImportDeclaration(BlazeParser::ImportDeclarationContext * /*ctx*/) override { }
  virtual void exitImportDeclaration(BlazeParser::ImportDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeDeclaration(BlazeParser::TypeDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeDeclaration(BlazeParser::TypeDeclarationContext * /*ctx*/) override { }

  virtual void enterModifier(BlazeParser::ModifierContext * /*ctx*/) override { }
  virtual void exitModifier(BlazeParser::ModifierContext * /*ctx*/) override { }

  virtual void enterClassOrInterfaceModifier(BlazeParser::ClassOrInterfaceModifierContext * /*ctx*/) override { }
  virtual void exitClassOrInterfaceModifier(BlazeParser::ClassOrInterfaceModifierContext * /*ctx*/) override { }

  virtual void enterVariableModifier(BlazeParser::VariableModifierContext * /*ctx*/) override { }
  virtual void exitVariableModifier(BlazeParser::VariableModifierContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(BlazeParser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(BlazeParser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumDeclaration(BlazeParser::EnumDeclarationContext * /*ctx*/) override { }
  virtual void exitEnumDeclaration(BlazeParser::EnumDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumConstants(BlazeParser::EnumConstantsContext * /*ctx*/) override { }
  virtual void exitEnumConstants(BlazeParser::EnumConstantsContext * /*ctx*/) override { }

  virtual void enterEnumConstant(BlazeParser::EnumConstantContext * /*ctx*/) override { }
  virtual void exitEnumConstant(BlazeParser::EnumConstantContext * /*ctx*/) override { }

  virtual void enterEnumBodyDeclarations(BlazeParser::EnumBodyDeclarationsContext * /*ctx*/) override { }
  virtual void exitEnumBodyDeclarations(BlazeParser::EnumBodyDeclarationsContext * /*ctx*/) override { }

  virtual void enterInterfaceDeclaration(BlazeParser::InterfaceDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceDeclaration(BlazeParser::InterfaceDeclarationContext * /*ctx*/) override { }

  virtual void enterClassBody(BlazeParser::ClassBodyContext * /*ctx*/) override { }
  virtual void exitClassBody(BlazeParser::ClassBodyContext * /*ctx*/) override { }

  virtual void enterInterfaceBody(BlazeParser::InterfaceBodyContext * /*ctx*/) override { }
  virtual void exitInterfaceBody(BlazeParser::InterfaceBodyContext * /*ctx*/) override { }

  virtual void enterClassBodyDeclaration(BlazeParser::ClassBodyDeclarationContext * /*ctx*/) override { }
  virtual void exitClassBodyDeclaration(BlazeParser::ClassBodyDeclarationContext * /*ctx*/) override { }

  virtual void enterMemberDeclaration(BlazeParser::MemberDeclarationContext * /*ctx*/) override { }
  virtual void exitMemberDeclaration(BlazeParser::MemberDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodDeclaration(BlazeParser::MethodDeclarationContext * /*ctx*/) override { }
  virtual void exitMethodDeclaration(BlazeParser::MethodDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodBody(BlazeParser::MethodBodyContext * /*ctx*/) override { }
  virtual void exitMethodBody(BlazeParser::MethodBodyContext * /*ctx*/) override { }

  virtual void enterTypeTypeOrVoid(BlazeParser::TypeTypeOrVoidContext * /*ctx*/) override { }
  virtual void exitTypeTypeOrVoid(BlazeParser::TypeTypeOrVoidContext * /*ctx*/) override { }

  virtual void enterConstructorDeclaration(BlazeParser::ConstructorDeclarationContext * /*ctx*/) override { }
  virtual void exitConstructorDeclaration(BlazeParser::ConstructorDeclarationContext * /*ctx*/) override { }

  virtual void enterFieldDeclaration(BlazeParser::FieldDeclarationContext * /*ctx*/) override { }
  virtual void exitFieldDeclaration(BlazeParser::FieldDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceBodyDeclaration(BlazeParser::InterfaceBodyDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceBodyDeclaration(BlazeParser::InterfaceBodyDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceMemberDeclaration(BlazeParser::InterfaceMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceMemberDeclaration(BlazeParser::InterfaceMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterConstDeclaration(BlazeParser::ConstDeclarationContext * /*ctx*/) override { }
  virtual void exitConstDeclaration(BlazeParser::ConstDeclarationContext * /*ctx*/) override { }

  virtual void enterConstantDeclarator(BlazeParser::ConstantDeclaratorContext * /*ctx*/) override { }
  virtual void exitConstantDeclarator(BlazeParser::ConstantDeclaratorContext * /*ctx*/) override { }

  virtual void enterInterfaceMethodDeclaration(BlazeParser::InterfaceMethodDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceMethodDeclaration(BlazeParser::InterfaceMethodDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceMethodModifier(BlazeParser::InterfaceMethodModifierContext * /*ctx*/) override { }
  virtual void exitInterfaceMethodModifier(BlazeParser::InterfaceMethodModifierContext * /*ctx*/) override { }

  virtual void enterVariableDeclarators(BlazeParser::VariableDeclaratorsContext * /*ctx*/) override { }
  virtual void exitVariableDeclarators(BlazeParser::VariableDeclaratorsContext * /*ctx*/) override { }

  virtual void enterVariableDeclarator(BlazeParser::VariableDeclaratorContext * /*ctx*/) override { }
  virtual void exitVariableDeclarator(BlazeParser::VariableDeclaratorContext * /*ctx*/) override { }

  virtual void enterVariableDeclaratorId(BlazeParser::VariableDeclaratorIdContext * /*ctx*/) override { }
  virtual void exitVariableDeclaratorId(BlazeParser::VariableDeclaratorIdContext * /*ctx*/) override { }

  virtual void enterVariableInitializer(BlazeParser::VariableInitializerContext * /*ctx*/) override { }
  virtual void exitVariableInitializer(BlazeParser::VariableInitializerContext * /*ctx*/) override { }

  virtual void enterArrayInitializer(BlazeParser::ArrayInitializerContext * /*ctx*/) override { }
  virtual void exitArrayInitializer(BlazeParser::ArrayInitializerContext * /*ctx*/) override { }

  virtual void enterClassOrInterfaceType(BlazeParser::ClassOrInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitClassOrInterfaceType(BlazeParser::ClassOrInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterTypeArgument(BlazeParser::TypeArgumentContext * /*ctx*/) override { }
  virtual void exitTypeArgument(BlazeParser::TypeArgumentContext * /*ctx*/) override { }

  virtual void enterQualifiedNameList(BlazeParser::QualifiedNameListContext * /*ctx*/) override { }
  virtual void exitQualifiedNameList(BlazeParser::QualifiedNameListContext * /*ctx*/) override { }

  virtual void enterFormalParameters(BlazeParser::FormalParametersContext * /*ctx*/) override { }
  virtual void exitFormalParameters(BlazeParser::FormalParametersContext * /*ctx*/) override { }

  virtual void enterFormalParameterList(BlazeParser::FormalParameterListContext * /*ctx*/) override { }
  virtual void exitFormalParameterList(BlazeParser::FormalParameterListContext * /*ctx*/) override { }

  virtual void enterFormalParameter(BlazeParser::FormalParameterContext * /*ctx*/) override { }
  virtual void exitFormalParameter(BlazeParser::FormalParameterContext * /*ctx*/) override { }

  virtual void enterLastFormalParameter(BlazeParser::LastFormalParameterContext * /*ctx*/) override { }
  virtual void exitLastFormalParameter(BlazeParser::LastFormalParameterContext * /*ctx*/) override { }

  virtual void enterQualifiedName(BlazeParser::QualifiedNameContext * /*ctx*/) override { }
  virtual void exitQualifiedName(BlazeParser::QualifiedNameContext * /*ctx*/) override { }

  virtual void enterLiteral(BlazeParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(BlazeParser::LiteralContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(BlazeParser::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(BlazeParser::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(BlazeParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(BlazeParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterBlock(BlazeParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(BlazeParser::BlockContext * /*ctx*/) override { }

  virtual void enterBlockStatement(BlazeParser::BlockStatementContext * /*ctx*/) override { }
  virtual void exitBlockStatement(BlazeParser::BlockStatementContext * /*ctx*/) override { }

  virtual void enterLocalVariableDeclaration(BlazeParser::LocalVariableDeclarationContext * /*ctx*/) override { }
  virtual void exitLocalVariableDeclaration(BlazeParser::LocalVariableDeclarationContext * /*ctx*/) override { }

  virtual void enterLocalTypeDeclaration(BlazeParser::LocalTypeDeclarationContext * /*ctx*/) override { }
  virtual void exitLocalTypeDeclaration(BlazeParser::LocalTypeDeclarationContext * /*ctx*/) override { }

  virtual void enterStatement(BlazeParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(BlazeParser::StatementContext * /*ctx*/) override { }

  virtual void enterCatchClause(BlazeParser::CatchClauseContext * /*ctx*/) override { }
  virtual void exitCatchClause(BlazeParser::CatchClauseContext * /*ctx*/) override { }

  virtual void enterCatchType(BlazeParser::CatchTypeContext * /*ctx*/) override { }
  virtual void exitCatchType(BlazeParser::CatchTypeContext * /*ctx*/) override { }

  virtual void enterFinallyBlock(BlazeParser::FinallyBlockContext * /*ctx*/) override { }
  virtual void exitFinallyBlock(BlazeParser::FinallyBlockContext * /*ctx*/) override { }

  virtual void enterResourceSpecification(BlazeParser::ResourceSpecificationContext * /*ctx*/) override { }
  virtual void exitResourceSpecification(BlazeParser::ResourceSpecificationContext * /*ctx*/) override { }

  virtual void enterResources(BlazeParser::ResourcesContext * /*ctx*/) override { }
  virtual void exitResources(BlazeParser::ResourcesContext * /*ctx*/) override { }

  virtual void enterResource(BlazeParser::ResourceContext * /*ctx*/) override { }
  virtual void exitResource(BlazeParser::ResourceContext * /*ctx*/) override { }

  virtual void enterSwitchBlockStatementGroup(BlazeParser::SwitchBlockStatementGroupContext * /*ctx*/) override { }
  virtual void exitSwitchBlockStatementGroup(BlazeParser::SwitchBlockStatementGroupContext * /*ctx*/) override { }

  virtual void enterSwitchLabel(BlazeParser::SwitchLabelContext * /*ctx*/) override { }
  virtual void exitSwitchLabel(BlazeParser::SwitchLabelContext * /*ctx*/) override { }

  virtual void enterForControl(BlazeParser::ForControlContext * /*ctx*/) override { }
  virtual void exitForControl(BlazeParser::ForControlContext * /*ctx*/) override { }

  virtual void enterForInit(BlazeParser::ForInitContext * /*ctx*/) override { }
  virtual void exitForInit(BlazeParser::ForInitContext * /*ctx*/) override { }

  virtual void enterEnhancedForControl(BlazeParser::EnhancedForControlContext * /*ctx*/) override { }
  virtual void exitEnhancedForControl(BlazeParser::EnhancedForControlContext * /*ctx*/) override { }

  virtual void enterParExpression(BlazeParser::ParExpressionContext * /*ctx*/) override { }
  virtual void exitParExpression(BlazeParser::ParExpressionContext * /*ctx*/) override { }

  virtual void enterExpressionList(BlazeParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(BlazeParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterMethodCall(BlazeParser::MethodCallContext * /*ctx*/) override { }
  virtual void exitMethodCall(BlazeParser::MethodCallContext * /*ctx*/) override { }

  virtual void enterExpression(BlazeParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(BlazeParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterPrimary(BlazeParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(BlazeParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterClassType(BlazeParser::ClassTypeContext * /*ctx*/) override { }
  virtual void exitClassType(BlazeParser::ClassTypeContext * /*ctx*/) override { }

  virtual void enterCreator(BlazeParser::CreatorContext * /*ctx*/) override { }
  virtual void exitCreator(BlazeParser::CreatorContext * /*ctx*/) override { }

  virtual void enterCreatedName(BlazeParser::CreatedNameContext * /*ctx*/) override { }
  virtual void exitCreatedName(BlazeParser::CreatedNameContext * /*ctx*/) override { }

  virtual void enterInnerCreator(BlazeParser::InnerCreatorContext * /*ctx*/) override { }
  virtual void exitInnerCreator(BlazeParser::InnerCreatorContext * /*ctx*/) override { }

  virtual void enterArrayCreatorRest(BlazeParser::ArrayCreatorRestContext * /*ctx*/) override { }
  virtual void exitArrayCreatorRest(BlazeParser::ArrayCreatorRestContext * /*ctx*/) override { }

  virtual void enterClassCreatorRest(BlazeParser::ClassCreatorRestContext * /*ctx*/) override { }
  virtual void exitClassCreatorRest(BlazeParser::ClassCreatorRestContext * /*ctx*/) override { }

  virtual void enterExplicitGenericInvocation(BlazeParser::ExplicitGenericInvocationContext * /*ctx*/) override { }
  virtual void exitExplicitGenericInvocation(BlazeParser::ExplicitGenericInvocationContext * /*ctx*/) override { }

  virtual void enterTypeList(BlazeParser::TypeListContext * /*ctx*/) override { }
  virtual void exitTypeList(BlazeParser::TypeListContext * /*ctx*/) override { }

  virtual void enterTypeType(BlazeParser::TypeTypeContext * /*ctx*/) override { }
  virtual void exitTypeType(BlazeParser::TypeTypeContext * /*ctx*/) override { }

  virtual void enterPrimitiveType(BlazeParser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(BlazeParser::PrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterSuperSuffix(BlazeParser::SuperSuffixContext * /*ctx*/) override { }
  virtual void exitSuperSuffix(BlazeParser::SuperSuffixContext * /*ctx*/) override { }

  virtual void enterExplicitGenericInvocationSuffix(BlazeParser::ExplicitGenericInvocationSuffixContext * /*ctx*/) override { }
  virtual void exitExplicitGenericInvocationSuffix(BlazeParser::ExplicitGenericInvocationSuffixContext * /*ctx*/) override { }

  virtual void enterArguments(BlazeParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(BlazeParser::ArgumentsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpptest
