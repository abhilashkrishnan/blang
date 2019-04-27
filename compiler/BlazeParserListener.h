

#pragma once


#include "antlr4-runtime.h"
#include "BlazeParser.h"


namespace antlrcpptest {

/**
 * This interface defines an abstract listener for a parse tree produced by BlazeParser.
 */
class  BlazeParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilationUnit(BlazeParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(BlazeParser::CompilationUnitContext *ctx) = 0;

  virtual void enterPackageDeclaration(BlazeParser::PackageDeclarationContext *ctx) = 0;
  virtual void exitPackageDeclaration(BlazeParser::PackageDeclarationContext *ctx) = 0;

  virtual void enterImportDeclaration(BlazeParser::ImportDeclarationContext *ctx) = 0;
  virtual void exitImportDeclaration(BlazeParser::ImportDeclarationContext *ctx) = 0;

  virtual void enterTypeDeclaration(BlazeParser::TypeDeclarationContext *ctx) = 0;
  virtual void exitTypeDeclaration(BlazeParser::TypeDeclarationContext *ctx) = 0;

  virtual void enterModifier(BlazeParser::ModifierContext *ctx) = 0;
  virtual void exitModifier(BlazeParser::ModifierContext *ctx) = 0;

  virtual void enterClassOrInterfaceModifier(BlazeParser::ClassOrInterfaceModifierContext *ctx) = 0;
  virtual void exitClassOrInterfaceModifier(BlazeParser::ClassOrInterfaceModifierContext *ctx) = 0;

  virtual void enterVariableModifier(BlazeParser::VariableModifierContext *ctx) = 0;
  virtual void exitVariableModifier(BlazeParser::VariableModifierContext *ctx) = 0;

  virtual void enterClassDeclaration(BlazeParser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(BlazeParser::ClassDeclarationContext *ctx) = 0;

  virtual void enterEnumDeclaration(BlazeParser::EnumDeclarationContext *ctx) = 0;
  virtual void exitEnumDeclaration(BlazeParser::EnumDeclarationContext *ctx) = 0;

  virtual void enterEnumConstants(BlazeParser::EnumConstantsContext *ctx) = 0;
  virtual void exitEnumConstants(BlazeParser::EnumConstantsContext *ctx) = 0;

  virtual void enterEnumConstant(BlazeParser::EnumConstantContext *ctx) = 0;
  virtual void exitEnumConstant(BlazeParser::EnumConstantContext *ctx) = 0;

  virtual void enterEnumBodyDeclarations(BlazeParser::EnumBodyDeclarationsContext *ctx) = 0;
  virtual void exitEnumBodyDeclarations(BlazeParser::EnumBodyDeclarationsContext *ctx) = 0;

  virtual void enterInterfaceDeclaration(BlazeParser::InterfaceDeclarationContext *ctx) = 0;
  virtual void exitInterfaceDeclaration(BlazeParser::InterfaceDeclarationContext *ctx) = 0;

  virtual void enterClassBody(BlazeParser::ClassBodyContext *ctx) = 0;
  virtual void exitClassBody(BlazeParser::ClassBodyContext *ctx) = 0;

  virtual void enterInterfaceBody(BlazeParser::InterfaceBodyContext *ctx) = 0;
  virtual void exitInterfaceBody(BlazeParser::InterfaceBodyContext *ctx) = 0;

  virtual void enterClassBodyDeclaration(BlazeParser::ClassBodyDeclarationContext *ctx) = 0;
  virtual void exitClassBodyDeclaration(BlazeParser::ClassBodyDeclarationContext *ctx) = 0;

  virtual void enterMemberDeclaration(BlazeParser::MemberDeclarationContext *ctx) = 0;
  virtual void exitMemberDeclaration(BlazeParser::MemberDeclarationContext *ctx) = 0;

  virtual void enterMethodDeclaration(BlazeParser::MethodDeclarationContext *ctx) = 0;
  virtual void exitMethodDeclaration(BlazeParser::MethodDeclarationContext *ctx) = 0;

  virtual void enterMethodBody(BlazeParser::MethodBodyContext *ctx) = 0;
  virtual void exitMethodBody(BlazeParser::MethodBodyContext *ctx) = 0;

  virtual void enterTypeTypeOrVoid(BlazeParser::TypeTypeOrVoidContext *ctx) = 0;
  virtual void exitTypeTypeOrVoid(BlazeParser::TypeTypeOrVoidContext *ctx) = 0;

  virtual void enterConstructorDeclaration(BlazeParser::ConstructorDeclarationContext *ctx) = 0;
  virtual void exitConstructorDeclaration(BlazeParser::ConstructorDeclarationContext *ctx) = 0;

  virtual void enterFieldDeclaration(BlazeParser::FieldDeclarationContext *ctx) = 0;
  virtual void exitFieldDeclaration(BlazeParser::FieldDeclarationContext *ctx) = 0;

  virtual void enterInterfaceBodyDeclaration(BlazeParser::InterfaceBodyDeclarationContext *ctx) = 0;
  virtual void exitInterfaceBodyDeclaration(BlazeParser::InterfaceBodyDeclarationContext *ctx) = 0;

  virtual void enterInterfaceMemberDeclaration(BlazeParser::InterfaceMemberDeclarationContext *ctx) = 0;
  virtual void exitInterfaceMemberDeclaration(BlazeParser::InterfaceMemberDeclarationContext *ctx) = 0;

  virtual void enterConstDeclaration(BlazeParser::ConstDeclarationContext *ctx) = 0;
  virtual void exitConstDeclaration(BlazeParser::ConstDeclarationContext *ctx) = 0;

  virtual void enterConstantDeclarator(BlazeParser::ConstantDeclaratorContext *ctx) = 0;
  virtual void exitConstantDeclarator(BlazeParser::ConstantDeclaratorContext *ctx) = 0;

  virtual void enterInterfaceMethodDeclaration(BlazeParser::InterfaceMethodDeclarationContext *ctx) = 0;
  virtual void exitInterfaceMethodDeclaration(BlazeParser::InterfaceMethodDeclarationContext *ctx) = 0;

  virtual void enterInterfaceMethodModifier(BlazeParser::InterfaceMethodModifierContext *ctx) = 0;
  virtual void exitInterfaceMethodModifier(BlazeParser::InterfaceMethodModifierContext *ctx) = 0;

  virtual void enterVariableDeclarators(BlazeParser::VariableDeclaratorsContext *ctx) = 0;
  virtual void exitVariableDeclarators(BlazeParser::VariableDeclaratorsContext *ctx) = 0;

  virtual void enterVariableDeclarator(BlazeParser::VariableDeclaratorContext *ctx) = 0;
  virtual void exitVariableDeclarator(BlazeParser::VariableDeclaratorContext *ctx) = 0;

  virtual void enterVariableDeclaratorId(BlazeParser::VariableDeclaratorIdContext *ctx) = 0;
  virtual void exitVariableDeclaratorId(BlazeParser::VariableDeclaratorIdContext *ctx) = 0;

  virtual void enterVariableInitializer(BlazeParser::VariableInitializerContext *ctx) = 0;
  virtual void exitVariableInitializer(BlazeParser::VariableInitializerContext *ctx) = 0;

  virtual void enterArrayInitializer(BlazeParser::ArrayInitializerContext *ctx) = 0;
  virtual void exitArrayInitializer(BlazeParser::ArrayInitializerContext *ctx) = 0;

  virtual void enterClassOrInterfaceType(BlazeParser::ClassOrInterfaceTypeContext *ctx) = 0;
  virtual void exitClassOrInterfaceType(BlazeParser::ClassOrInterfaceTypeContext *ctx) = 0;

  virtual void enterTypeArgument(BlazeParser::TypeArgumentContext *ctx) = 0;
  virtual void exitTypeArgument(BlazeParser::TypeArgumentContext *ctx) = 0;

  virtual void enterQualifiedNameList(BlazeParser::QualifiedNameListContext *ctx) = 0;
  virtual void exitQualifiedNameList(BlazeParser::QualifiedNameListContext *ctx) = 0;

  virtual void enterFormalParameters(BlazeParser::FormalParametersContext *ctx) = 0;
  virtual void exitFormalParameters(BlazeParser::FormalParametersContext *ctx) = 0;

  virtual void enterFormalParameterList(BlazeParser::FormalParameterListContext *ctx) = 0;
  virtual void exitFormalParameterList(BlazeParser::FormalParameterListContext *ctx) = 0;

  virtual void enterFormalParameter(BlazeParser::FormalParameterContext *ctx) = 0;
  virtual void exitFormalParameter(BlazeParser::FormalParameterContext *ctx) = 0;

  virtual void enterLastFormalParameter(BlazeParser::LastFormalParameterContext *ctx) = 0;
  virtual void exitLastFormalParameter(BlazeParser::LastFormalParameterContext *ctx) = 0;

  virtual void enterQualifiedName(BlazeParser::QualifiedNameContext *ctx) = 0;
  virtual void exitQualifiedName(BlazeParser::QualifiedNameContext *ctx) = 0;

  virtual void enterLiteral(BlazeParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(BlazeParser::LiteralContext *ctx) = 0;

  virtual void enterIntegerLiteral(BlazeParser::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(BlazeParser::IntegerLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(BlazeParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(BlazeParser::FloatLiteralContext *ctx) = 0;

  virtual void enterBlock(BlazeParser::BlockContext *ctx) = 0;
  virtual void exitBlock(BlazeParser::BlockContext *ctx) = 0;

  virtual void enterBlockStatement(BlazeParser::BlockStatementContext *ctx) = 0;
  virtual void exitBlockStatement(BlazeParser::BlockStatementContext *ctx) = 0;

  virtual void enterLocalVariableDeclaration(BlazeParser::LocalVariableDeclarationContext *ctx) = 0;
  virtual void exitLocalVariableDeclaration(BlazeParser::LocalVariableDeclarationContext *ctx) = 0;

  virtual void enterLocalTypeDeclaration(BlazeParser::LocalTypeDeclarationContext *ctx) = 0;
  virtual void exitLocalTypeDeclaration(BlazeParser::LocalTypeDeclarationContext *ctx) = 0;

  virtual void enterStatement(BlazeParser::StatementContext *ctx) = 0;
  virtual void exitStatement(BlazeParser::StatementContext *ctx) = 0;

  virtual void enterCatchClause(BlazeParser::CatchClauseContext *ctx) = 0;
  virtual void exitCatchClause(BlazeParser::CatchClauseContext *ctx) = 0;

  virtual void enterCatchType(BlazeParser::CatchTypeContext *ctx) = 0;
  virtual void exitCatchType(BlazeParser::CatchTypeContext *ctx) = 0;

  virtual void enterFinallyBlock(BlazeParser::FinallyBlockContext *ctx) = 0;
  virtual void exitFinallyBlock(BlazeParser::FinallyBlockContext *ctx) = 0;

  virtual void enterResourceSpecification(BlazeParser::ResourceSpecificationContext *ctx) = 0;
  virtual void exitResourceSpecification(BlazeParser::ResourceSpecificationContext *ctx) = 0;

  virtual void enterResources(BlazeParser::ResourcesContext *ctx) = 0;
  virtual void exitResources(BlazeParser::ResourcesContext *ctx) = 0;

  virtual void enterResource(BlazeParser::ResourceContext *ctx) = 0;
  virtual void exitResource(BlazeParser::ResourceContext *ctx) = 0;

  virtual void enterSwitchBlockStatementGroup(BlazeParser::SwitchBlockStatementGroupContext *ctx) = 0;
  virtual void exitSwitchBlockStatementGroup(BlazeParser::SwitchBlockStatementGroupContext *ctx) = 0;

  virtual void enterSwitchLabel(BlazeParser::SwitchLabelContext *ctx) = 0;
  virtual void exitSwitchLabel(BlazeParser::SwitchLabelContext *ctx) = 0;

  virtual void enterForControl(BlazeParser::ForControlContext *ctx) = 0;
  virtual void exitForControl(BlazeParser::ForControlContext *ctx) = 0;

  virtual void enterForInit(BlazeParser::ForInitContext *ctx) = 0;
  virtual void exitForInit(BlazeParser::ForInitContext *ctx) = 0;

  virtual void enterEnhancedForControl(BlazeParser::EnhancedForControlContext *ctx) = 0;
  virtual void exitEnhancedForControl(BlazeParser::EnhancedForControlContext *ctx) = 0;

  virtual void enterParExpression(BlazeParser::ParExpressionContext *ctx) = 0;
  virtual void exitParExpression(BlazeParser::ParExpressionContext *ctx) = 0;

  virtual void enterExpressionList(BlazeParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(BlazeParser::ExpressionListContext *ctx) = 0;

  virtual void enterMethodCall(BlazeParser::MethodCallContext *ctx) = 0;
  virtual void exitMethodCall(BlazeParser::MethodCallContext *ctx) = 0;

  virtual void enterExpression(BlazeParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(BlazeParser::ExpressionContext *ctx) = 0;

  virtual void enterPrimary(BlazeParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(BlazeParser::PrimaryContext *ctx) = 0;

  virtual void enterClassType(BlazeParser::ClassTypeContext *ctx) = 0;
  virtual void exitClassType(BlazeParser::ClassTypeContext *ctx) = 0;

  virtual void enterCreator(BlazeParser::CreatorContext *ctx) = 0;
  virtual void exitCreator(BlazeParser::CreatorContext *ctx) = 0;

  virtual void enterCreatedName(BlazeParser::CreatedNameContext *ctx) = 0;
  virtual void exitCreatedName(BlazeParser::CreatedNameContext *ctx) = 0;

  virtual void enterInnerCreator(BlazeParser::InnerCreatorContext *ctx) = 0;
  virtual void exitInnerCreator(BlazeParser::InnerCreatorContext *ctx) = 0;

  virtual void enterArrayCreatorRest(BlazeParser::ArrayCreatorRestContext *ctx) = 0;
  virtual void exitArrayCreatorRest(BlazeParser::ArrayCreatorRestContext *ctx) = 0;

  virtual void enterClassCreatorRest(BlazeParser::ClassCreatorRestContext *ctx) = 0;
  virtual void exitClassCreatorRest(BlazeParser::ClassCreatorRestContext *ctx) = 0;

  virtual void enterExplicitGenericInvocation(BlazeParser::ExplicitGenericInvocationContext *ctx) = 0;
  virtual void exitExplicitGenericInvocation(BlazeParser::ExplicitGenericInvocationContext *ctx) = 0;

  virtual void enterTypeList(BlazeParser::TypeListContext *ctx) = 0;
  virtual void exitTypeList(BlazeParser::TypeListContext *ctx) = 0;

  virtual void enterTypeType(BlazeParser::TypeTypeContext *ctx) = 0;
  virtual void exitTypeType(BlazeParser::TypeTypeContext *ctx) = 0;

  virtual void enterPrimitiveType(BlazeParser::PrimitiveTypeContext *ctx) = 0;
  virtual void exitPrimitiveType(BlazeParser::PrimitiveTypeContext *ctx) = 0;

  virtual void enterSuperSuffix(BlazeParser::SuperSuffixContext *ctx) = 0;
  virtual void exitSuperSuffix(BlazeParser::SuperSuffixContext *ctx) = 0;

  virtual void enterExplicitGenericInvocationSuffix(BlazeParser::ExplicitGenericInvocationSuffixContext *ctx) = 0;
  virtual void exitExplicitGenericInvocationSuffix(BlazeParser::ExplicitGenericInvocationSuffixContext *ctx) = 0;

  virtual void enterArguments(BlazeParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(BlazeParser::ArgumentsContext *ctx) = 0;


};

}  // namespace antlrcpptest
