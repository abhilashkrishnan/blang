
// Generated from BlazeParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "BlazeParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by BlazeParser.
 */
class  BlazeParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by BlazeParser.
   */
    virtual antlrcpp::Any visitCompilationUnit(BlazeParser::CompilationUnitContext *context) = 0;

    virtual antlrcpp::Any visitPackageDeclaration(BlazeParser::PackageDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitImportDeclaration(BlazeParser::ImportDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTypeDeclaration(BlazeParser::TypeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitModifier(BlazeParser::ModifierContext *context) = 0;

    virtual antlrcpp::Any visitClassOrInterfaceModifier(BlazeParser::ClassOrInterfaceModifierContext *context) = 0;

    virtual antlrcpp::Any visitVariableModifier(BlazeParser::VariableModifierContext *context) = 0;

    virtual antlrcpp::Any visitClassDeclaration(BlazeParser::ClassDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameters(BlazeParser::TypeParametersContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameter(BlazeParser::TypeParameterContext *context) = 0;

    virtual antlrcpp::Any visitTypeBound(BlazeParser::TypeBoundContext *context) = 0;

    virtual antlrcpp::Any visitEnumDeclaration(BlazeParser::EnumDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEnumConstants(BlazeParser::EnumConstantsContext *context) = 0;

    virtual antlrcpp::Any visitEnumConstant(BlazeParser::EnumConstantContext *context) = 0;

    virtual antlrcpp::Any visitEnumBodyDeclarations(BlazeParser::EnumBodyDeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceDeclaration(BlazeParser::InterfaceDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitClassBody(BlazeParser::ClassBodyContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceBody(BlazeParser::InterfaceBodyContext *context) = 0;

    virtual antlrcpp::Any visitClassBodyDeclaration(BlazeParser::ClassBodyDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMemberDeclaration(BlazeParser::MemberDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMethodDeclaration(BlazeParser::MethodDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMethodBody(BlazeParser::MethodBodyContext *context) = 0;

    virtual antlrcpp::Any visitTypeTypeOrVoid(BlazeParser::TypeTypeOrVoidContext *context) = 0;

    virtual antlrcpp::Any visitGenericMethodDeclaration(BlazeParser::GenericMethodDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitGenericConstructorDeclaration(BlazeParser::GenericConstructorDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConstructorDeclaration(BlazeParser::ConstructorDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFieldDeclaration(BlazeParser::FieldDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceBodyDeclaration(BlazeParser::InterfaceBodyDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceMemberDeclaration(BlazeParser::InterfaceMemberDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConstDeclaration(BlazeParser::ConstDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConstantDeclarator(BlazeParser::ConstantDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceMethodDeclaration(BlazeParser::InterfaceMethodDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceMethodModifier(BlazeParser::InterfaceMethodModifierContext *context) = 0;

    virtual antlrcpp::Any visitGenericInterfaceMethodDeclaration(BlazeParser::GenericInterfaceMethodDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclarators(BlazeParser::VariableDeclaratorsContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclarator(BlazeParser::VariableDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaratorId(BlazeParser::VariableDeclaratorIdContext *context) = 0;

    virtual antlrcpp::Any visitVariableInitializer(BlazeParser::VariableInitializerContext *context) = 0;

    virtual antlrcpp::Any visitArrayInitializer(BlazeParser::ArrayInitializerContext *context) = 0;

    virtual antlrcpp::Any visitClassOrInterfaceType(BlazeParser::ClassOrInterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeArgument(BlazeParser::TypeArgumentContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedNameList(BlazeParser::QualifiedNameListContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameters(BlazeParser::FormalParametersContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameterList(BlazeParser::FormalParameterListContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameter(BlazeParser::FormalParameterContext *context) = 0;

    virtual antlrcpp::Any visitLastFormalParameter(BlazeParser::LastFormalParameterContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedName(BlazeParser::QualifiedNameContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(BlazeParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(BlazeParser::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFloatLiteral(BlazeParser::FloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitAnnotation(BlazeParser::AnnotationContext *context) = 0;

    virtual antlrcpp::Any visitElementValuePairs(BlazeParser::ElementValuePairsContext *context) = 0;

    virtual antlrcpp::Any visitElementValuePair(BlazeParser::ElementValuePairContext *context) = 0;

    virtual antlrcpp::Any visitElementValue(BlazeParser::ElementValueContext *context) = 0;

    virtual antlrcpp::Any visitElementValueArrayInitializer(BlazeParser::ElementValueArrayInitializerContext *context) = 0;

    virtual antlrcpp::Any visitAnnotationTypeDeclaration(BlazeParser::AnnotationTypeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAnnotationTypeBody(BlazeParser::AnnotationTypeBodyContext *context) = 0;

    virtual antlrcpp::Any visitAnnotationTypeElementDeclaration(BlazeParser::AnnotationTypeElementDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAnnotationTypeElementRest(BlazeParser::AnnotationTypeElementRestContext *context) = 0;

    virtual antlrcpp::Any visitAnnotationMethodOrConstantRest(BlazeParser::AnnotationMethodOrConstantRestContext *context) = 0;

    virtual antlrcpp::Any visitAnnotationMethodRest(BlazeParser::AnnotationMethodRestContext *context) = 0;

    virtual antlrcpp::Any visitAnnotationConstantRest(BlazeParser::AnnotationConstantRestContext *context) = 0;

    virtual antlrcpp::Any visitDefaultValue(BlazeParser::DefaultValueContext *context) = 0;

    virtual antlrcpp::Any visitBlock(BlazeParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitBlockStatement(BlazeParser::BlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitLocalVariableDeclaration(BlazeParser::LocalVariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitLocalTypeDeclaration(BlazeParser::LocalTypeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStatement(BlazeParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitCatchClause(BlazeParser::CatchClauseContext *context) = 0;

    virtual antlrcpp::Any visitCatchType(BlazeParser::CatchTypeContext *context) = 0;

    virtual antlrcpp::Any visitFinallyBlock(BlazeParser::FinallyBlockContext *context) = 0;

    virtual antlrcpp::Any visitResourceSpecification(BlazeParser::ResourceSpecificationContext *context) = 0;

    virtual antlrcpp::Any visitResources(BlazeParser::ResourcesContext *context) = 0;

    virtual antlrcpp::Any visitResource(BlazeParser::ResourceContext *context) = 0;

    virtual antlrcpp::Any visitSwitchBlockStatementGroup(BlazeParser::SwitchBlockStatementGroupContext *context) = 0;

    virtual antlrcpp::Any visitSwitchLabel(BlazeParser::SwitchLabelContext *context) = 0;

    virtual antlrcpp::Any visitForControl(BlazeParser::ForControlContext *context) = 0;

    virtual antlrcpp::Any visitForInit(BlazeParser::ForInitContext *context) = 0;

    virtual antlrcpp::Any visitEnhancedForControl(BlazeParser::EnhancedForControlContext *context) = 0;

    virtual antlrcpp::Any visitParExpression(BlazeParser::ParExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpressionList(BlazeParser::ExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitMethodCall(BlazeParser::MethodCallContext *context) = 0;

    virtual antlrcpp::Any visitExpression(BlazeParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLambdaExpression(BlazeParser::LambdaExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLambdaParameters(BlazeParser::LambdaParametersContext *context) = 0;

    virtual antlrcpp::Any visitLambdaBody(BlazeParser::LambdaBodyContext *context) = 0;

    virtual antlrcpp::Any visitPrimary(BlazeParser::PrimaryContext *context) = 0;

    virtual antlrcpp::Any visitClassType(BlazeParser::ClassTypeContext *context) = 0;

    virtual antlrcpp::Any visitCreator(BlazeParser::CreatorContext *context) = 0;

    virtual antlrcpp::Any visitCreatedName(BlazeParser::CreatedNameContext *context) = 0;

    virtual antlrcpp::Any visitInnerCreator(BlazeParser::InnerCreatorContext *context) = 0;

    virtual antlrcpp::Any visitArrayCreatorRest(BlazeParser::ArrayCreatorRestContext *context) = 0;

    virtual antlrcpp::Any visitClassCreatorRest(BlazeParser::ClassCreatorRestContext *context) = 0;

    virtual antlrcpp::Any visitExplicitGenericInvocation(BlazeParser::ExplicitGenericInvocationContext *context) = 0;

    virtual antlrcpp::Any visitTypeArgumentsOrDiamond(BlazeParser::TypeArgumentsOrDiamondContext *context) = 0;

    virtual antlrcpp::Any visitNonWildcardTypeArgumentsOrDiamond(BlazeParser::NonWildcardTypeArgumentsOrDiamondContext *context) = 0;

    virtual antlrcpp::Any visitNonWildcardTypeArguments(BlazeParser::NonWildcardTypeArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitTypeList(BlazeParser::TypeListContext *context) = 0;

    virtual antlrcpp::Any visitTypeType(BlazeParser::TypeTypeContext *context) = 0;

    virtual antlrcpp::Any visitPrimitiveType(BlazeParser::PrimitiveTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeArguments(BlazeParser::TypeArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitSuperSuffix(BlazeParser::SuperSuffixContext *context) = 0;

    virtual antlrcpp::Any visitExplicitGenericInvocationSuffix(BlazeParser::ExplicitGenericInvocationSuffixContext *context) = 0;

    virtual antlrcpp::Any visitArguments(BlazeParser::ArgumentsContext *context) = 0;


};

}  // namespace antlrcpptest
