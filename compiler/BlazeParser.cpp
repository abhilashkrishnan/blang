
// Generated from BlazeParser.g4 by ANTLR 4.7.2


#include "BlazeParserListener.h"
#include "BlazeParserVisitor.h"

#include "BlazeParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

BlazeParser::BlazeParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

BlazeParser::~BlazeParser() {
  delete _interpreter;
}

std::string BlazeParser::getGrammarFileName() const {
  return "BlazeParser.g4";
}

const std::vector<std::string>& BlazeParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& BlazeParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompilationUnitContext ------------------------------------------------------------------

BlazeParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::CompilationUnitContext::EOF() {
  return getToken(BlazeParser::EOF, 0);
}

BlazeParser::PackageDeclarationContext* BlazeParser::CompilationUnitContext::packageDeclaration() {
  return getRuleContext<BlazeParser::PackageDeclarationContext>(0);
}

std::vector<BlazeParser::ImportDeclarationContext *> BlazeParser::CompilationUnitContext::importDeclaration() {
  return getRuleContexts<BlazeParser::ImportDeclarationContext>();
}

BlazeParser::ImportDeclarationContext* BlazeParser::CompilationUnitContext::importDeclaration(size_t i) {
  return getRuleContext<BlazeParser::ImportDeclarationContext>(i);
}

std::vector<BlazeParser::TypeDeclarationContext *> BlazeParser::CompilationUnitContext::typeDeclaration() {
  return getRuleContexts<BlazeParser::TypeDeclarationContext>();
}

BlazeParser::TypeDeclarationContext* BlazeParser::CompilationUnitContext::typeDeclaration(size_t i) {
  return getRuleContext<BlazeParser::TypeDeclarationContext>(i);
}


size_t BlazeParser::CompilationUnitContext::getRuleIndex() const {
  return BlazeParser::RuleCompilationUnit;
}

void BlazeParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void BlazeParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any BlazeParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::CompilationUnitContext* BlazeParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, BlazeParser::RuleCompilationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::PACKAGE) {
      setState(156);
      packageDeclaration();
    }
    setState(162);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::IMPORT) {
      setState(159);
      importDeclaration();
      setState(164);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::ABSTRACT)
      | (1ULL << BlazeParser::CLASS)
      | (1ULL << BlazeParser::ENUM)
      | (1ULL << BlazeParser::FINAL)
      | (1ULL << BlazeParser::INTERFACE)
      | (1ULL << BlazeParser::PRIVATE)
      | (1ULL << BlazeParser::PROTECTED)
      | (1ULL << BlazeParser::PUBLIC)
      | (1ULL << BlazeParser::STATIC))) != 0) || _la == BlazeParser::SEMI) {
      setState(165);
      typeDeclaration();
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(171);
    match(BlazeParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageDeclarationContext ------------------------------------------------------------------

BlazeParser::PackageDeclarationContext::PackageDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::PackageDeclarationContext::PACKAGE() {
  return getToken(BlazeParser::PACKAGE, 0);
}

BlazeParser::QualifiedNameContext* BlazeParser::PackageDeclarationContext::qualifiedName() {
  return getRuleContext<BlazeParser::QualifiedNameContext>(0);
}

tree::TerminalNode* BlazeParser::PackageDeclarationContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}


size_t BlazeParser::PackageDeclarationContext::getRuleIndex() const {
  return BlazeParser::RulePackageDeclaration;
}

void BlazeParser::PackageDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageDeclaration(this);
}

void BlazeParser::PackageDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageDeclaration(this);
}


antlrcpp::Any BlazeParser::PackageDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitPackageDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::PackageDeclarationContext* BlazeParser::packageDeclaration() {
  PackageDeclarationContext *_localctx = _tracker.createInstance<PackageDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, BlazeParser::RulePackageDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(BlazeParser::PACKAGE);
    setState(174);
    qualifiedName();
    setState(175);
    match(BlazeParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDeclarationContext ------------------------------------------------------------------

BlazeParser::ImportDeclarationContext::ImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ImportDeclarationContext::IMPORT() {
  return getToken(BlazeParser::IMPORT, 0);
}

BlazeParser::QualifiedNameContext* BlazeParser::ImportDeclarationContext::qualifiedName() {
  return getRuleContext<BlazeParser::QualifiedNameContext>(0);
}

tree::TerminalNode* BlazeParser::ImportDeclarationContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}

tree::TerminalNode* BlazeParser::ImportDeclarationContext::STATIC() {
  return getToken(BlazeParser::STATIC, 0);
}

tree::TerminalNode* BlazeParser::ImportDeclarationContext::DOT() {
  return getToken(BlazeParser::DOT, 0);
}

tree::TerminalNode* BlazeParser::ImportDeclarationContext::MUL() {
  return getToken(BlazeParser::MUL, 0);
}


size_t BlazeParser::ImportDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleImportDeclaration;
}

void BlazeParser::ImportDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportDeclaration(this);
}

void BlazeParser::ImportDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportDeclaration(this);
}


antlrcpp::Any BlazeParser::ImportDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitImportDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ImportDeclarationContext* BlazeParser::importDeclaration() {
  ImportDeclarationContext *_localctx = _tracker.createInstance<ImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, BlazeParser::RuleImportDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(BlazeParser::IMPORT);
    setState(179);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::STATIC) {
      setState(178);
      match(BlazeParser::STATIC);
    }
    setState(181);
    qualifiedName();
    setState(184);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::DOT) {
      setState(182);
      match(BlazeParser::DOT);
      setState(183);
      match(BlazeParser::MUL);
    }
    setState(186);
    match(BlazeParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclarationContext ------------------------------------------------------------------

BlazeParser::TypeDeclarationContext::TypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::ClassDeclarationContext* BlazeParser::TypeDeclarationContext::classDeclaration() {
  return getRuleContext<BlazeParser::ClassDeclarationContext>(0);
}

BlazeParser::EnumDeclarationContext* BlazeParser::TypeDeclarationContext::enumDeclaration() {
  return getRuleContext<BlazeParser::EnumDeclarationContext>(0);
}

BlazeParser::InterfaceDeclarationContext* BlazeParser::TypeDeclarationContext::interfaceDeclaration() {
  return getRuleContext<BlazeParser::InterfaceDeclarationContext>(0);
}

std::vector<BlazeParser::ClassOrInterfaceModifierContext *> BlazeParser::TypeDeclarationContext::classOrInterfaceModifier() {
  return getRuleContexts<BlazeParser::ClassOrInterfaceModifierContext>();
}

BlazeParser::ClassOrInterfaceModifierContext* BlazeParser::TypeDeclarationContext::classOrInterfaceModifier(size_t i) {
  return getRuleContext<BlazeParser::ClassOrInterfaceModifierContext>(i);
}

tree::TerminalNode* BlazeParser::TypeDeclarationContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}


size_t BlazeParser::TypeDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleTypeDeclaration;
}

void BlazeParser::TypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDeclaration(this);
}

void BlazeParser::TypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDeclaration(this);
}


antlrcpp::Any BlazeParser::TypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::TypeDeclarationContext* BlazeParser::typeDeclaration() {
  TypeDeclarationContext *_localctx = _tracker.createInstance<TypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, BlazeParser::RuleTypeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(200);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::ABSTRACT:
      case BlazeParser::CLASS:
      case BlazeParser::ENUM:
      case BlazeParser::FINAL:
      case BlazeParser::INTERFACE:
      case BlazeParser::PRIVATE:
      case BlazeParser::PROTECTED:
      case BlazeParser::PUBLIC:
      case BlazeParser::STATIC: {
        enterOuterAlt(_localctx, 1);
        setState(191);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << BlazeParser::ABSTRACT)
          | (1ULL << BlazeParser::FINAL)
          | (1ULL << BlazeParser::PRIVATE)
          | (1ULL << BlazeParser::PROTECTED)
          | (1ULL << BlazeParser::PUBLIC)
          | (1ULL << BlazeParser::STATIC))) != 0)) {
          setState(188);
          classOrInterfaceModifier();
          setState(193);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(197);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case BlazeParser::CLASS: {
            setState(194);
            classDeclaration();
            break;
          }

          case BlazeParser::ENUM: {
            setState(195);
            enumDeclaration();
            break;
          }

          case BlazeParser::INTERFACE: {
            setState(196);
            interfaceDeclaration();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case BlazeParser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(199);
        match(BlazeParser::SEMI);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifierContext ------------------------------------------------------------------

BlazeParser::ModifierContext::ModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::ClassOrInterfaceModifierContext* BlazeParser::ModifierContext::classOrInterfaceModifier() {
  return getRuleContext<BlazeParser::ClassOrInterfaceModifierContext>(0);
}

tree::TerminalNode* BlazeParser::ModifierContext::NATIVE() {
  return getToken(BlazeParser::NATIVE, 0);
}

tree::TerminalNode* BlazeParser::ModifierContext::SYNCHRONIZED() {
  return getToken(BlazeParser::SYNCHRONIZED, 0);
}

tree::TerminalNode* BlazeParser::ModifierContext::TRANSIENT() {
  return getToken(BlazeParser::TRANSIENT, 0);
}

tree::TerminalNode* BlazeParser::ModifierContext::VOLATILE() {
  return getToken(BlazeParser::VOLATILE, 0);
}


size_t BlazeParser::ModifierContext::getRuleIndex() const {
  return BlazeParser::RuleModifier;
}

void BlazeParser::ModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModifier(this);
}

void BlazeParser::ModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModifier(this);
}


antlrcpp::Any BlazeParser::ModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitModifier(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ModifierContext* BlazeParser::modifier() {
  ModifierContext *_localctx = _tracker.createInstance<ModifierContext>(_ctx, getState());
  enterRule(_localctx, 8, BlazeParser::RuleModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(207);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::ABSTRACT:
      case BlazeParser::FINAL:
      case BlazeParser::PRIVATE:
      case BlazeParser::PROTECTED:
      case BlazeParser::PUBLIC:
      case BlazeParser::STATIC: {
        enterOuterAlt(_localctx, 1);
        setState(202);
        classOrInterfaceModifier();
        break;
      }

      case BlazeParser::NATIVE: {
        enterOuterAlt(_localctx, 2);
        setState(203);
        match(BlazeParser::NATIVE);
        break;
      }

      case BlazeParser::SYNCHRONIZED: {
        enterOuterAlt(_localctx, 3);
        setState(204);
        match(BlazeParser::SYNCHRONIZED);
        break;
      }

      case BlazeParser::TRANSIENT: {
        enterOuterAlt(_localctx, 4);
        setState(205);
        match(BlazeParser::TRANSIENT);
        break;
      }

      case BlazeParser::VOLATILE: {
        enterOuterAlt(_localctx, 5);
        setState(206);
        match(BlazeParser::VOLATILE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOrInterfaceModifierContext ------------------------------------------------------------------

BlazeParser::ClassOrInterfaceModifierContext::ClassOrInterfaceModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ClassOrInterfaceModifierContext::PUBLIC() {
  return getToken(BlazeParser::PUBLIC, 0);
}

tree::TerminalNode* BlazeParser::ClassOrInterfaceModifierContext::PROTECTED() {
  return getToken(BlazeParser::PROTECTED, 0);
}

tree::TerminalNode* BlazeParser::ClassOrInterfaceModifierContext::PRIVATE() {
  return getToken(BlazeParser::PRIVATE, 0);
}

tree::TerminalNode* BlazeParser::ClassOrInterfaceModifierContext::STATIC() {
  return getToken(BlazeParser::STATIC, 0);
}

tree::TerminalNode* BlazeParser::ClassOrInterfaceModifierContext::ABSTRACT() {
  return getToken(BlazeParser::ABSTRACT, 0);
}

tree::TerminalNode* BlazeParser::ClassOrInterfaceModifierContext::FINAL() {
  return getToken(BlazeParser::FINAL, 0);
}


size_t BlazeParser::ClassOrInterfaceModifierContext::getRuleIndex() const {
  return BlazeParser::RuleClassOrInterfaceModifier;
}

void BlazeParser::ClassOrInterfaceModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassOrInterfaceModifier(this);
}

void BlazeParser::ClassOrInterfaceModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassOrInterfaceModifier(this);
}


antlrcpp::Any BlazeParser::ClassOrInterfaceModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitClassOrInterfaceModifier(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ClassOrInterfaceModifierContext* BlazeParser::classOrInterfaceModifier() {
  ClassOrInterfaceModifierContext *_localctx = _tracker.createInstance<ClassOrInterfaceModifierContext>(_ctx, getState());
  enterRule(_localctx, 10, BlazeParser::RuleClassOrInterfaceModifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::ABSTRACT)
      | (1ULL << BlazeParser::FINAL)
      | (1ULL << BlazeParser::PRIVATE)
      | (1ULL << BlazeParser::PROTECTED)
      | (1ULL << BlazeParser::PUBLIC)
      | (1ULL << BlazeParser::STATIC))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableModifierContext ------------------------------------------------------------------

BlazeParser::VariableModifierContext::VariableModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::VariableModifierContext::FINAL() {
  return getToken(BlazeParser::FINAL, 0);
}


size_t BlazeParser::VariableModifierContext::getRuleIndex() const {
  return BlazeParser::RuleVariableModifier;
}

void BlazeParser::VariableModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableModifier(this);
}

void BlazeParser::VariableModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableModifier(this);
}


antlrcpp::Any BlazeParser::VariableModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitVariableModifier(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::VariableModifierContext* BlazeParser::variableModifier() {
  VariableModifierContext *_localctx = _tracker.createInstance<VariableModifierContext>(_ctx, getState());
  enterRule(_localctx, 12, BlazeParser::RuleVariableModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(BlazeParser::FINAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

BlazeParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ClassDeclarationContext::CLASS() {
  return getToken(BlazeParser::CLASS, 0);
}

tree::TerminalNode* BlazeParser::ClassDeclarationContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

BlazeParser::ClassBodyContext* BlazeParser::ClassDeclarationContext::classBody() {
  return getRuleContext<BlazeParser::ClassBodyContext>(0);
}

tree::TerminalNode* BlazeParser::ClassDeclarationContext::EXTENDS() {
  return getToken(BlazeParser::EXTENDS, 0);
}

BlazeParser::TypeTypeContext* BlazeParser::ClassDeclarationContext::typeType() {
  return getRuleContext<BlazeParser::TypeTypeContext>(0);
}

tree::TerminalNode* BlazeParser::ClassDeclarationContext::IMPLEMENTS() {
  return getToken(BlazeParser::IMPLEMENTS, 0);
}

BlazeParser::TypeListContext* BlazeParser::ClassDeclarationContext::typeList() {
  return getRuleContext<BlazeParser::TypeListContext>(0);
}


size_t BlazeParser::ClassDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleClassDeclaration;
}

void BlazeParser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclaration(this);
}

void BlazeParser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclaration(this);
}


antlrcpp::Any BlazeParser::ClassDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitClassDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ClassDeclarationContext* BlazeParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, BlazeParser::RuleClassDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(BlazeParser::CLASS);
    setState(214);
    match(BlazeParser::IDENTIFIER);
    setState(217);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::EXTENDS) {
      setState(215);
      match(BlazeParser::EXTENDS);
      setState(216);
      typeType();
    }
    setState(221);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::IMPLEMENTS) {
      setState(219);
      match(BlazeParser::IMPLEMENTS);
      setState(220);
      typeList();
    }
    setState(223);
    classBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDeclarationContext ------------------------------------------------------------------

BlazeParser::EnumDeclarationContext::EnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::EnumDeclarationContext::ENUM() {
  return getToken(BlazeParser::ENUM, 0);
}

tree::TerminalNode* BlazeParser::EnumDeclarationContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

tree::TerminalNode* BlazeParser::EnumDeclarationContext::LBRACE() {
  return getToken(BlazeParser::LBRACE, 0);
}

tree::TerminalNode* BlazeParser::EnumDeclarationContext::RBRACE() {
  return getToken(BlazeParser::RBRACE, 0);
}

tree::TerminalNode* BlazeParser::EnumDeclarationContext::IMPLEMENTS() {
  return getToken(BlazeParser::IMPLEMENTS, 0);
}

BlazeParser::TypeListContext* BlazeParser::EnumDeclarationContext::typeList() {
  return getRuleContext<BlazeParser::TypeListContext>(0);
}

BlazeParser::EnumConstantsContext* BlazeParser::EnumDeclarationContext::enumConstants() {
  return getRuleContext<BlazeParser::EnumConstantsContext>(0);
}

tree::TerminalNode* BlazeParser::EnumDeclarationContext::COMMA() {
  return getToken(BlazeParser::COMMA, 0);
}

BlazeParser::EnumBodyDeclarationsContext* BlazeParser::EnumDeclarationContext::enumBodyDeclarations() {
  return getRuleContext<BlazeParser::EnumBodyDeclarationsContext>(0);
}


size_t BlazeParser::EnumDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleEnumDeclaration;
}

void BlazeParser::EnumDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDeclaration(this);
}

void BlazeParser::EnumDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDeclaration(this);
}


antlrcpp::Any BlazeParser::EnumDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitEnumDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::EnumDeclarationContext* BlazeParser::enumDeclaration() {
  EnumDeclarationContext *_localctx = _tracker.createInstance<EnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, BlazeParser::RuleEnumDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(BlazeParser::ENUM);
    setState(226);
    match(BlazeParser::IDENTIFIER);
    setState(229);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::IMPLEMENTS) {
      setState(227);
      match(BlazeParser::IMPLEMENTS);
      setState(228);
      typeList();
    }
    setState(231);
    match(BlazeParser::LBRACE);
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::IDENTIFIER) {
      setState(232);
      enumConstants();
    }
    setState(236);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::COMMA) {
      setState(235);
      match(BlazeParser::COMMA);
    }
    setState(239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::SEMI) {
      setState(238);
      enumBodyDeclarations();
    }
    setState(241);
    match(BlazeParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumConstantsContext ------------------------------------------------------------------

BlazeParser::EnumConstantsContext::EnumConstantsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BlazeParser::EnumConstantContext *> BlazeParser::EnumConstantsContext::enumConstant() {
  return getRuleContexts<BlazeParser::EnumConstantContext>();
}

BlazeParser::EnumConstantContext* BlazeParser::EnumConstantsContext::enumConstant(size_t i) {
  return getRuleContext<BlazeParser::EnumConstantContext>(i);
}

std::vector<tree::TerminalNode *> BlazeParser::EnumConstantsContext::COMMA() {
  return getTokens(BlazeParser::COMMA);
}

tree::TerminalNode* BlazeParser::EnumConstantsContext::COMMA(size_t i) {
  return getToken(BlazeParser::COMMA, i);
}


size_t BlazeParser::EnumConstantsContext::getRuleIndex() const {
  return BlazeParser::RuleEnumConstants;
}

void BlazeParser::EnumConstantsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumConstants(this);
}

void BlazeParser::EnumConstantsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumConstants(this);
}


antlrcpp::Any BlazeParser::EnumConstantsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitEnumConstants(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::EnumConstantsContext* BlazeParser::enumConstants() {
  EnumConstantsContext *_localctx = _tracker.createInstance<EnumConstantsContext>(_ctx, getState());
  enterRule(_localctx, 18, BlazeParser::RuleEnumConstants);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(243);
    enumConstant();
    setState(248);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(244);
        match(BlazeParser::COMMA);
        setState(245);
        enumConstant(); 
      }
      setState(250);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumConstantContext ------------------------------------------------------------------

BlazeParser::EnumConstantContext::EnumConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::EnumConstantContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

BlazeParser::ArgumentsContext* BlazeParser::EnumConstantContext::arguments() {
  return getRuleContext<BlazeParser::ArgumentsContext>(0);
}

BlazeParser::ClassBodyContext* BlazeParser::EnumConstantContext::classBody() {
  return getRuleContext<BlazeParser::ClassBodyContext>(0);
}


size_t BlazeParser::EnumConstantContext::getRuleIndex() const {
  return BlazeParser::RuleEnumConstant;
}

void BlazeParser::EnumConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumConstant(this);
}

void BlazeParser::EnumConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumConstant(this);
}


antlrcpp::Any BlazeParser::EnumConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitEnumConstant(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::EnumConstantContext* BlazeParser::enumConstant() {
  EnumConstantContext *_localctx = _tracker.createInstance<EnumConstantContext>(_ctx, getState());
  enterRule(_localctx, 20, BlazeParser::RuleEnumConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    match(BlazeParser::IDENTIFIER);
    setState(253);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::LPAREN) {
      setState(252);
      arguments();
    }
    setState(256);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::LBRACE) {
      setState(255);
      classBody();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyDeclarationsContext ------------------------------------------------------------------

BlazeParser::EnumBodyDeclarationsContext::EnumBodyDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::EnumBodyDeclarationsContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}

std::vector<BlazeParser::ClassBodyDeclarationContext *> BlazeParser::EnumBodyDeclarationsContext::classBodyDeclaration() {
  return getRuleContexts<BlazeParser::ClassBodyDeclarationContext>();
}

BlazeParser::ClassBodyDeclarationContext* BlazeParser::EnumBodyDeclarationsContext::classBodyDeclaration(size_t i) {
  return getRuleContext<BlazeParser::ClassBodyDeclarationContext>(i);
}


size_t BlazeParser::EnumBodyDeclarationsContext::getRuleIndex() const {
  return BlazeParser::RuleEnumBodyDeclarations;
}

void BlazeParser::EnumBodyDeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumBodyDeclarations(this);
}

void BlazeParser::EnumBodyDeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumBodyDeclarations(this);
}


antlrcpp::Any BlazeParser::EnumBodyDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitEnumBodyDeclarations(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::EnumBodyDeclarationsContext* BlazeParser::enumBodyDeclarations() {
  EnumBodyDeclarationsContext *_localctx = _tracker.createInstance<EnumBodyDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 22, BlazeParser::RuleEnumBodyDeclarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    match(BlazeParser::SEMI);
    setState(262);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::ABSTRACT)
      | (1ULL << BlazeParser::BOOLEAN)
      | (1ULL << BlazeParser::BYTE)
      | (1ULL << BlazeParser::CHAR)
      | (1ULL << BlazeParser::CLASS)
      | (1ULL << BlazeParser::DOUBLE)
      | (1ULL << BlazeParser::ENUM)
      | (1ULL << BlazeParser::FINAL)
      | (1ULL << BlazeParser::FLOAT)
      | (1ULL << BlazeParser::INT)
      | (1ULL << BlazeParser::INTERFACE)
      | (1ULL << BlazeParser::LONG)
      | (1ULL << BlazeParser::NATIVE)
      | (1ULL << BlazeParser::PRIVATE)
      | (1ULL << BlazeParser::PROTECTED)
      | (1ULL << BlazeParser::PUBLIC)
      | (1ULL << BlazeParser::SHORT)
      | (1ULL << BlazeParser::STATIC)
      | (1ULL << BlazeParser::SYNCHRONIZED)
      | (1ULL << BlazeParser::TRANSIENT)
      | (1ULL << BlazeParser::VOID)
      | (1ULL << BlazeParser::VOLATILE)
      | (1ULL << BlazeParser::LBRACE))) != 0) || _la == BlazeParser::SEMI

    || _la == BlazeParser::IDENTIFIER) {
      setState(259);
      classBodyDeclaration();
      setState(264);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDeclarationContext ------------------------------------------------------------------

BlazeParser::InterfaceDeclarationContext::InterfaceDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::InterfaceDeclarationContext::INTERFACE() {
  return getToken(BlazeParser::INTERFACE, 0);
}

tree::TerminalNode* BlazeParser::InterfaceDeclarationContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

BlazeParser::InterfaceBodyContext* BlazeParser::InterfaceDeclarationContext::interfaceBody() {
  return getRuleContext<BlazeParser::InterfaceBodyContext>(0);
}

tree::TerminalNode* BlazeParser::InterfaceDeclarationContext::EXTENDS() {
  return getToken(BlazeParser::EXTENDS, 0);
}

BlazeParser::TypeListContext* BlazeParser::InterfaceDeclarationContext::typeList() {
  return getRuleContext<BlazeParser::TypeListContext>(0);
}


size_t BlazeParser::InterfaceDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleInterfaceDeclaration;
}

void BlazeParser::InterfaceDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceDeclaration(this);
}

void BlazeParser::InterfaceDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceDeclaration(this);
}


antlrcpp::Any BlazeParser::InterfaceDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::InterfaceDeclarationContext* BlazeParser::interfaceDeclaration() {
  InterfaceDeclarationContext *_localctx = _tracker.createInstance<InterfaceDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 24, BlazeParser::RuleInterfaceDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    match(BlazeParser::INTERFACE);
    setState(266);
    match(BlazeParser::IDENTIFIER);
    setState(269);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::EXTENDS) {
      setState(267);
      match(BlazeParser::EXTENDS);
      setState(268);
      typeList();
    }
    setState(271);
    interfaceBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

BlazeParser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ClassBodyContext::LBRACE() {
  return getToken(BlazeParser::LBRACE, 0);
}

tree::TerminalNode* BlazeParser::ClassBodyContext::RBRACE() {
  return getToken(BlazeParser::RBRACE, 0);
}

std::vector<BlazeParser::ClassBodyDeclarationContext *> BlazeParser::ClassBodyContext::classBodyDeclaration() {
  return getRuleContexts<BlazeParser::ClassBodyDeclarationContext>();
}

BlazeParser::ClassBodyDeclarationContext* BlazeParser::ClassBodyContext::classBodyDeclaration(size_t i) {
  return getRuleContext<BlazeParser::ClassBodyDeclarationContext>(i);
}


size_t BlazeParser::ClassBodyContext::getRuleIndex() const {
  return BlazeParser::RuleClassBody;
}

void BlazeParser::ClassBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBody(this);
}

void BlazeParser::ClassBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBody(this);
}


antlrcpp::Any BlazeParser::ClassBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitClassBody(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ClassBodyContext* BlazeParser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 26, BlazeParser::RuleClassBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    match(BlazeParser::LBRACE);
    setState(277);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::ABSTRACT)
      | (1ULL << BlazeParser::BOOLEAN)
      | (1ULL << BlazeParser::BYTE)
      | (1ULL << BlazeParser::CHAR)
      | (1ULL << BlazeParser::CLASS)
      | (1ULL << BlazeParser::DOUBLE)
      | (1ULL << BlazeParser::ENUM)
      | (1ULL << BlazeParser::FINAL)
      | (1ULL << BlazeParser::FLOAT)
      | (1ULL << BlazeParser::INT)
      | (1ULL << BlazeParser::INTERFACE)
      | (1ULL << BlazeParser::LONG)
      | (1ULL << BlazeParser::NATIVE)
      | (1ULL << BlazeParser::PRIVATE)
      | (1ULL << BlazeParser::PROTECTED)
      | (1ULL << BlazeParser::PUBLIC)
      | (1ULL << BlazeParser::SHORT)
      | (1ULL << BlazeParser::STATIC)
      | (1ULL << BlazeParser::SYNCHRONIZED)
      | (1ULL << BlazeParser::TRANSIENT)
      | (1ULL << BlazeParser::VOID)
      | (1ULL << BlazeParser::VOLATILE)
      | (1ULL << BlazeParser::LBRACE))) != 0) || _la == BlazeParser::SEMI

    || _la == BlazeParser::IDENTIFIER) {
      setState(274);
      classBodyDeclaration();
      setState(279);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(280);
    match(BlazeParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceBodyContext ------------------------------------------------------------------

BlazeParser::InterfaceBodyContext::InterfaceBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::InterfaceBodyContext::LBRACE() {
  return getToken(BlazeParser::LBRACE, 0);
}

tree::TerminalNode* BlazeParser::InterfaceBodyContext::RBRACE() {
  return getToken(BlazeParser::RBRACE, 0);
}

std::vector<BlazeParser::InterfaceBodyDeclarationContext *> BlazeParser::InterfaceBodyContext::interfaceBodyDeclaration() {
  return getRuleContexts<BlazeParser::InterfaceBodyDeclarationContext>();
}

BlazeParser::InterfaceBodyDeclarationContext* BlazeParser::InterfaceBodyContext::interfaceBodyDeclaration(size_t i) {
  return getRuleContext<BlazeParser::InterfaceBodyDeclarationContext>(i);
}


size_t BlazeParser::InterfaceBodyContext::getRuleIndex() const {
  return BlazeParser::RuleInterfaceBody;
}

void BlazeParser::InterfaceBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceBody(this);
}

void BlazeParser::InterfaceBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceBody(this);
}


antlrcpp::Any BlazeParser::InterfaceBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceBody(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::InterfaceBodyContext* BlazeParser::interfaceBody() {
  InterfaceBodyContext *_localctx = _tracker.createInstance<InterfaceBodyContext>(_ctx, getState());
  enterRule(_localctx, 28, BlazeParser::RuleInterfaceBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    match(BlazeParser::LBRACE);
    setState(286);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::ABSTRACT)
      | (1ULL << BlazeParser::BOOLEAN)
      | (1ULL << BlazeParser::BYTE)
      | (1ULL << BlazeParser::CHAR)
      | (1ULL << BlazeParser::CLASS)
      | (1ULL << BlazeParser::DEFAULT)
      | (1ULL << BlazeParser::DOUBLE)
      | (1ULL << BlazeParser::ENUM)
      | (1ULL << BlazeParser::FINAL)
      | (1ULL << BlazeParser::FLOAT)
      | (1ULL << BlazeParser::INT)
      | (1ULL << BlazeParser::INTERFACE)
      | (1ULL << BlazeParser::LONG)
      | (1ULL << BlazeParser::NATIVE)
      | (1ULL << BlazeParser::PRIVATE)
      | (1ULL << BlazeParser::PROTECTED)
      | (1ULL << BlazeParser::PUBLIC)
      | (1ULL << BlazeParser::SHORT)
      | (1ULL << BlazeParser::STATIC)
      | (1ULL << BlazeParser::SYNCHRONIZED)
      | (1ULL << BlazeParser::TRANSIENT)
      | (1ULL << BlazeParser::VOID)
      | (1ULL << BlazeParser::VOLATILE))) != 0) || _la == BlazeParser::SEMI

    || _la == BlazeParser::IDENTIFIER) {
      setState(283);
      interfaceBodyDeclaration();
      setState(288);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(289);
    match(BlazeParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyDeclarationContext ------------------------------------------------------------------

BlazeParser::ClassBodyDeclarationContext::ClassBodyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ClassBodyDeclarationContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}

BlazeParser::BlockContext* BlazeParser::ClassBodyDeclarationContext::block() {
  return getRuleContext<BlazeParser::BlockContext>(0);
}

tree::TerminalNode* BlazeParser::ClassBodyDeclarationContext::STATIC() {
  return getToken(BlazeParser::STATIC, 0);
}

BlazeParser::MemberDeclarationContext* BlazeParser::ClassBodyDeclarationContext::memberDeclaration() {
  return getRuleContext<BlazeParser::MemberDeclarationContext>(0);
}

std::vector<BlazeParser::ModifierContext *> BlazeParser::ClassBodyDeclarationContext::modifier() {
  return getRuleContexts<BlazeParser::ModifierContext>();
}

BlazeParser::ModifierContext* BlazeParser::ClassBodyDeclarationContext::modifier(size_t i) {
  return getRuleContext<BlazeParser::ModifierContext>(i);
}


size_t BlazeParser::ClassBodyDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleClassBodyDeclaration;
}

void BlazeParser::ClassBodyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBodyDeclaration(this);
}

void BlazeParser::ClassBodyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBodyDeclaration(this);
}


antlrcpp::Any BlazeParser::ClassBodyDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitClassBodyDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ClassBodyDeclarationContext* BlazeParser::classBodyDeclaration() {
  ClassBodyDeclarationContext *_localctx = _tracker.createInstance<ClassBodyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 30, BlazeParser::RuleClassBodyDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(303);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(291);
      match(BlazeParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(293);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::STATIC) {
        setState(292);
        match(BlazeParser::STATIC);
      }
      setState(295);
      block();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(299);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << BlazeParser::ABSTRACT)
        | (1ULL << BlazeParser::FINAL)
        | (1ULL << BlazeParser::NATIVE)
        | (1ULL << BlazeParser::PRIVATE)
        | (1ULL << BlazeParser::PROTECTED)
        | (1ULL << BlazeParser::PUBLIC)
        | (1ULL << BlazeParser::STATIC)
        | (1ULL << BlazeParser::SYNCHRONIZED)
        | (1ULL << BlazeParser::TRANSIENT)
        | (1ULL << BlazeParser::VOLATILE))) != 0)) {
        setState(296);
        modifier();
        setState(301);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(302);
      memberDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberDeclarationContext ------------------------------------------------------------------

BlazeParser::MemberDeclarationContext::MemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::MethodDeclarationContext* BlazeParser::MemberDeclarationContext::methodDeclaration() {
  return getRuleContext<BlazeParser::MethodDeclarationContext>(0);
}

BlazeParser::FieldDeclarationContext* BlazeParser::MemberDeclarationContext::fieldDeclaration() {
  return getRuleContext<BlazeParser::FieldDeclarationContext>(0);
}

BlazeParser::ConstructorDeclarationContext* BlazeParser::MemberDeclarationContext::constructorDeclaration() {
  return getRuleContext<BlazeParser::ConstructorDeclarationContext>(0);
}

BlazeParser::InterfaceDeclarationContext* BlazeParser::MemberDeclarationContext::interfaceDeclaration() {
  return getRuleContext<BlazeParser::InterfaceDeclarationContext>(0);
}

BlazeParser::ClassDeclarationContext* BlazeParser::MemberDeclarationContext::classDeclaration() {
  return getRuleContext<BlazeParser::ClassDeclarationContext>(0);
}

BlazeParser::EnumDeclarationContext* BlazeParser::MemberDeclarationContext::enumDeclaration() {
  return getRuleContext<BlazeParser::EnumDeclarationContext>(0);
}


size_t BlazeParser::MemberDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleMemberDeclaration;
}

void BlazeParser::MemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberDeclaration(this);
}

void BlazeParser::MemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberDeclaration(this);
}


antlrcpp::Any BlazeParser::MemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::MemberDeclarationContext* BlazeParser::memberDeclaration() {
  MemberDeclarationContext *_localctx = _tracker.createInstance<MemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 32, BlazeParser::RuleMemberDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(311);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(305);
      methodDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(306);
      fieldDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(307);
      constructorDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(308);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(309);
      classDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(310);
      enumDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclarationContext ------------------------------------------------------------------

BlazeParser::MethodDeclarationContext::MethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::TypeTypeOrVoidContext* BlazeParser::MethodDeclarationContext::typeTypeOrVoid() {
  return getRuleContext<BlazeParser::TypeTypeOrVoidContext>(0);
}

tree::TerminalNode* BlazeParser::MethodDeclarationContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

BlazeParser::FormalParametersContext* BlazeParser::MethodDeclarationContext::formalParameters() {
  return getRuleContext<BlazeParser::FormalParametersContext>(0);
}

BlazeParser::MethodBodyContext* BlazeParser::MethodDeclarationContext::methodBody() {
  return getRuleContext<BlazeParser::MethodBodyContext>(0);
}

std::vector<tree::TerminalNode *> BlazeParser::MethodDeclarationContext::LBRACK() {
  return getTokens(BlazeParser::LBRACK);
}

tree::TerminalNode* BlazeParser::MethodDeclarationContext::LBRACK(size_t i) {
  return getToken(BlazeParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> BlazeParser::MethodDeclarationContext::RBRACK() {
  return getTokens(BlazeParser::RBRACK);
}

tree::TerminalNode* BlazeParser::MethodDeclarationContext::RBRACK(size_t i) {
  return getToken(BlazeParser::RBRACK, i);
}

tree::TerminalNode* BlazeParser::MethodDeclarationContext::THROWS() {
  return getToken(BlazeParser::THROWS, 0);
}

BlazeParser::QualifiedNameListContext* BlazeParser::MethodDeclarationContext::qualifiedNameList() {
  return getRuleContext<BlazeParser::QualifiedNameListContext>(0);
}


size_t BlazeParser::MethodDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleMethodDeclaration;
}

void BlazeParser::MethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDeclaration(this);
}

void BlazeParser::MethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDeclaration(this);
}


antlrcpp::Any BlazeParser::MethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitMethodDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::MethodDeclarationContext* BlazeParser::methodDeclaration() {
  MethodDeclarationContext *_localctx = _tracker.createInstance<MethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 34, BlazeParser::RuleMethodDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    typeTypeOrVoid();
    setState(314);
    match(BlazeParser::IDENTIFIER);
    setState(315);
    formalParameters();
    setState(320);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::LBRACK) {
      setState(316);
      match(BlazeParser::LBRACK);
      setState(317);
      match(BlazeParser::RBRACK);
      setState(322);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(325);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::THROWS) {
      setState(323);
      match(BlazeParser::THROWS);
      setState(324);
      qualifiedNameList();
    }
    setState(327);
    methodBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodBodyContext ------------------------------------------------------------------

BlazeParser::MethodBodyContext::MethodBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::BlockContext* BlazeParser::MethodBodyContext::block() {
  return getRuleContext<BlazeParser::BlockContext>(0);
}

tree::TerminalNode* BlazeParser::MethodBodyContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}


size_t BlazeParser::MethodBodyContext::getRuleIndex() const {
  return BlazeParser::RuleMethodBody;
}

void BlazeParser::MethodBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodBody(this);
}

void BlazeParser::MethodBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodBody(this);
}


antlrcpp::Any BlazeParser::MethodBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitMethodBody(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::MethodBodyContext* BlazeParser::methodBody() {
  MethodBodyContext *_localctx = _tracker.createInstance<MethodBodyContext>(_ctx, getState());
  enterRule(_localctx, 36, BlazeParser::RuleMethodBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(331);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(329);
        block();
        break;
      }

      case BlazeParser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(330);
        match(BlazeParser::SEMI);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeTypeOrVoidContext ------------------------------------------------------------------

BlazeParser::TypeTypeOrVoidContext::TypeTypeOrVoidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::TypeTypeContext* BlazeParser::TypeTypeOrVoidContext::typeType() {
  return getRuleContext<BlazeParser::TypeTypeContext>(0);
}

tree::TerminalNode* BlazeParser::TypeTypeOrVoidContext::VOID() {
  return getToken(BlazeParser::VOID, 0);
}


size_t BlazeParser::TypeTypeOrVoidContext::getRuleIndex() const {
  return BlazeParser::RuleTypeTypeOrVoid;
}

void BlazeParser::TypeTypeOrVoidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeTypeOrVoid(this);
}

void BlazeParser::TypeTypeOrVoidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeTypeOrVoid(this);
}


antlrcpp::Any BlazeParser::TypeTypeOrVoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitTypeTypeOrVoid(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::TypeTypeOrVoidContext* BlazeParser::typeTypeOrVoid() {
  TypeTypeOrVoidContext *_localctx = _tracker.createInstance<TypeTypeOrVoidContext>(_ctx, getState());
  enterRule(_localctx, 38, BlazeParser::RuleTypeTypeOrVoid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(335);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::BOOLEAN:
      case BlazeParser::BYTE:
      case BlazeParser::CHAR:
      case BlazeParser::DOUBLE:
      case BlazeParser::FLOAT:
      case BlazeParser::INT:
      case BlazeParser::LONG:
      case BlazeParser::SHORT:
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(333);
        typeType();
        break;
      }

      case BlazeParser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(334);
        match(BlazeParser::VOID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDeclarationContext ------------------------------------------------------------------

BlazeParser::ConstructorDeclarationContext::ConstructorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ConstructorDeclarationContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

BlazeParser::FormalParametersContext* BlazeParser::ConstructorDeclarationContext::formalParameters() {
  return getRuleContext<BlazeParser::FormalParametersContext>(0);
}

BlazeParser::BlockContext* BlazeParser::ConstructorDeclarationContext::block() {
  return getRuleContext<BlazeParser::BlockContext>(0);
}

tree::TerminalNode* BlazeParser::ConstructorDeclarationContext::THROWS() {
  return getToken(BlazeParser::THROWS, 0);
}

BlazeParser::QualifiedNameListContext* BlazeParser::ConstructorDeclarationContext::qualifiedNameList() {
  return getRuleContext<BlazeParser::QualifiedNameListContext>(0);
}


size_t BlazeParser::ConstructorDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleConstructorDeclaration;
}

void BlazeParser::ConstructorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorDeclaration(this);
}

void BlazeParser::ConstructorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorDeclaration(this);
}


antlrcpp::Any BlazeParser::ConstructorDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitConstructorDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ConstructorDeclarationContext* BlazeParser::constructorDeclaration() {
  ConstructorDeclarationContext *_localctx = _tracker.createInstance<ConstructorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 40, BlazeParser::RuleConstructorDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    match(BlazeParser::IDENTIFIER);
    setState(338);
    formalParameters();
    setState(341);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::THROWS) {
      setState(339);
      match(BlazeParser::THROWS);
      setState(340);
      qualifiedNameList();
    }
    setState(343);
    dynamic_cast<ConstructorDeclarationContext *>(_localctx)->constructorBody = block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclarationContext ------------------------------------------------------------------

BlazeParser::FieldDeclarationContext::FieldDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::TypeTypeContext* BlazeParser::FieldDeclarationContext::typeType() {
  return getRuleContext<BlazeParser::TypeTypeContext>(0);
}

BlazeParser::VariableDeclaratorsContext* BlazeParser::FieldDeclarationContext::variableDeclarators() {
  return getRuleContext<BlazeParser::VariableDeclaratorsContext>(0);
}

tree::TerminalNode* BlazeParser::FieldDeclarationContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}


size_t BlazeParser::FieldDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleFieldDeclaration;
}

void BlazeParser::FieldDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDeclaration(this);
}

void BlazeParser::FieldDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDeclaration(this);
}


antlrcpp::Any BlazeParser::FieldDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitFieldDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::FieldDeclarationContext* BlazeParser::fieldDeclaration() {
  FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 42, BlazeParser::RuleFieldDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    typeType();
    setState(346);
    variableDeclarators();
    setState(347);
    match(BlazeParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceBodyDeclarationContext ------------------------------------------------------------------

BlazeParser::InterfaceBodyDeclarationContext::InterfaceBodyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::InterfaceMemberDeclarationContext* BlazeParser::InterfaceBodyDeclarationContext::interfaceMemberDeclaration() {
  return getRuleContext<BlazeParser::InterfaceMemberDeclarationContext>(0);
}

std::vector<BlazeParser::ModifierContext *> BlazeParser::InterfaceBodyDeclarationContext::modifier() {
  return getRuleContexts<BlazeParser::ModifierContext>();
}

BlazeParser::ModifierContext* BlazeParser::InterfaceBodyDeclarationContext::modifier(size_t i) {
  return getRuleContext<BlazeParser::ModifierContext>(i);
}

tree::TerminalNode* BlazeParser::InterfaceBodyDeclarationContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}


size_t BlazeParser::InterfaceBodyDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleInterfaceBodyDeclaration;
}

void BlazeParser::InterfaceBodyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceBodyDeclaration(this);
}

void BlazeParser::InterfaceBodyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceBodyDeclaration(this);
}


antlrcpp::Any BlazeParser::InterfaceBodyDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceBodyDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::InterfaceBodyDeclarationContext* BlazeParser::interfaceBodyDeclaration() {
  InterfaceBodyDeclarationContext *_localctx = _tracker.createInstance<InterfaceBodyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 44, BlazeParser::RuleInterfaceBodyDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(357);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::ABSTRACT:
      case BlazeParser::BOOLEAN:
      case BlazeParser::BYTE:
      case BlazeParser::CHAR:
      case BlazeParser::CLASS:
      case BlazeParser::DEFAULT:
      case BlazeParser::DOUBLE:
      case BlazeParser::ENUM:
      case BlazeParser::FINAL:
      case BlazeParser::FLOAT:
      case BlazeParser::INT:
      case BlazeParser::INTERFACE:
      case BlazeParser::LONG:
      case BlazeParser::NATIVE:
      case BlazeParser::PRIVATE:
      case BlazeParser::PROTECTED:
      case BlazeParser::PUBLIC:
      case BlazeParser::SHORT:
      case BlazeParser::STATIC:
      case BlazeParser::SYNCHRONIZED:
      case BlazeParser::TRANSIENT:
      case BlazeParser::VOID:
      case BlazeParser::VOLATILE:
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(352);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(349);
            modifier(); 
          }
          setState(354);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
        }
        setState(355);
        interfaceMemberDeclaration();
        break;
      }

      case BlazeParser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(356);
        match(BlazeParser::SEMI);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMemberDeclarationContext ------------------------------------------------------------------

BlazeParser::InterfaceMemberDeclarationContext::InterfaceMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::ConstDeclarationContext* BlazeParser::InterfaceMemberDeclarationContext::constDeclaration() {
  return getRuleContext<BlazeParser::ConstDeclarationContext>(0);
}

BlazeParser::InterfaceMethodDeclarationContext* BlazeParser::InterfaceMemberDeclarationContext::interfaceMethodDeclaration() {
  return getRuleContext<BlazeParser::InterfaceMethodDeclarationContext>(0);
}

BlazeParser::InterfaceDeclarationContext* BlazeParser::InterfaceMemberDeclarationContext::interfaceDeclaration() {
  return getRuleContext<BlazeParser::InterfaceDeclarationContext>(0);
}

BlazeParser::ClassDeclarationContext* BlazeParser::InterfaceMemberDeclarationContext::classDeclaration() {
  return getRuleContext<BlazeParser::ClassDeclarationContext>(0);
}

BlazeParser::EnumDeclarationContext* BlazeParser::InterfaceMemberDeclarationContext::enumDeclaration() {
  return getRuleContext<BlazeParser::EnumDeclarationContext>(0);
}


size_t BlazeParser::InterfaceMemberDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleInterfaceMemberDeclaration;
}

void BlazeParser::InterfaceMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceMemberDeclaration(this);
}

void BlazeParser::InterfaceMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceMemberDeclaration(this);
}


antlrcpp::Any BlazeParser::InterfaceMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::InterfaceMemberDeclarationContext* BlazeParser::interfaceMemberDeclaration() {
  InterfaceMemberDeclarationContext *_localctx = _tracker.createInstance<InterfaceMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 46, BlazeParser::RuleInterfaceMemberDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(364);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(359);
      constDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(360);
      interfaceMethodDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(361);
      interfaceDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(362);
      classDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(363);
      enumDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDeclarationContext ------------------------------------------------------------------

BlazeParser::ConstDeclarationContext::ConstDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::TypeTypeContext* BlazeParser::ConstDeclarationContext::typeType() {
  return getRuleContext<BlazeParser::TypeTypeContext>(0);
}

std::vector<BlazeParser::ConstantDeclaratorContext *> BlazeParser::ConstDeclarationContext::constantDeclarator() {
  return getRuleContexts<BlazeParser::ConstantDeclaratorContext>();
}

BlazeParser::ConstantDeclaratorContext* BlazeParser::ConstDeclarationContext::constantDeclarator(size_t i) {
  return getRuleContext<BlazeParser::ConstantDeclaratorContext>(i);
}

tree::TerminalNode* BlazeParser::ConstDeclarationContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> BlazeParser::ConstDeclarationContext::COMMA() {
  return getTokens(BlazeParser::COMMA);
}

tree::TerminalNode* BlazeParser::ConstDeclarationContext::COMMA(size_t i) {
  return getToken(BlazeParser::COMMA, i);
}


size_t BlazeParser::ConstDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleConstDeclaration;
}

void BlazeParser::ConstDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDeclaration(this);
}

void BlazeParser::ConstDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDeclaration(this);
}


antlrcpp::Any BlazeParser::ConstDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitConstDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ConstDeclarationContext* BlazeParser::constDeclaration() {
  ConstDeclarationContext *_localctx = _tracker.createInstance<ConstDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 48, BlazeParser::RuleConstDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
    typeType();
    setState(367);
    constantDeclarator();
    setState(372);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::COMMA) {
      setState(368);
      match(BlazeParser::COMMA);
      setState(369);
      constantDeclarator();
      setState(374);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(375);
    match(BlazeParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDeclaratorContext ------------------------------------------------------------------

BlazeParser::ConstantDeclaratorContext::ConstantDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ConstantDeclaratorContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

tree::TerminalNode* BlazeParser::ConstantDeclaratorContext::ASSIGN() {
  return getToken(BlazeParser::ASSIGN, 0);
}

BlazeParser::VariableInitializerContext* BlazeParser::ConstantDeclaratorContext::variableInitializer() {
  return getRuleContext<BlazeParser::VariableInitializerContext>(0);
}

std::vector<tree::TerminalNode *> BlazeParser::ConstantDeclaratorContext::LBRACK() {
  return getTokens(BlazeParser::LBRACK);
}

tree::TerminalNode* BlazeParser::ConstantDeclaratorContext::LBRACK(size_t i) {
  return getToken(BlazeParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> BlazeParser::ConstantDeclaratorContext::RBRACK() {
  return getTokens(BlazeParser::RBRACK);
}

tree::TerminalNode* BlazeParser::ConstantDeclaratorContext::RBRACK(size_t i) {
  return getToken(BlazeParser::RBRACK, i);
}


size_t BlazeParser::ConstantDeclaratorContext::getRuleIndex() const {
  return BlazeParser::RuleConstantDeclarator;
}

void BlazeParser::ConstantDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantDeclarator(this);
}

void BlazeParser::ConstantDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantDeclarator(this);
}


antlrcpp::Any BlazeParser::ConstantDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitConstantDeclarator(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ConstantDeclaratorContext* BlazeParser::constantDeclarator() {
  ConstantDeclaratorContext *_localctx = _tracker.createInstance<ConstantDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 50, BlazeParser::RuleConstantDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    match(BlazeParser::IDENTIFIER);
    setState(382);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::LBRACK) {
      setState(378);
      match(BlazeParser::LBRACK);
      setState(379);
      match(BlazeParser::RBRACK);
      setState(384);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(385);
    match(BlazeParser::ASSIGN);
    setState(386);
    variableInitializer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMethodDeclarationContext ------------------------------------------------------------------

BlazeParser::InterfaceMethodDeclarationContext::InterfaceMethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::InterfaceMethodDeclarationContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

BlazeParser::FormalParametersContext* BlazeParser::InterfaceMethodDeclarationContext::formalParameters() {
  return getRuleContext<BlazeParser::FormalParametersContext>(0);
}

BlazeParser::MethodBodyContext* BlazeParser::InterfaceMethodDeclarationContext::methodBody() {
  return getRuleContext<BlazeParser::MethodBodyContext>(0);
}

BlazeParser::TypeTypeOrVoidContext* BlazeParser::InterfaceMethodDeclarationContext::typeTypeOrVoid() {
  return getRuleContext<BlazeParser::TypeTypeOrVoidContext>(0);
}

std::vector<BlazeParser::InterfaceMethodModifierContext *> BlazeParser::InterfaceMethodDeclarationContext::interfaceMethodModifier() {
  return getRuleContexts<BlazeParser::InterfaceMethodModifierContext>();
}

BlazeParser::InterfaceMethodModifierContext* BlazeParser::InterfaceMethodDeclarationContext::interfaceMethodModifier(size_t i) {
  return getRuleContext<BlazeParser::InterfaceMethodModifierContext>(i);
}

std::vector<tree::TerminalNode *> BlazeParser::InterfaceMethodDeclarationContext::LBRACK() {
  return getTokens(BlazeParser::LBRACK);
}

tree::TerminalNode* BlazeParser::InterfaceMethodDeclarationContext::LBRACK(size_t i) {
  return getToken(BlazeParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> BlazeParser::InterfaceMethodDeclarationContext::RBRACK() {
  return getTokens(BlazeParser::RBRACK);
}

tree::TerminalNode* BlazeParser::InterfaceMethodDeclarationContext::RBRACK(size_t i) {
  return getToken(BlazeParser::RBRACK, i);
}

tree::TerminalNode* BlazeParser::InterfaceMethodDeclarationContext::THROWS() {
  return getToken(BlazeParser::THROWS, 0);
}

BlazeParser::QualifiedNameListContext* BlazeParser::InterfaceMethodDeclarationContext::qualifiedNameList() {
  return getRuleContext<BlazeParser::QualifiedNameListContext>(0);
}


size_t BlazeParser::InterfaceMethodDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleInterfaceMethodDeclaration;
}

void BlazeParser::InterfaceMethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceMethodDeclaration(this);
}

void BlazeParser::InterfaceMethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceMethodDeclaration(this);
}


antlrcpp::Any BlazeParser::InterfaceMethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceMethodDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::InterfaceMethodDeclarationContext* BlazeParser::interfaceMethodDeclaration() {
  InterfaceMethodDeclarationContext *_localctx = _tracker.createInstance<InterfaceMethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 52, BlazeParser::RuleInterfaceMethodDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::ABSTRACT)
      | (1ULL << BlazeParser::DEFAULT)
      | (1ULL << BlazeParser::PUBLIC)
      | (1ULL << BlazeParser::STATIC))) != 0)) {
      setState(388);
      interfaceMethodModifier();
      setState(393);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }

    setState(394);
    typeTypeOrVoid();
    setState(395);
    match(BlazeParser::IDENTIFIER);
    setState(396);
    formalParameters();
    setState(401);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::LBRACK) {
      setState(397);
      match(BlazeParser::LBRACK);
      setState(398);
      match(BlazeParser::RBRACK);
      setState(403);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(406);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::THROWS) {
      setState(404);
      match(BlazeParser::THROWS);
      setState(405);
      qualifiedNameList();
    }
    setState(408);
    methodBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMethodModifierContext ------------------------------------------------------------------

BlazeParser::InterfaceMethodModifierContext::InterfaceMethodModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::InterfaceMethodModifierContext::PUBLIC() {
  return getToken(BlazeParser::PUBLIC, 0);
}

tree::TerminalNode* BlazeParser::InterfaceMethodModifierContext::ABSTRACT() {
  return getToken(BlazeParser::ABSTRACT, 0);
}

tree::TerminalNode* BlazeParser::InterfaceMethodModifierContext::DEFAULT() {
  return getToken(BlazeParser::DEFAULT, 0);
}

tree::TerminalNode* BlazeParser::InterfaceMethodModifierContext::STATIC() {
  return getToken(BlazeParser::STATIC, 0);
}


size_t BlazeParser::InterfaceMethodModifierContext::getRuleIndex() const {
  return BlazeParser::RuleInterfaceMethodModifier;
}

void BlazeParser::InterfaceMethodModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceMethodModifier(this);
}

void BlazeParser::InterfaceMethodModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceMethodModifier(this);
}


antlrcpp::Any BlazeParser::InterfaceMethodModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceMethodModifier(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::InterfaceMethodModifierContext* BlazeParser::interfaceMethodModifier() {
  InterfaceMethodModifierContext *_localctx = _tracker.createInstance<InterfaceMethodModifierContext>(_ctx, getState());
  enterRule(_localctx, 54, BlazeParser::RuleInterfaceMethodModifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(410);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::ABSTRACT)
      | (1ULL << BlazeParser::DEFAULT)
      | (1ULL << BlazeParser::PUBLIC)
      | (1ULL << BlazeParser::STATIC))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorsContext ------------------------------------------------------------------

BlazeParser::VariableDeclaratorsContext::VariableDeclaratorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BlazeParser::VariableDeclaratorContext *> BlazeParser::VariableDeclaratorsContext::variableDeclarator() {
  return getRuleContexts<BlazeParser::VariableDeclaratorContext>();
}

BlazeParser::VariableDeclaratorContext* BlazeParser::VariableDeclaratorsContext::variableDeclarator(size_t i) {
  return getRuleContext<BlazeParser::VariableDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> BlazeParser::VariableDeclaratorsContext::COMMA() {
  return getTokens(BlazeParser::COMMA);
}

tree::TerminalNode* BlazeParser::VariableDeclaratorsContext::COMMA(size_t i) {
  return getToken(BlazeParser::COMMA, i);
}


size_t BlazeParser::VariableDeclaratorsContext::getRuleIndex() const {
  return BlazeParser::RuleVariableDeclarators;
}

void BlazeParser::VariableDeclaratorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarators(this);
}

void BlazeParser::VariableDeclaratorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarators(this);
}


antlrcpp::Any BlazeParser::VariableDeclaratorsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarators(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::VariableDeclaratorsContext* BlazeParser::variableDeclarators() {
  VariableDeclaratorsContext *_localctx = _tracker.createInstance<VariableDeclaratorsContext>(_ctx, getState());
  enterRule(_localctx, 56, BlazeParser::RuleVariableDeclarators);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412);
    variableDeclarator();
    setState(417);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::COMMA) {
      setState(413);
      match(BlazeParser::COMMA);
      setState(414);
      variableDeclarator();
      setState(419);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorContext ------------------------------------------------------------------

BlazeParser::VariableDeclaratorContext::VariableDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::VariableDeclaratorIdContext* BlazeParser::VariableDeclaratorContext::variableDeclaratorId() {
  return getRuleContext<BlazeParser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode* BlazeParser::VariableDeclaratorContext::ASSIGN() {
  return getToken(BlazeParser::ASSIGN, 0);
}

BlazeParser::VariableInitializerContext* BlazeParser::VariableDeclaratorContext::variableInitializer() {
  return getRuleContext<BlazeParser::VariableInitializerContext>(0);
}


size_t BlazeParser::VariableDeclaratorContext::getRuleIndex() const {
  return BlazeParser::RuleVariableDeclarator;
}

void BlazeParser::VariableDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarator(this);
}

void BlazeParser::VariableDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarator(this);
}


antlrcpp::Any BlazeParser::VariableDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarator(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::VariableDeclaratorContext* BlazeParser::variableDeclarator() {
  VariableDeclaratorContext *_localctx = _tracker.createInstance<VariableDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 58, BlazeParser::RuleVariableDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    variableDeclaratorId();
    setState(423);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::ASSIGN) {
      setState(421);
      match(BlazeParser::ASSIGN);
      setState(422);
      variableInitializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorIdContext ------------------------------------------------------------------

BlazeParser::VariableDeclaratorIdContext::VariableDeclaratorIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::VariableDeclaratorIdContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

std::vector<tree::TerminalNode *> BlazeParser::VariableDeclaratorIdContext::LBRACK() {
  return getTokens(BlazeParser::LBRACK);
}

tree::TerminalNode* BlazeParser::VariableDeclaratorIdContext::LBRACK(size_t i) {
  return getToken(BlazeParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> BlazeParser::VariableDeclaratorIdContext::RBRACK() {
  return getTokens(BlazeParser::RBRACK);
}

tree::TerminalNode* BlazeParser::VariableDeclaratorIdContext::RBRACK(size_t i) {
  return getToken(BlazeParser::RBRACK, i);
}


size_t BlazeParser::VariableDeclaratorIdContext::getRuleIndex() const {
  return BlazeParser::RuleVariableDeclaratorId;
}

void BlazeParser::VariableDeclaratorIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaratorId(this);
}

void BlazeParser::VariableDeclaratorIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaratorId(this);
}


antlrcpp::Any BlazeParser::VariableDeclaratorIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaratorId(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::VariableDeclaratorIdContext* BlazeParser::variableDeclaratorId() {
  VariableDeclaratorIdContext *_localctx = _tracker.createInstance<VariableDeclaratorIdContext>(_ctx, getState());
  enterRule(_localctx, 60, BlazeParser::RuleVariableDeclaratorId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    match(BlazeParser::IDENTIFIER);
    setState(430);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::LBRACK) {
      setState(426);
      match(BlazeParser::LBRACK);
      setState(427);
      match(BlazeParser::RBRACK);
      setState(432);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableInitializerContext ------------------------------------------------------------------

BlazeParser::VariableInitializerContext::VariableInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::ArrayInitializerContext* BlazeParser::VariableInitializerContext::arrayInitializer() {
  return getRuleContext<BlazeParser::ArrayInitializerContext>(0);
}

BlazeParser::ExpressionContext* BlazeParser::VariableInitializerContext::expression() {
  return getRuleContext<BlazeParser::ExpressionContext>(0);
}


size_t BlazeParser::VariableInitializerContext::getRuleIndex() const {
  return BlazeParser::RuleVariableInitializer;
}

void BlazeParser::VariableInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableInitializer(this);
}

void BlazeParser::VariableInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableInitializer(this);
}


antlrcpp::Any BlazeParser::VariableInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitVariableInitializer(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::VariableInitializerContext* BlazeParser::variableInitializer() {
  VariableInitializerContext *_localctx = _tracker.createInstance<VariableInitializerContext>(_ctx, getState());
  enterRule(_localctx, 62, BlazeParser::RuleVariableInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(435);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(433);
        arrayInitializer();
        break;
      }

      case BlazeParser::BOOLEAN:
      case BlazeParser::BYTE:
      case BlazeParser::CHAR:
      case BlazeParser::DOUBLE:
      case BlazeParser::FLOAT:
      case BlazeParser::INT:
      case BlazeParser::LONG:
      case BlazeParser::NEW:
      case BlazeParser::SHORT:
      case BlazeParser::SUPER:
      case BlazeParser::THIS:
      case BlazeParser::VOID:
      case BlazeParser::DECIMAL_LITERAL:
      case BlazeParser::HEX_LITERAL:
      case BlazeParser::OCT_LITERAL:
      case BlazeParser::BINARY_LITERAL:
      case BlazeParser::FLOAT_LITERAL:
      case BlazeParser::HEX_FLOAT_LITERAL:
      case BlazeParser::BOOL_LITERAL:
      case BlazeParser::CHAR_LITERAL:
      case BlazeParser::STRING_LITERAL:
      case BlazeParser::NULL_LITERAL:
      case BlazeParser::LPAREN:
      case BlazeParser::BANG:
      case BlazeParser::TILDE:
      case BlazeParser::INC:
      case BlazeParser::DEC:
      case BlazeParser::ADD:
      case BlazeParser::SUB:
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(434);
        expression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayInitializerContext ------------------------------------------------------------------

BlazeParser::ArrayInitializerContext::ArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ArrayInitializerContext::LBRACE() {
  return getToken(BlazeParser::LBRACE, 0);
}

tree::TerminalNode* BlazeParser::ArrayInitializerContext::RBRACE() {
  return getToken(BlazeParser::RBRACE, 0);
}

std::vector<BlazeParser::VariableInitializerContext *> BlazeParser::ArrayInitializerContext::variableInitializer() {
  return getRuleContexts<BlazeParser::VariableInitializerContext>();
}

BlazeParser::VariableInitializerContext* BlazeParser::ArrayInitializerContext::variableInitializer(size_t i) {
  return getRuleContext<BlazeParser::VariableInitializerContext>(i);
}

std::vector<tree::TerminalNode *> BlazeParser::ArrayInitializerContext::COMMA() {
  return getTokens(BlazeParser::COMMA);
}

tree::TerminalNode* BlazeParser::ArrayInitializerContext::COMMA(size_t i) {
  return getToken(BlazeParser::COMMA, i);
}


size_t BlazeParser::ArrayInitializerContext::getRuleIndex() const {
  return BlazeParser::RuleArrayInitializer;
}

void BlazeParser::ArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayInitializer(this);
}

void BlazeParser::ArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayInitializer(this);
}


antlrcpp::Any BlazeParser::ArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ArrayInitializerContext* BlazeParser::arrayInitializer() {
  ArrayInitializerContext *_localctx = _tracker.createInstance<ArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 64, BlazeParser::RuleArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(437);
    match(BlazeParser::LBRACE);
    setState(449);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::BOOLEAN)
      | (1ULL << BlazeParser::BYTE)
      | (1ULL << BlazeParser::CHAR)
      | (1ULL << BlazeParser::DOUBLE)
      | (1ULL << BlazeParser::FLOAT)
      | (1ULL << BlazeParser::INT)
      | (1ULL << BlazeParser::LONG)
      | (1ULL << BlazeParser::NEW)
      | (1ULL << BlazeParser::SHORT)
      | (1ULL << BlazeParser::SUPER)
      | (1ULL << BlazeParser::THIS)
      | (1ULL << BlazeParser::VOID)
      | (1ULL << BlazeParser::DECIMAL_LITERAL)
      | (1ULL << BlazeParser::HEX_LITERAL)
      | (1ULL << BlazeParser::OCT_LITERAL)
      | (1ULL << BlazeParser::BINARY_LITERAL)
      | (1ULL << BlazeParser::FLOAT_LITERAL)
      | (1ULL << BlazeParser::HEX_FLOAT_LITERAL)
      | (1ULL << BlazeParser::BOOL_LITERAL)
      | (1ULL << BlazeParser::CHAR_LITERAL)
      | (1ULL << BlazeParser::STRING_LITERAL)
      | (1ULL << BlazeParser::NULL_LITERAL)
      | (1ULL << BlazeParser::LPAREN)
      | (1ULL << BlazeParser::LBRACE))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::BANG - 72))
      | (1ULL << (BlazeParser::TILDE - 72))
      | (1ULL << (BlazeParser::INC - 72))
      | (1ULL << (BlazeParser::DEC - 72))
      | (1ULL << (BlazeParser::ADD - 72))
      | (1ULL << (BlazeParser::SUB - 72))
      | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
      setState(438);
      variableInitializer();
      setState(443);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(439);
          match(BlazeParser::COMMA);
          setState(440);
          variableInitializer(); 
        }
        setState(445);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
      }
      setState(447);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::COMMA) {
        setState(446);
        match(BlazeParser::COMMA);
      }
    }
    setState(451);
    match(BlazeParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOrInterfaceTypeContext ------------------------------------------------------------------

BlazeParser::ClassOrInterfaceTypeContext::ClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BlazeParser::ClassOrInterfaceTypeContext::IDENTIFIER() {
  return getTokens(BlazeParser::IDENTIFIER);
}

tree::TerminalNode* BlazeParser::ClassOrInterfaceTypeContext::IDENTIFIER(size_t i) {
  return getToken(BlazeParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> BlazeParser::ClassOrInterfaceTypeContext::DOT() {
  return getTokens(BlazeParser::DOT);
}

tree::TerminalNode* BlazeParser::ClassOrInterfaceTypeContext::DOT(size_t i) {
  return getToken(BlazeParser::DOT, i);
}


size_t BlazeParser::ClassOrInterfaceTypeContext::getRuleIndex() const {
  return BlazeParser::RuleClassOrInterfaceType;
}

void BlazeParser::ClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassOrInterfaceType(this);
}

void BlazeParser::ClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassOrInterfaceType(this);
}


antlrcpp::Any BlazeParser::ClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitClassOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ClassOrInterfaceTypeContext* BlazeParser::classOrInterfaceType() {
  ClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<ClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 66, BlazeParser::RuleClassOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(453);
    match(BlazeParser::IDENTIFIER);
    setState(458);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(454);
        match(BlazeParser::DOT);
        setState(455);
        match(BlazeParser::IDENTIFIER); 
      }
      setState(460);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentContext ------------------------------------------------------------------

BlazeParser::TypeArgumentContext::TypeArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::TypeTypeContext* BlazeParser::TypeArgumentContext::typeType() {
  return getRuleContext<BlazeParser::TypeTypeContext>(0);
}

tree::TerminalNode* BlazeParser::TypeArgumentContext::QUESTION() {
  return getToken(BlazeParser::QUESTION, 0);
}

tree::TerminalNode* BlazeParser::TypeArgumentContext::EXTENDS() {
  return getToken(BlazeParser::EXTENDS, 0);
}

tree::TerminalNode* BlazeParser::TypeArgumentContext::SUPER() {
  return getToken(BlazeParser::SUPER, 0);
}


size_t BlazeParser::TypeArgumentContext::getRuleIndex() const {
  return BlazeParser::RuleTypeArgument;
}

void BlazeParser::TypeArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArgument(this);
}

void BlazeParser::TypeArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArgument(this);
}


antlrcpp::Any BlazeParser::TypeArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitTypeArgument(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::TypeArgumentContext* BlazeParser::typeArgument() {
  TypeArgumentContext *_localctx = _tracker.createInstance<TypeArgumentContext>(_ctx, getState());
  enterRule(_localctx, 68, BlazeParser::RuleTypeArgument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(467);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::BOOLEAN:
      case BlazeParser::BYTE:
      case BlazeParser::CHAR:
      case BlazeParser::DOUBLE:
      case BlazeParser::FLOAT:
      case BlazeParser::INT:
      case BlazeParser::LONG:
      case BlazeParser::SHORT:
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(461);
        typeType();
        break;
      }

      case BlazeParser::QUESTION: {
        enterOuterAlt(_localctx, 2);
        setState(462);
        match(BlazeParser::QUESTION);
        setState(465);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BlazeParser::EXTENDS

        || _la == BlazeParser::SUPER) {
          setState(463);
          _la = _input->LA(1);
          if (!(_la == BlazeParser::EXTENDS

          || _la == BlazeParser::SUPER)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(464);
          typeType();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedNameListContext ------------------------------------------------------------------

BlazeParser::QualifiedNameListContext::QualifiedNameListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BlazeParser::QualifiedNameContext *> BlazeParser::QualifiedNameListContext::qualifiedName() {
  return getRuleContexts<BlazeParser::QualifiedNameContext>();
}

BlazeParser::QualifiedNameContext* BlazeParser::QualifiedNameListContext::qualifiedName(size_t i) {
  return getRuleContext<BlazeParser::QualifiedNameContext>(i);
}

std::vector<tree::TerminalNode *> BlazeParser::QualifiedNameListContext::COMMA() {
  return getTokens(BlazeParser::COMMA);
}

tree::TerminalNode* BlazeParser::QualifiedNameListContext::COMMA(size_t i) {
  return getToken(BlazeParser::COMMA, i);
}


size_t BlazeParser::QualifiedNameListContext::getRuleIndex() const {
  return BlazeParser::RuleQualifiedNameList;
}

void BlazeParser::QualifiedNameListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedNameList(this);
}

void BlazeParser::QualifiedNameListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedNameList(this);
}


antlrcpp::Any BlazeParser::QualifiedNameListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitQualifiedNameList(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::QualifiedNameListContext* BlazeParser::qualifiedNameList() {
  QualifiedNameListContext *_localctx = _tracker.createInstance<QualifiedNameListContext>(_ctx, getState());
  enterRule(_localctx, 70, BlazeParser::RuleQualifiedNameList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    qualifiedName();
    setState(474);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::COMMA) {
      setState(470);
      match(BlazeParser::COMMA);
      setState(471);
      qualifiedName();
      setState(476);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParametersContext ------------------------------------------------------------------

BlazeParser::FormalParametersContext::FormalParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::FormalParametersContext::LPAREN() {
  return getToken(BlazeParser::LPAREN, 0);
}

tree::TerminalNode* BlazeParser::FormalParametersContext::RPAREN() {
  return getToken(BlazeParser::RPAREN, 0);
}

BlazeParser::FormalParameterListContext* BlazeParser::FormalParametersContext::formalParameterList() {
  return getRuleContext<BlazeParser::FormalParameterListContext>(0);
}


size_t BlazeParser::FormalParametersContext::getRuleIndex() const {
  return BlazeParser::RuleFormalParameters;
}

void BlazeParser::FormalParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameters(this);
}

void BlazeParser::FormalParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameters(this);
}


antlrcpp::Any BlazeParser::FormalParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameters(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::FormalParametersContext* BlazeParser::formalParameters() {
  FormalParametersContext *_localctx = _tracker.createInstance<FormalParametersContext>(_ctx, getState());
  enterRule(_localctx, 72, BlazeParser::RuleFormalParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(477);
    match(BlazeParser::LPAREN);
    setState(479);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::BOOLEAN)
      | (1ULL << BlazeParser::BYTE)
      | (1ULL << BlazeParser::CHAR)
      | (1ULL << BlazeParser::DOUBLE)
      | (1ULL << BlazeParser::FINAL)
      | (1ULL << BlazeParser::FLOAT)
      | (1ULL << BlazeParser::INT)
      | (1ULL << BlazeParser::LONG)
      | (1ULL << BlazeParser::SHORT))) != 0) || _la == BlazeParser::IDENTIFIER) {
      setState(478);
      formalParameterList();
    }
    setState(481);
    match(BlazeParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterListContext ------------------------------------------------------------------

BlazeParser::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BlazeParser::FormalParameterContext *> BlazeParser::FormalParameterListContext::formalParameter() {
  return getRuleContexts<BlazeParser::FormalParameterContext>();
}

BlazeParser::FormalParameterContext* BlazeParser::FormalParameterListContext::formalParameter(size_t i) {
  return getRuleContext<BlazeParser::FormalParameterContext>(i);
}

std::vector<tree::TerminalNode *> BlazeParser::FormalParameterListContext::COMMA() {
  return getTokens(BlazeParser::COMMA);
}

tree::TerminalNode* BlazeParser::FormalParameterListContext::COMMA(size_t i) {
  return getToken(BlazeParser::COMMA, i);
}

BlazeParser::LastFormalParameterContext* BlazeParser::FormalParameterListContext::lastFormalParameter() {
  return getRuleContext<BlazeParser::LastFormalParameterContext>(0);
}


size_t BlazeParser::FormalParameterListContext::getRuleIndex() const {
  return BlazeParser::RuleFormalParameterList;
}

void BlazeParser::FormalParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterList(this);
}

void BlazeParser::FormalParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterList(this);
}


antlrcpp::Any BlazeParser::FormalParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameterList(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::FormalParameterListContext* BlazeParser::formalParameterList() {
  FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 74, BlazeParser::RuleFormalParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(496);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(483);
      formalParameter();
      setState(488);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(484);
          match(BlazeParser::COMMA);
          setState(485);
          formalParameter(); 
        }
        setState(490);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
      }
      setState(493);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::COMMA) {
        setState(491);
        match(BlazeParser::COMMA);
        setState(492);
        lastFormalParameter();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(495);
      lastFormalParameter();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterContext ------------------------------------------------------------------

BlazeParser::FormalParameterContext::FormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::TypeTypeContext* BlazeParser::FormalParameterContext::typeType() {
  return getRuleContext<BlazeParser::TypeTypeContext>(0);
}

BlazeParser::VariableDeclaratorIdContext* BlazeParser::FormalParameterContext::variableDeclaratorId() {
  return getRuleContext<BlazeParser::VariableDeclaratorIdContext>(0);
}

std::vector<BlazeParser::VariableModifierContext *> BlazeParser::FormalParameterContext::variableModifier() {
  return getRuleContexts<BlazeParser::VariableModifierContext>();
}

BlazeParser::VariableModifierContext* BlazeParser::FormalParameterContext::variableModifier(size_t i) {
  return getRuleContext<BlazeParser::VariableModifierContext>(i);
}


size_t BlazeParser::FormalParameterContext::getRuleIndex() const {
  return BlazeParser::RuleFormalParameter;
}

void BlazeParser::FormalParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameter(this);
}

void BlazeParser::FormalParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameter(this);
}


antlrcpp::Any BlazeParser::FormalParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameter(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::FormalParameterContext* BlazeParser::formalParameter() {
  FormalParameterContext *_localctx = _tracker.createInstance<FormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 76, BlazeParser::RuleFormalParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(501);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::FINAL) {
      setState(498);
      variableModifier();
      setState(503);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(504);
    typeType();
    setState(505);
    variableDeclaratorId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LastFormalParameterContext ------------------------------------------------------------------

BlazeParser::LastFormalParameterContext::LastFormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::TypeTypeContext* BlazeParser::LastFormalParameterContext::typeType() {
  return getRuleContext<BlazeParser::TypeTypeContext>(0);
}

tree::TerminalNode* BlazeParser::LastFormalParameterContext::ELLIPSIS() {
  return getToken(BlazeParser::ELLIPSIS, 0);
}

BlazeParser::VariableDeclaratorIdContext* BlazeParser::LastFormalParameterContext::variableDeclaratorId() {
  return getRuleContext<BlazeParser::VariableDeclaratorIdContext>(0);
}

std::vector<BlazeParser::VariableModifierContext *> BlazeParser::LastFormalParameterContext::variableModifier() {
  return getRuleContexts<BlazeParser::VariableModifierContext>();
}

BlazeParser::VariableModifierContext* BlazeParser::LastFormalParameterContext::variableModifier(size_t i) {
  return getRuleContext<BlazeParser::VariableModifierContext>(i);
}


size_t BlazeParser::LastFormalParameterContext::getRuleIndex() const {
  return BlazeParser::RuleLastFormalParameter;
}

void BlazeParser::LastFormalParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLastFormalParameter(this);
}

void BlazeParser::LastFormalParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLastFormalParameter(this);
}


antlrcpp::Any BlazeParser::LastFormalParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitLastFormalParameter(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::LastFormalParameterContext* BlazeParser::lastFormalParameter() {
  LastFormalParameterContext *_localctx = _tracker.createInstance<LastFormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 78, BlazeParser::RuleLastFormalParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(510);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::FINAL) {
      setState(507);
      variableModifier();
      setState(512);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(513);
    typeType();
    setState(514);
    match(BlazeParser::ELLIPSIS);
    setState(515);
    variableDeclaratorId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedNameContext ------------------------------------------------------------------

BlazeParser::QualifiedNameContext::QualifiedNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BlazeParser::QualifiedNameContext::IDENTIFIER() {
  return getTokens(BlazeParser::IDENTIFIER);
}

tree::TerminalNode* BlazeParser::QualifiedNameContext::IDENTIFIER(size_t i) {
  return getToken(BlazeParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> BlazeParser::QualifiedNameContext::DOT() {
  return getTokens(BlazeParser::DOT);
}

tree::TerminalNode* BlazeParser::QualifiedNameContext::DOT(size_t i) {
  return getToken(BlazeParser::DOT, i);
}


size_t BlazeParser::QualifiedNameContext::getRuleIndex() const {
  return BlazeParser::RuleQualifiedName;
}

void BlazeParser::QualifiedNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedName(this);
}

void BlazeParser::QualifiedNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedName(this);
}


antlrcpp::Any BlazeParser::QualifiedNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitQualifiedName(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::QualifiedNameContext* BlazeParser::qualifiedName() {
  QualifiedNameContext *_localctx = _tracker.createInstance<QualifiedNameContext>(_ctx, getState());
  enterRule(_localctx, 80, BlazeParser::RuleQualifiedName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(517);
    match(BlazeParser::IDENTIFIER);
    setState(522);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(518);
        match(BlazeParser::DOT);
        setState(519);
        match(BlazeParser::IDENTIFIER); 
      }
      setState(524);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

BlazeParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::IntegerLiteralContext* BlazeParser::LiteralContext::integerLiteral() {
  return getRuleContext<BlazeParser::IntegerLiteralContext>(0);
}

BlazeParser::FloatLiteralContext* BlazeParser::LiteralContext::floatLiteral() {
  return getRuleContext<BlazeParser::FloatLiteralContext>(0);
}

tree::TerminalNode* BlazeParser::LiteralContext::CHAR_LITERAL() {
  return getToken(BlazeParser::CHAR_LITERAL, 0);
}

tree::TerminalNode* BlazeParser::LiteralContext::STRING_LITERAL() {
  return getToken(BlazeParser::STRING_LITERAL, 0);
}

tree::TerminalNode* BlazeParser::LiteralContext::BOOL_LITERAL() {
  return getToken(BlazeParser::BOOL_LITERAL, 0);
}

tree::TerminalNode* BlazeParser::LiteralContext::NULL_LITERAL() {
  return getToken(BlazeParser::NULL_LITERAL, 0);
}


size_t BlazeParser::LiteralContext::getRuleIndex() const {
  return BlazeParser::RuleLiteral;
}

void BlazeParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void BlazeParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any BlazeParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::LiteralContext* BlazeParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 82, BlazeParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(531);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::DECIMAL_LITERAL:
      case BlazeParser::HEX_LITERAL:
      case BlazeParser::OCT_LITERAL:
      case BlazeParser::BINARY_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(525);
        integerLiteral();
        break;
      }

      case BlazeParser::FLOAT_LITERAL:
      case BlazeParser::HEX_FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(526);
        floatLiteral();
        break;
      }

      case BlazeParser::CHAR_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(527);
        match(BlazeParser::CHAR_LITERAL);
        break;
      }

      case BlazeParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(528);
        match(BlazeParser::STRING_LITERAL);
        break;
      }

      case BlazeParser::BOOL_LITERAL: {
        enterOuterAlt(_localctx, 5);
        setState(529);
        match(BlazeParser::BOOL_LITERAL);
        break;
      }

      case BlazeParser::NULL_LITERAL: {
        enterOuterAlt(_localctx, 6);
        setState(530);
        match(BlazeParser::NULL_LITERAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

BlazeParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::IntegerLiteralContext::DECIMAL_LITERAL() {
  return getToken(BlazeParser::DECIMAL_LITERAL, 0);
}

tree::TerminalNode* BlazeParser::IntegerLiteralContext::HEX_LITERAL() {
  return getToken(BlazeParser::HEX_LITERAL, 0);
}

tree::TerminalNode* BlazeParser::IntegerLiteralContext::OCT_LITERAL() {
  return getToken(BlazeParser::OCT_LITERAL, 0);
}

tree::TerminalNode* BlazeParser::IntegerLiteralContext::BINARY_LITERAL() {
  return getToken(BlazeParser::BINARY_LITERAL, 0);
}


size_t BlazeParser::IntegerLiteralContext::getRuleIndex() const {
  return BlazeParser::RuleIntegerLiteral;
}

void BlazeParser::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteral(this);
}

void BlazeParser::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteral(this);
}


antlrcpp::Any BlazeParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::IntegerLiteralContext* BlazeParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 84, BlazeParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(533);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::DECIMAL_LITERAL)
      | (1ULL << BlazeParser::HEX_LITERAL)
      | (1ULL << BlazeParser::OCT_LITERAL)
      | (1ULL << BlazeParser::BINARY_LITERAL))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

BlazeParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::FloatLiteralContext::FLOAT_LITERAL() {
  return getToken(BlazeParser::FLOAT_LITERAL, 0);
}

tree::TerminalNode* BlazeParser::FloatLiteralContext::HEX_FLOAT_LITERAL() {
  return getToken(BlazeParser::HEX_FLOAT_LITERAL, 0);
}


size_t BlazeParser::FloatLiteralContext::getRuleIndex() const {
  return BlazeParser::RuleFloatLiteral;
}

void BlazeParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}

void BlazeParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}


antlrcpp::Any BlazeParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::FloatLiteralContext* BlazeParser::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 86, BlazeParser::RuleFloatLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(535);
    _la = _input->LA(1);
    if (!(_la == BlazeParser::FLOAT_LITERAL

    || _la == BlazeParser::HEX_FLOAT_LITERAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

BlazeParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::BlockContext::LBRACE() {
  return getToken(BlazeParser::LBRACE, 0);
}

tree::TerminalNode* BlazeParser::BlockContext::RBRACE() {
  return getToken(BlazeParser::RBRACE, 0);
}

std::vector<BlazeParser::BlockStatementContext *> BlazeParser::BlockContext::blockStatement() {
  return getRuleContexts<BlazeParser::BlockStatementContext>();
}

BlazeParser::BlockStatementContext* BlazeParser::BlockContext::blockStatement(size_t i) {
  return getRuleContext<BlazeParser::BlockStatementContext>(i);
}


size_t BlazeParser::BlockContext::getRuleIndex() const {
  return BlazeParser::RuleBlock;
}

void BlazeParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void BlazeParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any BlazeParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::BlockContext* BlazeParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 88, BlazeParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(537);
    match(BlazeParser::LBRACE);
    setState(541);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::ABSTRACT)
      | (1ULL << BlazeParser::ASSERT)
      | (1ULL << BlazeParser::BOOLEAN)
      | (1ULL << BlazeParser::BREAK)
      | (1ULL << BlazeParser::BYTE)
      | (1ULL << BlazeParser::CHAR)
      | (1ULL << BlazeParser::CLASS)
      | (1ULL << BlazeParser::CONTINUE)
      | (1ULL << BlazeParser::DO)
      | (1ULL << BlazeParser::DOUBLE)
      | (1ULL << BlazeParser::FINAL)
      | (1ULL << BlazeParser::FLOAT)
      | (1ULL << BlazeParser::FOR)
      | (1ULL << BlazeParser::IF)
      | (1ULL << BlazeParser::INT)
      | (1ULL << BlazeParser::INTERFACE)
      | (1ULL << BlazeParser::LONG)
      | (1ULL << BlazeParser::NEW)
      | (1ULL << BlazeParser::PRIVATE)
      | (1ULL << BlazeParser::PROTECTED)
      | (1ULL << BlazeParser::PUBLIC)
      | (1ULL << BlazeParser::RETURN)
      | (1ULL << BlazeParser::SHORT)
      | (1ULL << BlazeParser::STATIC)
      | (1ULL << BlazeParser::SUPER)
      | (1ULL << BlazeParser::SWITCH)
      | (1ULL << BlazeParser::SYNCHRONIZED)
      | (1ULL << BlazeParser::THIS)
      | (1ULL << BlazeParser::THROW)
      | (1ULL << BlazeParser::TRY)
      | (1ULL << BlazeParser::VOID)
      | (1ULL << BlazeParser::WHILE)
      | (1ULL << BlazeParser::DECIMAL_LITERAL)
      | (1ULL << BlazeParser::HEX_LITERAL)
      | (1ULL << BlazeParser::OCT_LITERAL)
      | (1ULL << BlazeParser::BINARY_LITERAL)
      | (1ULL << BlazeParser::FLOAT_LITERAL)
      | (1ULL << BlazeParser::HEX_FLOAT_LITERAL)
      | (1ULL << BlazeParser::BOOL_LITERAL)
      | (1ULL << BlazeParser::CHAR_LITERAL)
      | (1ULL << BlazeParser::STRING_LITERAL)
      | (1ULL << BlazeParser::NULL_LITERAL)
      | (1ULL << BlazeParser::LPAREN)
      | (1ULL << BlazeParser::LBRACE))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (BlazeParser::SEMI - 66))
      | (1ULL << (BlazeParser::BANG - 66))
      | (1ULL << (BlazeParser::TILDE - 66))
      | (1ULL << (BlazeParser::INC - 66))
      | (1ULL << (BlazeParser::DEC - 66))
      | (1ULL << (BlazeParser::ADD - 66))
      | (1ULL << (BlazeParser::SUB - 66))
      | (1ULL << (BlazeParser::IDENTIFIER - 66)))) != 0)) {
      setState(538);
      blockStatement();
      setState(543);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(544);
    match(BlazeParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementContext ------------------------------------------------------------------

BlazeParser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::LocalVariableDeclarationContext* BlazeParser::BlockStatementContext::localVariableDeclaration() {
  return getRuleContext<BlazeParser::LocalVariableDeclarationContext>(0);
}

tree::TerminalNode* BlazeParser::BlockStatementContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}

BlazeParser::StatementContext* BlazeParser::BlockStatementContext::statement() {
  return getRuleContext<BlazeParser::StatementContext>(0);
}

BlazeParser::LocalTypeDeclarationContext* BlazeParser::BlockStatementContext::localTypeDeclaration() {
  return getRuleContext<BlazeParser::LocalTypeDeclarationContext>(0);
}


size_t BlazeParser::BlockStatementContext::getRuleIndex() const {
  return BlazeParser::RuleBlockStatement;
}

void BlazeParser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatement(this);
}

void BlazeParser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatement(this);
}


antlrcpp::Any BlazeParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::BlockStatementContext* BlazeParser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 90, BlazeParser::RuleBlockStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(551);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(546);
      localVariableDeclaration();
      setState(547);
      match(BlazeParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(549);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(550);
      localTypeDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariableDeclarationContext ------------------------------------------------------------------

BlazeParser::LocalVariableDeclarationContext::LocalVariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::TypeTypeContext* BlazeParser::LocalVariableDeclarationContext::typeType() {
  return getRuleContext<BlazeParser::TypeTypeContext>(0);
}

BlazeParser::VariableDeclaratorsContext* BlazeParser::LocalVariableDeclarationContext::variableDeclarators() {
  return getRuleContext<BlazeParser::VariableDeclaratorsContext>(0);
}

std::vector<BlazeParser::VariableModifierContext *> BlazeParser::LocalVariableDeclarationContext::variableModifier() {
  return getRuleContexts<BlazeParser::VariableModifierContext>();
}

BlazeParser::VariableModifierContext* BlazeParser::LocalVariableDeclarationContext::variableModifier(size_t i) {
  return getRuleContext<BlazeParser::VariableModifierContext>(i);
}


size_t BlazeParser::LocalVariableDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleLocalVariableDeclaration;
}

void BlazeParser::LocalVariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalVariableDeclaration(this);
}

void BlazeParser::LocalVariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalVariableDeclaration(this);
}


antlrcpp::Any BlazeParser::LocalVariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitLocalVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::LocalVariableDeclarationContext* BlazeParser::localVariableDeclaration() {
  LocalVariableDeclarationContext *_localctx = _tracker.createInstance<LocalVariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 92, BlazeParser::RuleLocalVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::FINAL) {
      setState(553);
      variableModifier();
      setState(558);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(559);
    typeType();
    setState(560);
    variableDeclarators();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalTypeDeclarationContext ------------------------------------------------------------------

BlazeParser::LocalTypeDeclarationContext::LocalTypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::ClassDeclarationContext* BlazeParser::LocalTypeDeclarationContext::classDeclaration() {
  return getRuleContext<BlazeParser::ClassDeclarationContext>(0);
}

BlazeParser::InterfaceDeclarationContext* BlazeParser::LocalTypeDeclarationContext::interfaceDeclaration() {
  return getRuleContext<BlazeParser::InterfaceDeclarationContext>(0);
}

std::vector<BlazeParser::ClassOrInterfaceModifierContext *> BlazeParser::LocalTypeDeclarationContext::classOrInterfaceModifier() {
  return getRuleContexts<BlazeParser::ClassOrInterfaceModifierContext>();
}

BlazeParser::ClassOrInterfaceModifierContext* BlazeParser::LocalTypeDeclarationContext::classOrInterfaceModifier(size_t i) {
  return getRuleContext<BlazeParser::ClassOrInterfaceModifierContext>(i);
}

tree::TerminalNode* BlazeParser::LocalTypeDeclarationContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}


size_t BlazeParser::LocalTypeDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleLocalTypeDeclaration;
}

void BlazeParser::LocalTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalTypeDeclaration(this);
}

void BlazeParser::LocalTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalTypeDeclaration(this);
}


antlrcpp::Any BlazeParser::LocalTypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitLocalTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::LocalTypeDeclarationContext* BlazeParser::localTypeDeclaration() {
  LocalTypeDeclarationContext *_localctx = _tracker.createInstance<LocalTypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 94, BlazeParser::RuleLocalTypeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(573);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::ABSTRACT:
      case BlazeParser::CLASS:
      case BlazeParser::FINAL:
      case BlazeParser::INTERFACE:
      case BlazeParser::PRIVATE:
      case BlazeParser::PROTECTED:
      case BlazeParser::PUBLIC:
      case BlazeParser::STATIC: {
        enterOuterAlt(_localctx, 1);
        setState(565);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << BlazeParser::ABSTRACT)
          | (1ULL << BlazeParser::FINAL)
          | (1ULL << BlazeParser::PRIVATE)
          | (1ULL << BlazeParser::PROTECTED)
          | (1ULL << BlazeParser::PUBLIC)
          | (1ULL << BlazeParser::STATIC))) != 0)) {
          setState(562);
          classOrInterfaceModifier();
          setState(567);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(570);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case BlazeParser::CLASS: {
            setState(568);
            classDeclaration();
            break;
          }

          case BlazeParser::INTERFACE: {
            setState(569);
            interfaceDeclaration();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case BlazeParser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(572);
        match(BlazeParser::SEMI);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

BlazeParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::BlockContext* BlazeParser::StatementContext::block() {
  return getRuleContext<BlazeParser::BlockContext>(0);
}

tree::TerminalNode* BlazeParser::StatementContext::ASSERT() {
  return getToken(BlazeParser::ASSERT, 0);
}

std::vector<BlazeParser::ExpressionContext *> BlazeParser::StatementContext::expression() {
  return getRuleContexts<BlazeParser::ExpressionContext>();
}

BlazeParser::ExpressionContext* BlazeParser::StatementContext::expression(size_t i) {
  return getRuleContext<BlazeParser::ExpressionContext>(i);
}

tree::TerminalNode* BlazeParser::StatementContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::COLON() {
  return getToken(BlazeParser::COLON, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::IF() {
  return getToken(BlazeParser::IF, 0);
}

BlazeParser::ParExpressionContext* BlazeParser::StatementContext::parExpression() {
  return getRuleContext<BlazeParser::ParExpressionContext>(0);
}

std::vector<BlazeParser::StatementContext *> BlazeParser::StatementContext::statement() {
  return getRuleContexts<BlazeParser::StatementContext>();
}

BlazeParser::StatementContext* BlazeParser::StatementContext::statement(size_t i) {
  return getRuleContext<BlazeParser::StatementContext>(i);
}

tree::TerminalNode* BlazeParser::StatementContext::ELSE() {
  return getToken(BlazeParser::ELSE, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::FOR() {
  return getToken(BlazeParser::FOR, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::LPAREN() {
  return getToken(BlazeParser::LPAREN, 0);
}

BlazeParser::ForControlContext* BlazeParser::StatementContext::forControl() {
  return getRuleContext<BlazeParser::ForControlContext>(0);
}

tree::TerminalNode* BlazeParser::StatementContext::RPAREN() {
  return getToken(BlazeParser::RPAREN, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::WHILE() {
  return getToken(BlazeParser::WHILE, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::DO() {
  return getToken(BlazeParser::DO, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::TRY() {
  return getToken(BlazeParser::TRY, 0);
}

BlazeParser::FinallyBlockContext* BlazeParser::StatementContext::finallyBlock() {
  return getRuleContext<BlazeParser::FinallyBlockContext>(0);
}

std::vector<BlazeParser::CatchClauseContext *> BlazeParser::StatementContext::catchClause() {
  return getRuleContexts<BlazeParser::CatchClauseContext>();
}

BlazeParser::CatchClauseContext* BlazeParser::StatementContext::catchClause(size_t i) {
  return getRuleContext<BlazeParser::CatchClauseContext>(i);
}

BlazeParser::ResourceSpecificationContext* BlazeParser::StatementContext::resourceSpecification() {
  return getRuleContext<BlazeParser::ResourceSpecificationContext>(0);
}

tree::TerminalNode* BlazeParser::StatementContext::SWITCH() {
  return getToken(BlazeParser::SWITCH, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::LBRACE() {
  return getToken(BlazeParser::LBRACE, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::RBRACE() {
  return getToken(BlazeParser::RBRACE, 0);
}

std::vector<BlazeParser::SwitchBlockStatementGroupContext *> BlazeParser::StatementContext::switchBlockStatementGroup() {
  return getRuleContexts<BlazeParser::SwitchBlockStatementGroupContext>();
}

BlazeParser::SwitchBlockStatementGroupContext* BlazeParser::StatementContext::switchBlockStatementGroup(size_t i) {
  return getRuleContext<BlazeParser::SwitchBlockStatementGroupContext>(i);
}

std::vector<BlazeParser::SwitchLabelContext *> BlazeParser::StatementContext::switchLabel() {
  return getRuleContexts<BlazeParser::SwitchLabelContext>();
}

BlazeParser::SwitchLabelContext* BlazeParser::StatementContext::switchLabel(size_t i) {
  return getRuleContext<BlazeParser::SwitchLabelContext>(i);
}

tree::TerminalNode* BlazeParser::StatementContext::SYNCHRONIZED() {
  return getToken(BlazeParser::SYNCHRONIZED, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::RETURN() {
  return getToken(BlazeParser::RETURN, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::THROW() {
  return getToken(BlazeParser::THROW, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::BREAK() {
  return getToken(BlazeParser::BREAK, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

tree::TerminalNode* BlazeParser::StatementContext::CONTINUE() {
  return getToken(BlazeParser::CONTINUE, 0);
}


size_t BlazeParser::StatementContext::getRuleIndex() const {
  return BlazeParser::RuleStatement;
}

void BlazeParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void BlazeParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any BlazeParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::StatementContext* BlazeParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 96, BlazeParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(679);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(575);
      dynamic_cast<StatementContext *>(_localctx)->blockLabel = block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(576);
      match(BlazeParser::ASSERT);
      setState(577);
      expression(0);
      setState(580);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::COLON) {
        setState(578);
        match(BlazeParser::COLON);
        setState(579);
        expression(0);
      }
      setState(582);
      match(BlazeParser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(584);
      match(BlazeParser::IF);
      setState(585);
      parExpression();
      setState(586);
      statement();
      setState(589);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
      case 1: {
        setState(587);
        match(BlazeParser::ELSE);
        setState(588);
        statement();
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(591);
      match(BlazeParser::FOR);
      setState(592);
      match(BlazeParser::LPAREN);
      setState(593);
      forControl();
      setState(594);
      match(BlazeParser::RPAREN);
      setState(595);
      statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(597);
      match(BlazeParser::WHILE);
      setState(598);
      parExpression();
      setState(599);
      statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(601);
      match(BlazeParser::DO);
      setState(602);
      statement();
      setState(603);
      match(BlazeParser::WHILE);
      setState(604);
      parExpression();
      setState(605);
      match(BlazeParser::SEMI);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(607);
      match(BlazeParser::TRY);
      setState(608);
      block();
      setState(618);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BlazeParser::CATCH: {
          setState(610); 
          _errHandler->sync(this);
          _la = _input->LA(1);
          do {
            setState(609);
            catchClause();
            setState(612); 
            _errHandler->sync(this);
            _la = _input->LA(1);
          } while (_la == BlazeParser::CATCH);
          setState(615);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == BlazeParser::FINALLY) {
            setState(614);
            finallyBlock();
          }
          break;
        }

        case BlazeParser::FINALLY: {
          setState(617);
          finallyBlock();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(620);
      match(BlazeParser::TRY);
      setState(621);
      resourceSpecification();
      setState(622);
      block();
      setState(626);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BlazeParser::CATCH) {
        setState(623);
        catchClause();
        setState(628);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(630);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::FINALLY) {
        setState(629);
        finallyBlock();
      }
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(632);
      match(BlazeParser::SWITCH);
      setState(633);
      parExpression();
      setState(634);
      match(BlazeParser::LBRACE);
      setState(638);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(635);
          switchBlockStatementGroup(); 
        }
        setState(640);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
      }
      setState(644);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BlazeParser::CASE

      || _la == BlazeParser::DEFAULT) {
        setState(641);
        switchLabel();
        setState(646);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(647);
      match(BlazeParser::RBRACE);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(649);
      match(BlazeParser::SYNCHRONIZED);
      setState(650);
      parExpression();
      setState(651);
      block();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(653);
      match(BlazeParser::RETURN);
      setState(655);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << BlazeParser::BOOLEAN)
        | (1ULL << BlazeParser::BYTE)
        | (1ULL << BlazeParser::CHAR)
        | (1ULL << BlazeParser::DOUBLE)
        | (1ULL << BlazeParser::FLOAT)
        | (1ULL << BlazeParser::INT)
        | (1ULL << BlazeParser::LONG)
        | (1ULL << BlazeParser::NEW)
        | (1ULL << BlazeParser::SHORT)
        | (1ULL << BlazeParser::SUPER)
        | (1ULL << BlazeParser::THIS)
        | (1ULL << BlazeParser::VOID)
        | (1ULL << BlazeParser::DECIMAL_LITERAL)
        | (1ULL << BlazeParser::HEX_LITERAL)
        | (1ULL << BlazeParser::OCT_LITERAL)
        | (1ULL << BlazeParser::BINARY_LITERAL)
        | (1ULL << BlazeParser::FLOAT_LITERAL)
        | (1ULL << BlazeParser::HEX_FLOAT_LITERAL)
        | (1ULL << BlazeParser::BOOL_LITERAL)
        | (1ULL << BlazeParser::CHAR_LITERAL)
        | (1ULL << BlazeParser::STRING_LITERAL)
        | (1ULL << BlazeParser::NULL_LITERAL)
        | (1ULL << BlazeParser::LPAREN))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::BANG - 72))
        | (1ULL << (BlazeParser::TILDE - 72))
        | (1ULL << (BlazeParser::INC - 72))
        | (1ULL << (BlazeParser::DEC - 72))
        | (1ULL << (BlazeParser::ADD - 72))
        | (1ULL << (BlazeParser::SUB - 72))
        | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
        setState(654);
        expression(0);
      }
      setState(657);
      match(BlazeParser::SEMI);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(658);
      match(BlazeParser::THROW);
      setState(659);
      expression(0);
      setState(660);
      match(BlazeParser::SEMI);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(662);
      match(BlazeParser::BREAK);
      setState(664);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::IDENTIFIER) {
        setState(663);
        match(BlazeParser::IDENTIFIER);
      }
      setState(666);
      match(BlazeParser::SEMI);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(667);
      match(BlazeParser::CONTINUE);
      setState(669);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::IDENTIFIER) {
        setState(668);
        match(BlazeParser::IDENTIFIER);
      }
      setState(671);
      match(BlazeParser::SEMI);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(672);
      match(BlazeParser::SEMI);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(673);
      dynamic_cast<StatementContext *>(_localctx)->statementExpression = expression(0);
      setState(674);
      match(BlazeParser::SEMI);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(676);
      dynamic_cast<StatementContext *>(_localctx)->identifierLabel = match(BlazeParser::IDENTIFIER);
      setState(677);
      match(BlazeParser::COLON);
      setState(678);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchClauseContext ------------------------------------------------------------------

BlazeParser::CatchClauseContext::CatchClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::CatchClauseContext::CATCH() {
  return getToken(BlazeParser::CATCH, 0);
}

tree::TerminalNode* BlazeParser::CatchClauseContext::LPAREN() {
  return getToken(BlazeParser::LPAREN, 0);
}

BlazeParser::CatchTypeContext* BlazeParser::CatchClauseContext::catchType() {
  return getRuleContext<BlazeParser::CatchTypeContext>(0);
}

tree::TerminalNode* BlazeParser::CatchClauseContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

tree::TerminalNode* BlazeParser::CatchClauseContext::RPAREN() {
  return getToken(BlazeParser::RPAREN, 0);
}

BlazeParser::BlockContext* BlazeParser::CatchClauseContext::block() {
  return getRuleContext<BlazeParser::BlockContext>(0);
}

std::vector<BlazeParser::VariableModifierContext *> BlazeParser::CatchClauseContext::variableModifier() {
  return getRuleContexts<BlazeParser::VariableModifierContext>();
}

BlazeParser::VariableModifierContext* BlazeParser::CatchClauseContext::variableModifier(size_t i) {
  return getRuleContext<BlazeParser::VariableModifierContext>(i);
}


size_t BlazeParser::CatchClauseContext::getRuleIndex() const {
  return BlazeParser::RuleCatchClause;
}

void BlazeParser::CatchClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchClause(this);
}

void BlazeParser::CatchClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchClause(this);
}


antlrcpp::Any BlazeParser::CatchClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitCatchClause(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::CatchClauseContext* BlazeParser::catchClause() {
  CatchClauseContext *_localctx = _tracker.createInstance<CatchClauseContext>(_ctx, getState());
  enterRule(_localctx, 98, BlazeParser::RuleCatchClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(681);
    match(BlazeParser::CATCH);
    setState(682);
    match(BlazeParser::LPAREN);
    setState(686);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::FINAL) {
      setState(683);
      variableModifier();
      setState(688);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(689);
    catchType();
    setState(690);
    match(BlazeParser::IDENTIFIER);
    setState(691);
    match(BlazeParser::RPAREN);
    setState(692);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchTypeContext ------------------------------------------------------------------

BlazeParser::CatchTypeContext::CatchTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BlazeParser::QualifiedNameContext *> BlazeParser::CatchTypeContext::qualifiedName() {
  return getRuleContexts<BlazeParser::QualifiedNameContext>();
}

BlazeParser::QualifiedNameContext* BlazeParser::CatchTypeContext::qualifiedName(size_t i) {
  return getRuleContext<BlazeParser::QualifiedNameContext>(i);
}

std::vector<tree::TerminalNode *> BlazeParser::CatchTypeContext::BITOR() {
  return getTokens(BlazeParser::BITOR);
}

tree::TerminalNode* BlazeParser::CatchTypeContext::BITOR(size_t i) {
  return getToken(BlazeParser::BITOR, i);
}


size_t BlazeParser::CatchTypeContext::getRuleIndex() const {
  return BlazeParser::RuleCatchType;
}

void BlazeParser::CatchTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchType(this);
}

void BlazeParser::CatchTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchType(this);
}


antlrcpp::Any BlazeParser::CatchTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitCatchType(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::CatchTypeContext* BlazeParser::catchType() {
  CatchTypeContext *_localctx = _tracker.createInstance<CatchTypeContext>(_ctx, getState());
  enterRule(_localctx, 100, BlazeParser::RuleCatchType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(694);
    qualifiedName();
    setState(699);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::BITOR) {
      setState(695);
      match(BlazeParser::BITOR);
      setState(696);
      qualifiedName();
      setState(701);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FinallyBlockContext ------------------------------------------------------------------

BlazeParser::FinallyBlockContext::FinallyBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::FinallyBlockContext::FINALLY() {
  return getToken(BlazeParser::FINALLY, 0);
}

BlazeParser::BlockContext* BlazeParser::FinallyBlockContext::block() {
  return getRuleContext<BlazeParser::BlockContext>(0);
}


size_t BlazeParser::FinallyBlockContext::getRuleIndex() const {
  return BlazeParser::RuleFinallyBlock;
}

void BlazeParser::FinallyBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinallyBlock(this);
}

void BlazeParser::FinallyBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinallyBlock(this);
}


antlrcpp::Any BlazeParser::FinallyBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitFinallyBlock(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::FinallyBlockContext* BlazeParser::finallyBlock() {
  FinallyBlockContext *_localctx = _tracker.createInstance<FinallyBlockContext>(_ctx, getState());
  enterRule(_localctx, 102, BlazeParser::RuleFinallyBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(702);
    match(BlazeParser::FINALLY);
    setState(703);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceSpecificationContext ------------------------------------------------------------------

BlazeParser::ResourceSpecificationContext::ResourceSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ResourceSpecificationContext::LPAREN() {
  return getToken(BlazeParser::LPAREN, 0);
}

BlazeParser::ResourcesContext* BlazeParser::ResourceSpecificationContext::resources() {
  return getRuleContext<BlazeParser::ResourcesContext>(0);
}

tree::TerminalNode* BlazeParser::ResourceSpecificationContext::RPAREN() {
  return getToken(BlazeParser::RPAREN, 0);
}

tree::TerminalNode* BlazeParser::ResourceSpecificationContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}


size_t BlazeParser::ResourceSpecificationContext::getRuleIndex() const {
  return BlazeParser::RuleResourceSpecification;
}

void BlazeParser::ResourceSpecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourceSpecification(this);
}

void BlazeParser::ResourceSpecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourceSpecification(this);
}


antlrcpp::Any BlazeParser::ResourceSpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitResourceSpecification(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ResourceSpecificationContext* BlazeParser::resourceSpecification() {
  ResourceSpecificationContext *_localctx = _tracker.createInstance<ResourceSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 104, BlazeParser::RuleResourceSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(705);
    match(BlazeParser::LPAREN);
    setState(706);
    resources();
    setState(708);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::SEMI) {
      setState(707);
      match(BlazeParser::SEMI);
    }
    setState(710);
    match(BlazeParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourcesContext ------------------------------------------------------------------

BlazeParser::ResourcesContext::ResourcesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BlazeParser::ResourceContext *> BlazeParser::ResourcesContext::resource() {
  return getRuleContexts<BlazeParser::ResourceContext>();
}

BlazeParser::ResourceContext* BlazeParser::ResourcesContext::resource(size_t i) {
  return getRuleContext<BlazeParser::ResourceContext>(i);
}

std::vector<tree::TerminalNode *> BlazeParser::ResourcesContext::SEMI() {
  return getTokens(BlazeParser::SEMI);
}

tree::TerminalNode* BlazeParser::ResourcesContext::SEMI(size_t i) {
  return getToken(BlazeParser::SEMI, i);
}


size_t BlazeParser::ResourcesContext::getRuleIndex() const {
  return BlazeParser::RuleResources;
}

void BlazeParser::ResourcesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResources(this);
}

void BlazeParser::ResourcesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResources(this);
}


antlrcpp::Any BlazeParser::ResourcesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitResources(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ResourcesContext* BlazeParser::resources() {
  ResourcesContext *_localctx = _tracker.createInstance<ResourcesContext>(_ctx, getState());
  enterRule(_localctx, 106, BlazeParser::RuleResources);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(712);
    resource();
    setState(717);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(713);
        match(BlazeParser::SEMI);
        setState(714);
        resource(); 
      }
      setState(719);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceContext ------------------------------------------------------------------

BlazeParser::ResourceContext::ResourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::ClassOrInterfaceTypeContext* BlazeParser::ResourceContext::classOrInterfaceType() {
  return getRuleContext<BlazeParser::ClassOrInterfaceTypeContext>(0);
}

BlazeParser::VariableDeclaratorIdContext* BlazeParser::ResourceContext::variableDeclaratorId() {
  return getRuleContext<BlazeParser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode* BlazeParser::ResourceContext::ASSIGN() {
  return getToken(BlazeParser::ASSIGN, 0);
}

BlazeParser::ExpressionContext* BlazeParser::ResourceContext::expression() {
  return getRuleContext<BlazeParser::ExpressionContext>(0);
}

std::vector<BlazeParser::VariableModifierContext *> BlazeParser::ResourceContext::variableModifier() {
  return getRuleContexts<BlazeParser::VariableModifierContext>();
}

BlazeParser::VariableModifierContext* BlazeParser::ResourceContext::variableModifier(size_t i) {
  return getRuleContext<BlazeParser::VariableModifierContext>(i);
}


size_t BlazeParser::ResourceContext::getRuleIndex() const {
  return BlazeParser::RuleResource;
}

void BlazeParser::ResourceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResource(this);
}

void BlazeParser::ResourceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResource(this);
}


antlrcpp::Any BlazeParser::ResourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitResource(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ResourceContext* BlazeParser::resource() {
  ResourceContext *_localctx = _tracker.createInstance<ResourceContext>(_ctx, getState());
  enterRule(_localctx, 108, BlazeParser::RuleResource);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(723);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::FINAL) {
      setState(720);
      variableModifier();
      setState(725);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(726);
    classOrInterfaceType();
    setState(727);
    variableDeclaratorId();
    setState(728);
    match(BlazeParser::ASSIGN);
    setState(729);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockStatementGroupContext ------------------------------------------------------------------

BlazeParser::SwitchBlockStatementGroupContext::SwitchBlockStatementGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BlazeParser::SwitchLabelContext *> BlazeParser::SwitchBlockStatementGroupContext::switchLabel() {
  return getRuleContexts<BlazeParser::SwitchLabelContext>();
}

BlazeParser::SwitchLabelContext* BlazeParser::SwitchBlockStatementGroupContext::switchLabel(size_t i) {
  return getRuleContext<BlazeParser::SwitchLabelContext>(i);
}

std::vector<BlazeParser::BlockStatementContext *> BlazeParser::SwitchBlockStatementGroupContext::blockStatement() {
  return getRuleContexts<BlazeParser::BlockStatementContext>();
}

BlazeParser::BlockStatementContext* BlazeParser::SwitchBlockStatementGroupContext::blockStatement(size_t i) {
  return getRuleContext<BlazeParser::BlockStatementContext>(i);
}


size_t BlazeParser::SwitchBlockStatementGroupContext::getRuleIndex() const {
  return BlazeParser::RuleSwitchBlockStatementGroup;
}

void BlazeParser::SwitchBlockStatementGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchBlockStatementGroup(this);
}

void BlazeParser::SwitchBlockStatementGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchBlockStatementGroup(this);
}


antlrcpp::Any BlazeParser::SwitchBlockStatementGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitSwitchBlockStatementGroup(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::SwitchBlockStatementGroupContext* BlazeParser::switchBlockStatementGroup() {
  SwitchBlockStatementGroupContext *_localctx = _tracker.createInstance<SwitchBlockStatementGroupContext>(_ctx, getState());
  enterRule(_localctx, 110, BlazeParser::RuleSwitchBlockStatementGroup);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(732); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(731);
      switchLabel();
      setState(734); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BlazeParser::CASE

    || _la == BlazeParser::DEFAULT);
    setState(737); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(736);
      blockStatement();
      setState(739); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::ABSTRACT)
      | (1ULL << BlazeParser::ASSERT)
      | (1ULL << BlazeParser::BOOLEAN)
      | (1ULL << BlazeParser::BREAK)
      | (1ULL << BlazeParser::BYTE)
      | (1ULL << BlazeParser::CHAR)
      | (1ULL << BlazeParser::CLASS)
      | (1ULL << BlazeParser::CONTINUE)
      | (1ULL << BlazeParser::DO)
      | (1ULL << BlazeParser::DOUBLE)
      | (1ULL << BlazeParser::FINAL)
      | (1ULL << BlazeParser::FLOAT)
      | (1ULL << BlazeParser::FOR)
      | (1ULL << BlazeParser::IF)
      | (1ULL << BlazeParser::INT)
      | (1ULL << BlazeParser::INTERFACE)
      | (1ULL << BlazeParser::LONG)
      | (1ULL << BlazeParser::NEW)
      | (1ULL << BlazeParser::PRIVATE)
      | (1ULL << BlazeParser::PROTECTED)
      | (1ULL << BlazeParser::PUBLIC)
      | (1ULL << BlazeParser::RETURN)
      | (1ULL << BlazeParser::SHORT)
      | (1ULL << BlazeParser::STATIC)
      | (1ULL << BlazeParser::SUPER)
      | (1ULL << BlazeParser::SWITCH)
      | (1ULL << BlazeParser::SYNCHRONIZED)
      | (1ULL << BlazeParser::THIS)
      | (1ULL << BlazeParser::THROW)
      | (1ULL << BlazeParser::TRY)
      | (1ULL << BlazeParser::VOID)
      | (1ULL << BlazeParser::WHILE)
      | (1ULL << BlazeParser::DECIMAL_LITERAL)
      | (1ULL << BlazeParser::HEX_LITERAL)
      | (1ULL << BlazeParser::OCT_LITERAL)
      | (1ULL << BlazeParser::BINARY_LITERAL)
      | (1ULL << BlazeParser::FLOAT_LITERAL)
      | (1ULL << BlazeParser::HEX_FLOAT_LITERAL)
      | (1ULL << BlazeParser::BOOL_LITERAL)
      | (1ULL << BlazeParser::CHAR_LITERAL)
      | (1ULL << BlazeParser::STRING_LITERAL)
      | (1ULL << BlazeParser::NULL_LITERAL)
      | (1ULL << BlazeParser::LPAREN)
      | (1ULL << BlazeParser::LBRACE))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (BlazeParser::SEMI - 66))
      | (1ULL << (BlazeParser::BANG - 66))
      | (1ULL << (BlazeParser::TILDE - 66))
      | (1ULL << (BlazeParser::INC - 66))
      | (1ULL << (BlazeParser::DEC - 66))
      | (1ULL << (BlazeParser::ADD - 66))
      | (1ULL << (BlazeParser::SUB - 66))
      | (1ULL << (BlazeParser::IDENTIFIER - 66)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchLabelContext ------------------------------------------------------------------

BlazeParser::SwitchLabelContext::SwitchLabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::SwitchLabelContext::CASE() {
  return getToken(BlazeParser::CASE, 0);
}

tree::TerminalNode* BlazeParser::SwitchLabelContext::COLON() {
  return getToken(BlazeParser::COLON, 0);
}

BlazeParser::ExpressionContext* BlazeParser::SwitchLabelContext::expression() {
  return getRuleContext<BlazeParser::ExpressionContext>(0);
}

tree::TerminalNode* BlazeParser::SwitchLabelContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

tree::TerminalNode* BlazeParser::SwitchLabelContext::DEFAULT() {
  return getToken(BlazeParser::DEFAULT, 0);
}


size_t BlazeParser::SwitchLabelContext::getRuleIndex() const {
  return BlazeParser::RuleSwitchLabel;
}

void BlazeParser::SwitchLabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchLabel(this);
}

void BlazeParser::SwitchLabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchLabel(this);
}


antlrcpp::Any BlazeParser::SwitchLabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitSwitchLabel(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::SwitchLabelContext* BlazeParser::switchLabel() {
  SwitchLabelContext *_localctx = _tracker.createInstance<SwitchLabelContext>(_ctx, getState());
  enterRule(_localctx, 112, BlazeParser::RuleSwitchLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(749);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::CASE: {
        enterOuterAlt(_localctx, 1);
        setState(741);
        match(BlazeParser::CASE);
        setState(744);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
        case 1: {
          setState(742);
          dynamic_cast<SwitchLabelContext *>(_localctx)->constantExpression = expression(0);
          break;
        }

        case 2: {
          setState(743);
          dynamic_cast<SwitchLabelContext *>(_localctx)->enumConstantName = match(BlazeParser::IDENTIFIER);
          break;
        }

        }
        setState(746);
        match(BlazeParser::COLON);
        break;
      }

      case BlazeParser::DEFAULT: {
        enterOuterAlt(_localctx, 2);
        setState(747);
        match(BlazeParser::DEFAULT);
        setState(748);
        match(BlazeParser::COLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForControlContext ------------------------------------------------------------------

BlazeParser::ForControlContext::ForControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::EnhancedForControlContext* BlazeParser::ForControlContext::enhancedForControl() {
  return getRuleContext<BlazeParser::EnhancedForControlContext>(0);
}

std::vector<tree::TerminalNode *> BlazeParser::ForControlContext::SEMI() {
  return getTokens(BlazeParser::SEMI);
}

tree::TerminalNode* BlazeParser::ForControlContext::SEMI(size_t i) {
  return getToken(BlazeParser::SEMI, i);
}

BlazeParser::ForInitContext* BlazeParser::ForControlContext::forInit() {
  return getRuleContext<BlazeParser::ForInitContext>(0);
}

BlazeParser::ExpressionContext* BlazeParser::ForControlContext::expression() {
  return getRuleContext<BlazeParser::ExpressionContext>(0);
}

BlazeParser::ExpressionListContext* BlazeParser::ForControlContext::expressionList() {
  return getRuleContext<BlazeParser::ExpressionListContext>(0);
}


size_t BlazeParser::ForControlContext::getRuleIndex() const {
  return BlazeParser::RuleForControl;
}

void BlazeParser::ForControlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForControl(this);
}

void BlazeParser::ForControlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForControl(this);
}


antlrcpp::Any BlazeParser::ForControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitForControl(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ForControlContext* BlazeParser::forControl() {
  ForControlContext *_localctx = _tracker.createInstance<ForControlContext>(_ctx, getState());
  enterRule(_localctx, 114, BlazeParser::RuleForControl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(763);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(751);
      enhancedForControl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(753);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << BlazeParser::BOOLEAN)
        | (1ULL << BlazeParser::BYTE)
        | (1ULL << BlazeParser::CHAR)
        | (1ULL << BlazeParser::DOUBLE)
        | (1ULL << BlazeParser::FINAL)
        | (1ULL << BlazeParser::FLOAT)
        | (1ULL << BlazeParser::INT)
        | (1ULL << BlazeParser::LONG)
        | (1ULL << BlazeParser::NEW)
        | (1ULL << BlazeParser::SHORT)
        | (1ULL << BlazeParser::SUPER)
        | (1ULL << BlazeParser::THIS)
        | (1ULL << BlazeParser::VOID)
        | (1ULL << BlazeParser::DECIMAL_LITERAL)
        | (1ULL << BlazeParser::HEX_LITERAL)
        | (1ULL << BlazeParser::OCT_LITERAL)
        | (1ULL << BlazeParser::BINARY_LITERAL)
        | (1ULL << BlazeParser::FLOAT_LITERAL)
        | (1ULL << BlazeParser::HEX_FLOAT_LITERAL)
        | (1ULL << BlazeParser::BOOL_LITERAL)
        | (1ULL << BlazeParser::CHAR_LITERAL)
        | (1ULL << BlazeParser::STRING_LITERAL)
        | (1ULL << BlazeParser::NULL_LITERAL)
        | (1ULL << BlazeParser::LPAREN))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::BANG - 72))
        | (1ULL << (BlazeParser::TILDE - 72))
        | (1ULL << (BlazeParser::INC - 72))
        | (1ULL << (BlazeParser::DEC - 72))
        | (1ULL << (BlazeParser::ADD - 72))
        | (1ULL << (BlazeParser::SUB - 72))
        | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
        setState(752);
        forInit();
      }
      setState(755);
      match(BlazeParser::SEMI);
      setState(757);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << BlazeParser::BOOLEAN)
        | (1ULL << BlazeParser::BYTE)
        | (1ULL << BlazeParser::CHAR)
        | (1ULL << BlazeParser::DOUBLE)
        | (1ULL << BlazeParser::FLOAT)
        | (1ULL << BlazeParser::INT)
        | (1ULL << BlazeParser::LONG)
        | (1ULL << BlazeParser::NEW)
        | (1ULL << BlazeParser::SHORT)
        | (1ULL << BlazeParser::SUPER)
        | (1ULL << BlazeParser::THIS)
        | (1ULL << BlazeParser::VOID)
        | (1ULL << BlazeParser::DECIMAL_LITERAL)
        | (1ULL << BlazeParser::HEX_LITERAL)
        | (1ULL << BlazeParser::OCT_LITERAL)
        | (1ULL << BlazeParser::BINARY_LITERAL)
        | (1ULL << BlazeParser::FLOAT_LITERAL)
        | (1ULL << BlazeParser::HEX_FLOAT_LITERAL)
        | (1ULL << BlazeParser::BOOL_LITERAL)
        | (1ULL << BlazeParser::CHAR_LITERAL)
        | (1ULL << BlazeParser::STRING_LITERAL)
        | (1ULL << BlazeParser::NULL_LITERAL)
        | (1ULL << BlazeParser::LPAREN))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::BANG - 72))
        | (1ULL << (BlazeParser::TILDE - 72))
        | (1ULL << (BlazeParser::INC - 72))
        | (1ULL << (BlazeParser::DEC - 72))
        | (1ULL << (BlazeParser::ADD - 72))
        | (1ULL << (BlazeParser::SUB - 72))
        | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
        setState(756);
        expression(0);
      }
      setState(759);
      match(BlazeParser::SEMI);
      setState(761);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << BlazeParser::BOOLEAN)
        | (1ULL << BlazeParser::BYTE)
        | (1ULL << BlazeParser::CHAR)
        | (1ULL << BlazeParser::DOUBLE)
        | (1ULL << BlazeParser::FLOAT)
        | (1ULL << BlazeParser::INT)
        | (1ULL << BlazeParser::LONG)
        | (1ULL << BlazeParser::NEW)
        | (1ULL << BlazeParser::SHORT)
        | (1ULL << BlazeParser::SUPER)
        | (1ULL << BlazeParser::THIS)
        | (1ULL << BlazeParser::VOID)
        | (1ULL << BlazeParser::DECIMAL_LITERAL)
        | (1ULL << BlazeParser::HEX_LITERAL)
        | (1ULL << BlazeParser::OCT_LITERAL)
        | (1ULL << BlazeParser::BINARY_LITERAL)
        | (1ULL << BlazeParser::FLOAT_LITERAL)
        | (1ULL << BlazeParser::HEX_FLOAT_LITERAL)
        | (1ULL << BlazeParser::BOOL_LITERAL)
        | (1ULL << BlazeParser::CHAR_LITERAL)
        | (1ULL << BlazeParser::STRING_LITERAL)
        | (1ULL << BlazeParser::NULL_LITERAL)
        | (1ULL << BlazeParser::LPAREN))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::BANG - 72))
        | (1ULL << (BlazeParser::TILDE - 72))
        | (1ULL << (BlazeParser::INC - 72))
        | (1ULL << (BlazeParser::DEC - 72))
        | (1ULL << (BlazeParser::ADD - 72))
        | (1ULL << (BlazeParser::SUB - 72))
        | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
        setState(760);
        dynamic_cast<ForControlContext *>(_localctx)->forUpdate = expressionList();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitContext ------------------------------------------------------------------

BlazeParser::ForInitContext::ForInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::LocalVariableDeclarationContext* BlazeParser::ForInitContext::localVariableDeclaration() {
  return getRuleContext<BlazeParser::LocalVariableDeclarationContext>(0);
}

BlazeParser::ExpressionListContext* BlazeParser::ForInitContext::expressionList() {
  return getRuleContext<BlazeParser::ExpressionListContext>(0);
}


size_t BlazeParser::ForInitContext::getRuleIndex() const {
  return BlazeParser::RuleForInit;
}

void BlazeParser::ForInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInit(this);
}

void BlazeParser::ForInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInit(this);
}


antlrcpp::Any BlazeParser::ForInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitForInit(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ForInitContext* BlazeParser::forInit() {
  ForInitContext *_localctx = _tracker.createInstance<ForInitContext>(_ctx, getState());
  enterRule(_localctx, 116, BlazeParser::RuleForInit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(767);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(765);
      localVariableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(766);
      expressionList();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnhancedForControlContext ------------------------------------------------------------------

BlazeParser::EnhancedForControlContext::EnhancedForControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::TypeTypeContext* BlazeParser::EnhancedForControlContext::typeType() {
  return getRuleContext<BlazeParser::TypeTypeContext>(0);
}

BlazeParser::VariableDeclaratorIdContext* BlazeParser::EnhancedForControlContext::variableDeclaratorId() {
  return getRuleContext<BlazeParser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode* BlazeParser::EnhancedForControlContext::COLON() {
  return getToken(BlazeParser::COLON, 0);
}

BlazeParser::ExpressionContext* BlazeParser::EnhancedForControlContext::expression() {
  return getRuleContext<BlazeParser::ExpressionContext>(0);
}

std::vector<BlazeParser::VariableModifierContext *> BlazeParser::EnhancedForControlContext::variableModifier() {
  return getRuleContexts<BlazeParser::VariableModifierContext>();
}

BlazeParser::VariableModifierContext* BlazeParser::EnhancedForControlContext::variableModifier(size_t i) {
  return getRuleContext<BlazeParser::VariableModifierContext>(i);
}


size_t BlazeParser::EnhancedForControlContext::getRuleIndex() const {
  return BlazeParser::RuleEnhancedForControl;
}

void BlazeParser::EnhancedForControlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnhancedForControl(this);
}

void BlazeParser::EnhancedForControlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnhancedForControl(this);
}


antlrcpp::Any BlazeParser::EnhancedForControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitEnhancedForControl(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::EnhancedForControlContext* BlazeParser::enhancedForControl() {
  EnhancedForControlContext *_localctx = _tracker.createInstance<EnhancedForControlContext>(_ctx, getState());
  enterRule(_localctx, 118, BlazeParser::RuleEnhancedForControl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(772);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::FINAL) {
      setState(769);
      variableModifier();
      setState(774);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(775);
    typeType();
    setState(776);
    variableDeclaratorId();
    setState(777);
    match(BlazeParser::COLON);
    setState(778);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParExpressionContext ------------------------------------------------------------------

BlazeParser::ParExpressionContext::ParExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ParExpressionContext::LPAREN() {
  return getToken(BlazeParser::LPAREN, 0);
}

BlazeParser::ExpressionContext* BlazeParser::ParExpressionContext::expression() {
  return getRuleContext<BlazeParser::ExpressionContext>(0);
}

tree::TerminalNode* BlazeParser::ParExpressionContext::RPAREN() {
  return getToken(BlazeParser::RPAREN, 0);
}


size_t BlazeParser::ParExpressionContext::getRuleIndex() const {
  return BlazeParser::RuleParExpression;
}

void BlazeParser::ParExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParExpression(this);
}

void BlazeParser::ParExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParExpression(this);
}


antlrcpp::Any BlazeParser::ParExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitParExpression(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ParExpressionContext* BlazeParser::parExpression() {
  ParExpressionContext *_localctx = _tracker.createInstance<ParExpressionContext>(_ctx, getState());
  enterRule(_localctx, 120, BlazeParser::RuleParExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(780);
    match(BlazeParser::LPAREN);
    setState(781);
    expression(0);
    setState(782);
    match(BlazeParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

BlazeParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BlazeParser::ExpressionContext *> BlazeParser::ExpressionListContext::expression() {
  return getRuleContexts<BlazeParser::ExpressionContext>();
}

BlazeParser::ExpressionContext* BlazeParser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<BlazeParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> BlazeParser::ExpressionListContext::COMMA() {
  return getTokens(BlazeParser::COMMA);
}

tree::TerminalNode* BlazeParser::ExpressionListContext::COMMA(size_t i) {
  return getToken(BlazeParser::COMMA, i);
}


size_t BlazeParser::ExpressionListContext::getRuleIndex() const {
  return BlazeParser::RuleExpressionList;
}

void BlazeParser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void BlazeParser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}


antlrcpp::Any BlazeParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ExpressionListContext* BlazeParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 122, BlazeParser::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(784);
    expression(0);
    setState(789);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::COMMA) {
      setState(785);
      match(BlazeParser::COMMA);
      setState(786);
      expression(0);
      setState(791);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCallContext ------------------------------------------------------------------

BlazeParser::MethodCallContext::MethodCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::MethodCallContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

tree::TerminalNode* BlazeParser::MethodCallContext::LPAREN() {
  return getToken(BlazeParser::LPAREN, 0);
}

tree::TerminalNode* BlazeParser::MethodCallContext::RPAREN() {
  return getToken(BlazeParser::RPAREN, 0);
}

BlazeParser::ExpressionListContext* BlazeParser::MethodCallContext::expressionList() {
  return getRuleContext<BlazeParser::ExpressionListContext>(0);
}

tree::TerminalNode* BlazeParser::MethodCallContext::THIS() {
  return getToken(BlazeParser::THIS, 0);
}

tree::TerminalNode* BlazeParser::MethodCallContext::SUPER() {
  return getToken(BlazeParser::SUPER, 0);
}


size_t BlazeParser::MethodCallContext::getRuleIndex() const {
  return BlazeParser::RuleMethodCall;
}

void BlazeParser::MethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCall(this);
}

void BlazeParser::MethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCall(this);
}


antlrcpp::Any BlazeParser::MethodCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitMethodCall(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::MethodCallContext* BlazeParser::methodCall() {
  MethodCallContext *_localctx = _tracker.createInstance<MethodCallContext>(_ctx, getState());
  enterRule(_localctx, 124, BlazeParser::RuleMethodCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(810);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(792);
        match(BlazeParser::IDENTIFIER);
        setState(793);
        match(BlazeParser::LPAREN);
        setState(795);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << BlazeParser::BOOLEAN)
          | (1ULL << BlazeParser::BYTE)
          | (1ULL << BlazeParser::CHAR)
          | (1ULL << BlazeParser::DOUBLE)
          | (1ULL << BlazeParser::FLOAT)
          | (1ULL << BlazeParser::INT)
          | (1ULL << BlazeParser::LONG)
          | (1ULL << BlazeParser::NEW)
          | (1ULL << BlazeParser::SHORT)
          | (1ULL << BlazeParser::SUPER)
          | (1ULL << BlazeParser::THIS)
          | (1ULL << BlazeParser::VOID)
          | (1ULL << BlazeParser::DECIMAL_LITERAL)
          | (1ULL << BlazeParser::HEX_LITERAL)
          | (1ULL << BlazeParser::OCT_LITERAL)
          | (1ULL << BlazeParser::BINARY_LITERAL)
          | (1ULL << BlazeParser::FLOAT_LITERAL)
          | (1ULL << BlazeParser::HEX_FLOAT_LITERAL)
          | (1ULL << BlazeParser::BOOL_LITERAL)
          | (1ULL << BlazeParser::CHAR_LITERAL)
          | (1ULL << BlazeParser::STRING_LITERAL)
          | (1ULL << BlazeParser::NULL_LITERAL)
          | (1ULL << BlazeParser::LPAREN))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::BANG - 72))
          | (1ULL << (BlazeParser::TILDE - 72))
          | (1ULL << (BlazeParser::INC - 72))
          | (1ULL << (BlazeParser::DEC - 72))
          | (1ULL << (BlazeParser::ADD - 72))
          | (1ULL << (BlazeParser::SUB - 72))
          | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
          setState(794);
          expressionList();
        }
        setState(797);
        match(BlazeParser::RPAREN);
        break;
      }

      case BlazeParser::THIS: {
        enterOuterAlt(_localctx, 2);
        setState(798);
        match(BlazeParser::THIS);
        setState(799);
        match(BlazeParser::LPAREN);
        setState(801);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << BlazeParser::BOOLEAN)
          | (1ULL << BlazeParser::BYTE)
          | (1ULL << BlazeParser::CHAR)
          | (1ULL << BlazeParser::DOUBLE)
          | (1ULL << BlazeParser::FLOAT)
          | (1ULL << BlazeParser::INT)
          | (1ULL << BlazeParser::LONG)
          | (1ULL << BlazeParser::NEW)
          | (1ULL << BlazeParser::SHORT)
          | (1ULL << BlazeParser::SUPER)
          | (1ULL << BlazeParser::THIS)
          | (1ULL << BlazeParser::VOID)
          | (1ULL << BlazeParser::DECIMAL_LITERAL)
          | (1ULL << BlazeParser::HEX_LITERAL)
          | (1ULL << BlazeParser::OCT_LITERAL)
          | (1ULL << BlazeParser::BINARY_LITERAL)
          | (1ULL << BlazeParser::FLOAT_LITERAL)
          | (1ULL << BlazeParser::HEX_FLOAT_LITERAL)
          | (1ULL << BlazeParser::BOOL_LITERAL)
          | (1ULL << BlazeParser::CHAR_LITERAL)
          | (1ULL << BlazeParser::STRING_LITERAL)
          | (1ULL << BlazeParser::NULL_LITERAL)
          | (1ULL << BlazeParser::LPAREN))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::BANG - 72))
          | (1ULL << (BlazeParser::TILDE - 72))
          | (1ULL << (BlazeParser::INC - 72))
          | (1ULL << (BlazeParser::DEC - 72))
          | (1ULL << (BlazeParser::ADD - 72))
          | (1ULL << (BlazeParser::SUB - 72))
          | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
          setState(800);
          expressionList();
        }
        setState(803);
        match(BlazeParser::RPAREN);
        break;
      }

      case BlazeParser::SUPER: {
        enterOuterAlt(_localctx, 3);
        setState(804);
        match(BlazeParser::SUPER);
        setState(805);
        match(BlazeParser::LPAREN);
        setState(807);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << BlazeParser::BOOLEAN)
          | (1ULL << BlazeParser::BYTE)
          | (1ULL << BlazeParser::CHAR)
          | (1ULL << BlazeParser::DOUBLE)
          | (1ULL << BlazeParser::FLOAT)
          | (1ULL << BlazeParser::INT)
          | (1ULL << BlazeParser::LONG)
          | (1ULL << BlazeParser::NEW)
          | (1ULL << BlazeParser::SHORT)
          | (1ULL << BlazeParser::SUPER)
          | (1ULL << BlazeParser::THIS)
          | (1ULL << BlazeParser::VOID)
          | (1ULL << BlazeParser::DECIMAL_LITERAL)
          | (1ULL << BlazeParser::HEX_LITERAL)
          | (1ULL << BlazeParser::OCT_LITERAL)
          | (1ULL << BlazeParser::BINARY_LITERAL)
          | (1ULL << BlazeParser::FLOAT_LITERAL)
          | (1ULL << BlazeParser::HEX_FLOAT_LITERAL)
          | (1ULL << BlazeParser::BOOL_LITERAL)
          | (1ULL << BlazeParser::CHAR_LITERAL)
          | (1ULL << BlazeParser::STRING_LITERAL)
          | (1ULL << BlazeParser::NULL_LITERAL)
          | (1ULL << BlazeParser::LPAREN))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::BANG - 72))
          | (1ULL << (BlazeParser::TILDE - 72))
          | (1ULL << (BlazeParser::INC - 72))
          | (1ULL << (BlazeParser::DEC - 72))
          | (1ULL << (BlazeParser::ADD - 72))
          | (1ULL << (BlazeParser::SUB - 72))
          | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
          setState(806);
          expressionList();
        }
        setState(809);
        match(BlazeParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

BlazeParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::PrimaryContext* BlazeParser::ExpressionContext::primary() {
  return getRuleContext<BlazeParser::PrimaryContext>(0);
}

BlazeParser::MethodCallContext* BlazeParser::ExpressionContext::methodCall() {
  return getRuleContext<BlazeParser::MethodCallContext>(0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::NEW() {
  return getToken(BlazeParser::NEW, 0);
}

BlazeParser::CreatorContext* BlazeParser::ExpressionContext::creator() {
  return getRuleContext<BlazeParser::CreatorContext>(0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::LPAREN() {
  return getToken(BlazeParser::LPAREN, 0);
}

BlazeParser::TypeTypeContext* BlazeParser::ExpressionContext::typeType() {
  return getRuleContext<BlazeParser::TypeTypeContext>(0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::RPAREN() {
  return getToken(BlazeParser::RPAREN, 0);
}

std::vector<BlazeParser::ExpressionContext *> BlazeParser::ExpressionContext::expression() {
  return getRuleContexts<BlazeParser::ExpressionContext>();
}

BlazeParser::ExpressionContext* BlazeParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<BlazeParser::ExpressionContext>(i);
}

tree::TerminalNode* BlazeParser::ExpressionContext::ADD() {
  return getToken(BlazeParser::ADD, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::SUB() {
  return getToken(BlazeParser::SUB, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::INC() {
  return getToken(BlazeParser::INC, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::DEC() {
  return getToken(BlazeParser::DEC, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::TILDE() {
  return getToken(BlazeParser::TILDE, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::BANG() {
  return getToken(BlazeParser::BANG, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::MUL() {
  return getToken(BlazeParser::MUL, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::DIV() {
  return getToken(BlazeParser::DIV, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::MOD() {
  return getToken(BlazeParser::MOD, 0);
}

std::vector<tree::TerminalNode *> BlazeParser::ExpressionContext::LT() {
  return getTokens(BlazeParser::LT);
}

tree::TerminalNode* BlazeParser::ExpressionContext::LT(size_t i) {
  return getToken(BlazeParser::LT, i);
}

std::vector<tree::TerminalNode *> BlazeParser::ExpressionContext::GT() {
  return getTokens(BlazeParser::GT);
}

tree::TerminalNode* BlazeParser::ExpressionContext::GT(size_t i) {
  return getToken(BlazeParser::GT, i);
}

tree::TerminalNode* BlazeParser::ExpressionContext::LE() {
  return getToken(BlazeParser::LE, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::GE() {
  return getToken(BlazeParser::GE, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::EQUAL() {
  return getToken(BlazeParser::EQUAL, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::NOTEQUAL() {
  return getToken(BlazeParser::NOTEQUAL, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::BITAND() {
  return getToken(BlazeParser::BITAND, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::CARET() {
  return getToken(BlazeParser::CARET, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::BITOR() {
  return getToken(BlazeParser::BITOR, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::AND() {
  return getToken(BlazeParser::AND, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::OR() {
  return getToken(BlazeParser::OR, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::COLON() {
  return getToken(BlazeParser::COLON, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::QUESTION() {
  return getToken(BlazeParser::QUESTION, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::ASSIGN() {
  return getToken(BlazeParser::ASSIGN, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::ADD_ASSIGN() {
  return getToken(BlazeParser::ADD_ASSIGN, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::SUB_ASSIGN() {
  return getToken(BlazeParser::SUB_ASSIGN, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::MUL_ASSIGN() {
  return getToken(BlazeParser::MUL_ASSIGN, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::DIV_ASSIGN() {
  return getToken(BlazeParser::DIV_ASSIGN, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::AND_ASSIGN() {
  return getToken(BlazeParser::AND_ASSIGN, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::OR_ASSIGN() {
  return getToken(BlazeParser::OR_ASSIGN, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::XOR_ASSIGN() {
  return getToken(BlazeParser::XOR_ASSIGN, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::RSHIFT_ASSIGN() {
  return getToken(BlazeParser::RSHIFT_ASSIGN, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::URSHIFT_ASSIGN() {
  return getToken(BlazeParser::URSHIFT_ASSIGN, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::LSHIFT_ASSIGN() {
  return getToken(BlazeParser::LSHIFT_ASSIGN, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::MOD_ASSIGN() {
  return getToken(BlazeParser::MOD_ASSIGN, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::DOT() {
  return getToken(BlazeParser::DOT, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::THIS() {
  return getToken(BlazeParser::THIS, 0);
}

BlazeParser::InnerCreatorContext* BlazeParser::ExpressionContext::innerCreator() {
  return getRuleContext<BlazeParser::InnerCreatorContext>(0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::SUPER() {
  return getToken(BlazeParser::SUPER, 0);
}

BlazeParser::SuperSuffixContext* BlazeParser::ExpressionContext::superSuffix() {
  return getRuleContext<BlazeParser::SuperSuffixContext>(0);
}

BlazeParser::ExplicitGenericInvocationContext* BlazeParser::ExpressionContext::explicitGenericInvocation() {
  return getRuleContext<BlazeParser::ExplicitGenericInvocationContext>(0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::LBRACK() {
  return getToken(BlazeParser::LBRACK, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::RBRACK() {
  return getToken(BlazeParser::RBRACK, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::INSTANCEOF() {
  return getToken(BlazeParser::INSTANCEOF, 0);
}


size_t BlazeParser::ExpressionContext::getRuleIndex() const {
  return BlazeParser::RuleExpression;
}

void BlazeParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void BlazeParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any BlazeParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


BlazeParser::ExpressionContext* BlazeParser::expression() {
   return expression(0);
}

BlazeParser::ExpressionContext* BlazeParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BlazeParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  BlazeParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 126;
  enterRecursionRule(_localctx, 126, BlazeParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(826);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
    case 1: {
      setState(813);
      primary();
      break;
    }

    case 2: {
      setState(814);
      methodCall();
      break;
    }

    case 3: {
      setState(815);
      match(BlazeParser::NEW);
      setState(816);
      creator();
      break;
    }

    case 4: {
      setState(817);
      match(BlazeParser::LPAREN);
      setState(818);
      typeType();
      setState(819);
      match(BlazeParser::RPAREN);
      setState(820);
      expression(17);
      break;
    }

    case 5: {
      setState(822);
      dynamic_cast<ExpressionContext *>(_localctx)->prefix = _input->LT(1);
      _la = _input->LA(1);
      if (!(((((_la - 82) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 82)) & ((1ULL << (BlazeParser::INC - 82))
        | (1ULL << (BlazeParser::DEC - 82))
        | (1ULL << (BlazeParser::ADD - 82))
        | (1ULL << (BlazeParser::SUB - 82)))) != 0))) {
        dynamic_cast<ExpressionContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(823);
      expression(15);
      break;
    }

    case 6: {
      setState(824);
      dynamic_cast<ExpressionContext *>(_localctx)->prefix = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == BlazeParser::BANG

      || _la == BlazeParser::TILDE)) {
        dynamic_cast<ExpressionContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(825);
      expression(14);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(899);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(897);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(828);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(829);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 86) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 86)) & ((1ULL << (BlazeParser::MUL - 86))
            | (1ULL << (BlazeParser::DIV - 86))
            | (1ULL << (BlazeParser::MOD - 86)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(830);
          expression(14);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(831);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(832);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == BlazeParser::ADD

          || _la == BlazeParser::SUB)) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(833);
          expression(13);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(834);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(842);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
          case 1: {
            setState(835);
            match(BlazeParser::LT);
            setState(836);
            match(BlazeParser::LT);
            break;
          }

          case 2: {
            setState(837);
            match(BlazeParser::GT);
            setState(838);
            match(BlazeParser::GT);
            setState(839);
            match(BlazeParser::GT);
            break;
          }

          case 3: {
            setState(840);
            match(BlazeParser::GT);
            setState(841);
            match(BlazeParser::GT);
            break;
          }

          }
          setState(844);
          expression(12);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(845);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(846);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 70) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 70)) & ((1ULL << (BlazeParser::GT - 70))
            | (1ULL << (BlazeParser::LT - 70))
            | (1ULL << (BlazeParser::LE - 70))
            | (1ULL << (BlazeParser::GE - 70)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(847);
          expression(11);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(848);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(849);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == BlazeParser::EQUAL

          || _la == BlazeParser::NOTEQUAL)) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(850);
          expression(9);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(851);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(852);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::BITAND);
          setState(853);
          expression(8);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(854);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(855);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::CARET);
          setState(856);
          expression(7);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(857);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(858);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::BITOR);
          setState(859);
          expression(6);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(860);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(861);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::AND);
          setState(862);
          expression(5);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(863);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(864);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::OR);
          setState(865);
          expression(4);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(866);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(867);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::QUESTION);
          setState(868);
          expression(0);
          setState(869);
          match(BlazeParser::COLON);
          setState(870);
          expression(3);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(872);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(873);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 69) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 69)) & ((1ULL << (BlazeParser::ASSIGN - 69))
            | (1ULL << (BlazeParser::ADD_ASSIGN - 69))
            | (1ULL << (BlazeParser::SUB_ASSIGN - 69))
            | (1ULL << (BlazeParser::MUL_ASSIGN - 69))
            | (1ULL << (BlazeParser::DIV_ASSIGN - 69))
            | (1ULL << (BlazeParser::AND_ASSIGN - 69))
            | (1ULL << (BlazeParser::OR_ASSIGN - 69))
            | (1ULL << (BlazeParser::XOR_ASSIGN - 69))
            | (1ULL << (BlazeParser::MOD_ASSIGN - 69))
            | (1ULL << (BlazeParser::LSHIFT_ASSIGN - 69))
            | (1ULL << (BlazeParser::RSHIFT_ASSIGN - 69))
            | (1ULL << (BlazeParser::URSHIFT_ASSIGN - 69)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(874);
          expression(1);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(875);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(876);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::DOT);
          setState(885);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
          case 1: {
            setState(877);
            match(BlazeParser::IDENTIFIER);
            break;
          }

          case 2: {
            setState(878);
            methodCall();
            break;
          }

          case 3: {
            setState(879);
            match(BlazeParser::THIS);
            break;
          }

          case 4: {
            setState(880);
            match(BlazeParser::NEW);
            setState(881);
            innerCreator();
            break;
          }

          case 5: {
            setState(882);
            match(BlazeParser::SUPER);
            setState(883);
            superSuffix();
            break;
          }

          case 6: {
            setState(884);
            explicitGenericInvocation();
            break;
          }

          }
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(887);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(888);
          match(BlazeParser::LBRACK);
          setState(889);
          expression(0);
          setState(890);
          match(BlazeParser::RBRACK);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(892);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(893);
          dynamic_cast<ExpressionContext *>(_localctx)->postfix = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == BlazeParser::INC

          || _la == BlazeParser::DEC)) {
            dynamic_cast<ExpressionContext *>(_localctx)->postfix = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(894);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(895);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::INSTANCEOF);
          setState(896);
          typeType();
          break;
        }

        } 
      }
      setState(901);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

BlazeParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::PrimaryContext::LPAREN() {
  return getToken(BlazeParser::LPAREN, 0);
}

BlazeParser::ExpressionContext* BlazeParser::PrimaryContext::expression() {
  return getRuleContext<BlazeParser::ExpressionContext>(0);
}

tree::TerminalNode* BlazeParser::PrimaryContext::RPAREN() {
  return getToken(BlazeParser::RPAREN, 0);
}

tree::TerminalNode* BlazeParser::PrimaryContext::THIS() {
  return getToken(BlazeParser::THIS, 0);
}

tree::TerminalNode* BlazeParser::PrimaryContext::SUPER() {
  return getToken(BlazeParser::SUPER, 0);
}

BlazeParser::LiteralContext* BlazeParser::PrimaryContext::literal() {
  return getRuleContext<BlazeParser::LiteralContext>(0);
}

tree::TerminalNode* BlazeParser::PrimaryContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

BlazeParser::TypeTypeOrVoidContext* BlazeParser::PrimaryContext::typeTypeOrVoid() {
  return getRuleContext<BlazeParser::TypeTypeOrVoidContext>(0);
}

tree::TerminalNode* BlazeParser::PrimaryContext::DOT() {
  return getToken(BlazeParser::DOT, 0);
}

tree::TerminalNode* BlazeParser::PrimaryContext::CLASS() {
  return getToken(BlazeParser::CLASS, 0);
}


size_t BlazeParser::PrimaryContext::getRuleIndex() const {
  return BlazeParser::RulePrimary;
}

void BlazeParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void BlazeParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}


antlrcpp::Any BlazeParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::PrimaryContext* BlazeParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 128, BlazeParser::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(914);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(902);
      match(BlazeParser::LPAREN);
      setState(903);
      expression(0);
      setState(904);
      match(BlazeParser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(906);
      match(BlazeParser::THIS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(907);
      match(BlazeParser::SUPER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(908);
      literal();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(909);
      match(BlazeParser::IDENTIFIER);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(910);
      typeTypeOrVoid();
      setState(911);
      match(BlazeParser::DOT);
      setState(912);
      match(BlazeParser::CLASS);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassTypeContext ------------------------------------------------------------------

BlazeParser::ClassTypeContext::ClassTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::ClassOrInterfaceTypeContext* BlazeParser::ClassTypeContext::classOrInterfaceType() {
  return getRuleContext<BlazeParser::ClassOrInterfaceTypeContext>(0);
}

tree::TerminalNode* BlazeParser::ClassTypeContext::DOT() {
  return getToken(BlazeParser::DOT, 0);
}

tree::TerminalNode* BlazeParser::ClassTypeContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}


size_t BlazeParser::ClassTypeContext::getRuleIndex() const {
  return BlazeParser::RuleClassType;
}

void BlazeParser::ClassTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassType(this);
}

void BlazeParser::ClassTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassType(this);
}


antlrcpp::Any BlazeParser::ClassTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitClassType(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ClassTypeContext* BlazeParser::classType() {
  ClassTypeContext *_localctx = _tracker.createInstance<ClassTypeContext>(_ctx, getState());
  enterRule(_localctx, 130, BlazeParser::RuleClassType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(919);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx)) {
    case 1: {
      setState(916);
      classOrInterfaceType();
      setState(917);
      match(BlazeParser::DOT);
      break;
    }

    }
    setState(922);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::IDENTIFIER) {
      setState(921);
      match(BlazeParser::IDENTIFIER);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreatorContext ------------------------------------------------------------------

BlazeParser::CreatorContext::CreatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::CreatedNameContext* BlazeParser::CreatorContext::createdName() {
  return getRuleContext<BlazeParser::CreatedNameContext>(0);
}

BlazeParser::ClassCreatorRestContext* BlazeParser::CreatorContext::classCreatorRest() {
  return getRuleContext<BlazeParser::ClassCreatorRestContext>(0);
}

BlazeParser::ArrayCreatorRestContext* BlazeParser::CreatorContext::arrayCreatorRest() {
  return getRuleContext<BlazeParser::ArrayCreatorRestContext>(0);
}


size_t BlazeParser::CreatorContext::getRuleIndex() const {
  return BlazeParser::RuleCreator;
}

void BlazeParser::CreatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreator(this);
}

void BlazeParser::CreatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreator(this);
}


antlrcpp::Any BlazeParser::CreatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitCreator(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::CreatorContext* BlazeParser::creator() {
  CreatorContext *_localctx = _tracker.createInstance<CreatorContext>(_ctx, getState());
  enterRule(_localctx, 132, BlazeParser::RuleCreator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(932);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(924);
      createdName();
      setState(925);
      classCreatorRest();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(927);
      createdName();
      setState(930);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BlazeParser::LBRACK: {
          setState(928);
          arrayCreatorRest();
          break;
        }

        case BlazeParser::LPAREN: {
          setState(929);
          classCreatorRest();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreatedNameContext ------------------------------------------------------------------

BlazeParser::CreatedNameContext::CreatedNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BlazeParser::CreatedNameContext::IDENTIFIER() {
  return getTokens(BlazeParser::IDENTIFIER);
}

tree::TerminalNode* BlazeParser::CreatedNameContext::IDENTIFIER(size_t i) {
  return getToken(BlazeParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> BlazeParser::CreatedNameContext::DOT() {
  return getTokens(BlazeParser::DOT);
}

tree::TerminalNode* BlazeParser::CreatedNameContext::DOT(size_t i) {
  return getToken(BlazeParser::DOT, i);
}

BlazeParser::PrimitiveTypeContext* BlazeParser::CreatedNameContext::primitiveType() {
  return getRuleContext<BlazeParser::PrimitiveTypeContext>(0);
}


size_t BlazeParser::CreatedNameContext::getRuleIndex() const {
  return BlazeParser::RuleCreatedName;
}

void BlazeParser::CreatedNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreatedName(this);
}

void BlazeParser::CreatedNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreatedName(this);
}


antlrcpp::Any BlazeParser::CreatedNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitCreatedName(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::CreatedNameContext* BlazeParser::createdName() {
  CreatedNameContext *_localctx = _tracker.createInstance<CreatedNameContext>(_ctx, getState());
  enterRule(_localctx, 134, BlazeParser::RuleCreatedName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(943);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(934);
        match(BlazeParser::IDENTIFIER);
        setState(939);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BlazeParser::DOT) {
          setState(935);
          match(BlazeParser::DOT);
          setState(936);
          match(BlazeParser::IDENTIFIER);
          setState(941);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case BlazeParser::BOOLEAN:
      case BlazeParser::BYTE:
      case BlazeParser::CHAR:
      case BlazeParser::DOUBLE:
      case BlazeParser::FLOAT:
      case BlazeParser::INT:
      case BlazeParser::LONG:
      case BlazeParser::SHORT: {
        enterOuterAlt(_localctx, 2);
        setState(942);
        primitiveType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InnerCreatorContext ------------------------------------------------------------------

BlazeParser::InnerCreatorContext::InnerCreatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::InnerCreatorContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

BlazeParser::ClassCreatorRestContext* BlazeParser::InnerCreatorContext::classCreatorRest() {
  return getRuleContext<BlazeParser::ClassCreatorRestContext>(0);
}


size_t BlazeParser::InnerCreatorContext::getRuleIndex() const {
  return BlazeParser::RuleInnerCreator;
}

void BlazeParser::InnerCreatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInnerCreator(this);
}

void BlazeParser::InnerCreatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInnerCreator(this);
}


antlrcpp::Any BlazeParser::InnerCreatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitInnerCreator(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::InnerCreatorContext* BlazeParser::innerCreator() {
  InnerCreatorContext *_localctx = _tracker.createInstance<InnerCreatorContext>(_ctx, getState());
  enterRule(_localctx, 136, BlazeParser::RuleInnerCreator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(945);
    match(BlazeParser::IDENTIFIER);
    setState(946);
    classCreatorRest();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayCreatorRestContext ------------------------------------------------------------------

BlazeParser::ArrayCreatorRestContext::ArrayCreatorRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BlazeParser::ArrayCreatorRestContext::LBRACK() {
  return getTokens(BlazeParser::LBRACK);
}

tree::TerminalNode* BlazeParser::ArrayCreatorRestContext::LBRACK(size_t i) {
  return getToken(BlazeParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> BlazeParser::ArrayCreatorRestContext::RBRACK() {
  return getTokens(BlazeParser::RBRACK);
}

tree::TerminalNode* BlazeParser::ArrayCreatorRestContext::RBRACK(size_t i) {
  return getToken(BlazeParser::RBRACK, i);
}

BlazeParser::ArrayInitializerContext* BlazeParser::ArrayCreatorRestContext::arrayInitializer() {
  return getRuleContext<BlazeParser::ArrayInitializerContext>(0);
}

std::vector<BlazeParser::ExpressionContext *> BlazeParser::ArrayCreatorRestContext::expression() {
  return getRuleContexts<BlazeParser::ExpressionContext>();
}

BlazeParser::ExpressionContext* BlazeParser::ArrayCreatorRestContext::expression(size_t i) {
  return getRuleContext<BlazeParser::ExpressionContext>(i);
}


size_t BlazeParser::ArrayCreatorRestContext::getRuleIndex() const {
  return BlazeParser::RuleArrayCreatorRest;
}

void BlazeParser::ArrayCreatorRestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayCreatorRest(this);
}

void BlazeParser::ArrayCreatorRestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayCreatorRest(this);
}


antlrcpp::Any BlazeParser::ArrayCreatorRestContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitArrayCreatorRest(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ArrayCreatorRestContext* BlazeParser::arrayCreatorRest() {
  ArrayCreatorRestContext *_localctx = _tracker.createInstance<ArrayCreatorRestContext>(_ctx, getState());
  enterRule(_localctx, 138, BlazeParser::RuleArrayCreatorRest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(948);
    match(BlazeParser::LBRACK);
    setState(976);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::RBRACK: {
        setState(949);
        match(BlazeParser::RBRACK);
        setState(954);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BlazeParser::LBRACK) {
          setState(950);
          match(BlazeParser::LBRACK);
          setState(951);
          match(BlazeParser::RBRACK);
          setState(956);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(957);
        arrayInitializer();
        break;
      }

      case BlazeParser::BOOLEAN:
      case BlazeParser::BYTE:
      case BlazeParser::CHAR:
      case BlazeParser::DOUBLE:
      case BlazeParser::FLOAT:
      case BlazeParser::INT:
      case BlazeParser::LONG:
      case BlazeParser::NEW:
      case BlazeParser::SHORT:
      case BlazeParser::SUPER:
      case BlazeParser::THIS:
      case BlazeParser::VOID:
      case BlazeParser::DECIMAL_LITERAL:
      case BlazeParser::HEX_LITERAL:
      case BlazeParser::OCT_LITERAL:
      case BlazeParser::BINARY_LITERAL:
      case BlazeParser::FLOAT_LITERAL:
      case BlazeParser::HEX_FLOAT_LITERAL:
      case BlazeParser::BOOL_LITERAL:
      case BlazeParser::CHAR_LITERAL:
      case BlazeParser::STRING_LITERAL:
      case BlazeParser::NULL_LITERAL:
      case BlazeParser::LPAREN:
      case BlazeParser::BANG:
      case BlazeParser::TILDE:
      case BlazeParser::INC:
      case BlazeParser::DEC:
      case BlazeParser::ADD:
      case BlazeParser::SUB:
      case BlazeParser::IDENTIFIER: {
        setState(958);
        expression(0);
        setState(959);
        match(BlazeParser::RBRACK);
        setState(966);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(960);
            match(BlazeParser::LBRACK);
            setState(961);
            expression(0);
            setState(962);
            match(BlazeParser::RBRACK); 
          }
          setState(968);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx);
        }
        setState(973);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(969);
            match(BlazeParser::LBRACK);
            setState(970);
            match(BlazeParser::RBRACK); 
          }
          setState(975);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassCreatorRestContext ------------------------------------------------------------------

BlazeParser::ClassCreatorRestContext::ClassCreatorRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::ArgumentsContext* BlazeParser::ClassCreatorRestContext::arguments() {
  return getRuleContext<BlazeParser::ArgumentsContext>(0);
}

BlazeParser::ClassBodyContext* BlazeParser::ClassCreatorRestContext::classBody() {
  return getRuleContext<BlazeParser::ClassBodyContext>(0);
}


size_t BlazeParser::ClassCreatorRestContext::getRuleIndex() const {
  return BlazeParser::RuleClassCreatorRest;
}

void BlazeParser::ClassCreatorRestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassCreatorRest(this);
}

void BlazeParser::ClassCreatorRestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassCreatorRest(this);
}


antlrcpp::Any BlazeParser::ClassCreatorRestContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitClassCreatorRest(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ClassCreatorRestContext* BlazeParser::classCreatorRest() {
  ClassCreatorRestContext *_localctx = _tracker.createInstance<ClassCreatorRestContext>(_ctx, getState());
  enterRule(_localctx, 140, BlazeParser::RuleClassCreatorRest);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(978);
    arguments();
    setState(980);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
    case 1: {
      setState(979);
      classBody();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitGenericInvocationContext ------------------------------------------------------------------

BlazeParser::ExplicitGenericInvocationContext::ExplicitGenericInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::ExplicitGenericInvocationSuffixContext* BlazeParser::ExplicitGenericInvocationContext::explicitGenericInvocationSuffix() {
  return getRuleContext<BlazeParser::ExplicitGenericInvocationSuffixContext>(0);
}


size_t BlazeParser::ExplicitGenericInvocationContext::getRuleIndex() const {
  return BlazeParser::RuleExplicitGenericInvocation;
}

void BlazeParser::ExplicitGenericInvocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitGenericInvocation(this);
}

void BlazeParser::ExplicitGenericInvocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitGenericInvocation(this);
}


antlrcpp::Any BlazeParser::ExplicitGenericInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitExplicitGenericInvocation(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ExplicitGenericInvocationContext* BlazeParser::explicitGenericInvocation() {
  ExplicitGenericInvocationContext *_localctx = _tracker.createInstance<ExplicitGenericInvocationContext>(_ctx, getState());
  enterRule(_localctx, 142, BlazeParser::RuleExplicitGenericInvocation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(982);
    explicitGenericInvocationSuffix();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeListContext ------------------------------------------------------------------

BlazeParser::TypeListContext::TypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BlazeParser::TypeTypeContext *> BlazeParser::TypeListContext::typeType() {
  return getRuleContexts<BlazeParser::TypeTypeContext>();
}

BlazeParser::TypeTypeContext* BlazeParser::TypeListContext::typeType(size_t i) {
  return getRuleContext<BlazeParser::TypeTypeContext>(i);
}

std::vector<tree::TerminalNode *> BlazeParser::TypeListContext::COMMA() {
  return getTokens(BlazeParser::COMMA);
}

tree::TerminalNode* BlazeParser::TypeListContext::COMMA(size_t i) {
  return getToken(BlazeParser::COMMA, i);
}


size_t BlazeParser::TypeListContext::getRuleIndex() const {
  return BlazeParser::RuleTypeList;
}

void BlazeParser::TypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeList(this);
}

void BlazeParser::TypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeList(this);
}


antlrcpp::Any BlazeParser::TypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitTypeList(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::TypeListContext* BlazeParser::typeList() {
  TypeListContext *_localctx = _tracker.createInstance<TypeListContext>(_ctx, getState());
  enterRule(_localctx, 144, BlazeParser::RuleTypeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(984);
    typeType();
    setState(989);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::COMMA) {
      setState(985);
      match(BlazeParser::COMMA);
      setState(986);
      typeType();
      setState(991);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeTypeContext ------------------------------------------------------------------

BlazeParser::TypeTypeContext::TypeTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::ClassOrInterfaceTypeContext* BlazeParser::TypeTypeContext::classOrInterfaceType() {
  return getRuleContext<BlazeParser::ClassOrInterfaceTypeContext>(0);
}

BlazeParser::PrimitiveTypeContext* BlazeParser::TypeTypeContext::primitiveType() {
  return getRuleContext<BlazeParser::PrimitiveTypeContext>(0);
}

std::vector<tree::TerminalNode *> BlazeParser::TypeTypeContext::LBRACK() {
  return getTokens(BlazeParser::LBRACK);
}

tree::TerminalNode* BlazeParser::TypeTypeContext::LBRACK(size_t i) {
  return getToken(BlazeParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> BlazeParser::TypeTypeContext::RBRACK() {
  return getTokens(BlazeParser::RBRACK);
}

tree::TerminalNode* BlazeParser::TypeTypeContext::RBRACK(size_t i) {
  return getToken(BlazeParser::RBRACK, i);
}


size_t BlazeParser::TypeTypeContext::getRuleIndex() const {
  return BlazeParser::RuleTypeType;
}

void BlazeParser::TypeTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeType(this);
}

void BlazeParser::TypeTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeType(this);
}


antlrcpp::Any BlazeParser::TypeTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitTypeType(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::TypeTypeContext* BlazeParser::typeType() {
  TypeTypeContext *_localctx = _tracker.createInstance<TypeTypeContext>(_ctx, getState());
  enterRule(_localctx, 146, BlazeParser::RuleTypeType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(994);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::IDENTIFIER: {
        setState(992);
        classOrInterfaceType();
        break;
      }

      case BlazeParser::BOOLEAN:
      case BlazeParser::BYTE:
      case BlazeParser::CHAR:
      case BlazeParser::DOUBLE:
      case BlazeParser::FLOAT:
      case BlazeParser::INT:
      case BlazeParser::LONG:
      case BlazeParser::SHORT: {
        setState(993);
        primitiveType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1000);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(996);
        match(BlazeParser::LBRACK);
        setState(997);
        match(BlazeParser::RBRACK); 
      }
      setState(1002);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

BlazeParser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::PrimitiveTypeContext::BOOLEAN() {
  return getToken(BlazeParser::BOOLEAN, 0);
}

tree::TerminalNode* BlazeParser::PrimitiveTypeContext::CHAR() {
  return getToken(BlazeParser::CHAR, 0);
}

tree::TerminalNode* BlazeParser::PrimitiveTypeContext::BYTE() {
  return getToken(BlazeParser::BYTE, 0);
}

tree::TerminalNode* BlazeParser::PrimitiveTypeContext::SHORT() {
  return getToken(BlazeParser::SHORT, 0);
}

tree::TerminalNode* BlazeParser::PrimitiveTypeContext::INT() {
  return getToken(BlazeParser::INT, 0);
}

tree::TerminalNode* BlazeParser::PrimitiveTypeContext::LONG() {
  return getToken(BlazeParser::LONG, 0);
}

tree::TerminalNode* BlazeParser::PrimitiveTypeContext::FLOAT() {
  return getToken(BlazeParser::FLOAT, 0);
}

tree::TerminalNode* BlazeParser::PrimitiveTypeContext::DOUBLE() {
  return getToken(BlazeParser::DOUBLE, 0);
}


size_t BlazeParser::PrimitiveTypeContext::getRuleIndex() const {
  return BlazeParser::RulePrimitiveType;
}

void BlazeParser::PrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveType(this);
}

void BlazeParser::PrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveType(this);
}


antlrcpp::Any BlazeParser::PrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitPrimitiveType(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::PrimitiveTypeContext* BlazeParser::primitiveType() {
  PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 148, BlazeParser::RulePrimitiveType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1003);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::BOOLEAN)
      | (1ULL << BlazeParser::BYTE)
      | (1ULL << BlazeParser::CHAR)
      | (1ULL << BlazeParser::DOUBLE)
      | (1ULL << BlazeParser::FLOAT)
      | (1ULL << BlazeParser::INT)
      | (1ULL << BlazeParser::LONG)
      | (1ULL << BlazeParser::SHORT))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuperSuffixContext ------------------------------------------------------------------

BlazeParser::SuperSuffixContext::SuperSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::ArgumentsContext* BlazeParser::SuperSuffixContext::arguments() {
  return getRuleContext<BlazeParser::ArgumentsContext>(0);
}

tree::TerminalNode* BlazeParser::SuperSuffixContext::DOT() {
  return getToken(BlazeParser::DOT, 0);
}

tree::TerminalNode* BlazeParser::SuperSuffixContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}


size_t BlazeParser::SuperSuffixContext::getRuleIndex() const {
  return BlazeParser::RuleSuperSuffix;
}

void BlazeParser::SuperSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuperSuffix(this);
}

void BlazeParser::SuperSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuperSuffix(this);
}


antlrcpp::Any BlazeParser::SuperSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitSuperSuffix(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::SuperSuffixContext* BlazeParser::superSuffix() {
  SuperSuffixContext *_localctx = _tracker.createInstance<SuperSuffixContext>(_ctx, getState());
  enterRule(_localctx, 150, BlazeParser::RuleSuperSuffix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1011);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(1005);
        arguments();
        break;
      }

      case BlazeParser::DOT: {
        enterOuterAlt(_localctx, 2);
        setState(1006);
        match(BlazeParser::DOT);
        setState(1007);
        match(BlazeParser::IDENTIFIER);
        setState(1009);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
        case 1: {
          setState(1008);
          arguments();
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitGenericInvocationSuffixContext ------------------------------------------------------------------

BlazeParser::ExplicitGenericInvocationSuffixContext::ExplicitGenericInvocationSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ExplicitGenericInvocationSuffixContext::SUPER() {
  return getToken(BlazeParser::SUPER, 0);
}

BlazeParser::SuperSuffixContext* BlazeParser::ExplicitGenericInvocationSuffixContext::superSuffix() {
  return getRuleContext<BlazeParser::SuperSuffixContext>(0);
}

tree::TerminalNode* BlazeParser::ExplicitGenericInvocationSuffixContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

BlazeParser::ArgumentsContext* BlazeParser::ExplicitGenericInvocationSuffixContext::arguments() {
  return getRuleContext<BlazeParser::ArgumentsContext>(0);
}


size_t BlazeParser::ExplicitGenericInvocationSuffixContext::getRuleIndex() const {
  return BlazeParser::RuleExplicitGenericInvocationSuffix;
}

void BlazeParser::ExplicitGenericInvocationSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitGenericInvocationSuffix(this);
}

void BlazeParser::ExplicitGenericInvocationSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitGenericInvocationSuffix(this);
}


antlrcpp::Any BlazeParser::ExplicitGenericInvocationSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitExplicitGenericInvocationSuffix(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ExplicitGenericInvocationSuffixContext* BlazeParser::explicitGenericInvocationSuffix() {
  ExplicitGenericInvocationSuffixContext *_localctx = _tracker.createInstance<ExplicitGenericInvocationSuffixContext>(_ctx, getState());
  enterRule(_localctx, 152, BlazeParser::RuleExplicitGenericInvocationSuffix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1017);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::SUPER: {
        enterOuterAlt(_localctx, 1);
        setState(1013);
        match(BlazeParser::SUPER);
        setState(1014);
        superSuffix();
        break;
      }

      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(1015);
        match(BlazeParser::IDENTIFIER);
        setState(1016);
        arguments();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

BlazeParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ArgumentsContext::LPAREN() {
  return getToken(BlazeParser::LPAREN, 0);
}

tree::TerminalNode* BlazeParser::ArgumentsContext::RPAREN() {
  return getToken(BlazeParser::RPAREN, 0);
}

BlazeParser::ExpressionListContext* BlazeParser::ArgumentsContext::expressionList() {
  return getRuleContext<BlazeParser::ExpressionListContext>(0);
}


size_t BlazeParser::ArgumentsContext::getRuleIndex() const {
  return BlazeParser::RuleArguments;
}

void BlazeParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void BlazeParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}


antlrcpp::Any BlazeParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ArgumentsContext* BlazeParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 154, BlazeParser::RuleArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1019);
    match(BlazeParser::LPAREN);
    setState(1021);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BlazeParser::BOOLEAN)
      | (1ULL << BlazeParser::BYTE)
      | (1ULL << BlazeParser::CHAR)
      | (1ULL << BlazeParser::DOUBLE)
      | (1ULL << BlazeParser::FLOAT)
      | (1ULL << BlazeParser::INT)
      | (1ULL << BlazeParser::LONG)
      | (1ULL << BlazeParser::NEW)
      | (1ULL << BlazeParser::SHORT)
      | (1ULL << BlazeParser::SUPER)
      | (1ULL << BlazeParser::THIS)
      | (1ULL << BlazeParser::VOID)
      | (1ULL << BlazeParser::DECIMAL_LITERAL)
      | (1ULL << BlazeParser::HEX_LITERAL)
      | (1ULL << BlazeParser::OCT_LITERAL)
      | (1ULL << BlazeParser::BINARY_LITERAL)
      | (1ULL << BlazeParser::FLOAT_LITERAL)
      | (1ULL << BlazeParser::HEX_FLOAT_LITERAL)
      | (1ULL << BlazeParser::BOOL_LITERAL)
      | (1ULL << BlazeParser::CHAR_LITERAL)
      | (1ULL << BlazeParser::STRING_LITERAL)
      | (1ULL << BlazeParser::NULL_LITERAL)
      | (1ULL << BlazeParser::LPAREN))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::BANG - 72))
      | (1ULL << (BlazeParser::TILDE - 72))
      | (1ULL << (BlazeParser::INC - 72))
      | (1ULL << (BlazeParser::DEC - 72))
      | (1ULL << (BlazeParser::ADD - 72))
      | (1ULL << (BlazeParser::SUB - 72))
      | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
      setState(1020);
      expressionList();
    }
    setState(1023);
    match(BlazeParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool BlazeParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 63: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BlazeParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 13);
    case 1: return precpred(_ctx, 12);
    case 2: return precpred(_ctx, 11);
    case 3: return precpred(_ctx, 10);
    case 4: return precpred(_ctx, 8);
    case 5: return precpred(_ctx, 7);
    case 6: return precpred(_ctx, 6);
    case 7: return precpred(_ctx, 5);
    case 8: return precpred(_ctx, 4);
    case 9: return precpred(_ctx, 3);
    case 10: return precpred(_ctx, 2);
    case 11: return precpred(_ctx, 1);
    case 12: return precpred(_ctx, 21);
    case 13: return precpred(_ctx, 20);
    case 14: return precpred(_ctx, 16);
    case 15: return precpred(_ctx, 9);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> BlazeParser::_decisionToDFA;
atn::PredictionContextCache BlazeParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN BlazeParser::_atn;
std::vector<uint16_t> BlazeParser::_serializedATN;

std::vector<std::string> BlazeParser::_ruleNames = {
  "compilationUnit", "packageDeclaration", "importDeclaration", "typeDeclaration", 
  "modifier", "classOrInterfaceModifier", "variableModifier", "classDeclaration", 
  "enumDeclaration", "enumConstants", "enumConstant", "enumBodyDeclarations", 
  "interfaceDeclaration", "classBody", "interfaceBody", "classBodyDeclaration", 
  "memberDeclaration", "methodDeclaration", "methodBody", "typeTypeOrVoid", 
  "constructorDeclaration", "fieldDeclaration", "interfaceBodyDeclaration", 
  "interfaceMemberDeclaration", "constDeclaration", "constantDeclarator", 
  "interfaceMethodDeclaration", "interfaceMethodModifier", "variableDeclarators", 
  "variableDeclarator", "variableDeclaratorId", "variableInitializer", "arrayInitializer", 
  "classOrInterfaceType", "typeArgument", "qualifiedNameList", "formalParameters", 
  "formalParameterList", "formalParameter", "lastFormalParameter", "qualifiedName", 
  "literal", "integerLiteral", "floatLiteral", "block", "blockStatement", 
  "localVariableDeclaration", "localTypeDeclaration", "statement", "catchClause", 
  "catchType", "finallyBlock", "resourceSpecification", "resources", "resource", 
  "switchBlockStatementGroup", "switchLabel", "forControl", "forInit", "enhancedForControl", 
  "parExpression", "expressionList", "methodCall", "expression", "primary", 
  "classType", "creator", "createdName", "innerCreator", "arrayCreatorRest", 
  "classCreatorRest", "explicitGenericInvocation", "typeList", "typeType", 
  "primitiveType", "superSuffix", "explicitGenericInvocationSuffix", "arguments"
};

std::vector<std::string> BlazeParser::_literalNames = {
  "", "'abstract'", "'assert'", "'boolean'", "'break'", "'byte'", "'case'", 
  "'catch'", "'char'", "'class'", "'const'", "'continue'", "'default'", 
  "'do'", "'double'", "'else'", "'enum'", "'extends'", "'final'", "'finally'", 
  "'float'", "'for'", "'if'", "'goto'", "'implements'", "'import'", "'instanceof'", 
  "'int'", "'interface'", "'long'", "'native'", "'new'", "'package'", "'private'", 
  "'protected'", "'public'", "'return'", "'short'", "'static'", "'super'", 
  "'switch'", "'synchronized'", "'this'", "'throw'", "'throws'", "'transient'", 
  "'try'", "'void'", "'volatile'", "'while'", "", "", "", "", "", "", "", 
  "", "", "'null'", "'('", "')'", "'{'", "'}'", "'['", "']'", "';'", "','", 
  "'.'", "'='", "'>'", "'<'", "'!'", "'~'", "'?'", "':'", "'=='", "'<='", 
  "'>='", "'!='", "'&&'", "'||'", "'++'", "'--'", "'+'", "'-'", "'*'", "'/'", 
  "'&'", "'|'", "'^'", "'%'", "'+='", "'-='", "'*='", "'/='", "'&='", "'|='", 
  "'^='", "'%='", "'<<='", "'>>='", "'>>>='", "'@'", "'...'"
};

std::vector<std::string> BlazeParser::_symbolicNames = {
  "", "ABSTRACT", "ASSERT", "BOOLEAN", "BREAK", "BYTE", "CASE", "CATCH", 
  "CHAR", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", 
  "ENUM", "EXTENDS", "FINAL", "FINALLY", "FLOAT", "FOR", "IF", "GOTO", "IMPLEMENTS", 
  "IMPORT", "INSTANCEOF", "INT", "INTERFACE", "LONG", "NATIVE", "NEW", "PACKAGE", 
  "PRIVATE", "PROTECTED", "PUBLIC", "RETURN", "SHORT", "STATIC", "SUPER", 
  "SWITCH", "SYNCHRONIZED", "THIS", "THROW", "THROWS", "TRANSIENT", "TRY", 
  "VOID", "VOLATILE", "WHILE", "DECIMAL_LITERAL", "HEX_LITERAL", "OCT_LITERAL", 
  "BINARY_LITERAL", "FLOAT_LITERAL", "HEX_FLOAT_LITERAL", "BOOL_LITERAL", 
  "CHAR_LITERAL", "STRING_LITERAL", "NULL_LITERAL", "LPAREN", "RPAREN", 
  "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMI", "COMMA", "DOT", "ASSIGN", 
  "GT", "LT", "BANG", "TILDE", "QUESTION", "COLON", "EQUAL", "LE", "GE", 
  "NOTEQUAL", "AND", "OR", "INC", "DEC", "ADD", "SUB", "MUL", "DIV", "BITAND", 
  "BITOR", "CARET", "MOD", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", 
  "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "MOD_ASSIGN", "LSHIFT_ASSIGN", 
  "RSHIFT_ASSIGN", "URSHIFT_ASSIGN", "AT", "ELLIPSIS", "WS", "COMMENT", 
  "LINE_COMMENT", "IDENTIFIER"
};

dfa::Vocabulary BlazeParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> BlazeParser::_tokenNames;

BlazeParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x6e, 0x404, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x3, 0x2, 0x5, 0x2, 0xa0, 0xa, 0x2, 0x3, 0x2, 0x7, 0x2, 0xa3, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0xa6, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0xa9, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0xac, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xb6, 0xa, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xbb, 0xa, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x7, 0x5, 0xc0, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xc3, 0xb, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xc8, 0xa, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0xcb, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x5, 0x6, 0xd2, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xdc, 0xa, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0xe0, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xe8, 0xa, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0xec, 0xa, 0xa, 0x3, 0xa, 0x5, 0xa, 0xef, 0xa, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0xf2, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x7, 0xb, 0xf9, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xfc, 0xb, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x100, 0xa, 0xc, 0x3, 0xc, 0x5, 0xc, 0x103, 
    0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x107, 0xa, 0xd, 0xc, 0xd, 0xe, 
    0xd, 0x10a, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
    0x110, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x116, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x119, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x7, 0x10, 0x11f, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 
    0x122, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x128, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x12c, 0xa, 0x11, 
    0xc, 0x11, 0xe, 0x11, 0x12f, 0xb, 0x11, 0x3, 0x11, 0x5, 0x11, 0x132, 
    0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0x13a, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x141, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 
    0x144, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x148, 0xa, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x14e, 0xa, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x152, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x158, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x7, 0x18, 0x161, 
    0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x164, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x168, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x5, 0x19, 0x16f, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x7, 0x1a, 0x175, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x178, 
    0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 
    0x1b, 0x17f, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x182, 0xb, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x7, 0x1c, 0x188, 0xa, 0x1c, 
    0xc, 0x1c, 0xe, 0x1c, 0x18b, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x192, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 
    0x195, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x199, 0xa, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x7, 0x1e, 0x1a2, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x1a5, 0xb, 
    0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x1aa, 0xa, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x1af, 0xa, 0x20, 0xc, 0x20, 
    0xe, 0x20, 0x1b2, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1b6, 
    0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x1bc, 
    0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x1bf, 0xb, 0x22, 0x3, 0x22, 0x5, 0x22, 
    0x1c2, 0xa, 0x22, 0x5, 0x22, 0x1c4, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x1cb, 0xa, 0x23, 0xc, 0x23, 
    0xe, 0x23, 0x1ce, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x5, 0x24, 0x1d4, 0xa, 0x24, 0x5, 0x24, 0x1d6, 0xa, 0x24, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x1db, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 
    0x1de, 0xb, 0x25, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x1e2, 0xa, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x1e9, 
    0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x1ec, 0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x5, 0x27, 0x1f0, 0xa, 0x27, 0x3, 0x27, 0x5, 0x27, 0x1f3, 0xa, 0x27, 
    0x3, 0x28, 0x7, 0x28, 0x1f6, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x1f9, 
    0xb, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x7, 0x29, 0x1ff, 
    0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x202, 0xb, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x20b, 
    0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x20e, 0xb, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x216, 0xa, 0x2b, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x7, 
    0x2e, 0x21e, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x221, 0xb, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x5, 0x2f, 0x22a, 0xa, 0x2f, 0x3, 0x30, 0x7, 0x30, 0x22d, 0xa, 0x30, 
    0xc, 0x30, 0xe, 0x30, 0x230, 0xb, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x31, 0x7, 0x31, 0x236, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x239, 
    0xb, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x23d, 0xa, 0x31, 0x3, 0x31, 
    0x5, 0x31, 0x240, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x5, 0x32, 0x247, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x250, 0xa, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x6, 
    0x32, 0x265, 0xa, 0x32, 0xd, 0x32, 0xe, 0x32, 0x266, 0x3, 0x32, 0x5, 
    0x32, 0x26a, 0xa, 0x32, 0x3, 0x32, 0x5, 0x32, 0x26d, 0xa, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 0x32, 0x273, 0xa, 0x32, 
    0xc, 0x32, 0xe, 0x32, 0x276, 0xb, 0x32, 0x3, 0x32, 0x5, 0x32, 0x279, 
    0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 0x32, 0x27f, 
    0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x282, 0xb, 0x32, 0x3, 0x32, 0x7, 0x32, 
    0x285, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x288, 0xb, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x5, 0x32, 0x292, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x29b, 0xa, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x2a0, 0xa, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x5, 0x32, 0x2aa, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x7, 0x33, 0x2af, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x2b2, 0xb, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 
    0x34, 0x3, 0x34, 0x7, 0x34, 0x2bc, 0xa, 0x34, 0xc, 0x34, 0xe, 0x34, 
    0x2bf, 0xb, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x5, 0x36, 0x2c7, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x7, 0x37, 0x2ce, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 
    0x2d1, 0xb, 0x37, 0x3, 0x38, 0x7, 0x38, 0x2d4, 0xa, 0x38, 0xc, 0x38, 
    0xe, 0x38, 0x2d7, 0xb, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x39, 0x6, 0x39, 0x2df, 0xa, 0x39, 0xd, 0x39, 0xe, 0x39, 
    0x2e0, 0x3, 0x39, 0x6, 0x39, 0x2e4, 0xa, 0x39, 0xd, 0x39, 0xe, 0x39, 
    0x2e5, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x2eb, 0xa, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x2f0, 0xa, 0x3a, 0x3, 0x3b, 
    0x3, 0x3b, 0x5, 0x3b, 0x2f4, 0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 
    0x2f8, 0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x2fc, 0xa, 0x3b, 
    0x5, 0x3b, 0x2fe, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x302, 
    0xa, 0x3c, 0x3, 0x3d, 0x7, 0x3d, 0x305, 0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 
    0x308, 0xb, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
    0x3f, 0x7, 0x3f, 0x316, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x319, 0xb, 
    0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x31e, 0xa, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x324, 0xa, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x32a, 0xa, 0x40, 
    0x3, 0x40, 0x5, 0x40, 0x32d, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x33d, 
    0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x34d, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x5, 0x41, 0x378, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x7, 
    0x41, 0x384, 0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x387, 0xb, 0x41, 0x3, 
    0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x395, 
    0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x39a, 0xa, 0x43, 
    0x3, 0x43, 0x5, 0x43, 0x39d, 0xa, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x3a5, 0xa, 0x44, 0x5, 0x44, 
    0x3a7, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x7, 0x45, 0x3ac, 
    0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 0x3af, 0xb, 0x45, 0x3, 0x45, 0x5, 0x45, 
    0x3b2, 0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x7, 0x47, 0x3bb, 0xa, 0x47, 0xc, 0x47, 0xe, 0x47, 
    0x3be, 0xb, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x7, 0x47, 0x3c7, 0xa, 0x47, 0xc, 0x47, 0xe, 0x47, 
    0x3ca, 0xb, 0x47, 0x3, 0x47, 0x3, 0x47, 0x7, 0x47, 0x3ce, 0xa, 0x47, 
    0xc, 0x47, 0xe, 0x47, 0x3d1, 0xb, 0x47, 0x5, 0x47, 0x3d3, 0xa, 0x47, 
    0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x3d7, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x7, 0x4a, 0x3de, 0xa, 0x4a, 0xc, 0x4a, 
    0xe, 0x4a, 0x3e1, 0xb, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x3e5, 
    0xa, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x7, 0x4b, 0x3e9, 0xa, 0x4b, 0xc, 0x4b, 
    0xe, 0x4b, 0x3ec, 0xb, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x3f4, 0xa, 0x4d, 0x5, 0x4d, 0x3f6, 
    0xa, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x3fc, 
    0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x400, 0xa, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x2, 0x3, 0x80, 0x50, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 
    0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 
    0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 
    0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 
    0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 
    0x9c, 0x2, 0x10, 0x6, 0x2, 0x3, 0x3, 0x14, 0x14, 0x23, 0x25, 0x28, 0x28, 
    0x6, 0x2, 0x3, 0x3, 0xe, 0xe, 0x25, 0x25, 0x28, 0x28, 0x4, 0x2, 0x13, 
    0x13, 0x29, 0x29, 0x3, 0x2, 0x34, 0x37, 0x3, 0x2, 0x38, 0x39, 0x3, 0x2, 
    0x54, 0x57, 0x3, 0x2, 0x4a, 0x4b, 0x4, 0x2, 0x58, 0x59, 0x5d, 0x5d, 
    0x3, 0x2, 0x56, 0x57, 0x4, 0x2, 0x48, 0x49, 0x4f, 0x50, 0x4, 0x2, 0x4e, 
    0x4e, 0x51, 0x51, 0x4, 0x2, 0x47, 0x47, 0x5e, 0x68, 0x3, 0x2, 0x54, 
    0x55, 0xa, 0x2, 0x5, 0x5, 0x7, 0x7, 0xa, 0xa, 0x10, 0x10, 0x16, 0x16, 
    0x1d, 0x1d, 0x1f, 0x1f, 0x27, 0x27, 0x2, 0x46a, 0x2, 0x9f, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x6, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0xca, 0x3, 0x2, 0x2, 0x2, 0xa, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd3, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x10, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x14, 0xf5, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x18, 0x104, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x113, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x20, 0x131, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x139, 0x3, 0x2, 0x2, 0x2, 0x24, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x26, 0x14d, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x151, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x153, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x32, 0x170, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x36, 0x189, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x1a6, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1b5, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1c7, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x48, 0x1d7, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1f2, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x50, 0x200, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x207, 0x3, 0x2, 0x2, 0x2, 0x54, 0x215, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x217, 0x3, 0x2, 0x2, 0x2, 0x58, 0x219, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x21b, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x229, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x22e, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x2a9, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x66, 0x2b8, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x2c3, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x2de, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x74, 0x2fd, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x301, 0x3, 0x2, 0x2, 0x2, 0x78, 0x306, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x312, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x80, 0x33c, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x394, 0x3, 0x2, 0x2, 0x2, 0x84, 0x399, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x88, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x3b3, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x3d4, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x92, 0x3da, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x96, 0x3ed, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x3fb, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 0x5, 0x4, 0x3, 0x2, 
    0x9f, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa3, 0x5, 0x6, 0x4, 0x2, 0xa2, 0xa1, 
    0x3, 0x2, 0x2, 0x2, 0xa3, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa9, 0x5, 0x8, 0x5, 
    0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 0x3, 0x2, 0x2, 0x2, 
    0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xad, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 
    0x7, 0x2, 0x2, 0x3, 0xae, 0x3, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x7, 
    0x22, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x52, 0x2a, 0x2, 0xb1, 0xb2, 0x7, 0x44, 
    0x2, 0x2, 0xb2, 0x5, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x7, 0x1b, 0x2, 
    0x2, 0xb4, 0xb6, 0x7, 0x28, 0x2, 0x2, 0xb5, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 
    0xba, 0x5, 0x52, 0x2a, 0x2, 0xb8, 0xb9, 0x7, 0x46, 0x2, 0x2, 0xb9, 0xbb, 
    0x7, 0x58, 0x2, 0x2, 0xba, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x44, 
    0x2, 0x2, 0xbd, 0x7, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc0, 0x5, 0xc, 0x7, 
    0x2, 0xbf, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc8, 
    0x5, 0x10, 0x9, 0x2, 0xc5, 0xc8, 0x5, 0x12, 0xa, 0x2, 0xc6, 0xc8, 0x5, 
    0x1a, 0xe, 0x2, 0xc7, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0xc7, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xcb, 0x3, 0x2, 0x2, 
    0x2, 0xc9, 0xcb, 0x7, 0x44, 0x2, 0x2, 0xca, 0xc1, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 0x9, 0x3, 0x2, 0x2, 0x2, 0xcc, 
    0xd2, 0x5, 0xc, 0x7, 0x2, 0xcd, 0xd2, 0x7, 0x20, 0x2, 0x2, 0xce, 0xd2, 
    0x7, 0x2b, 0x2, 0x2, 0xcf, 0xd2, 0x7, 0x2f, 0x2, 0x2, 0xd0, 0xd2, 0x7, 
    0x32, 0x2, 0x2, 0xd1, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xd1, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0xd3, 0xd4, 0x9, 0x2, 0x2, 0x2, 0xd4, 0xd, 0x3, 0x2, 0x2, 0x2, 0xd5, 
    0xd6, 0x7, 0x14, 0x2, 0x2, 0xd6, 0xf, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 
    0x7, 0xb, 0x2, 0x2, 0xd8, 0xdb, 0x7, 0x6e, 0x2, 0x2, 0xd9, 0xda, 0x7, 
    0x13, 0x2, 0x2, 0xda, 0xdc, 0x5, 0x94, 0x4b, 0x2, 0xdb, 0xd9, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0xdd, 0xde, 0x7, 0x1a, 0x2, 0x2, 0xde, 0xe0, 0x5, 0x92, 0x4a, 0x2, 
    0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x5, 0x1c, 0xf, 0x2, 0xe2, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x12, 0x2, 0x2, 0xe4, 0xe7, 0x7, 
    0x6e, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x1a, 0x2, 0x2, 0xe6, 0xe8, 0x5, 0x92, 
    0x4a, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 
    0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xeb, 0x7, 0x40, 0x2, 0x2, 
    0xea, 0xec, 0x5, 0x14, 0xb, 0x2, 0xeb, 0xea, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xee, 0x3, 0x2, 0x2, 0x2, 0xed, 0xef, 
    0x7, 0x45, 0x2, 0x2, 0xee, 0xed, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x3, 
    0x2, 0x2, 0x2, 0xef, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf2, 0x5, 0x18, 
    0xd, 0x2, 0xf1, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x41, 0x2, 0x2, 
    0xf4, 0x13, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xfa, 0x5, 0x16, 0xc, 0x2, 0xf6, 
    0xf7, 0x7, 0x45, 0x2, 0x2, 0xf7, 0xf9, 0x5, 0x16, 0xc, 0x2, 0xf8, 0xf6, 
    0x3, 0x2, 0x2, 0x2, 0xf9, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xff, 0x7, 0x6e, 0x2, 
    0x2, 0xfe, 0x100, 0x5, 0x9c, 0x4f, 0x2, 0xff, 0xfe, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x102, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x103, 0x5, 0x1c, 0xf, 0x2, 0x102, 0x101, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 0x17, 0x3, 0x2, 0x2, 0x2, 0x104, 0x108, 
    0x7, 0x44, 0x2, 0x2, 0x105, 0x107, 0x5, 0x20, 0x11, 0x2, 0x106, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x107, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x7, 
    0x1e, 0x2, 0x2, 0x10c, 0x10f, 0x7, 0x6e, 0x2, 0x2, 0x10d, 0x10e, 0x7, 
    0x13, 0x2, 0x2, 0x10e, 0x110, 0x5, 0x92, 0x4a, 0x2, 0x10f, 0x10d, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 
    0x2, 0x2, 0x2, 0x111, 0x112, 0x5, 0x1e, 0x10, 0x2, 0x112, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0x117, 0x7, 0x40, 0x2, 0x2, 0x114, 0x116, 0x5, 
    0x20, 0x11, 0x2, 0x115, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x117, 0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 
    0x2, 0x2, 0x2, 0x118, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 
    0x2, 0x2, 0x2, 0x11a, 0x11b, 0x7, 0x41, 0x2, 0x2, 0x11b, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x11c, 0x120, 0x7, 0x40, 0x2, 0x2, 0x11d, 0x11f, 0x5, 
    0x2e, 0x18, 0x2, 0x11e, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0x120, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 
    0x2, 0x2, 0x2, 0x121, 0x123, 0x3, 0x2, 0x2, 0x2, 0x122, 0x120, 0x3, 
    0x2, 0x2, 0x2, 0x123, 0x124, 0x7, 0x41, 0x2, 0x2, 0x124, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x125, 0x132, 0x7, 0x44, 0x2, 0x2, 0x126, 0x128, 0x7, 
    0x28, 0x2, 0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 
    0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x132, 0x5, 
    0x5a, 0x2e, 0x2, 0x12a, 0x12c, 0x5, 0xa, 0x6, 0x2, 0x12b, 0x12a, 0x3, 
    0x2, 0x2, 0x2, 0x12c, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x130, 0x3, 
    0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x130, 0x132, 0x5, 
    0x22, 0x12, 0x2, 0x131, 0x125, 0x3, 0x2, 0x2, 0x2, 0x131, 0x127, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x132, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x13a, 0x5, 0x24, 0x13, 0x2, 0x134, 0x13a, 0x5, 0x2c, 
    0x17, 0x2, 0x135, 0x13a, 0x5, 0x2a, 0x16, 0x2, 0x136, 0x13a, 0x5, 0x1a, 
    0xe, 0x2, 0x137, 0x13a, 0x5, 0x10, 0x9, 0x2, 0x138, 0x13a, 0x5, 0x12, 
    0xa, 0x2, 0x139, 0x133, 0x3, 0x2, 0x2, 0x2, 0x139, 0x134, 0x3, 0x2, 
    0x2, 0x2, 0x139, 0x135, 0x3, 0x2, 0x2, 0x2, 0x139, 0x136, 0x3, 0x2, 
    0x2, 0x2, 0x139, 0x137, 0x3, 0x2, 0x2, 0x2, 0x139, 0x138, 0x3, 0x2, 
    0x2, 0x2, 0x13a, 0x23, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x5, 0x28, 
    0x15, 0x2, 0x13c, 0x13d, 0x7, 0x6e, 0x2, 0x2, 0x13d, 0x142, 0x5, 0x4a, 
    0x26, 0x2, 0x13e, 0x13f, 0x7, 0x42, 0x2, 0x2, 0x13f, 0x141, 0x7, 0x43, 
    0x2, 0x2, 0x140, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x141, 0x144, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x143, 0x147, 0x3, 0x2, 0x2, 0x2, 0x144, 0x142, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x146, 0x7, 0x2e, 0x2, 0x2, 0x146, 0x148, 0x5, 0x48, 
    0x25, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x5, 0x26, 
    0x14, 0x2, 0x14a, 0x25, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14e, 0x5, 0x5a, 
    0x2e, 0x2, 0x14c, 0x14e, 0x7, 0x44, 0x2, 0x2, 0x14d, 0x14b, 0x3, 0x2, 
    0x2, 0x2, 0x14d, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x14f, 0x152, 0x5, 0x94, 0x4b, 0x2, 0x150, 0x152, 0x7, 0x31, 0x2, 
    0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x150, 0x3, 0x2, 0x2, 
    0x2, 0x152, 0x29, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x7, 0x6e, 0x2, 
    0x2, 0x154, 0x157, 0x5, 0x4a, 0x26, 0x2, 0x155, 0x156, 0x7, 0x2e, 0x2, 
    0x2, 0x156, 0x158, 0x5, 0x48, 0x25, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 
    0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x3, 0x2, 0x2, 
    0x2, 0x159, 0x15a, 0x5, 0x5a, 0x2e, 0x2, 0x15a, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x15b, 0x15c, 0x5, 0x94, 0x4b, 0x2, 0x15c, 0x15d, 0x5, 0x3a, 0x1e, 
    0x2, 0x15d, 0x15e, 0x7, 0x44, 0x2, 0x2, 0x15e, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x15f, 0x161, 0x5, 0xa, 0x6, 0x2, 0x160, 0x15f, 0x3, 0x2, 0x2, 
    0x2, 0x161, 0x164, 0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 
    0x2, 0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x165, 0x3, 0x2, 0x2, 
    0x2, 0x164, 0x162, 0x3, 0x2, 0x2, 0x2, 0x165, 0x168, 0x5, 0x30, 0x19, 
    0x2, 0x166, 0x168, 0x7, 0x44, 0x2, 0x2, 0x167, 0x162, 0x3, 0x2, 0x2, 
    0x2, 0x167, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x169, 0x16f, 0x5, 0x32, 0x1a, 0x2, 0x16a, 0x16f, 0x5, 0x36, 0x1c, 0x2, 
    0x16b, 0x16f, 0x5, 0x1a, 0xe, 0x2, 0x16c, 0x16f, 0x5, 0x10, 0x9, 0x2, 
    0x16d, 0x16f, 0x5, 0x12, 0xa, 0x2, 0x16e, 0x169, 0x3, 0x2, 0x2, 0x2, 
    0x16e, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16b, 0x3, 0x2, 0x2, 0x2, 
    0x16e, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16d, 0x3, 0x2, 0x2, 0x2, 
    0x16f, 0x31, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x5, 0x94, 0x4b, 0x2, 
    0x171, 0x176, 0x5, 0x34, 0x1b, 0x2, 0x172, 0x173, 0x7, 0x45, 0x2, 0x2, 
    0x173, 0x175, 0x5, 0x34, 0x1b, 0x2, 0x174, 0x172, 0x3, 0x2, 0x2, 0x2, 
    0x175, 0x178, 0x3, 0x2, 0x2, 0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 
    0x176, 0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 0x179, 0x3, 0x2, 0x2, 0x2, 
    0x178, 0x176, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x7, 0x44, 0x2, 0x2, 
    0x17a, 0x33, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x180, 0x7, 0x6e, 0x2, 0x2, 
    0x17c, 0x17d, 0x7, 0x42, 0x2, 0x2, 0x17d, 0x17f, 0x7, 0x43, 0x2, 0x2, 
    0x17e, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x182, 0x3, 0x2, 0x2, 0x2, 
    0x180, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x3, 0x2, 0x2, 0x2, 
    0x181, 0x183, 0x3, 0x2, 0x2, 0x2, 0x182, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x183, 0x184, 0x7, 0x47, 0x2, 0x2, 0x184, 0x185, 0x5, 0x40, 0x21, 0x2, 
    0x185, 0x35, 0x3, 0x2, 0x2, 0x2, 0x186, 0x188, 0x5, 0x38, 0x1d, 0x2, 
    0x187, 0x186, 0x3, 0x2, 0x2, 0x2, 0x188, 0x18b, 0x3, 0x2, 0x2, 0x2, 
    0x189, 0x187, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x3, 0x2, 0x2, 0x2, 
    0x18a, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x189, 0x3, 0x2, 0x2, 0x2, 
    0x18c, 0x18d, 0x5, 0x28, 0x15, 0x2, 0x18d, 0x18e, 0x7, 0x6e, 0x2, 0x2, 
    0x18e, 0x193, 0x5, 0x4a, 0x26, 0x2, 0x18f, 0x190, 0x7, 0x42, 0x2, 0x2, 
    0x190, 0x192, 0x7, 0x43, 0x2, 0x2, 0x191, 0x18f, 0x3, 0x2, 0x2, 0x2, 
    0x192, 0x195, 0x3, 0x2, 0x2, 0x2, 0x193, 0x191, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x198, 0x3, 0x2, 0x2, 0x2, 
    0x195, 0x193, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x7, 0x2e, 0x2, 0x2, 
    0x197, 0x199, 0x5, 0x48, 0x25, 0x2, 0x198, 0x196, 0x3, 0x2, 0x2, 0x2, 
    0x198, 0x199, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 
    0x19a, 0x19b, 0x5, 0x26, 0x14, 0x2, 0x19b, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x19c, 0x19d, 0x9, 0x3, 0x2, 0x2, 0x19d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x19e, 
    0x1a3, 0x5, 0x3c, 0x1f, 0x2, 0x19f, 0x1a0, 0x7, 0x45, 0x2, 0x2, 0x1a0, 
    0x1a2, 0x5, 0x3c, 0x1f, 0x2, 0x1a1, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a2, 
    0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a3, 
    0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a3, 
    0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a9, 0x5, 0x3e, 0x20, 0x2, 0x1a7, 0x1a8, 
    0x7, 0x47, 0x2, 0x2, 0x1a8, 0x1aa, 0x5, 0x40, 0x21, 0x2, 0x1a9, 0x1a7, 
    0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x3d, 0x3, 
    0x2, 0x2, 0x2, 0x1ab, 0x1b0, 0x7, 0x6e, 0x2, 0x2, 0x1ac, 0x1ad, 0x7, 
    0x42, 0x2, 0x2, 0x1ad, 0x1af, 0x7, 0x43, 0x2, 0x2, 0x1ae, 0x1ac, 0x3, 
    0x2, 0x2, 0x2, 0x1af, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1ae, 0x3, 
    0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x3f, 0x3, 0x2, 
    0x2, 0x2, 0x1b2, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b6, 0x5, 0x42, 
    0x22, 0x2, 0x1b4, 0x1b6, 0x5, 0x80, 0x41, 0x2, 0x1b5, 0x1b3, 0x3, 0x2, 
    0x2, 0x2, 0x1b5, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x1b7, 0x1c3, 0x7, 0x40, 0x2, 0x2, 0x1b8, 0x1bd, 0x5, 0x40, 0x21, 
    0x2, 0x1b9, 0x1ba, 0x7, 0x45, 0x2, 0x2, 0x1ba, 0x1bc, 0x5, 0x40, 0x21, 
    0x2, 0x1bb, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bf, 0x3, 0x2, 0x2, 
    0x2, 0x1bd, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x3, 0x2, 0x2, 
    0x2, 0x1be, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1bd, 0x3, 0x2, 0x2, 
    0x2, 0x1c0, 0x1c2, 0x7, 0x45, 0x2, 0x2, 0x1c1, 0x1c0, 0x3, 0x2, 0x2, 
    0x2, 0x1c1, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c4, 0x3, 0x2, 0x2, 
    0x2, 0x1c3, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x3, 0x2, 0x2, 
    0x2, 0x1c4, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x7, 0x41, 0x2, 
    0x2, 0x1c6, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1cc, 0x7, 0x6e, 0x2, 
    0x2, 0x1c8, 0x1c9, 0x7, 0x46, 0x2, 0x2, 0x1c9, 0x1cb, 0x7, 0x6e, 0x2, 
    0x2, 0x1ca, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1ce, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 0x3, 0x2, 0x2, 
    0x2, 0x1cd, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cc, 0x3, 0x2, 0x2, 0x2, 
    0x1cf, 0x1d6, 0x5, 0x94, 0x4b, 0x2, 0x1d0, 0x1d3, 0x7, 0x4c, 0x2, 0x2, 
    0x1d1, 0x1d2, 0x9, 0x4, 0x2, 0x2, 0x1d2, 0x1d4, 0x5, 0x94, 0x4b, 0x2, 
    0x1d3, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x3, 0x2, 0x2, 0x2, 
    0x1d4, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1cf, 0x3, 0x2, 0x2, 0x2, 
    0x1d5, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1d7, 
    0x1dc, 0x5, 0x52, 0x2a, 0x2, 0x1d8, 0x1d9, 0x7, 0x45, 0x2, 0x2, 0x1d9, 
    0x1db, 0x5, 0x52, 0x2a, 0x2, 0x1da, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1db, 
    0x1de, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dc, 
    0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1dc, 
    0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e1, 0x7, 0x3e, 0x2, 0x2, 0x1e0, 0x1e2, 
    0x5, 0x4c, 0x27, 0x2, 0x1e1, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 
    0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 
    0x7, 0x3f, 0x2, 0x2, 0x1e4, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1ea, 
    0x5, 0x4e, 0x28, 0x2, 0x1e6, 0x1e7, 0x7, 0x45, 0x2, 0x2, 0x1e7, 0x1e9, 
    0x5, 0x4e, 0x28, 0x2, 0x1e8, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ec, 
    0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 
    0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ea, 
    0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x7, 0x45, 0x2, 0x2, 0x1ee, 0x1f0, 
    0x5, 0x50, 0x29, 0x2, 0x1ef, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 
    0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f3, 
    0x5, 0x50, 0x29, 0x2, 0x1f2, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f1, 
    0x3, 0x2, 0x2, 0x2, 0x1f3, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f6, 0x5, 
    0xe, 0x8, 0x2, 0x1f5, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f9, 0x3, 
    0x2, 0x2, 0x2, 0x1f7, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 
    0x2, 0x2, 0x2, 0x1f8, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f7, 0x3, 
    0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x5, 0x94, 0x4b, 0x2, 0x1fb, 0x1fc, 0x5, 
    0x3e, 0x20, 0x2, 0x1fc, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1ff, 0x5, 
    0xe, 0x8, 0x2, 0x1fe, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x202, 0x3, 
    0x2, 0x2, 0x2, 0x200, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x3, 
    0x2, 0x2, 0x2, 0x201, 0x203, 0x3, 0x2, 0x2, 0x2, 0x202, 0x200, 0x3, 
    0x2, 0x2, 0x2, 0x203, 0x204, 0x5, 0x94, 0x4b, 0x2, 0x204, 0x205, 0x7, 
    0x6a, 0x2, 0x2, 0x205, 0x206, 0x5, 0x3e, 0x20, 0x2, 0x206, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x207, 0x20c, 0x7, 0x6e, 0x2, 0x2, 0x208, 0x209, 0x7, 
    0x46, 0x2, 0x2, 0x209, 0x20b, 0x7, 0x6e, 0x2, 0x2, 0x20a, 0x208, 0x3, 
    0x2, 0x2, 0x2, 0x20b, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20a, 0x3, 
    0x2, 0x2, 0x2, 0x20c, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x20e, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x216, 0x5, 0x56, 
    0x2c, 0x2, 0x210, 0x216, 0x5, 0x58, 0x2d, 0x2, 0x211, 0x216, 0x7, 0x3b, 
    0x2, 0x2, 0x212, 0x216, 0x7, 0x3c, 0x2, 0x2, 0x213, 0x216, 0x7, 0x3a, 
    0x2, 0x2, 0x214, 0x216, 0x7, 0x3d, 0x2, 0x2, 0x215, 0x20f, 0x3, 0x2, 
    0x2, 0x2, 0x215, 0x210, 0x3, 0x2, 0x2, 0x2, 0x215, 0x211, 0x3, 0x2, 
    0x2, 0x2, 0x215, 0x212, 0x3, 0x2, 0x2, 0x2, 0x215, 0x213, 0x3, 0x2, 
    0x2, 0x2, 0x215, 0x214, 0x3, 0x2, 0x2, 0x2, 0x216, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x217, 0x218, 0x9, 0x5, 0x2, 0x2, 0x218, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x219, 0x21a, 0x9, 0x6, 0x2, 0x2, 0x21a, 0x59, 0x3, 0x2, 0x2, 0x2, 0x21b, 
    0x21f, 0x7, 0x40, 0x2, 0x2, 0x21c, 0x21e, 0x5, 0x5c, 0x2f, 0x2, 0x21d, 
    0x21c, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x221, 0x3, 0x2, 0x2, 0x2, 0x21f, 
    0x21d, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x3, 0x2, 0x2, 0x2, 0x220, 
    0x222, 0x3, 0x2, 0x2, 0x2, 0x221, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x222, 
    0x223, 0x7, 0x41, 0x2, 0x2, 0x223, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x224, 
    0x225, 0x5, 0x5e, 0x30, 0x2, 0x225, 0x226, 0x7, 0x44, 0x2, 0x2, 0x226, 
    0x22a, 0x3, 0x2, 0x2, 0x2, 0x227, 0x22a, 0x5, 0x62, 0x32, 0x2, 0x228, 
    0x22a, 0x5, 0x60, 0x31, 0x2, 0x229, 0x224, 0x3, 0x2, 0x2, 0x2, 0x229, 
    0x227, 0x3, 0x2, 0x2, 0x2, 0x229, 0x228, 0x3, 0x2, 0x2, 0x2, 0x22a, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22d, 0x5, 0xe, 0x8, 0x2, 0x22c, 0x22b, 
    0x3, 0x2, 0x2, 0x2, 0x22d, 0x230, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22c, 
    0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x231, 
    0x3, 0x2, 0x2, 0x2, 0x230, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 
    0x5, 0x94, 0x4b, 0x2, 0x232, 0x233, 0x5, 0x3a, 0x1e, 0x2, 0x233, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x234, 0x236, 0x5, 0xc, 0x7, 0x2, 0x235, 0x234, 
    0x3, 0x2, 0x2, 0x2, 0x236, 0x239, 0x3, 0x2, 0x2, 0x2, 0x237, 0x235, 
    0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x3, 0x2, 0x2, 0x2, 0x238, 0x23c, 
    0x3, 0x2, 0x2, 0x2, 0x239, 0x237, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23d, 
    0x5, 0x10, 0x9, 0x2, 0x23b, 0x23d, 0x5, 0x1a, 0xe, 0x2, 0x23c, 0x23a, 
    0x3, 0x2, 0x2, 0x2, 0x23c, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x240, 
    0x3, 0x2, 0x2, 0x2, 0x23e, 0x240, 0x7, 0x44, 0x2, 0x2, 0x23f, 0x237, 
    0x3, 0x2, 0x2, 0x2, 0x23f, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x240, 0x61, 0x3, 
    0x2, 0x2, 0x2, 0x241, 0x2aa, 0x5, 0x5a, 0x2e, 0x2, 0x242, 0x243, 0x7, 
    0x4, 0x2, 0x2, 0x243, 0x246, 0x5, 0x80, 0x41, 0x2, 0x244, 0x245, 0x7, 
    0x4d, 0x2, 0x2, 0x245, 0x247, 0x5, 0x80, 0x41, 0x2, 0x246, 0x244, 0x3, 
    0x2, 0x2, 0x2, 0x246, 0x247, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x3, 
    0x2, 0x2, 0x2, 0x248, 0x249, 0x7, 0x44, 0x2, 0x2, 0x249, 0x2aa, 0x3, 
    0x2, 0x2, 0x2, 0x24a, 0x24b, 0x7, 0x18, 0x2, 0x2, 0x24b, 0x24c, 0x5, 
    0x7a, 0x3e, 0x2, 0x24c, 0x24f, 0x5, 0x62, 0x32, 0x2, 0x24d, 0x24e, 0x7, 
    0x11, 0x2, 0x2, 0x24e, 0x250, 0x5, 0x62, 0x32, 0x2, 0x24f, 0x24d, 0x3, 
    0x2, 0x2, 0x2, 0x24f, 0x250, 0x3, 0x2, 0x2, 0x2, 0x250, 0x2aa, 0x3, 
    0x2, 0x2, 0x2, 0x251, 0x252, 0x7, 0x17, 0x2, 0x2, 0x252, 0x253, 0x7, 
    0x3e, 0x2, 0x2, 0x253, 0x254, 0x5, 0x74, 0x3b, 0x2, 0x254, 0x255, 0x7, 
    0x3f, 0x2, 0x2, 0x255, 0x256, 0x5, 0x62, 0x32, 0x2, 0x256, 0x2aa, 0x3, 
    0x2, 0x2, 0x2, 0x257, 0x258, 0x7, 0x33, 0x2, 0x2, 0x258, 0x259, 0x5, 
    0x7a, 0x3e, 0x2, 0x259, 0x25a, 0x5, 0x62, 0x32, 0x2, 0x25a, 0x2aa, 0x3, 
    0x2, 0x2, 0x2, 0x25b, 0x25c, 0x7, 0xf, 0x2, 0x2, 0x25c, 0x25d, 0x5, 
    0x62, 0x32, 0x2, 0x25d, 0x25e, 0x7, 0x33, 0x2, 0x2, 0x25e, 0x25f, 0x5, 
    0x7a, 0x3e, 0x2, 0x25f, 0x260, 0x7, 0x44, 0x2, 0x2, 0x260, 0x2aa, 0x3, 
    0x2, 0x2, 0x2, 0x261, 0x262, 0x7, 0x30, 0x2, 0x2, 0x262, 0x26c, 0x5, 
    0x5a, 0x2e, 0x2, 0x263, 0x265, 0x5, 0x64, 0x33, 0x2, 0x264, 0x263, 0x3, 
    0x2, 0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 0x2, 0x2, 0x266, 0x264, 0x3, 
    0x2, 0x2, 0x2, 0x266, 0x267, 0x3, 0x2, 0x2, 0x2, 0x267, 0x269, 0x3, 
    0x2, 0x2, 0x2, 0x268, 0x26a, 0x5, 0x68, 0x35, 0x2, 0x269, 0x268, 0x3, 
    0x2, 0x2, 0x2, 0x269, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x26d, 0x3, 
    0x2, 0x2, 0x2, 0x26b, 0x26d, 0x5, 0x68, 0x35, 0x2, 0x26c, 0x264, 0x3, 
    0x2, 0x2, 0x2, 0x26c, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x2aa, 0x3, 
    0x2, 0x2, 0x2, 0x26e, 0x26f, 0x7, 0x30, 0x2, 0x2, 0x26f, 0x270, 0x5, 
    0x6a, 0x36, 0x2, 0x270, 0x274, 0x5, 0x5a, 0x2e, 0x2, 0x271, 0x273, 0x5, 
    0x64, 0x33, 0x2, 0x272, 0x271, 0x3, 0x2, 0x2, 0x2, 0x273, 0x276, 0x3, 
    0x2, 0x2, 0x2, 0x274, 0x272, 0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 0x3, 
    0x2, 0x2, 0x2, 0x275, 0x278, 0x3, 0x2, 0x2, 0x2, 0x276, 0x274, 0x3, 
    0x2, 0x2, 0x2, 0x277, 0x279, 0x5, 0x68, 0x35, 0x2, 0x278, 0x277, 0x3, 
    0x2, 0x2, 0x2, 0x278, 0x279, 0x3, 0x2, 0x2, 0x2, 0x279, 0x2aa, 0x3, 
    0x2, 0x2, 0x2, 0x27a, 0x27b, 0x7, 0x2a, 0x2, 0x2, 0x27b, 0x27c, 0x5, 
    0x7a, 0x3e, 0x2, 0x27c, 0x280, 0x7, 0x40, 0x2, 0x2, 0x27d, 0x27f, 0x5, 
    0x70, 0x39, 0x2, 0x27e, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x282, 0x3, 
    0x2, 0x2, 0x2, 0x280, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 0x3, 
    0x2, 0x2, 0x2, 0x281, 0x286, 0x3, 0x2, 0x2, 0x2, 0x282, 0x280, 0x3, 
    0x2, 0x2, 0x2, 0x283, 0x285, 0x5, 0x72, 0x3a, 0x2, 0x284, 0x283, 0x3, 
    0x2, 0x2, 0x2, 0x285, 0x288, 0x3, 0x2, 0x2, 0x2, 0x286, 0x284, 0x3, 
    0x2, 0x2, 0x2, 0x286, 0x287, 0x3, 0x2, 0x2, 0x2, 0x287, 0x289, 0x3, 
    0x2, 0x2, 0x2, 0x288, 0x286, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x7, 
    0x41, 0x2, 0x2, 0x28a, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x7, 
    0x2b, 0x2, 0x2, 0x28c, 0x28d, 0x5, 0x7a, 0x3e, 0x2, 0x28d, 0x28e, 0x5, 
    0x5a, 0x2e, 0x2, 0x28e, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x291, 0x7, 
    0x26, 0x2, 0x2, 0x290, 0x292, 0x5, 0x80, 0x41, 0x2, 0x291, 0x290, 0x3, 
    0x2, 0x2, 0x2, 0x291, 0x292, 0x3, 0x2, 0x2, 0x2, 0x292, 0x293, 0x3, 
    0x2, 0x2, 0x2, 0x293, 0x2aa, 0x7, 0x44, 0x2, 0x2, 0x294, 0x295, 0x7, 
    0x2d, 0x2, 0x2, 0x295, 0x296, 0x5, 0x80, 0x41, 0x2, 0x296, 0x297, 0x7, 
    0x44, 0x2, 0x2, 0x297, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x298, 0x29a, 0x7, 
    0x6, 0x2, 0x2, 0x299, 0x29b, 0x7, 0x6e, 0x2, 0x2, 0x29a, 0x299, 0x3, 
    0x2, 0x2, 0x2, 0x29a, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x3, 
    0x2, 0x2, 0x2, 0x29c, 0x2aa, 0x7, 0x44, 0x2, 0x2, 0x29d, 0x29f, 0x7, 
    0xd, 0x2, 0x2, 0x29e, 0x2a0, 0x7, 0x6e, 0x2, 0x2, 0x29f, 0x29e, 0x3, 
    0x2, 0x2, 0x2, 0x29f, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a1, 0x3, 
    0x2, 0x2, 0x2, 0x2a1, 0x2aa, 0x7, 0x44, 0x2, 0x2, 0x2a2, 0x2aa, 0x7, 
    0x44, 0x2, 0x2, 0x2a3, 0x2a4, 0x5, 0x80, 0x41, 0x2, 0x2a4, 0x2a5, 0x7, 
    0x44, 0x2, 0x2, 0x2a5, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a7, 0x7, 
    0x6e, 0x2, 0x2, 0x2a7, 0x2a8, 0x7, 0x4d, 0x2, 0x2, 0x2a8, 0x2aa, 0x5, 
    0x62, 0x32, 0x2, 0x2a9, 0x241, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x242, 0x3, 
    0x2, 0x2, 0x2, 0x2a9, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x251, 0x3, 
    0x2, 0x2, 0x2, 0x2a9, 0x257, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x25b, 0x3, 
    0x2, 0x2, 0x2, 0x2a9, 0x261, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x26e, 0x3, 
    0x2, 0x2, 0x2, 0x2a9, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x28b, 0x3, 
    0x2, 0x2, 0x2, 0x2a9, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x294, 0x3, 
    0x2, 0x2, 0x2, 0x2a9, 0x298, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x29d, 0x3, 
    0x2, 0x2, 0x2, 0x2a9, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2a3, 0x3, 
    0x2, 0x2, 0x2, 0x2a9, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x2ab, 0x2ac, 0x7, 0x9, 0x2, 0x2, 0x2ac, 0x2b0, 0x7, 0x3e, 
    0x2, 0x2, 0x2ad, 0x2af, 0x5, 0xe, 0x8, 0x2, 0x2ae, 0x2ad, 0x3, 0x2, 
    0x2, 0x2, 0x2af, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2ae, 0x3, 0x2, 
    0x2, 0x2, 0x2b0, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b3, 0x3, 0x2, 
    0x2, 0x2, 0x2b2, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 0x5, 0x66, 
    0x34, 0x2, 0x2b4, 0x2b5, 0x7, 0x6e, 0x2, 0x2, 0x2b5, 0x2b6, 0x7, 0x3f, 
    0x2, 0x2, 0x2b6, 0x2b7, 0x5, 0x5a, 0x2e, 0x2, 0x2b7, 0x65, 0x3, 0x2, 
    0x2, 0x2, 0x2b8, 0x2bd, 0x5, 0x52, 0x2a, 0x2, 0x2b9, 0x2ba, 0x7, 0x5b, 
    0x2, 0x2, 0x2ba, 0x2bc, 0x5, 0x52, 0x2a, 0x2, 0x2bb, 0x2b9, 0x3, 0x2, 
    0x2, 0x2, 0x2bc, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2bb, 0x3, 0x2, 
    0x2, 0x2, 0x2bd, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x2bf, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x7, 0x15, 0x2, 
    0x2, 0x2c1, 0x2c2, 0x5, 0x5a, 0x2e, 0x2, 0x2c2, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x2c3, 0x2c4, 0x7, 0x3e, 0x2, 0x2, 0x2c4, 0x2c6, 0x5, 0x6c, 0x37, 
    0x2, 0x2c5, 0x2c7, 0x7, 0x44, 0x2, 0x2, 0x2c6, 0x2c5, 0x3, 0x2, 0x2, 
    0x2, 0x2c6, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 0x3, 0x2, 0x2, 
    0x2, 0x2c8, 0x2c9, 0x7, 0x3f, 0x2, 0x2, 0x2c9, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x2ca, 0x2cf, 0x5, 0x6e, 0x38, 0x2, 0x2cb, 0x2cc, 0x7, 0x44, 0x2, 
    0x2, 0x2cc, 0x2ce, 0x5, 0x6e, 0x38, 0x2, 0x2cd, 0x2cb, 0x3, 0x2, 0x2, 
    0x2, 0x2ce, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2cd, 0x3, 0x2, 0x2, 
    0x2, 0x2cf, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x6d, 0x3, 0x2, 0x2, 0x2, 
    0x2d1, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d4, 0x5, 0xe, 0x8, 0x2, 
    0x2d3, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d7, 0x3, 0x2, 0x2, 0x2, 
    0x2d5, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d6, 0x3, 0x2, 0x2, 0x2, 
    0x2d6, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d5, 0x3, 0x2, 0x2, 0x2, 
    0x2d8, 0x2d9, 0x5, 0x44, 0x23, 0x2, 0x2d9, 0x2da, 0x5, 0x3e, 0x20, 0x2, 
    0x2da, 0x2db, 0x7, 0x47, 0x2, 0x2, 0x2db, 0x2dc, 0x5, 0x80, 0x41, 0x2, 
    0x2dc, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2df, 0x5, 0x72, 0x3a, 0x2, 
    0x2de, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2e0, 0x3, 0x2, 0x2, 0x2, 
    0x2e0, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e1, 0x3, 0x2, 0x2, 0x2, 
    0x2e1, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e4, 0x5, 0x5c, 0x2f, 0x2, 
    0x2e3, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 0x3, 0x2, 0x2, 0x2, 
    0x2e5, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e6, 0x3, 0x2, 0x2, 0x2, 
    0x2e6, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2ea, 0x7, 0x8, 0x2, 0x2, 0x2e8, 
    0x2eb, 0x5, 0x80, 0x41, 0x2, 0x2e9, 0x2eb, 0x7, 0x6e, 0x2, 0x2, 0x2ea, 
    0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2eb, 
    0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2f0, 0x7, 0x4d, 0x2, 0x2, 0x2ed, 
    0x2ee, 0x7, 0xe, 0x2, 0x2, 0x2ee, 0x2f0, 0x7, 0x4d, 0x2, 0x2, 0x2ef, 
    0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2f0, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2fe, 0x5, 0x78, 0x3d, 0x2, 0x2f2, 
    0x2f4, 0x5, 0x76, 0x3c, 0x2, 0x2f3, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f3, 
    0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f5, 
    0x2f7, 0x7, 0x44, 0x2, 0x2, 0x2f6, 0x2f8, 0x5, 0x80, 0x41, 0x2, 0x2f7, 
    0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2f8, 
    0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fb, 0x7, 0x44, 0x2, 0x2, 0x2fa, 
    0x2fc, 0x5, 0x7c, 0x3f, 0x2, 0x2fb, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fb, 
    0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2fd, 
    0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2fe, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x302, 0x5, 0x5e, 0x30, 0x2, 0x300, 
    0x302, 0x5, 0x7c, 0x3f, 0x2, 0x301, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x301, 
    0x300, 0x3, 0x2, 0x2, 0x2, 0x302, 0x77, 0x3, 0x2, 0x2, 0x2, 0x303, 0x305, 
    0x5, 0xe, 0x8, 0x2, 0x304, 0x303, 0x3, 0x2, 0x2, 0x2, 0x305, 0x308, 
    0x3, 0x2, 0x2, 0x2, 0x306, 0x304, 0x3, 0x2, 0x2, 0x2, 0x306, 0x307, 
    0x3, 0x2, 0x2, 0x2, 0x307, 0x309, 0x3, 0x2, 0x2, 0x2, 0x308, 0x306, 
    0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x5, 0x94, 0x4b, 0x2, 0x30a, 0x30b, 
    0x5, 0x3e, 0x20, 0x2, 0x30b, 0x30c, 0x7, 0x4d, 0x2, 0x2, 0x30c, 0x30d, 
    0x5, 0x80, 0x41, 0x2, 0x30d, 0x79, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 
    0x7, 0x3e, 0x2, 0x2, 0x30f, 0x310, 0x5, 0x80, 0x41, 0x2, 0x310, 0x311, 
    0x7, 0x3f, 0x2, 0x2, 0x311, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x312, 0x317, 
    0x5, 0x80, 0x41, 0x2, 0x313, 0x314, 0x7, 0x45, 0x2, 0x2, 0x314, 0x316, 
    0x5, 0x80, 0x41, 0x2, 0x315, 0x313, 0x3, 0x2, 0x2, 0x2, 0x316, 0x319, 
    0x3, 0x2, 0x2, 0x2, 0x317, 0x315, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 
    0x3, 0x2, 0x2, 0x2, 0x318, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x319, 0x317, 0x3, 
    0x2, 0x2, 0x2, 0x31a, 0x31b, 0x7, 0x6e, 0x2, 0x2, 0x31b, 0x31d, 0x7, 
    0x3e, 0x2, 0x2, 0x31c, 0x31e, 0x5, 0x7c, 0x3f, 0x2, 0x31d, 0x31c, 0x3, 
    0x2, 0x2, 0x2, 0x31d, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x31f, 0x3, 
    0x2, 0x2, 0x2, 0x31f, 0x32d, 0x7, 0x3f, 0x2, 0x2, 0x320, 0x321, 0x7, 
    0x2c, 0x2, 0x2, 0x321, 0x323, 0x7, 0x3e, 0x2, 0x2, 0x322, 0x324, 0x5, 
    0x7c, 0x3f, 0x2, 0x323, 0x322, 0x3, 0x2, 0x2, 0x2, 0x323, 0x324, 0x3, 
    0x2, 0x2, 0x2, 0x324, 0x325, 0x3, 0x2, 0x2, 0x2, 0x325, 0x32d, 0x7, 
    0x3f, 0x2, 0x2, 0x326, 0x327, 0x7, 0x29, 0x2, 0x2, 0x327, 0x329, 0x7, 
    0x3e, 0x2, 0x2, 0x328, 0x32a, 0x5, 0x7c, 0x3f, 0x2, 0x329, 0x328, 0x3, 
    0x2, 0x2, 0x2, 0x329, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32b, 0x3, 
    0x2, 0x2, 0x2, 0x32b, 0x32d, 0x7, 0x3f, 0x2, 0x2, 0x32c, 0x31a, 0x3, 
    0x2, 0x2, 0x2, 0x32c, 0x320, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x326, 0x3, 
    0x2, 0x2, 0x2, 0x32d, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x32f, 0x8, 0x41, 
    0x1, 0x2, 0x32f, 0x33d, 0x5, 0x82, 0x42, 0x2, 0x330, 0x33d, 0x5, 0x7e, 
    0x40, 0x2, 0x331, 0x332, 0x7, 0x21, 0x2, 0x2, 0x332, 0x33d, 0x5, 0x86, 
    0x44, 0x2, 0x333, 0x334, 0x7, 0x3e, 0x2, 0x2, 0x334, 0x335, 0x5, 0x94, 
    0x4b, 0x2, 0x335, 0x336, 0x7, 0x3f, 0x2, 0x2, 0x336, 0x337, 0x5, 0x80, 
    0x41, 0x13, 0x337, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x338, 0x339, 0x9, 0x7, 
    0x2, 0x2, 0x339, 0x33d, 0x5, 0x80, 0x41, 0x11, 0x33a, 0x33b, 0x9, 0x8, 
    0x2, 0x2, 0x33b, 0x33d, 0x5, 0x80, 0x41, 0x10, 0x33c, 0x32e, 0x3, 0x2, 
    0x2, 0x2, 0x33c, 0x330, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x331, 0x3, 0x2, 
    0x2, 0x2, 0x33c, 0x333, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x338, 0x3, 0x2, 
    0x2, 0x2, 0x33c, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x385, 0x3, 0x2, 
    0x2, 0x2, 0x33e, 0x33f, 0xc, 0xf, 0x2, 0x2, 0x33f, 0x340, 0x9, 0x9, 
    0x2, 0x2, 0x340, 0x384, 0x5, 0x80, 0x41, 0x10, 0x341, 0x342, 0xc, 0xe, 
    0x2, 0x2, 0x342, 0x343, 0x9, 0xa, 0x2, 0x2, 0x343, 0x384, 0x5, 0x80, 
    0x41, 0xf, 0x344, 0x34c, 0xc, 0xd, 0x2, 0x2, 0x345, 0x346, 0x7, 0x49, 
    0x2, 0x2, 0x346, 0x34d, 0x7, 0x49, 0x2, 0x2, 0x347, 0x348, 0x7, 0x48, 
    0x2, 0x2, 0x348, 0x349, 0x7, 0x48, 0x2, 0x2, 0x349, 0x34d, 0x7, 0x48, 
    0x2, 0x2, 0x34a, 0x34b, 0x7, 0x48, 0x2, 0x2, 0x34b, 0x34d, 0x7, 0x48, 
    0x2, 0x2, 0x34c, 0x345, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x347, 0x3, 0x2, 
    0x2, 0x2, 0x34c, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34e, 0x3, 0x2, 
    0x2, 0x2, 0x34e, 0x384, 0x5, 0x80, 0x41, 0xe, 0x34f, 0x350, 0xc, 0xc, 
    0x2, 0x2, 0x350, 0x351, 0x9, 0xb, 0x2, 0x2, 0x351, 0x384, 0x5, 0x80, 
    0x41, 0xd, 0x352, 0x353, 0xc, 0xa, 0x2, 0x2, 0x353, 0x354, 0x9, 0xc, 
    0x2, 0x2, 0x354, 0x384, 0x5, 0x80, 0x41, 0xb, 0x355, 0x356, 0xc, 0x9, 
    0x2, 0x2, 0x356, 0x357, 0x7, 0x5a, 0x2, 0x2, 0x357, 0x384, 0x5, 0x80, 
    0x41, 0xa, 0x358, 0x359, 0xc, 0x8, 0x2, 0x2, 0x359, 0x35a, 0x7, 0x5c, 
    0x2, 0x2, 0x35a, 0x384, 0x5, 0x80, 0x41, 0x9, 0x35b, 0x35c, 0xc, 0x7, 
    0x2, 0x2, 0x35c, 0x35d, 0x7, 0x5b, 0x2, 0x2, 0x35d, 0x384, 0x5, 0x80, 
    0x41, 0x8, 0x35e, 0x35f, 0xc, 0x6, 0x2, 0x2, 0x35f, 0x360, 0x7, 0x52, 
    0x2, 0x2, 0x360, 0x384, 0x5, 0x80, 0x41, 0x7, 0x361, 0x362, 0xc, 0x5, 
    0x2, 0x2, 0x362, 0x363, 0x7, 0x53, 0x2, 0x2, 0x363, 0x384, 0x5, 0x80, 
    0x41, 0x6, 0x364, 0x365, 0xc, 0x4, 0x2, 0x2, 0x365, 0x366, 0x7, 0x4c, 
    0x2, 0x2, 0x366, 0x367, 0x5, 0x80, 0x41, 0x2, 0x367, 0x368, 0x7, 0x4d, 
    0x2, 0x2, 0x368, 0x369, 0x5, 0x80, 0x41, 0x5, 0x369, 0x384, 0x3, 0x2, 
    0x2, 0x2, 0x36a, 0x36b, 0xc, 0x3, 0x2, 0x2, 0x36b, 0x36c, 0x9, 0xd, 
    0x2, 0x2, 0x36c, 0x384, 0x5, 0x80, 0x41, 0x3, 0x36d, 0x36e, 0xc, 0x17, 
    0x2, 0x2, 0x36e, 0x377, 0x7, 0x46, 0x2, 0x2, 0x36f, 0x378, 0x7, 0x6e, 
    0x2, 0x2, 0x370, 0x378, 0x5, 0x7e, 0x40, 0x2, 0x371, 0x378, 0x7, 0x2c, 
    0x2, 0x2, 0x372, 0x373, 0x7, 0x21, 0x2, 0x2, 0x373, 0x378, 0x5, 0x8a, 
    0x46, 0x2, 0x374, 0x375, 0x7, 0x29, 0x2, 0x2, 0x375, 0x378, 0x5, 0x98, 
    0x4d, 0x2, 0x376, 0x378, 0x5, 0x90, 0x49, 0x2, 0x377, 0x36f, 0x3, 0x2, 
    0x2, 0x2, 0x377, 0x370, 0x3, 0x2, 0x2, 0x2, 0x377, 0x371, 0x3, 0x2, 
    0x2, 0x2, 0x377, 0x372, 0x3, 0x2, 0x2, 0x2, 0x377, 0x374, 0x3, 0x2, 
    0x2, 0x2, 0x377, 0x376, 0x3, 0x2, 0x2, 0x2, 0x378, 0x384, 0x3, 0x2, 
    0x2, 0x2, 0x379, 0x37a, 0xc, 0x16, 0x2, 0x2, 0x37a, 0x37b, 0x7, 0x42, 
    0x2, 0x2, 0x37b, 0x37c, 0x5, 0x80, 0x41, 0x2, 0x37c, 0x37d, 0x7, 0x43, 
    0x2, 0x2, 0x37d, 0x384, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37f, 0xc, 0x12, 
    0x2, 0x2, 0x37f, 0x384, 0x9, 0xe, 0x2, 0x2, 0x380, 0x381, 0xc, 0xb, 
    0x2, 0x2, 0x381, 0x382, 0x7, 0x1c, 0x2, 0x2, 0x382, 0x384, 0x5, 0x94, 
    0x4b, 0x2, 0x383, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x383, 0x341, 0x3, 0x2, 
    0x2, 0x2, 0x383, 0x344, 0x3, 0x2, 0x2, 0x2, 0x383, 0x34f, 0x3, 0x2, 
    0x2, 0x2, 0x383, 0x352, 0x3, 0x2, 0x2, 0x2, 0x383, 0x355, 0x3, 0x2, 
    0x2, 0x2, 0x383, 0x358, 0x3, 0x2, 0x2, 0x2, 0x383, 0x35b, 0x3, 0x2, 
    0x2, 0x2, 0x383, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x383, 0x361, 0x3, 0x2, 
    0x2, 0x2, 0x383, 0x364, 0x3, 0x2, 0x2, 0x2, 0x383, 0x36a, 0x3, 0x2, 
    0x2, 0x2, 0x383, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x383, 0x379, 0x3, 0x2, 
    0x2, 0x2, 0x383, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x383, 0x380, 0x3, 0x2, 
    0x2, 0x2, 0x384, 0x387, 0x3, 0x2, 0x2, 0x2, 0x385, 0x383, 0x3, 0x2, 
    0x2, 0x2, 0x385, 0x386, 0x3, 0x2, 0x2, 0x2, 0x386, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x387, 0x385, 0x3, 0x2, 0x2, 0x2, 0x388, 0x389, 0x7, 0x3e, 0x2, 
    0x2, 0x389, 0x38a, 0x5, 0x80, 0x41, 0x2, 0x38a, 0x38b, 0x7, 0x3f, 0x2, 
    0x2, 0x38b, 0x395, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x395, 0x7, 0x2c, 0x2, 
    0x2, 0x38d, 0x395, 0x7, 0x29, 0x2, 0x2, 0x38e, 0x395, 0x5, 0x54, 0x2b, 
    0x2, 0x38f, 0x395, 0x7, 0x6e, 0x2, 0x2, 0x390, 0x391, 0x5, 0x28, 0x15, 
    0x2, 0x391, 0x392, 0x7, 0x46, 0x2, 0x2, 0x392, 0x393, 0x7, 0xb, 0x2, 
    0x2, 0x393, 0x395, 0x3, 0x2, 0x2, 0x2, 0x394, 0x388, 0x3, 0x2, 0x2, 
    0x2, 0x394, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x394, 0x38d, 0x3, 0x2, 0x2, 
    0x2, 0x394, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x394, 0x38f, 0x3, 0x2, 0x2, 
    0x2, 0x394, 0x390, 0x3, 0x2, 0x2, 0x2, 0x395, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x396, 0x397, 0x5, 0x44, 0x23, 0x2, 0x397, 0x398, 0x7, 0x46, 0x2, 0x2, 
    0x398, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x399, 0x396, 0x3, 0x2, 0x2, 0x2, 
    0x399, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39c, 0x3, 0x2, 0x2, 0x2, 
    0x39b, 0x39d, 0x7, 0x6e, 0x2, 0x2, 0x39c, 0x39b, 0x3, 0x2, 0x2, 0x2, 
    0x39c, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x85, 0x3, 0x2, 0x2, 0x2, 0x39e, 
    0x39f, 0x5, 0x88, 0x45, 0x2, 0x39f, 0x3a0, 0x5, 0x8e, 0x48, 0x2, 0x3a0, 
    0x3a7, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3a4, 0x5, 0x88, 0x45, 0x2, 0x3a2, 
    0x3a5, 0x5, 0x8c, 0x47, 0x2, 0x3a3, 0x3a5, 0x5, 0x8e, 0x48, 0x2, 0x3a4, 
    0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a5, 
    0x3a7, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x3a6, 
    0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x87, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3ad, 
    0x7, 0x6e, 0x2, 0x2, 0x3a9, 0x3aa, 0x7, 0x46, 0x2, 0x2, 0x3aa, 0x3ac, 
    0x7, 0x6e, 0x2, 0x2, 0x3ab, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3af, 
    0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3ae, 
    0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3ad, 
    0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b2, 0x5, 0x96, 0x4c, 0x2, 0x3b1, 0x3a8, 
    0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x3b3, 0x3b4, 0x7, 0x6e, 0x2, 0x2, 0x3b4, 0x3b5, 0x5, 
    0x8e, 0x48, 0x2, 0x3b5, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3d2, 0x7, 
    0x42, 0x2, 0x2, 0x3b7, 0x3bc, 0x7, 0x43, 0x2, 0x2, 0x3b8, 0x3b9, 0x7, 
    0x42, 0x2, 0x2, 0x3b9, 0x3bb, 0x7, 0x43, 0x2, 0x2, 0x3ba, 0x3b8, 0x3, 
    0x2, 0x2, 0x2, 0x3bb, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3ba, 0x3, 
    0x2, 0x2, 0x2, 0x3bc, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3bf, 0x3, 
    0x2, 0x2, 0x2, 0x3be, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3d3, 0x5, 
    0x42, 0x22, 0x2, 0x3c0, 0x3c1, 0x5, 0x80, 0x41, 0x2, 0x3c1, 0x3c8, 0x7, 
    0x43, 0x2, 0x2, 0x3c2, 0x3c3, 0x7, 0x42, 0x2, 0x2, 0x3c3, 0x3c4, 0x5, 
    0x80, 0x41, 0x2, 0x3c4, 0x3c5, 0x7, 0x43, 0x2, 0x2, 0x3c5, 0x3c7, 0x3, 
    0x2, 0x2, 0x2, 0x3c6, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3ca, 0x3, 
    0x2, 0x2, 0x2, 0x3c8, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c9, 0x3, 
    0x2, 0x2, 0x2, 0x3c9, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3c8, 0x3, 
    0x2, 0x2, 0x2, 0x3cb, 0x3cc, 0x7, 0x42, 0x2, 0x2, 0x3cc, 0x3ce, 0x7, 
    0x43, 0x2, 0x2, 0x3cd, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3d1, 0x3, 
    0x2, 0x2, 0x2, 0x3cf, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 0x3, 
    0x2, 0x2, 0x2, 0x3d0, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3cf, 0x3, 
    0x2, 0x2, 0x2, 0x3d2, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3c0, 0x3, 
    0x2, 0x2, 0x2, 0x3d3, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d6, 0x5, 0x9c, 
    0x4f, 0x2, 0x3d5, 0x3d7, 0x5, 0x1c, 0xf, 0x2, 0x3d6, 0x3d5, 0x3, 0x2, 
    0x2, 0x2, 0x3d6, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x3d8, 0x3d9, 0x5, 0x9a, 0x4e, 0x2, 0x3d9, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x3da, 0x3df, 0x5, 0x94, 0x4b, 0x2, 0x3db, 0x3dc, 0x7, 0x45, 0x2, 
    0x2, 0x3dc, 0x3de, 0x5, 0x94, 0x4b, 0x2, 0x3dd, 0x3db, 0x3, 0x2, 0x2, 
    0x2, 0x3de, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3dd, 0x3, 0x2, 0x2, 
    0x2, 0x3df, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x3e1, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e5, 0x5, 0x44, 0x23, 0x2, 
    0x3e3, 0x3e5, 0x5, 0x96, 0x4c, 0x2, 0x3e4, 0x3e2, 0x3, 0x2, 0x2, 0x2, 
    0x3e4, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3ea, 0x3, 0x2, 0x2, 0x2, 
    0x3e6, 0x3e7, 0x7, 0x42, 0x2, 0x2, 0x3e7, 0x3e9, 0x7, 0x43, 0x2, 0x2, 
    0x3e8, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ec, 0x3, 0x2, 0x2, 0x2, 
    0x3ea, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3eb, 0x3, 0x2, 0x2, 0x2, 
    0x3eb, 0x95, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3ed, 
    0x3ee, 0x9, 0xf, 0x2, 0x2, 0x3ee, 0x97, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f6, 
    0x5, 0x9c, 0x4f, 0x2, 0x3f0, 0x3f1, 0x7, 0x46, 0x2, 0x2, 0x3f1, 0x3f3, 
    0x7, 0x6e, 0x2, 0x2, 0x3f2, 0x3f4, 0x5, 0x9c, 0x4f, 0x2, 0x3f3, 0x3f2, 
    0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f6, 
    0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f0, 
    0x3, 0x2, 0x2, 0x2, 0x3f6, 0x99, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f8, 0x7, 
    0x29, 0x2, 0x2, 0x3f8, 0x3fc, 0x5, 0x98, 0x4d, 0x2, 0x3f9, 0x3fa, 0x7, 
    0x6e, 0x2, 0x2, 0x3fa, 0x3fc, 0x5, 0x9c, 0x4f, 0x2, 0x3fb, 0x3f7, 0x3, 
    0x2, 0x2, 0x2, 0x3fb, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x9b, 0x3, 0x2, 
    0x2, 0x2, 0x3fd, 0x3ff, 0x7, 0x3e, 0x2, 0x2, 0x3fe, 0x400, 0x5, 0x7c, 
    0x3f, 0x2, 0x3ff, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x400, 0x3, 0x2, 
    0x2, 0x2, 0x400, 0x401, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x7, 0x3f, 
    0x2, 0x2, 0x402, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x9f, 0xa4, 0xaa, 0xb5, 
    0xba, 0xc1, 0xc7, 0xca, 0xd1, 0xdb, 0xdf, 0xe7, 0xeb, 0xee, 0xf1, 0xfa, 
    0xff, 0x102, 0x108, 0x10f, 0x117, 0x120, 0x127, 0x12d, 0x131, 0x139, 
    0x142, 0x147, 0x14d, 0x151, 0x157, 0x162, 0x167, 0x16e, 0x176, 0x180, 
    0x189, 0x193, 0x198, 0x1a3, 0x1a9, 0x1b0, 0x1b5, 0x1bd, 0x1c1, 0x1c3, 
    0x1cc, 0x1d3, 0x1d5, 0x1dc, 0x1e1, 0x1ea, 0x1ef, 0x1f2, 0x1f7, 0x200, 
    0x20c, 0x215, 0x21f, 0x229, 0x22e, 0x237, 0x23c, 0x23f, 0x246, 0x24f, 
    0x266, 0x269, 0x26c, 0x274, 0x278, 0x280, 0x286, 0x291, 0x29a, 0x29f, 
    0x2a9, 0x2b0, 0x2bd, 0x2c6, 0x2cf, 0x2d5, 0x2e0, 0x2e5, 0x2ea, 0x2ef, 
    0x2f3, 0x2f7, 0x2fb, 0x2fd, 0x301, 0x306, 0x317, 0x31d, 0x323, 0x329, 
    0x32c, 0x33c, 0x34c, 0x377, 0x383, 0x385, 0x394, 0x399, 0x39c, 0x3a4, 
    0x3a6, 0x3ad, 0x3b1, 0x3bc, 0x3c8, 0x3cf, 0x3d2, 0x3d6, 0x3df, 0x3e4, 
    0x3ea, 0x3f3, 0x3f5, 0x3fb, 0x3ff, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

BlazeParser::Initializer BlazeParser::_init;
