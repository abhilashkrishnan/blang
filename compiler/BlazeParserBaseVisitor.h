
#pragma once


#include "antlr4-runtime.h"
#include "BlazeParserVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of BlazeParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  BlazeParserBaseVisitor : public BlazeParserVisitor {
public:

  virtual antlrcpp::Any visitCompilationUnit(BlazeParser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackageDeclaration(BlazeParser::PackageDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportDeclaration(BlazeParser::ImportDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDeclaration(BlazeParser::TypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModifier(BlazeParser::ModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassOrInterfaceModifier(BlazeParser::ClassOrInterfaceModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableModifier(BlazeParser::VariableModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassDeclaration(BlazeParser::ClassDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumDeclaration(BlazeParser::EnumDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumConstants(BlazeParser::EnumConstantsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumConstant(BlazeParser::EnumConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumBodyDeclarations(BlazeParser::EnumBodyDeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceDeclaration(BlazeParser::InterfaceDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassBody(BlazeParser::ClassBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceBody(BlazeParser::InterfaceBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassBodyDeclaration(BlazeParser::ClassBodyDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberDeclaration(BlazeParser::MemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodDeclaration(BlazeParser::MethodDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodBody(BlazeParser::MethodBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeTypeOrVoid(BlazeParser::TypeTypeOrVoidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstructorDeclaration(BlazeParser::ConstructorDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldDeclaration(BlazeParser::FieldDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceBodyDeclaration(BlazeParser::InterfaceBodyDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceMemberDeclaration(BlazeParser::InterfaceMemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstDeclaration(BlazeParser::ConstDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantDeclarator(BlazeParser::ConstantDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceMethodDeclaration(BlazeParser::InterfaceMethodDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceMethodModifier(BlazeParser::InterfaceMethodModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclarators(BlazeParser::VariableDeclaratorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclarator(BlazeParser::VariableDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaratorId(BlazeParser::VariableDeclaratorIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableInitializer(BlazeParser::VariableInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayInitializer(BlazeParser::ArrayInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassOrInterfaceType(BlazeParser::ClassOrInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeArgument(BlazeParser::TypeArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedNameList(BlazeParser::QualifiedNameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormalParameters(BlazeParser::FormalParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormalParameterList(BlazeParser::FormalParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormalParameter(BlazeParser::FormalParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLastFormalParameter(BlazeParser::LastFormalParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedName(BlazeParser::QualifiedNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(BlazeParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(BlazeParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatLiteral(BlazeParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(BlazeParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockStatement(BlazeParser::BlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocalVariableDeclaration(BlazeParser::LocalVariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocalTypeDeclaration(BlazeParser::LocalTypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(BlazeParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCatchClause(BlazeParser::CatchClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCatchType(BlazeParser::CatchTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFinallyBlock(BlazeParser::FinallyBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResourceSpecification(BlazeParser::ResourceSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResources(BlazeParser::ResourcesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResource(BlazeParser::ResourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchBlockStatementGroup(BlazeParser::SwitchBlockStatementGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchLabel(BlazeParser::SwitchLabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForControl(BlazeParser::ForControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForInit(BlazeParser::ForInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnhancedForControl(BlazeParser::EnhancedForControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParExpression(BlazeParser::ParExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionList(BlazeParser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodCall(BlazeParser::MethodCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(BlazeParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimary(BlazeParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassType(BlazeParser::ClassTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreator(BlazeParser::CreatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreatedName(BlazeParser::CreatedNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInnerCreator(BlazeParser::InnerCreatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayCreatorRest(BlazeParser::ArrayCreatorRestContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassCreatorRest(BlazeParser::ClassCreatorRestContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplicitGenericInvocation(BlazeParser::ExplicitGenericInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeList(BlazeParser::TypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeType(BlazeParser::TypeTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimitiveType(BlazeParser::PrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSuperSuffix(BlazeParser::SuperSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplicitGenericInvocationSuffix(BlazeParser::ExplicitGenericInvocationSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArguments(BlazeParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest
