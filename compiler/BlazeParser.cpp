
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
    setState(209);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(208);
      packageDeclaration();
      break;
    }

    }
    setState(214);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::IMPORT) {
      setState(211);
      importDeclaration();
      setState(216);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(220);
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
      | (1ULL << BlazeParser::STATIC)
      | (1ULL << BlazeParser::STRICTFP))) != 0) || _la == BlazeParser::SEMI

    || _la == BlazeParser::AT) {
      setState(217);
      typeDeclaration();
      setState(222);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(223);
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

std::vector<BlazeParser::AnnotationContext *> BlazeParser::PackageDeclarationContext::annotation() {
  return getRuleContexts<BlazeParser::AnnotationContext>();
}

BlazeParser::AnnotationContext* BlazeParser::PackageDeclarationContext::annotation(size_t i) {
  return getRuleContext<BlazeParser::AnnotationContext>(i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::AT) {
      setState(225);
      annotation();
      setState(230);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(231);
    match(BlazeParser::PACKAGE);
    setState(232);
    qualifiedName();
    setState(233);
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
    setState(235);
    match(BlazeParser::IMPORT);
    setState(237);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::STATIC) {
      setState(236);
      match(BlazeParser::STATIC);
    }
    setState(239);
    qualifiedName();
    setState(242);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::DOT) {
      setState(240);
      match(BlazeParser::DOT);
      setState(241);
      match(BlazeParser::MUL);
    }
    setState(244);
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

BlazeParser::AnnotationTypeDeclarationContext* BlazeParser::TypeDeclarationContext::annotationTypeDeclaration() {
  return getRuleContext<BlazeParser::AnnotationTypeDeclarationContext>(0);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(259);
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
      case BlazeParser::STATIC:
      case BlazeParser::STRICTFP:
      case BlazeParser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(249);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(246);
            classOrInterfaceModifier(); 
          }
          setState(251);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
        }
        setState(256);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case BlazeParser::CLASS: {
            setState(252);
            classDeclaration();
            break;
          }

          case BlazeParser::ENUM: {
            setState(253);
            enumDeclaration();
            break;
          }

          case BlazeParser::INTERFACE: {
            setState(254);
            interfaceDeclaration();
            break;
          }

          case BlazeParser::AT: {
            setState(255);
            annotationTypeDeclaration();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case BlazeParser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(258);
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
    setState(266);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::ABSTRACT:
      case BlazeParser::FINAL:
      case BlazeParser::PRIVATE:
      case BlazeParser::PROTECTED:
      case BlazeParser::PUBLIC:
      case BlazeParser::STATIC:
      case BlazeParser::STRICTFP:
      case BlazeParser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(261);
        classOrInterfaceModifier();
        break;
      }

      case BlazeParser::NATIVE: {
        enterOuterAlt(_localctx, 2);
        setState(262);
        match(BlazeParser::NATIVE);
        break;
      }

      case BlazeParser::SYNCHRONIZED: {
        enterOuterAlt(_localctx, 3);
        setState(263);
        match(BlazeParser::SYNCHRONIZED);
        break;
      }

      case BlazeParser::TRANSIENT: {
        enterOuterAlt(_localctx, 4);
        setState(264);
        match(BlazeParser::TRANSIENT);
        break;
      }

      case BlazeParser::VOLATILE: {
        enterOuterAlt(_localctx, 5);
        setState(265);
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

BlazeParser::AnnotationContext* BlazeParser::ClassOrInterfaceModifierContext::annotation() {
  return getRuleContext<BlazeParser::AnnotationContext>(0);
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

tree::TerminalNode* BlazeParser::ClassOrInterfaceModifierContext::STRICTFP() {
  return getToken(BlazeParser::STRICTFP, 0);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(276);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(268);
        annotation();
        break;
      }

      case BlazeParser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(269);
        match(BlazeParser::PUBLIC);
        break;
      }

      case BlazeParser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(270);
        match(BlazeParser::PROTECTED);
        break;
      }

      case BlazeParser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(271);
        match(BlazeParser::PRIVATE);
        break;
      }

      case BlazeParser::STATIC: {
        enterOuterAlt(_localctx, 5);
        setState(272);
        match(BlazeParser::STATIC);
        break;
      }

      case BlazeParser::ABSTRACT: {
        enterOuterAlt(_localctx, 6);
        setState(273);
        match(BlazeParser::ABSTRACT);
        break;
      }

      case BlazeParser::FINAL: {
        enterOuterAlt(_localctx, 7);
        setState(274);
        match(BlazeParser::FINAL);
        break;
      }

      case BlazeParser::STRICTFP: {
        enterOuterAlt(_localctx, 8);
        setState(275);
        match(BlazeParser::STRICTFP);
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

//----------------- VariableModifierContext ------------------------------------------------------------------

BlazeParser::VariableModifierContext::VariableModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::VariableModifierContext::FINAL() {
  return getToken(BlazeParser::FINAL, 0);
}

BlazeParser::AnnotationContext* BlazeParser::VariableModifierContext::annotation() {
  return getRuleContext<BlazeParser::AnnotationContext>(0);
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
    setState(280);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::FINAL: {
        enterOuterAlt(_localctx, 1);
        setState(278);
        match(BlazeParser::FINAL);
        break;
      }

      case BlazeParser::AT: {
        enterOuterAlt(_localctx, 2);
        setState(279);
        annotation();
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

BlazeParser::TypeParametersContext* BlazeParser::ClassDeclarationContext::typeParameters() {
  return getRuleContext<BlazeParser::TypeParametersContext>(0);
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
    setState(282);
    match(BlazeParser::CLASS);
    setState(283);
    match(BlazeParser::IDENTIFIER);
    setState(285);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::LT) {
      setState(284);
      typeParameters();
    }
    setState(289);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::EXTENDS) {
      setState(287);
      match(BlazeParser::EXTENDS);
      setState(288);
      typeType();
    }
    setState(293);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::IMPLEMENTS) {
      setState(291);
      match(BlazeParser::IMPLEMENTS);
      setState(292);
      typeList();
    }
    setState(295);
    classBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParametersContext ------------------------------------------------------------------

BlazeParser::TypeParametersContext::TypeParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::TypeParametersContext::LT() {
  return getToken(BlazeParser::LT, 0);
}

std::vector<BlazeParser::TypeParameterContext *> BlazeParser::TypeParametersContext::typeParameter() {
  return getRuleContexts<BlazeParser::TypeParameterContext>();
}

BlazeParser::TypeParameterContext* BlazeParser::TypeParametersContext::typeParameter(size_t i) {
  return getRuleContext<BlazeParser::TypeParameterContext>(i);
}

tree::TerminalNode* BlazeParser::TypeParametersContext::GT() {
  return getToken(BlazeParser::GT, 0);
}

std::vector<tree::TerminalNode *> BlazeParser::TypeParametersContext::COMMA() {
  return getTokens(BlazeParser::COMMA);
}

tree::TerminalNode* BlazeParser::TypeParametersContext::COMMA(size_t i) {
  return getToken(BlazeParser::COMMA, i);
}


size_t BlazeParser::TypeParametersContext::getRuleIndex() const {
  return BlazeParser::RuleTypeParameters;
}

void BlazeParser::TypeParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameters(this);
}

void BlazeParser::TypeParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameters(this);
}


antlrcpp::Any BlazeParser::TypeParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameters(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::TypeParametersContext* BlazeParser::typeParameters() {
  TypeParametersContext *_localctx = _tracker.createInstance<TypeParametersContext>(_ctx, getState());
  enterRule(_localctx, 16, BlazeParser::RuleTypeParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(BlazeParser::LT);
    setState(298);
    typeParameter();
    setState(303);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::COMMA) {
      setState(299);
      match(BlazeParser::COMMA);
      setState(300);
      typeParameter();
      setState(305);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(306);
    match(BlazeParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterContext ------------------------------------------------------------------

BlazeParser::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::TypeParameterContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

std::vector<BlazeParser::AnnotationContext *> BlazeParser::TypeParameterContext::annotation() {
  return getRuleContexts<BlazeParser::AnnotationContext>();
}

BlazeParser::AnnotationContext* BlazeParser::TypeParameterContext::annotation(size_t i) {
  return getRuleContext<BlazeParser::AnnotationContext>(i);
}

tree::TerminalNode* BlazeParser::TypeParameterContext::EXTENDS() {
  return getToken(BlazeParser::EXTENDS, 0);
}

BlazeParser::TypeBoundContext* BlazeParser::TypeParameterContext::typeBound() {
  return getRuleContext<BlazeParser::TypeBoundContext>(0);
}


size_t BlazeParser::TypeParameterContext::getRuleIndex() const {
  return BlazeParser::RuleTypeParameter;
}

void BlazeParser::TypeParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameter(this);
}

void BlazeParser::TypeParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameter(this);
}


antlrcpp::Any BlazeParser::TypeParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameter(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::TypeParameterContext* BlazeParser::typeParameter() {
  TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 18, BlazeParser::RuleTypeParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::AT) {
      setState(308);
      annotation();
      setState(313);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(314);
    match(BlazeParser::IDENTIFIER);
    setState(317);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::EXTENDS) {
      setState(315);
      match(BlazeParser::EXTENDS);
      setState(316);
      typeBound();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeBoundContext ------------------------------------------------------------------

BlazeParser::TypeBoundContext::TypeBoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BlazeParser::TypeTypeContext *> BlazeParser::TypeBoundContext::typeType() {
  return getRuleContexts<BlazeParser::TypeTypeContext>();
}

BlazeParser::TypeTypeContext* BlazeParser::TypeBoundContext::typeType(size_t i) {
  return getRuleContext<BlazeParser::TypeTypeContext>(i);
}

std::vector<tree::TerminalNode *> BlazeParser::TypeBoundContext::BITAND() {
  return getTokens(BlazeParser::BITAND);
}

tree::TerminalNode* BlazeParser::TypeBoundContext::BITAND(size_t i) {
  return getToken(BlazeParser::BITAND, i);
}


size_t BlazeParser::TypeBoundContext::getRuleIndex() const {
  return BlazeParser::RuleTypeBound;
}

void BlazeParser::TypeBoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeBound(this);
}

void BlazeParser::TypeBoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeBound(this);
}


antlrcpp::Any BlazeParser::TypeBoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitTypeBound(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::TypeBoundContext* BlazeParser::typeBound() {
  TypeBoundContext *_localctx = _tracker.createInstance<TypeBoundContext>(_ctx, getState());
  enterRule(_localctx, 20, BlazeParser::RuleTypeBound);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
    typeType();
    setState(324);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::BITAND) {
      setState(320);
      match(BlazeParser::BITAND);
      setState(321);
      typeType();
      setState(326);
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
  enterRule(_localctx, 22, BlazeParser::RuleEnumDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(BlazeParser::ENUM);
    setState(328);
    match(BlazeParser::IDENTIFIER);
    setState(331);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::IMPLEMENTS) {
      setState(329);
      match(BlazeParser::IMPLEMENTS);
      setState(330);
      typeList();
    }
    setState(333);
    match(BlazeParser::LBRACE);
    setState(335);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::AT

    || _la == BlazeParser::IDENTIFIER) {
      setState(334);
      enumConstants();
    }
    setState(338);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::COMMA) {
      setState(337);
      match(BlazeParser::COMMA);
    }
    setState(341);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::SEMI) {
      setState(340);
      enumBodyDeclarations();
    }
    setState(343);
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
  enterRule(_localctx, 24, BlazeParser::RuleEnumConstants);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(345);
    enumConstant();
    setState(350);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(346);
        match(BlazeParser::COMMA);
        setState(347);
        enumConstant(); 
      }
      setState(352);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
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

std::vector<BlazeParser::AnnotationContext *> BlazeParser::EnumConstantContext::annotation() {
  return getRuleContexts<BlazeParser::AnnotationContext>();
}

BlazeParser::AnnotationContext* BlazeParser::EnumConstantContext::annotation(size_t i) {
  return getRuleContext<BlazeParser::AnnotationContext>(i);
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
  enterRule(_localctx, 26, BlazeParser::RuleEnumConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::AT) {
      setState(353);
      annotation();
      setState(358);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(359);
    match(BlazeParser::IDENTIFIER);
    setState(361);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::LPAREN) {
      setState(360);
      arguments();
    }
    setState(364);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::LBRACE) {
      setState(363);
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
  enterRule(_localctx, 28, BlazeParser::RuleEnumBodyDeclarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
    match(BlazeParser::SEMI);
    setState(370);
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
      | (1ULL << BlazeParser::STRICTFP)
      | (1ULL << BlazeParser::SYNCHRONIZED)
      | (1ULL << BlazeParser::TRANSIENT)
      | (1ULL << BlazeParser::VOID)
      | (1ULL << BlazeParser::VOLATILE)
      | (1ULL << BlazeParser::LBRACE))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (BlazeParser::SEMI - 67))
      | (1ULL << (BlazeParser::LT - 67))
      | (1ULL << (BlazeParser::AT - 67))
      | (1ULL << (BlazeParser::IDENTIFIER - 67)))) != 0)) {
      setState(367);
      classBodyDeclaration();
      setState(372);
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

BlazeParser::TypeParametersContext* BlazeParser::InterfaceDeclarationContext::typeParameters() {
  return getRuleContext<BlazeParser::TypeParametersContext>(0);
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
  enterRule(_localctx, 30, BlazeParser::RuleInterfaceDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(373);
    match(BlazeParser::INTERFACE);
    setState(374);
    match(BlazeParser::IDENTIFIER);
    setState(376);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::LT) {
      setState(375);
      typeParameters();
    }
    setState(380);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::EXTENDS) {
      setState(378);
      match(BlazeParser::EXTENDS);
      setState(379);
      typeList();
    }
    setState(382);
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
  enterRule(_localctx, 32, BlazeParser::RuleClassBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(384);
    match(BlazeParser::LBRACE);
    setState(388);
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
      | (1ULL << BlazeParser::STRICTFP)
      | (1ULL << BlazeParser::SYNCHRONIZED)
      | (1ULL << BlazeParser::TRANSIENT)
      | (1ULL << BlazeParser::VOID)
      | (1ULL << BlazeParser::VOLATILE)
      | (1ULL << BlazeParser::LBRACE))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (BlazeParser::SEMI - 67))
      | (1ULL << (BlazeParser::LT - 67))
      | (1ULL << (BlazeParser::AT - 67))
      | (1ULL << (BlazeParser::IDENTIFIER - 67)))) != 0)) {
      setState(385);
      classBodyDeclaration();
      setState(390);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(391);
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
  enterRule(_localctx, 34, BlazeParser::RuleInterfaceBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(393);
    match(BlazeParser::LBRACE);
    setState(397);
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
      | (1ULL << BlazeParser::STRICTFP)
      | (1ULL << BlazeParser::SYNCHRONIZED)
      | (1ULL << BlazeParser::TRANSIENT)
      | (1ULL << BlazeParser::VOID)
      | (1ULL << BlazeParser::VOLATILE))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (BlazeParser::SEMI - 67))
      | (1ULL << (BlazeParser::LT - 67))
      | (1ULL << (BlazeParser::AT - 67))
      | (1ULL << (BlazeParser::IDENTIFIER - 67)))) != 0)) {
      setState(394);
      interfaceBodyDeclaration();
      setState(399);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(400);
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
  enterRule(_localctx, 36, BlazeParser::RuleClassBodyDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(414);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(402);
      match(BlazeParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(404);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::STATIC) {
        setState(403);
        match(BlazeParser::STATIC);
      }
      setState(406);
      block();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(410);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(407);
          modifier(); 
        }
        setState(412);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
      }
      setState(413);
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

BlazeParser::GenericMethodDeclarationContext* BlazeParser::MemberDeclarationContext::genericMethodDeclaration() {
  return getRuleContext<BlazeParser::GenericMethodDeclarationContext>(0);
}

BlazeParser::FieldDeclarationContext* BlazeParser::MemberDeclarationContext::fieldDeclaration() {
  return getRuleContext<BlazeParser::FieldDeclarationContext>(0);
}

BlazeParser::ConstructorDeclarationContext* BlazeParser::MemberDeclarationContext::constructorDeclaration() {
  return getRuleContext<BlazeParser::ConstructorDeclarationContext>(0);
}

BlazeParser::GenericConstructorDeclarationContext* BlazeParser::MemberDeclarationContext::genericConstructorDeclaration() {
  return getRuleContext<BlazeParser::GenericConstructorDeclarationContext>(0);
}

BlazeParser::InterfaceDeclarationContext* BlazeParser::MemberDeclarationContext::interfaceDeclaration() {
  return getRuleContext<BlazeParser::InterfaceDeclarationContext>(0);
}

BlazeParser::AnnotationTypeDeclarationContext* BlazeParser::MemberDeclarationContext::annotationTypeDeclaration() {
  return getRuleContext<BlazeParser::AnnotationTypeDeclarationContext>(0);
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
  enterRule(_localctx, 38, BlazeParser::RuleMemberDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(425);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(416);
      methodDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(417);
      genericMethodDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(418);
      fieldDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(419);
      constructorDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(420);
      genericConstructorDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(421);
      interfaceDeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(422);
      annotationTypeDeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(423);
      classDeclaration();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(424);
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
  enterRule(_localctx, 40, BlazeParser::RuleMethodDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    typeTypeOrVoid();
    setState(428);
    match(BlazeParser::IDENTIFIER);
    setState(429);
    formalParameters();
    setState(434);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::LBRACK) {
      setState(430);
      match(BlazeParser::LBRACK);
      setState(431);
      match(BlazeParser::RBRACK);
      setState(436);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(439);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::THROWS) {
      setState(437);
      match(BlazeParser::THROWS);
      setState(438);
      qualifiedNameList();
    }
    setState(441);
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
  enterRule(_localctx, 42, BlazeParser::RuleMethodBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(445);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(443);
        block();
        break;
      }

      case BlazeParser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(444);
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
  enterRule(_localctx, 44, BlazeParser::RuleTypeTypeOrVoid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(449);
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
      case BlazeParser::AT:
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(447);
        typeType();
        break;
      }

      case BlazeParser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(448);
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

//----------------- GenericMethodDeclarationContext ------------------------------------------------------------------

BlazeParser::GenericMethodDeclarationContext::GenericMethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::TypeParametersContext* BlazeParser::GenericMethodDeclarationContext::typeParameters() {
  return getRuleContext<BlazeParser::TypeParametersContext>(0);
}

BlazeParser::MethodDeclarationContext* BlazeParser::GenericMethodDeclarationContext::methodDeclaration() {
  return getRuleContext<BlazeParser::MethodDeclarationContext>(0);
}


size_t BlazeParser::GenericMethodDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleGenericMethodDeclaration;
}

void BlazeParser::GenericMethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericMethodDeclaration(this);
}

void BlazeParser::GenericMethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericMethodDeclaration(this);
}


antlrcpp::Any BlazeParser::GenericMethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitGenericMethodDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::GenericMethodDeclarationContext* BlazeParser::genericMethodDeclaration() {
  GenericMethodDeclarationContext *_localctx = _tracker.createInstance<GenericMethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 46, BlazeParser::RuleGenericMethodDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
    typeParameters();
    setState(452);
    methodDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericConstructorDeclarationContext ------------------------------------------------------------------

BlazeParser::GenericConstructorDeclarationContext::GenericConstructorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::TypeParametersContext* BlazeParser::GenericConstructorDeclarationContext::typeParameters() {
  return getRuleContext<BlazeParser::TypeParametersContext>(0);
}

BlazeParser::ConstructorDeclarationContext* BlazeParser::GenericConstructorDeclarationContext::constructorDeclaration() {
  return getRuleContext<BlazeParser::ConstructorDeclarationContext>(0);
}


size_t BlazeParser::GenericConstructorDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleGenericConstructorDeclaration;
}

void BlazeParser::GenericConstructorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericConstructorDeclaration(this);
}

void BlazeParser::GenericConstructorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericConstructorDeclaration(this);
}


antlrcpp::Any BlazeParser::GenericConstructorDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitGenericConstructorDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::GenericConstructorDeclarationContext* BlazeParser::genericConstructorDeclaration() {
  GenericConstructorDeclarationContext *_localctx = _tracker.createInstance<GenericConstructorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 48, BlazeParser::RuleGenericConstructorDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(454);
    typeParameters();
    setState(455);
    constructorDeclaration();
   
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
  enterRule(_localctx, 50, BlazeParser::RuleConstructorDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    match(BlazeParser::IDENTIFIER);
    setState(458);
    formalParameters();
    setState(461);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::THROWS) {
      setState(459);
      match(BlazeParser::THROWS);
      setState(460);
      qualifiedNameList();
    }
    setState(463);
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
  enterRule(_localctx, 52, BlazeParser::RuleFieldDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    typeType();
    setState(466);
    variableDeclarators();
    setState(467);
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
  enterRule(_localctx, 54, BlazeParser::RuleInterfaceBodyDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(477);
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
      case BlazeParser::STRICTFP:
      case BlazeParser::SYNCHRONIZED:
      case BlazeParser::TRANSIENT:
      case BlazeParser::VOID:
      case BlazeParser::VOLATILE:
      case BlazeParser::LT:
      case BlazeParser::AT:
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(472);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(469);
            modifier(); 
          }
          setState(474);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
        }
        setState(475);
        interfaceMemberDeclaration();
        break;
      }

      case BlazeParser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(476);
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

BlazeParser::GenericInterfaceMethodDeclarationContext* BlazeParser::InterfaceMemberDeclarationContext::genericInterfaceMethodDeclaration() {
  return getRuleContext<BlazeParser::GenericInterfaceMethodDeclarationContext>(0);
}

BlazeParser::InterfaceDeclarationContext* BlazeParser::InterfaceMemberDeclarationContext::interfaceDeclaration() {
  return getRuleContext<BlazeParser::InterfaceDeclarationContext>(0);
}

BlazeParser::AnnotationTypeDeclarationContext* BlazeParser::InterfaceMemberDeclarationContext::annotationTypeDeclaration() {
  return getRuleContext<BlazeParser::AnnotationTypeDeclarationContext>(0);
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
  enterRule(_localctx, 56, BlazeParser::RuleInterfaceMemberDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(486);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(479);
      constDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(480);
      interfaceMethodDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(481);
      genericInterfaceMethodDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(482);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(483);
      annotationTypeDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(484);
      classDeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(485);
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
  enterRule(_localctx, 58, BlazeParser::RuleConstDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(488);
    typeType();
    setState(489);
    constantDeclarator();
    setState(494);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::COMMA) {
      setState(490);
      match(BlazeParser::COMMA);
      setState(491);
      constantDeclarator();
      setState(496);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(497);
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
  enterRule(_localctx, 60, BlazeParser::RuleConstantDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(499);
    match(BlazeParser::IDENTIFIER);
    setState(504);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::LBRACK) {
      setState(500);
      match(BlazeParser::LBRACK);
      setState(501);
      match(BlazeParser::RBRACK);
      setState(506);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(507);
    match(BlazeParser::ASSIGN);
    setState(508);
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

BlazeParser::TypeParametersContext* BlazeParser::InterfaceMethodDeclarationContext::typeParameters() {
  return getRuleContext<BlazeParser::TypeParametersContext>(0);
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

std::vector<BlazeParser::AnnotationContext *> BlazeParser::InterfaceMethodDeclarationContext::annotation() {
  return getRuleContexts<BlazeParser::AnnotationContext>();
}

BlazeParser::AnnotationContext* BlazeParser::InterfaceMethodDeclarationContext::annotation(size_t i) {
  return getRuleContext<BlazeParser::AnnotationContext>(i);
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
  enterRule(_localctx, 62, BlazeParser::RuleInterfaceMethodDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(513);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(510);
        interfaceMethodModifier(); 
      }
      setState(515);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
    setState(526);
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
      case BlazeParser::VOID:
      case BlazeParser::AT:
      case BlazeParser::IDENTIFIER: {
        setState(516);
        typeTypeOrVoid();
        break;
      }

      case BlazeParser::LT: {
        setState(517);
        typeParameters();
        setState(521);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(518);
            annotation(); 
          }
          setState(523);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
        }
        setState(524);
        typeTypeOrVoid();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(528);
    match(BlazeParser::IDENTIFIER);
    setState(529);
    formalParameters();
    setState(534);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::LBRACK) {
      setState(530);
      match(BlazeParser::LBRACK);
      setState(531);
      match(BlazeParser::RBRACK);
      setState(536);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(539);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::THROWS) {
      setState(537);
      match(BlazeParser::THROWS);
      setState(538);
      qualifiedNameList();
    }
    setState(541);
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

BlazeParser::AnnotationContext* BlazeParser::InterfaceMethodModifierContext::annotation() {
  return getRuleContext<BlazeParser::AnnotationContext>(0);
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

tree::TerminalNode* BlazeParser::InterfaceMethodModifierContext::STRICTFP() {
  return getToken(BlazeParser::STRICTFP, 0);
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
  enterRule(_localctx, 64, BlazeParser::RuleInterfaceMethodModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(549);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(543);
        annotation();
        break;
      }

      case BlazeParser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(544);
        match(BlazeParser::PUBLIC);
        break;
      }

      case BlazeParser::ABSTRACT: {
        enterOuterAlt(_localctx, 3);
        setState(545);
        match(BlazeParser::ABSTRACT);
        break;
      }

      case BlazeParser::DEFAULT: {
        enterOuterAlt(_localctx, 4);
        setState(546);
        match(BlazeParser::DEFAULT);
        break;
      }

      case BlazeParser::STATIC: {
        enterOuterAlt(_localctx, 5);
        setState(547);
        match(BlazeParser::STATIC);
        break;
      }

      case BlazeParser::STRICTFP: {
        enterOuterAlt(_localctx, 6);
        setState(548);
        match(BlazeParser::STRICTFP);
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

//----------------- GenericInterfaceMethodDeclarationContext ------------------------------------------------------------------

BlazeParser::GenericInterfaceMethodDeclarationContext::GenericInterfaceMethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::TypeParametersContext* BlazeParser::GenericInterfaceMethodDeclarationContext::typeParameters() {
  return getRuleContext<BlazeParser::TypeParametersContext>(0);
}

BlazeParser::InterfaceMethodDeclarationContext* BlazeParser::GenericInterfaceMethodDeclarationContext::interfaceMethodDeclaration() {
  return getRuleContext<BlazeParser::InterfaceMethodDeclarationContext>(0);
}


size_t BlazeParser::GenericInterfaceMethodDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleGenericInterfaceMethodDeclaration;
}

void BlazeParser::GenericInterfaceMethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericInterfaceMethodDeclaration(this);
}

void BlazeParser::GenericInterfaceMethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericInterfaceMethodDeclaration(this);
}


antlrcpp::Any BlazeParser::GenericInterfaceMethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitGenericInterfaceMethodDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::GenericInterfaceMethodDeclarationContext* BlazeParser::genericInterfaceMethodDeclaration() {
  GenericInterfaceMethodDeclarationContext *_localctx = _tracker.createInstance<GenericInterfaceMethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 66, BlazeParser::RuleGenericInterfaceMethodDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551);
    typeParameters();
    setState(552);
    interfaceMethodDeclaration();
   
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
  enterRule(_localctx, 68, BlazeParser::RuleVariableDeclarators);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(554);
    variableDeclarator();
    setState(559);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::COMMA) {
      setState(555);
      match(BlazeParser::COMMA);
      setState(556);
      variableDeclarator();
      setState(561);
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
  enterRule(_localctx, 70, BlazeParser::RuleVariableDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(562);
    variableDeclaratorId();
    setState(565);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::ASSIGN) {
      setState(563);
      match(BlazeParser::ASSIGN);
      setState(564);
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
  enterRule(_localctx, 72, BlazeParser::RuleVariableDeclaratorId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(567);
    match(BlazeParser::IDENTIFIER);
    setState(572);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::LBRACK) {
      setState(568);
      match(BlazeParser::LBRACK);
      setState(569);
      match(BlazeParser::RBRACK);
      setState(574);
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
  enterRule(_localctx, 74, BlazeParser::RuleVariableInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(577);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(575);
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
      case BlazeParser::LT:
      case BlazeParser::BANG:
      case BlazeParser::TILDE:
      case BlazeParser::INC:
      case BlazeParser::DEC:
      case BlazeParser::ADD:
      case BlazeParser::SUB:
      case BlazeParser::AT:
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(576);
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
  enterRule(_localctx, 76, BlazeParser::RuleArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(579);
    match(BlazeParser::LBRACE);
    setState(591);
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
      ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::LT - 72))
      | (1ULL << (BlazeParser::BANG - 72))
      | (1ULL << (BlazeParser::TILDE - 72))
      | (1ULL << (BlazeParser::INC - 72))
      | (1ULL << (BlazeParser::DEC - 72))
      | (1ULL << (BlazeParser::ADD - 72))
      | (1ULL << (BlazeParser::SUB - 72))
      | (1ULL << (BlazeParser::AT - 72))
      | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
      setState(580);
      variableInitializer();
      setState(585);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(581);
          match(BlazeParser::COMMA);
          setState(582);
          variableInitializer(); 
        }
        setState(587);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
      }
      setState(589);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::COMMA) {
        setState(588);
        match(BlazeParser::COMMA);
      }
    }
    setState(593);
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

std::vector<BlazeParser::TypeArgumentsContext *> BlazeParser::ClassOrInterfaceTypeContext::typeArguments() {
  return getRuleContexts<BlazeParser::TypeArgumentsContext>();
}

BlazeParser::TypeArgumentsContext* BlazeParser::ClassOrInterfaceTypeContext::typeArguments(size_t i) {
  return getRuleContext<BlazeParser::TypeArgumentsContext>(i);
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
  enterRule(_localctx, 78, BlazeParser::RuleClassOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(595);
    match(BlazeParser::IDENTIFIER);
    setState(597);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      setState(596);
      typeArguments();
      break;
    }

    }
    setState(606);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(599);
        match(BlazeParser::DOT);
        setState(600);
        match(BlazeParser::IDENTIFIER);
        setState(602);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
        case 1: {
          setState(601);
          typeArguments();
          break;
        }

        } 
      }
      setState(608);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
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
  enterRule(_localctx, 80, BlazeParser::RuleTypeArgument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(615);
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
      case BlazeParser::AT:
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(609);
        typeType();
        break;
      }

      case BlazeParser::QUESTION: {
        enterOuterAlt(_localctx, 2);
        setState(610);
        match(BlazeParser::QUESTION);
        setState(613);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BlazeParser::EXTENDS

        || _la == BlazeParser::SUPER) {
          setState(611);
          _la = _input->LA(1);
          if (!(_la == BlazeParser::EXTENDS

          || _la == BlazeParser::SUPER)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(612);
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
  enterRule(_localctx, 82, BlazeParser::RuleQualifiedNameList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(617);
    qualifiedName();
    setState(622);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::COMMA) {
      setState(618);
      match(BlazeParser::COMMA);
      setState(619);
      qualifiedName();
      setState(624);
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
  enterRule(_localctx, 84, BlazeParser::RuleFormalParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(625);
    match(BlazeParser::LPAREN);
    setState(627);
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
      | (1ULL << BlazeParser::SHORT))) != 0) || _la == BlazeParser::AT

    || _la == BlazeParser::IDENTIFIER) {
      setState(626);
      formalParameterList();
    }
    setState(629);
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
  enterRule(_localctx, 86, BlazeParser::RuleFormalParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(644);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(631);
      formalParameter();
      setState(636);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(632);
          match(BlazeParser::COMMA);
          setState(633);
          formalParameter(); 
        }
        setState(638);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
      }
      setState(641);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::COMMA) {
        setState(639);
        match(BlazeParser::COMMA);
        setState(640);
        lastFormalParameter();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(643);
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
  enterRule(_localctx, 88, BlazeParser::RuleFormalParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(649);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(646);
        variableModifier(); 
      }
      setState(651);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    }
    setState(652);
    typeType();
    setState(653);
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
  enterRule(_localctx, 90, BlazeParser::RuleLastFormalParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(658);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(655);
        variableModifier(); 
      }
      setState(660);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    }
    setState(661);
    typeType();
    setState(662);
    match(BlazeParser::ELLIPSIS);
    setState(663);
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
  enterRule(_localctx, 92, BlazeParser::RuleQualifiedName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(665);
    match(BlazeParser::IDENTIFIER);
    setState(670);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(666);
        match(BlazeParser::DOT);
        setState(667);
        match(BlazeParser::IDENTIFIER); 
      }
      setState(672);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
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
  enterRule(_localctx, 94, BlazeParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(679);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::DECIMAL_LITERAL:
      case BlazeParser::HEX_LITERAL:
      case BlazeParser::OCT_LITERAL:
      case BlazeParser::BINARY_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(673);
        integerLiteral();
        break;
      }

      case BlazeParser::FLOAT_LITERAL:
      case BlazeParser::HEX_FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(674);
        floatLiteral();
        break;
      }

      case BlazeParser::CHAR_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(675);
        match(BlazeParser::CHAR_LITERAL);
        break;
      }

      case BlazeParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(676);
        match(BlazeParser::STRING_LITERAL);
        break;
      }

      case BlazeParser::BOOL_LITERAL: {
        enterOuterAlt(_localctx, 5);
        setState(677);
        match(BlazeParser::BOOL_LITERAL);
        break;
      }

      case BlazeParser::NULL_LITERAL: {
        enterOuterAlt(_localctx, 6);
        setState(678);
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
  enterRule(_localctx, 96, BlazeParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(681);
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
  enterRule(_localctx, 98, BlazeParser::RuleFloatLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(683);
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

//----------------- AnnotationContext ------------------------------------------------------------------

BlazeParser::AnnotationContext::AnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::AnnotationContext::AT() {
  return getToken(BlazeParser::AT, 0);
}

BlazeParser::QualifiedNameContext* BlazeParser::AnnotationContext::qualifiedName() {
  return getRuleContext<BlazeParser::QualifiedNameContext>(0);
}

tree::TerminalNode* BlazeParser::AnnotationContext::LPAREN() {
  return getToken(BlazeParser::LPAREN, 0);
}

tree::TerminalNode* BlazeParser::AnnotationContext::RPAREN() {
  return getToken(BlazeParser::RPAREN, 0);
}

BlazeParser::ElementValuePairsContext* BlazeParser::AnnotationContext::elementValuePairs() {
  return getRuleContext<BlazeParser::ElementValuePairsContext>(0);
}

BlazeParser::ElementValueContext* BlazeParser::AnnotationContext::elementValue() {
  return getRuleContext<BlazeParser::ElementValueContext>(0);
}


size_t BlazeParser::AnnotationContext::getRuleIndex() const {
  return BlazeParser::RuleAnnotation;
}

void BlazeParser::AnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotation(this);
}

void BlazeParser::AnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotation(this);
}


antlrcpp::Any BlazeParser::AnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitAnnotation(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::AnnotationContext* BlazeParser::annotation() {
  AnnotationContext *_localctx = _tracker.createInstance<AnnotationContext>(_ctx, getState());
  enterRule(_localctx, 100, BlazeParser::RuleAnnotation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(685);
    match(BlazeParser::AT);
    setState(686);
    qualifiedName();
    setState(693);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::LPAREN) {
      setState(687);
      match(BlazeParser::LPAREN);
      setState(690);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
      case 1: {
        setState(688);
        elementValuePairs();
        break;
      }

      case 2: {
        setState(689);
        elementValue();
        break;
      }

      }
      setState(692);
      match(BlazeParser::RPAREN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValuePairsContext ------------------------------------------------------------------

BlazeParser::ElementValuePairsContext::ElementValuePairsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BlazeParser::ElementValuePairContext *> BlazeParser::ElementValuePairsContext::elementValuePair() {
  return getRuleContexts<BlazeParser::ElementValuePairContext>();
}

BlazeParser::ElementValuePairContext* BlazeParser::ElementValuePairsContext::elementValuePair(size_t i) {
  return getRuleContext<BlazeParser::ElementValuePairContext>(i);
}

std::vector<tree::TerminalNode *> BlazeParser::ElementValuePairsContext::COMMA() {
  return getTokens(BlazeParser::COMMA);
}

tree::TerminalNode* BlazeParser::ElementValuePairsContext::COMMA(size_t i) {
  return getToken(BlazeParser::COMMA, i);
}


size_t BlazeParser::ElementValuePairsContext::getRuleIndex() const {
  return BlazeParser::RuleElementValuePairs;
}

void BlazeParser::ElementValuePairsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValuePairs(this);
}

void BlazeParser::ElementValuePairsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValuePairs(this);
}


antlrcpp::Any BlazeParser::ElementValuePairsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitElementValuePairs(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ElementValuePairsContext* BlazeParser::elementValuePairs() {
  ElementValuePairsContext *_localctx = _tracker.createInstance<ElementValuePairsContext>(_ctx, getState());
  enterRule(_localctx, 102, BlazeParser::RuleElementValuePairs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(695);
    elementValuePair();
    setState(700);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::COMMA) {
      setState(696);
      match(BlazeParser::COMMA);
      setState(697);
      elementValuePair();
      setState(702);
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

//----------------- ElementValuePairContext ------------------------------------------------------------------

BlazeParser::ElementValuePairContext::ElementValuePairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ElementValuePairContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

tree::TerminalNode* BlazeParser::ElementValuePairContext::ASSIGN() {
  return getToken(BlazeParser::ASSIGN, 0);
}

BlazeParser::ElementValueContext* BlazeParser::ElementValuePairContext::elementValue() {
  return getRuleContext<BlazeParser::ElementValueContext>(0);
}


size_t BlazeParser::ElementValuePairContext::getRuleIndex() const {
  return BlazeParser::RuleElementValuePair;
}

void BlazeParser::ElementValuePairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValuePair(this);
}

void BlazeParser::ElementValuePairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValuePair(this);
}


antlrcpp::Any BlazeParser::ElementValuePairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitElementValuePair(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ElementValuePairContext* BlazeParser::elementValuePair() {
  ElementValuePairContext *_localctx = _tracker.createInstance<ElementValuePairContext>(_ctx, getState());
  enterRule(_localctx, 104, BlazeParser::RuleElementValuePair);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(703);
    match(BlazeParser::IDENTIFIER);
    setState(704);
    match(BlazeParser::ASSIGN);
    setState(705);
    elementValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValueContext ------------------------------------------------------------------

BlazeParser::ElementValueContext::ElementValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::ExpressionContext* BlazeParser::ElementValueContext::expression() {
  return getRuleContext<BlazeParser::ExpressionContext>(0);
}

BlazeParser::AnnotationContext* BlazeParser::ElementValueContext::annotation() {
  return getRuleContext<BlazeParser::AnnotationContext>(0);
}

BlazeParser::ElementValueArrayInitializerContext* BlazeParser::ElementValueContext::elementValueArrayInitializer() {
  return getRuleContext<BlazeParser::ElementValueArrayInitializerContext>(0);
}


size_t BlazeParser::ElementValueContext::getRuleIndex() const {
  return BlazeParser::RuleElementValue;
}

void BlazeParser::ElementValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValue(this);
}

void BlazeParser::ElementValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValue(this);
}


antlrcpp::Any BlazeParser::ElementValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitElementValue(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ElementValueContext* BlazeParser::elementValue() {
  ElementValueContext *_localctx = _tracker.createInstance<ElementValueContext>(_ctx, getState());
  enterRule(_localctx, 106, BlazeParser::RuleElementValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(710);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(707);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(708);
      annotation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(709);
      elementValueArrayInitializer();
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

//----------------- ElementValueArrayInitializerContext ------------------------------------------------------------------

BlazeParser::ElementValueArrayInitializerContext::ElementValueArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ElementValueArrayInitializerContext::LBRACE() {
  return getToken(BlazeParser::LBRACE, 0);
}

tree::TerminalNode* BlazeParser::ElementValueArrayInitializerContext::RBRACE() {
  return getToken(BlazeParser::RBRACE, 0);
}

std::vector<BlazeParser::ElementValueContext *> BlazeParser::ElementValueArrayInitializerContext::elementValue() {
  return getRuleContexts<BlazeParser::ElementValueContext>();
}

BlazeParser::ElementValueContext* BlazeParser::ElementValueArrayInitializerContext::elementValue(size_t i) {
  return getRuleContext<BlazeParser::ElementValueContext>(i);
}

std::vector<tree::TerminalNode *> BlazeParser::ElementValueArrayInitializerContext::COMMA() {
  return getTokens(BlazeParser::COMMA);
}

tree::TerminalNode* BlazeParser::ElementValueArrayInitializerContext::COMMA(size_t i) {
  return getToken(BlazeParser::COMMA, i);
}


size_t BlazeParser::ElementValueArrayInitializerContext::getRuleIndex() const {
  return BlazeParser::RuleElementValueArrayInitializer;
}

void BlazeParser::ElementValueArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValueArrayInitializer(this);
}

void BlazeParser::ElementValueArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValueArrayInitializer(this);
}


antlrcpp::Any BlazeParser::ElementValueArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitElementValueArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::ElementValueArrayInitializerContext* BlazeParser::elementValueArrayInitializer() {
  ElementValueArrayInitializerContext *_localctx = _tracker.createInstance<ElementValueArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 108, BlazeParser::RuleElementValueArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(712);
    match(BlazeParser::LBRACE);
    setState(721);
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
      ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::LT - 72))
      | (1ULL << (BlazeParser::BANG - 72))
      | (1ULL << (BlazeParser::TILDE - 72))
      | (1ULL << (BlazeParser::INC - 72))
      | (1ULL << (BlazeParser::DEC - 72))
      | (1ULL << (BlazeParser::ADD - 72))
      | (1ULL << (BlazeParser::SUB - 72))
      | (1ULL << (BlazeParser::AT - 72))
      | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
      setState(713);
      elementValue();
      setState(718);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(714);
          match(BlazeParser::COMMA);
          setState(715);
          elementValue(); 
        }
        setState(720);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
      }
    }
    setState(724);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::COMMA) {
      setState(723);
      match(BlazeParser::COMMA);
    }
    setState(726);
    match(BlazeParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeDeclarationContext ------------------------------------------------------------------

BlazeParser::AnnotationTypeDeclarationContext::AnnotationTypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::AnnotationTypeDeclarationContext::AT() {
  return getToken(BlazeParser::AT, 0);
}

tree::TerminalNode* BlazeParser::AnnotationTypeDeclarationContext::INTERFACE() {
  return getToken(BlazeParser::INTERFACE, 0);
}

tree::TerminalNode* BlazeParser::AnnotationTypeDeclarationContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

BlazeParser::AnnotationTypeBodyContext* BlazeParser::AnnotationTypeDeclarationContext::annotationTypeBody() {
  return getRuleContext<BlazeParser::AnnotationTypeBodyContext>(0);
}


size_t BlazeParser::AnnotationTypeDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleAnnotationTypeDeclaration;
}

void BlazeParser::AnnotationTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeDeclaration(this);
}

void BlazeParser::AnnotationTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeDeclaration(this);
}


antlrcpp::Any BlazeParser::AnnotationTypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitAnnotationTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::AnnotationTypeDeclarationContext* BlazeParser::annotationTypeDeclaration() {
  AnnotationTypeDeclarationContext *_localctx = _tracker.createInstance<AnnotationTypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 110, BlazeParser::RuleAnnotationTypeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(728);
    match(BlazeParser::AT);
    setState(729);
    match(BlazeParser::INTERFACE);
    setState(730);
    match(BlazeParser::IDENTIFIER);
    setState(731);
    annotationTypeBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeBodyContext ------------------------------------------------------------------

BlazeParser::AnnotationTypeBodyContext::AnnotationTypeBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::AnnotationTypeBodyContext::LBRACE() {
  return getToken(BlazeParser::LBRACE, 0);
}

tree::TerminalNode* BlazeParser::AnnotationTypeBodyContext::RBRACE() {
  return getToken(BlazeParser::RBRACE, 0);
}

std::vector<BlazeParser::AnnotationTypeElementDeclarationContext *> BlazeParser::AnnotationTypeBodyContext::annotationTypeElementDeclaration() {
  return getRuleContexts<BlazeParser::AnnotationTypeElementDeclarationContext>();
}

BlazeParser::AnnotationTypeElementDeclarationContext* BlazeParser::AnnotationTypeBodyContext::annotationTypeElementDeclaration(size_t i) {
  return getRuleContext<BlazeParser::AnnotationTypeElementDeclarationContext>(i);
}


size_t BlazeParser::AnnotationTypeBodyContext::getRuleIndex() const {
  return BlazeParser::RuleAnnotationTypeBody;
}

void BlazeParser::AnnotationTypeBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeBody(this);
}

void BlazeParser::AnnotationTypeBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeBody(this);
}


antlrcpp::Any BlazeParser::AnnotationTypeBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitAnnotationTypeBody(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::AnnotationTypeBodyContext* BlazeParser::annotationTypeBody() {
  AnnotationTypeBodyContext *_localctx = _tracker.createInstance<AnnotationTypeBodyContext>(_ctx, getState());
  enterRule(_localctx, 112, BlazeParser::RuleAnnotationTypeBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(733);
    match(BlazeParser::LBRACE);
    setState(737);
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
      | (1ULL << BlazeParser::STRICTFP)
      | (1ULL << BlazeParser::SYNCHRONIZED)
      | (1ULL << BlazeParser::TRANSIENT)
      | (1ULL << BlazeParser::VOLATILE))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (BlazeParser::SEMI - 67))
      | (1ULL << (BlazeParser::AT - 67))
      | (1ULL << (BlazeParser::IDENTIFIER - 67)))) != 0)) {
      setState(734);
      annotationTypeElementDeclaration();
      setState(739);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(740);
    match(BlazeParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeElementDeclarationContext ------------------------------------------------------------------

BlazeParser::AnnotationTypeElementDeclarationContext::AnnotationTypeElementDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::AnnotationTypeElementRestContext* BlazeParser::AnnotationTypeElementDeclarationContext::annotationTypeElementRest() {
  return getRuleContext<BlazeParser::AnnotationTypeElementRestContext>(0);
}

std::vector<BlazeParser::ModifierContext *> BlazeParser::AnnotationTypeElementDeclarationContext::modifier() {
  return getRuleContexts<BlazeParser::ModifierContext>();
}

BlazeParser::ModifierContext* BlazeParser::AnnotationTypeElementDeclarationContext::modifier(size_t i) {
  return getRuleContext<BlazeParser::ModifierContext>(i);
}

tree::TerminalNode* BlazeParser::AnnotationTypeElementDeclarationContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}


size_t BlazeParser::AnnotationTypeElementDeclarationContext::getRuleIndex() const {
  return BlazeParser::RuleAnnotationTypeElementDeclaration;
}

void BlazeParser::AnnotationTypeElementDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeElementDeclaration(this);
}

void BlazeParser::AnnotationTypeElementDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeElementDeclaration(this);
}


antlrcpp::Any BlazeParser::AnnotationTypeElementDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitAnnotationTypeElementDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::AnnotationTypeElementDeclarationContext* BlazeParser::annotationTypeElementDeclaration() {
  AnnotationTypeElementDeclarationContext *_localctx = _tracker.createInstance<AnnotationTypeElementDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 114, BlazeParser::RuleAnnotationTypeElementDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(750);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::ABSTRACT:
      case BlazeParser::BOOLEAN:
      case BlazeParser::BYTE:
      case BlazeParser::CHAR:
      case BlazeParser::CLASS:
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
      case BlazeParser::STRICTFP:
      case BlazeParser::SYNCHRONIZED:
      case BlazeParser::TRANSIENT:
      case BlazeParser::VOLATILE:
      case BlazeParser::AT:
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(745);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(742);
            modifier(); 
          }
          setState(747);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
        }
        setState(748);
        annotationTypeElementRest();
        break;
      }

      case BlazeParser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(749);
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

//----------------- AnnotationTypeElementRestContext ------------------------------------------------------------------

BlazeParser::AnnotationTypeElementRestContext::AnnotationTypeElementRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::TypeTypeContext* BlazeParser::AnnotationTypeElementRestContext::typeType() {
  return getRuleContext<BlazeParser::TypeTypeContext>(0);
}

BlazeParser::AnnotationMethodOrConstantRestContext* BlazeParser::AnnotationTypeElementRestContext::annotationMethodOrConstantRest() {
  return getRuleContext<BlazeParser::AnnotationMethodOrConstantRestContext>(0);
}

tree::TerminalNode* BlazeParser::AnnotationTypeElementRestContext::SEMI() {
  return getToken(BlazeParser::SEMI, 0);
}

BlazeParser::ClassDeclarationContext* BlazeParser::AnnotationTypeElementRestContext::classDeclaration() {
  return getRuleContext<BlazeParser::ClassDeclarationContext>(0);
}

BlazeParser::InterfaceDeclarationContext* BlazeParser::AnnotationTypeElementRestContext::interfaceDeclaration() {
  return getRuleContext<BlazeParser::InterfaceDeclarationContext>(0);
}

BlazeParser::EnumDeclarationContext* BlazeParser::AnnotationTypeElementRestContext::enumDeclaration() {
  return getRuleContext<BlazeParser::EnumDeclarationContext>(0);
}

BlazeParser::AnnotationTypeDeclarationContext* BlazeParser::AnnotationTypeElementRestContext::annotationTypeDeclaration() {
  return getRuleContext<BlazeParser::AnnotationTypeDeclarationContext>(0);
}


size_t BlazeParser::AnnotationTypeElementRestContext::getRuleIndex() const {
  return BlazeParser::RuleAnnotationTypeElementRest;
}

void BlazeParser::AnnotationTypeElementRestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeElementRest(this);
}

void BlazeParser::AnnotationTypeElementRestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeElementRest(this);
}


antlrcpp::Any BlazeParser::AnnotationTypeElementRestContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitAnnotationTypeElementRest(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::AnnotationTypeElementRestContext* BlazeParser::annotationTypeElementRest() {
  AnnotationTypeElementRestContext *_localctx = _tracker.createInstance<AnnotationTypeElementRestContext>(_ctx, getState());
  enterRule(_localctx, 116, BlazeParser::RuleAnnotationTypeElementRest);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(772);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(752);
      typeType();
      setState(753);
      annotationMethodOrConstantRest();
      setState(754);
      match(BlazeParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(756);
      classDeclaration();
      setState(758);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
      case 1: {
        setState(757);
        match(BlazeParser::SEMI);
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(760);
      interfaceDeclaration();
      setState(762);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
      case 1: {
        setState(761);
        match(BlazeParser::SEMI);
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(764);
      enumDeclaration();
      setState(766);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
      case 1: {
        setState(765);
        match(BlazeParser::SEMI);
        break;
      }

      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(768);
      annotationTypeDeclaration();
      setState(770);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
      case 1: {
        setState(769);
        match(BlazeParser::SEMI);
        break;
      }

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

//----------------- AnnotationMethodOrConstantRestContext ------------------------------------------------------------------

BlazeParser::AnnotationMethodOrConstantRestContext::AnnotationMethodOrConstantRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::AnnotationMethodRestContext* BlazeParser::AnnotationMethodOrConstantRestContext::annotationMethodRest() {
  return getRuleContext<BlazeParser::AnnotationMethodRestContext>(0);
}

BlazeParser::AnnotationConstantRestContext* BlazeParser::AnnotationMethodOrConstantRestContext::annotationConstantRest() {
  return getRuleContext<BlazeParser::AnnotationConstantRestContext>(0);
}


size_t BlazeParser::AnnotationMethodOrConstantRestContext::getRuleIndex() const {
  return BlazeParser::RuleAnnotationMethodOrConstantRest;
}

void BlazeParser::AnnotationMethodOrConstantRestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationMethodOrConstantRest(this);
}

void BlazeParser::AnnotationMethodOrConstantRestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationMethodOrConstantRest(this);
}


antlrcpp::Any BlazeParser::AnnotationMethodOrConstantRestContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitAnnotationMethodOrConstantRest(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::AnnotationMethodOrConstantRestContext* BlazeParser::annotationMethodOrConstantRest() {
  AnnotationMethodOrConstantRestContext *_localctx = _tracker.createInstance<AnnotationMethodOrConstantRestContext>(_ctx, getState());
  enterRule(_localctx, 118, BlazeParser::RuleAnnotationMethodOrConstantRest);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(776);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(774);
      annotationMethodRest();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(775);
      annotationConstantRest();
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

//----------------- AnnotationMethodRestContext ------------------------------------------------------------------

BlazeParser::AnnotationMethodRestContext::AnnotationMethodRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::AnnotationMethodRestContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

tree::TerminalNode* BlazeParser::AnnotationMethodRestContext::LPAREN() {
  return getToken(BlazeParser::LPAREN, 0);
}

tree::TerminalNode* BlazeParser::AnnotationMethodRestContext::RPAREN() {
  return getToken(BlazeParser::RPAREN, 0);
}

BlazeParser::DefaultValueContext* BlazeParser::AnnotationMethodRestContext::defaultValue() {
  return getRuleContext<BlazeParser::DefaultValueContext>(0);
}


size_t BlazeParser::AnnotationMethodRestContext::getRuleIndex() const {
  return BlazeParser::RuleAnnotationMethodRest;
}

void BlazeParser::AnnotationMethodRestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationMethodRest(this);
}

void BlazeParser::AnnotationMethodRestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationMethodRest(this);
}


antlrcpp::Any BlazeParser::AnnotationMethodRestContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitAnnotationMethodRest(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::AnnotationMethodRestContext* BlazeParser::annotationMethodRest() {
  AnnotationMethodRestContext *_localctx = _tracker.createInstance<AnnotationMethodRestContext>(_ctx, getState());
  enterRule(_localctx, 120, BlazeParser::RuleAnnotationMethodRest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(778);
    match(BlazeParser::IDENTIFIER);
    setState(779);
    match(BlazeParser::LPAREN);
    setState(780);
    match(BlazeParser::RPAREN);
    setState(782);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::DEFAULT) {
      setState(781);
      defaultValue();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationConstantRestContext ------------------------------------------------------------------

BlazeParser::AnnotationConstantRestContext::AnnotationConstantRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::VariableDeclaratorsContext* BlazeParser::AnnotationConstantRestContext::variableDeclarators() {
  return getRuleContext<BlazeParser::VariableDeclaratorsContext>(0);
}


size_t BlazeParser::AnnotationConstantRestContext::getRuleIndex() const {
  return BlazeParser::RuleAnnotationConstantRest;
}

void BlazeParser::AnnotationConstantRestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationConstantRest(this);
}

void BlazeParser::AnnotationConstantRestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationConstantRest(this);
}


antlrcpp::Any BlazeParser::AnnotationConstantRestContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitAnnotationConstantRest(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::AnnotationConstantRestContext* BlazeParser::annotationConstantRest() {
  AnnotationConstantRestContext *_localctx = _tracker.createInstance<AnnotationConstantRestContext>(_ctx, getState());
  enterRule(_localctx, 122, BlazeParser::RuleAnnotationConstantRest);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(784);
    variableDeclarators();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultValueContext ------------------------------------------------------------------

BlazeParser::DefaultValueContext::DefaultValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::DefaultValueContext::DEFAULT() {
  return getToken(BlazeParser::DEFAULT, 0);
}

BlazeParser::ElementValueContext* BlazeParser::DefaultValueContext::elementValue() {
  return getRuleContext<BlazeParser::ElementValueContext>(0);
}


size_t BlazeParser::DefaultValueContext::getRuleIndex() const {
  return BlazeParser::RuleDefaultValue;
}

void BlazeParser::DefaultValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultValue(this);
}

void BlazeParser::DefaultValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultValue(this);
}


antlrcpp::Any BlazeParser::DefaultValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitDefaultValue(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::DefaultValueContext* BlazeParser::defaultValue() {
  DefaultValueContext *_localctx = _tracker.createInstance<DefaultValueContext>(_ctx, getState());
  enterRule(_localctx, 124, BlazeParser::RuleDefaultValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(786);
    match(BlazeParser::DEFAULT);
    setState(787);
    elementValue();
   
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
  enterRule(_localctx, 126, BlazeParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(789);
    match(BlazeParser::LBRACE);
    setState(793);
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
      | (1ULL << BlazeParser::STRICTFP)
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
      | (1ULL << BlazeParser::LBRACE))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (BlazeParser::SEMI - 67))
      | (1ULL << (BlazeParser::LT - 67))
      | (1ULL << (BlazeParser::BANG - 67))
      | (1ULL << (BlazeParser::TILDE - 67))
      | (1ULL << (BlazeParser::INC - 67))
      | (1ULL << (BlazeParser::DEC - 67))
      | (1ULL << (BlazeParser::ADD - 67))
      | (1ULL << (BlazeParser::SUB - 67))
      | (1ULL << (BlazeParser::AT - 67))
      | (1ULL << (BlazeParser::IDENTIFIER - 67)))) != 0)) {
      setState(790);
      blockStatement();
      setState(795);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(796);
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
  enterRule(_localctx, 128, BlazeParser::RuleBlockStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(803);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(798);
      localVariableDeclaration();
      setState(799);
      match(BlazeParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(801);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(802);
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
  enterRule(_localctx, 130, BlazeParser::RuleLocalVariableDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(808);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(805);
        variableModifier(); 
      }
      setState(810);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
    }
    setState(811);
    typeType();
    setState(812);
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
  enterRule(_localctx, 132, BlazeParser::RuleLocalTypeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(825);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::ABSTRACT:
      case BlazeParser::CLASS:
      case BlazeParser::FINAL:
      case BlazeParser::INTERFACE:
      case BlazeParser::PRIVATE:
      case BlazeParser::PROTECTED:
      case BlazeParser::PUBLIC:
      case BlazeParser::STATIC:
      case BlazeParser::STRICTFP:
      case BlazeParser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(817);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << BlazeParser::ABSTRACT)
          | (1ULL << BlazeParser::FINAL)
          | (1ULL << BlazeParser::PRIVATE)
          | (1ULL << BlazeParser::PROTECTED)
          | (1ULL << BlazeParser::PUBLIC)
          | (1ULL << BlazeParser::STATIC)
          | (1ULL << BlazeParser::STRICTFP))) != 0) || _la == BlazeParser::AT) {
          setState(814);
          classOrInterfaceModifier();
          setState(819);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(822);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case BlazeParser::CLASS: {
            setState(820);
            classDeclaration();
            break;
          }

          case BlazeParser::INTERFACE: {
            setState(821);
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
        setState(824);
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
  enterRule(_localctx, 134, BlazeParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(931);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(827);
      dynamic_cast<StatementContext *>(_localctx)->blockLabel = block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(828);
      match(BlazeParser::ASSERT);
      setState(829);
      expression(0);
      setState(832);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::COLON) {
        setState(830);
        match(BlazeParser::COLON);
        setState(831);
        expression(0);
      }
      setState(834);
      match(BlazeParser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(836);
      match(BlazeParser::IF);
      setState(837);
      parExpression();
      setState(838);
      statement();
      setState(841);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
      case 1: {
        setState(839);
        match(BlazeParser::ELSE);
        setState(840);
        statement();
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(843);
      match(BlazeParser::FOR);
      setState(844);
      match(BlazeParser::LPAREN);
      setState(845);
      forControl();
      setState(846);
      match(BlazeParser::RPAREN);
      setState(847);
      statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(849);
      match(BlazeParser::WHILE);
      setState(850);
      parExpression();
      setState(851);
      statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(853);
      match(BlazeParser::DO);
      setState(854);
      statement();
      setState(855);
      match(BlazeParser::WHILE);
      setState(856);
      parExpression();
      setState(857);
      match(BlazeParser::SEMI);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(859);
      match(BlazeParser::TRY);
      setState(860);
      block();
      setState(870);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BlazeParser::CATCH: {
          setState(862); 
          _errHandler->sync(this);
          _la = _input->LA(1);
          do {
            setState(861);
            catchClause();
            setState(864); 
            _errHandler->sync(this);
            _la = _input->LA(1);
          } while (_la == BlazeParser::CATCH);
          setState(867);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == BlazeParser::FINALLY) {
            setState(866);
            finallyBlock();
          }
          break;
        }

        case BlazeParser::FINALLY: {
          setState(869);
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
      setState(872);
      match(BlazeParser::TRY);
      setState(873);
      resourceSpecification();
      setState(874);
      block();
      setState(878);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BlazeParser::CATCH) {
        setState(875);
        catchClause();
        setState(880);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(882);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::FINALLY) {
        setState(881);
        finallyBlock();
      }
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(884);
      match(BlazeParser::SWITCH);
      setState(885);
      parExpression();
      setState(886);
      match(BlazeParser::LBRACE);
      setState(890);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(887);
          switchBlockStatementGroup(); 
        }
        setState(892);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx);
      }
      setState(896);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BlazeParser::CASE

      || _la == BlazeParser::DEFAULT) {
        setState(893);
        switchLabel();
        setState(898);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(899);
      match(BlazeParser::RBRACE);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(901);
      match(BlazeParser::SYNCHRONIZED);
      setState(902);
      parExpression();
      setState(903);
      block();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(905);
      match(BlazeParser::RETURN);
      setState(907);
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
        ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::LT - 72))
        | (1ULL << (BlazeParser::BANG - 72))
        | (1ULL << (BlazeParser::TILDE - 72))
        | (1ULL << (BlazeParser::INC - 72))
        | (1ULL << (BlazeParser::DEC - 72))
        | (1ULL << (BlazeParser::ADD - 72))
        | (1ULL << (BlazeParser::SUB - 72))
        | (1ULL << (BlazeParser::AT - 72))
        | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
        setState(906);
        expression(0);
      }
      setState(909);
      match(BlazeParser::SEMI);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(910);
      match(BlazeParser::THROW);
      setState(911);
      expression(0);
      setState(912);
      match(BlazeParser::SEMI);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(914);
      match(BlazeParser::BREAK);
      setState(916);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::IDENTIFIER) {
        setState(915);
        match(BlazeParser::IDENTIFIER);
      }
      setState(918);
      match(BlazeParser::SEMI);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(919);
      match(BlazeParser::CONTINUE);
      setState(921);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::IDENTIFIER) {
        setState(920);
        match(BlazeParser::IDENTIFIER);
      }
      setState(923);
      match(BlazeParser::SEMI);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(924);
      match(BlazeParser::SEMI);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(925);
      dynamic_cast<StatementContext *>(_localctx)->statementExpression = expression(0);
      setState(926);
      match(BlazeParser::SEMI);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(928);
      dynamic_cast<StatementContext *>(_localctx)->identifierLabel = match(BlazeParser::IDENTIFIER);
      setState(929);
      match(BlazeParser::COLON);
      setState(930);
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
  enterRule(_localctx, 136, BlazeParser::RuleCatchClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(933);
    match(BlazeParser::CATCH);
    setState(934);
    match(BlazeParser::LPAREN);
    setState(938);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::FINAL || _la == BlazeParser::AT) {
      setState(935);
      variableModifier();
      setState(940);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(941);
    catchType();
    setState(942);
    match(BlazeParser::IDENTIFIER);
    setState(943);
    match(BlazeParser::RPAREN);
    setState(944);
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
  enterRule(_localctx, 138, BlazeParser::RuleCatchType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(946);
    qualifiedName();
    setState(951);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::BITOR) {
      setState(947);
      match(BlazeParser::BITOR);
      setState(948);
      qualifiedName();
      setState(953);
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
  enterRule(_localctx, 140, BlazeParser::RuleFinallyBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(954);
    match(BlazeParser::FINALLY);
    setState(955);
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
  enterRule(_localctx, 142, BlazeParser::RuleResourceSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(957);
    match(BlazeParser::LPAREN);
    setState(958);
    resources();
    setState(960);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::SEMI) {
      setState(959);
      match(BlazeParser::SEMI);
    }
    setState(962);
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
  enterRule(_localctx, 144, BlazeParser::RuleResources);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(964);
    resource();
    setState(969);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(965);
        match(BlazeParser::SEMI);
        setState(966);
        resource(); 
      }
      setState(971);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx);
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
  enterRule(_localctx, 146, BlazeParser::RuleResource);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(975);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::FINAL || _la == BlazeParser::AT) {
      setState(972);
      variableModifier();
      setState(977);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(978);
    classOrInterfaceType();
    setState(979);
    variableDeclaratorId();
    setState(980);
    match(BlazeParser::ASSIGN);
    setState(981);
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
  enterRule(_localctx, 148, BlazeParser::RuleSwitchBlockStatementGroup);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(984); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(983);
      switchLabel();
      setState(986); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BlazeParser::CASE

    || _la == BlazeParser::DEFAULT);
    setState(989); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(988);
      blockStatement();
      setState(991); 
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
      | (1ULL << BlazeParser::STRICTFP)
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
      | (1ULL << BlazeParser::LBRACE))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (BlazeParser::SEMI - 67))
      | (1ULL << (BlazeParser::LT - 67))
      | (1ULL << (BlazeParser::BANG - 67))
      | (1ULL << (BlazeParser::TILDE - 67))
      | (1ULL << (BlazeParser::INC - 67))
      | (1ULL << (BlazeParser::DEC - 67))
      | (1ULL << (BlazeParser::ADD - 67))
      | (1ULL << (BlazeParser::SUB - 67))
      | (1ULL << (BlazeParser::AT - 67))
      | (1ULL << (BlazeParser::IDENTIFIER - 67)))) != 0));
   
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
  enterRule(_localctx, 150, BlazeParser::RuleSwitchLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1001);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::CASE: {
        enterOuterAlt(_localctx, 1);
        setState(993);
        match(BlazeParser::CASE);
        setState(996);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
        case 1: {
          setState(994);
          dynamic_cast<SwitchLabelContext *>(_localctx)->constantExpression = expression(0);
          break;
        }

        case 2: {
          setState(995);
          dynamic_cast<SwitchLabelContext *>(_localctx)->enumConstantName = match(BlazeParser::IDENTIFIER);
          break;
        }

        }
        setState(998);
        match(BlazeParser::COLON);
        break;
      }

      case BlazeParser::DEFAULT: {
        enterOuterAlt(_localctx, 2);
        setState(999);
        match(BlazeParser::DEFAULT);
        setState(1000);
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
  enterRule(_localctx, 152, BlazeParser::RuleForControl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1015);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1003);
      enhancedForControl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1005);
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
        ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::LT - 72))
        | (1ULL << (BlazeParser::BANG - 72))
        | (1ULL << (BlazeParser::TILDE - 72))
        | (1ULL << (BlazeParser::INC - 72))
        | (1ULL << (BlazeParser::DEC - 72))
        | (1ULL << (BlazeParser::ADD - 72))
        | (1ULL << (BlazeParser::SUB - 72))
        | (1ULL << (BlazeParser::AT - 72))
        | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
        setState(1004);
        forInit();
      }
      setState(1007);
      match(BlazeParser::SEMI);
      setState(1009);
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
        ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::LT - 72))
        | (1ULL << (BlazeParser::BANG - 72))
        | (1ULL << (BlazeParser::TILDE - 72))
        | (1ULL << (BlazeParser::INC - 72))
        | (1ULL << (BlazeParser::DEC - 72))
        | (1ULL << (BlazeParser::ADD - 72))
        | (1ULL << (BlazeParser::SUB - 72))
        | (1ULL << (BlazeParser::AT - 72))
        | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
        setState(1008);
        expression(0);
      }
      setState(1011);
      match(BlazeParser::SEMI);
      setState(1013);
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
        ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::LT - 72))
        | (1ULL << (BlazeParser::BANG - 72))
        | (1ULL << (BlazeParser::TILDE - 72))
        | (1ULL << (BlazeParser::INC - 72))
        | (1ULL << (BlazeParser::DEC - 72))
        | (1ULL << (BlazeParser::ADD - 72))
        | (1ULL << (BlazeParser::SUB - 72))
        | (1ULL << (BlazeParser::AT - 72))
        | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
        setState(1012);
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
  enterRule(_localctx, 154, BlazeParser::RuleForInit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1019);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1017);
      localVariableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1018);
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
  enterRule(_localctx, 156, BlazeParser::RuleEnhancedForControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1024);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1021);
        variableModifier(); 
      }
      setState(1026);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx);
    }
    setState(1027);
    typeType();
    setState(1028);
    variableDeclaratorId();
    setState(1029);
    match(BlazeParser::COLON);
    setState(1030);
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
  enterRule(_localctx, 158, BlazeParser::RuleParExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1032);
    match(BlazeParser::LPAREN);
    setState(1033);
    expression(0);
    setState(1034);
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
  enterRule(_localctx, 160, BlazeParser::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1036);
    expression(0);
    setState(1041);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::COMMA) {
      setState(1037);
      match(BlazeParser::COMMA);
      setState(1038);
      expression(0);
      setState(1043);
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
  enterRule(_localctx, 162, BlazeParser::RuleMethodCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1062);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1044);
        match(BlazeParser::IDENTIFIER);
        setState(1045);
        match(BlazeParser::LPAREN);
        setState(1047);
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
          ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::LT - 72))
          | (1ULL << (BlazeParser::BANG - 72))
          | (1ULL << (BlazeParser::TILDE - 72))
          | (1ULL << (BlazeParser::INC - 72))
          | (1ULL << (BlazeParser::DEC - 72))
          | (1ULL << (BlazeParser::ADD - 72))
          | (1ULL << (BlazeParser::SUB - 72))
          | (1ULL << (BlazeParser::AT - 72))
          | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
          setState(1046);
          expressionList();
        }
        setState(1049);
        match(BlazeParser::RPAREN);
        break;
      }

      case BlazeParser::THIS: {
        enterOuterAlt(_localctx, 2);
        setState(1050);
        match(BlazeParser::THIS);
        setState(1051);
        match(BlazeParser::LPAREN);
        setState(1053);
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
          ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::LT - 72))
          | (1ULL << (BlazeParser::BANG - 72))
          | (1ULL << (BlazeParser::TILDE - 72))
          | (1ULL << (BlazeParser::INC - 72))
          | (1ULL << (BlazeParser::DEC - 72))
          | (1ULL << (BlazeParser::ADD - 72))
          | (1ULL << (BlazeParser::SUB - 72))
          | (1ULL << (BlazeParser::AT - 72))
          | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
          setState(1052);
          expressionList();
        }
        setState(1055);
        match(BlazeParser::RPAREN);
        break;
      }

      case BlazeParser::SUPER: {
        enterOuterAlt(_localctx, 3);
        setState(1056);
        match(BlazeParser::SUPER);
        setState(1057);
        match(BlazeParser::LPAREN);
        setState(1059);
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
          ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::LT - 72))
          | (1ULL << (BlazeParser::BANG - 72))
          | (1ULL << (BlazeParser::TILDE - 72))
          | (1ULL << (BlazeParser::INC - 72))
          | (1ULL << (BlazeParser::DEC - 72))
          | (1ULL << (BlazeParser::ADD - 72))
          | (1ULL << (BlazeParser::SUB - 72))
          | (1ULL << (BlazeParser::AT - 72))
          | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
          setState(1058);
          expressionList();
        }
        setState(1061);
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

BlazeParser::LambdaExpressionContext* BlazeParser::ExpressionContext::lambdaExpression() {
  return getRuleContext<BlazeParser::LambdaExpressionContext>(0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::COLONCOLON() {
  return getToken(BlazeParser::COLONCOLON, 0);
}

tree::TerminalNode* BlazeParser::ExpressionContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

BlazeParser::TypeArgumentsContext* BlazeParser::ExpressionContext::typeArguments() {
  return getRuleContext<BlazeParser::TypeArgumentsContext>(0);
}

BlazeParser::ClassTypeContext* BlazeParser::ExpressionContext::classType() {
  return getRuleContext<BlazeParser::ClassTypeContext>(0);
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

BlazeParser::NonWildcardTypeArgumentsContext* BlazeParser::ExpressionContext::nonWildcardTypeArguments() {
  return getRuleContext<BlazeParser::NonWildcardTypeArgumentsContext>(0);
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
  size_t startState = 164;
  enterRecursionRule(_localctx, 164, BlazeParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1095);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 132, _ctx)) {
    case 1: {
      setState(1065);
      primary();
      break;
    }

    case 2: {
      setState(1066);
      methodCall();
      break;
    }

    case 3: {
      setState(1067);
      match(BlazeParser::NEW);
      setState(1068);
      creator();
      break;
    }

    case 4: {
      setState(1069);
      match(BlazeParser::LPAREN);
      setState(1070);
      typeType();
      setState(1071);
      match(BlazeParser::RPAREN);
      setState(1072);
      expression(21);
      break;
    }

    case 5: {
      setState(1074);
      dynamic_cast<ExpressionContext *>(_localctx)->prefix = _input->LT(1);
      _la = _input->LA(1);
      if (!(((((_la - 83) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 83)) & ((1ULL << (BlazeParser::INC - 83))
        | (1ULL << (BlazeParser::DEC - 83))
        | (1ULL << (BlazeParser::ADD - 83))
        | (1ULL << (BlazeParser::SUB - 83)))) != 0))) {
        dynamic_cast<ExpressionContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1075);
      expression(19);
      break;
    }

    case 6: {
      setState(1076);
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
      setState(1077);
      expression(18);
      break;
    }

    case 7: {
      setState(1078);
      lambdaExpression();
      break;
    }

    case 8: {
      setState(1079);
      typeType();
      setState(1080);
      match(BlazeParser::COLONCOLON);
      setState(1086);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BlazeParser::LT:
        case BlazeParser::IDENTIFIER: {
          setState(1082);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == BlazeParser::LT) {
            setState(1081);
            typeArguments();
          }
          setState(1084);
          match(BlazeParser::IDENTIFIER);
          break;
        }

        case BlazeParser::NEW: {
          setState(1085);
          match(BlazeParser::NEW);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 9: {
      setState(1088);
      classType();
      setState(1089);
      match(BlazeParser::COLONCOLON);
      setState(1091);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BlazeParser::LT) {
        setState(1090);
        typeArguments();
      }
      setState(1093);
      match(BlazeParser::NEW);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1177);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1175);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1097);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(1098);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 87) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 87)) & ((1ULL << (BlazeParser::MUL - 87))
            | (1ULL << (BlazeParser::DIV - 87))
            | (1ULL << (BlazeParser::MOD - 87)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1099);
          expression(18);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1100);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(1101);
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
          setState(1102);
          expression(17);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1103);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(1111);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx)) {
          case 1: {
            setState(1104);
            match(BlazeParser::LT);
            setState(1105);
            match(BlazeParser::LT);
            break;
          }

          case 2: {
            setState(1106);
            match(BlazeParser::GT);
            setState(1107);
            match(BlazeParser::GT);
            setState(1108);
            match(BlazeParser::GT);
            break;
          }

          case 3: {
            setState(1109);
            match(BlazeParser::GT);
            setState(1110);
            match(BlazeParser::GT);
            break;
          }

          }
          setState(1113);
          expression(16);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1114);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(1115);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 71) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 71)) & ((1ULL << (BlazeParser::GT - 71))
            | (1ULL << (BlazeParser::LT - 71))
            | (1ULL << (BlazeParser::LE - 71))
            | (1ULL << (BlazeParser::GE - 71)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1116);
          expression(15);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1117);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(1118);
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
          setState(1119);
          expression(13);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1120);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(1121);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::BITAND);
          setState(1122);
          expression(12);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1123);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(1124);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::CARET);
          setState(1125);
          expression(11);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1126);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(1127);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::BITOR);
          setState(1128);
          expression(10);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1129);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(1130);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::AND);
          setState(1131);
          expression(9);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1132);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(1133);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::OR);
          setState(1134);
          expression(8);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1135);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(1136);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::QUESTION);
          setState(1137);
          expression(0);
          setState(1138);
          match(BlazeParser::COLON);
          setState(1139);
          expression(7);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1141);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1142);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 70) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 70)) & ((1ULL << (BlazeParser::ASSIGN - 70))
            | (1ULL << (BlazeParser::ADD_ASSIGN - 70))
            | (1ULL << (BlazeParser::SUB_ASSIGN - 70))
            | (1ULL << (BlazeParser::MUL_ASSIGN - 70))
            | (1ULL << (BlazeParser::DIV_ASSIGN - 70))
            | (1ULL << (BlazeParser::AND_ASSIGN - 70))
            | (1ULL << (BlazeParser::OR_ASSIGN - 70))
            | (1ULL << (BlazeParser::XOR_ASSIGN - 70))
            | (1ULL << (BlazeParser::MOD_ASSIGN - 70))
            | (1ULL << (BlazeParser::LSHIFT_ASSIGN - 70))
            | (1ULL << (BlazeParser::RSHIFT_ASSIGN - 70))
            | (1ULL << (BlazeParser::URSHIFT_ASSIGN - 70)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1143);
          expression(5);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1144);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(1145);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::DOT);
          setState(1157);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx)) {
          case 1: {
            setState(1146);
            match(BlazeParser::IDENTIFIER);
            break;
          }

          case 2: {
            setState(1147);
            methodCall();
            break;
          }

          case 3: {
            setState(1148);
            match(BlazeParser::THIS);
            break;
          }

          case 4: {
            setState(1149);
            match(BlazeParser::NEW);
            setState(1151);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == BlazeParser::LT) {
              setState(1150);
              nonWildcardTypeArguments();
            }
            setState(1153);
            innerCreator();
            break;
          }

          case 5: {
            setState(1154);
            match(BlazeParser::SUPER);
            setState(1155);
            superSuffix();
            break;
          }

          case 6: {
            setState(1156);
            explicitGenericInvocation();
            break;
          }

          }
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1159);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(1160);
          match(BlazeParser::LBRACK);
          setState(1161);
          expression(0);
          setState(1162);
          match(BlazeParser::RBRACK);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1164);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(1165);
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
          setState(1166);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(1167);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BlazeParser::INSTANCEOF);
          setState(1168);
          typeType();
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1169);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1170);
          match(BlazeParser::COLONCOLON);
          setState(1172);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == BlazeParser::LT) {
            setState(1171);
            typeArguments();
          }
          setState(1174);
          match(BlazeParser::IDENTIFIER);
          break;
        }

        } 
      }
      setState(1179);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LambdaExpressionContext ------------------------------------------------------------------

BlazeParser::LambdaExpressionContext::LambdaExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::LambdaParametersContext* BlazeParser::LambdaExpressionContext::lambdaParameters() {
  return getRuleContext<BlazeParser::LambdaParametersContext>(0);
}

tree::TerminalNode* BlazeParser::LambdaExpressionContext::ARROW() {
  return getToken(BlazeParser::ARROW, 0);
}

BlazeParser::LambdaBodyContext* BlazeParser::LambdaExpressionContext::lambdaBody() {
  return getRuleContext<BlazeParser::LambdaBodyContext>(0);
}


size_t BlazeParser::LambdaExpressionContext::getRuleIndex() const {
  return BlazeParser::RuleLambdaExpression;
}

void BlazeParser::LambdaExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaExpression(this);
}

void BlazeParser::LambdaExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaExpression(this);
}


antlrcpp::Any BlazeParser::LambdaExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitLambdaExpression(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::LambdaExpressionContext* BlazeParser::lambdaExpression() {
  LambdaExpressionContext *_localctx = _tracker.createInstance<LambdaExpressionContext>(_ctx, getState());
  enterRule(_localctx, 166, BlazeParser::RuleLambdaExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1180);
    lambdaParameters();
    setState(1181);
    match(BlazeParser::ARROW);
    setState(1182);
    lambdaBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaParametersContext ------------------------------------------------------------------

BlazeParser::LambdaParametersContext::LambdaParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BlazeParser::LambdaParametersContext::IDENTIFIER() {
  return getTokens(BlazeParser::IDENTIFIER);
}

tree::TerminalNode* BlazeParser::LambdaParametersContext::IDENTIFIER(size_t i) {
  return getToken(BlazeParser::IDENTIFIER, i);
}

tree::TerminalNode* BlazeParser::LambdaParametersContext::LPAREN() {
  return getToken(BlazeParser::LPAREN, 0);
}

tree::TerminalNode* BlazeParser::LambdaParametersContext::RPAREN() {
  return getToken(BlazeParser::RPAREN, 0);
}

BlazeParser::FormalParameterListContext* BlazeParser::LambdaParametersContext::formalParameterList() {
  return getRuleContext<BlazeParser::FormalParameterListContext>(0);
}

std::vector<tree::TerminalNode *> BlazeParser::LambdaParametersContext::COMMA() {
  return getTokens(BlazeParser::COMMA);
}

tree::TerminalNode* BlazeParser::LambdaParametersContext::COMMA(size_t i) {
  return getToken(BlazeParser::COMMA, i);
}


size_t BlazeParser::LambdaParametersContext::getRuleIndex() const {
  return BlazeParser::RuleLambdaParameters;
}

void BlazeParser::LambdaParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaParameters(this);
}

void BlazeParser::LambdaParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaParameters(this);
}


antlrcpp::Any BlazeParser::LambdaParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitLambdaParameters(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::LambdaParametersContext* BlazeParser::lambdaParameters() {
  LambdaParametersContext *_localctx = _tracker.createInstance<LambdaParametersContext>(_ctx, getState());
  enterRule(_localctx, 168, BlazeParser::RuleLambdaParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1200);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1184);
      match(BlazeParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1185);
      match(BlazeParser::LPAREN);
      setState(1187);
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
        | (1ULL << BlazeParser::SHORT))) != 0) || _la == BlazeParser::AT

      || _la == BlazeParser::IDENTIFIER) {
        setState(1186);
        formalParameterList();
      }
      setState(1189);
      match(BlazeParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1190);
      match(BlazeParser::LPAREN);
      setState(1191);
      match(BlazeParser::IDENTIFIER);
      setState(1196);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BlazeParser::COMMA) {
        setState(1192);
        match(BlazeParser::COMMA);
        setState(1193);
        match(BlazeParser::IDENTIFIER);
        setState(1198);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1199);
      match(BlazeParser::RPAREN);
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

//----------------- LambdaBodyContext ------------------------------------------------------------------

BlazeParser::LambdaBodyContext::LambdaBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BlazeParser::ExpressionContext* BlazeParser::LambdaBodyContext::expression() {
  return getRuleContext<BlazeParser::ExpressionContext>(0);
}

BlazeParser::BlockContext* BlazeParser::LambdaBodyContext::block() {
  return getRuleContext<BlazeParser::BlockContext>(0);
}


size_t BlazeParser::LambdaBodyContext::getRuleIndex() const {
  return BlazeParser::RuleLambdaBody;
}

void BlazeParser::LambdaBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaBody(this);
}

void BlazeParser::LambdaBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaBody(this);
}


antlrcpp::Any BlazeParser::LambdaBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitLambdaBody(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::LambdaBodyContext* BlazeParser::lambdaBody() {
  LambdaBodyContext *_localctx = _tracker.createInstance<LambdaBodyContext>(_ctx, getState());
  enterRule(_localctx, 170, BlazeParser::RuleLambdaBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1204);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
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
      case BlazeParser::LT:
      case BlazeParser::BANG:
      case BlazeParser::TILDE:
      case BlazeParser::INC:
      case BlazeParser::DEC:
      case BlazeParser::ADD:
      case BlazeParser::SUB:
      case BlazeParser::AT:
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1202);
        expression(0);
        break;
      }

      case BlazeParser::LBRACE: {
        enterOuterAlt(_localctx, 2);
        setState(1203);
        block();
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

BlazeParser::NonWildcardTypeArgumentsContext* BlazeParser::PrimaryContext::nonWildcardTypeArguments() {
  return getRuleContext<BlazeParser::NonWildcardTypeArgumentsContext>(0);
}

BlazeParser::ExplicitGenericInvocationSuffixContext* BlazeParser::PrimaryContext::explicitGenericInvocationSuffix() {
  return getRuleContext<BlazeParser::ExplicitGenericInvocationSuffixContext>(0);
}

BlazeParser::ArgumentsContext* BlazeParser::PrimaryContext::arguments() {
  return getRuleContext<BlazeParser::ArgumentsContext>(0);
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
  enterRule(_localctx, 172, BlazeParser::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1224);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1206);
      match(BlazeParser::LPAREN);
      setState(1207);
      expression(0);
      setState(1208);
      match(BlazeParser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1210);
      match(BlazeParser::THIS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1211);
      match(BlazeParser::SUPER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1212);
      literal();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1213);
      match(BlazeParser::IDENTIFIER);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1214);
      typeTypeOrVoid();
      setState(1215);
      match(BlazeParser::DOT);
      setState(1216);
      match(BlazeParser::CLASS);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1218);
      nonWildcardTypeArguments();
      setState(1222);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BlazeParser::SUPER:
        case BlazeParser::IDENTIFIER: {
          setState(1219);
          explicitGenericInvocationSuffix();
          break;
        }

        case BlazeParser::THIS: {
          setState(1220);
          match(BlazeParser::THIS);
          setState(1221);
          arguments();
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

//----------------- ClassTypeContext ------------------------------------------------------------------

BlazeParser::ClassTypeContext::ClassTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::ClassTypeContext::IDENTIFIER() {
  return getToken(BlazeParser::IDENTIFIER, 0);
}

BlazeParser::ClassOrInterfaceTypeContext* BlazeParser::ClassTypeContext::classOrInterfaceType() {
  return getRuleContext<BlazeParser::ClassOrInterfaceTypeContext>(0);
}

tree::TerminalNode* BlazeParser::ClassTypeContext::DOT() {
  return getToken(BlazeParser::DOT, 0);
}

std::vector<BlazeParser::AnnotationContext *> BlazeParser::ClassTypeContext::annotation() {
  return getRuleContexts<BlazeParser::AnnotationContext>();
}

BlazeParser::AnnotationContext* BlazeParser::ClassTypeContext::annotation(size_t i) {
  return getRuleContext<BlazeParser::AnnotationContext>(i);
}

BlazeParser::TypeArgumentsContext* BlazeParser::ClassTypeContext::typeArguments() {
  return getRuleContext<BlazeParser::TypeArgumentsContext>(0);
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
  enterRule(_localctx, 174, BlazeParser::RuleClassType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1229);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx)) {
    case 1: {
      setState(1226);
      classOrInterfaceType();
      setState(1227);
      match(BlazeParser::DOT);
      break;
    }

    }
    setState(1234);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::AT) {
      setState(1231);
      annotation();
      setState(1236);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1237);
    match(BlazeParser::IDENTIFIER);
    setState(1239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::LT) {
      setState(1238);
      typeArguments();
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

BlazeParser::NonWildcardTypeArgumentsContext* BlazeParser::CreatorContext::nonWildcardTypeArguments() {
  return getRuleContext<BlazeParser::NonWildcardTypeArgumentsContext>(0);
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
  enterRule(_localctx, 176, BlazeParser::RuleCreator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1250);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::LT: {
        enterOuterAlt(_localctx, 1);
        setState(1241);
        nonWildcardTypeArguments();
        setState(1242);
        createdName();
        setState(1243);
        classCreatorRest();
        break;
      }

      case BlazeParser::BOOLEAN:
      case BlazeParser::BYTE:
      case BlazeParser::CHAR:
      case BlazeParser::DOUBLE:
      case BlazeParser::FLOAT:
      case BlazeParser::INT:
      case BlazeParser::LONG:
      case BlazeParser::SHORT:
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(1245);
        createdName();
        setState(1248);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case BlazeParser::LBRACK: {
            setState(1246);
            arrayCreatorRest();
            break;
          }

          case BlazeParser::LPAREN: {
            setState(1247);
            classCreatorRest();
            break;
          }

        default:
          throw NoViableAltException(this);
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

std::vector<BlazeParser::TypeArgumentsOrDiamondContext *> BlazeParser::CreatedNameContext::typeArgumentsOrDiamond() {
  return getRuleContexts<BlazeParser::TypeArgumentsOrDiamondContext>();
}

BlazeParser::TypeArgumentsOrDiamondContext* BlazeParser::CreatedNameContext::typeArgumentsOrDiamond(size_t i) {
  return getRuleContext<BlazeParser::TypeArgumentsOrDiamondContext>(i);
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
  enterRule(_localctx, 178, BlazeParser::RuleCreatedName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1267);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1252);
        match(BlazeParser::IDENTIFIER);
        setState(1254);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BlazeParser::LT) {
          setState(1253);
          typeArgumentsOrDiamond();
        }
        setState(1263);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BlazeParser::DOT) {
          setState(1256);
          match(BlazeParser::DOT);
          setState(1257);
          match(BlazeParser::IDENTIFIER);
          setState(1259);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == BlazeParser::LT) {
            setState(1258);
            typeArgumentsOrDiamond();
          }
          setState(1265);
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
        setState(1266);
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

BlazeParser::NonWildcardTypeArgumentsOrDiamondContext* BlazeParser::InnerCreatorContext::nonWildcardTypeArgumentsOrDiamond() {
  return getRuleContext<BlazeParser::NonWildcardTypeArgumentsOrDiamondContext>(0);
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
  enterRule(_localctx, 180, BlazeParser::RuleInnerCreator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1269);
    match(BlazeParser::IDENTIFIER);
    setState(1271);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::LT) {
      setState(1270);
      nonWildcardTypeArgumentsOrDiamond();
    }
    setState(1273);
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
  enterRule(_localctx, 182, BlazeParser::RuleArrayCreatorRest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1275);
    match(BlazeParser::LBRACK);
    setState(1303);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::RBRACK: {
        setState(1276);
        match(BlazeParser::RBRACK);
        setState(1281);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BlazeParser::LBRACK) {
          setState(1277);
          match(BlazeParser::LBRACK);
          setState(1278);
          match(BlazeParser::RBRACK);
          setState(1283);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1284);
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
      case BlazeParser::LT:
      case BlazeParser::BANG:
      case BlazeParser::TILDE:
      case BlazeParser::INC:
      case BlazeParser::DEC:
      case BlazeParser::ADD:
      case BlazeParser::SUB:
      case BlazeParser::AT:
      case BlazeParser::IDENTIFIER: {
        setState(1285);
        expression(0);
        setState(1286);
        match(BlazeParser::RBRACK);
        setState(1293);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1287);
            match(BlazeParser::LBRACK);
            setState(1288);
            expression(0);
            setState(1289);
            match(BlazeParser::RBRACK); 
          }
          setState(1295);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx);
        }
        setState(1300);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1296);
            match(BlazeParser::LBRACK);
            setState(1297);
            match(BlazeParser::RBRACK); 
          }
          setState(1302);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx);
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
  enterRule(_localctx, 184, BlazeParser::RuleClassCreatorRest);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1305);
    arguments();
    setState(1307);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
    case 1: {
      setState(1306);
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

BlazeParser::NonWildcardTypeArgumentsContext* BlazeParser::ExplicitGenericInvocationContext::nonWildcardTypeArguments() {
  return getRuleContext<BlazeParser::NonWildcardTypeArgumentsContext>(0);
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
  enterRule(_localctx, 186, BlazeParser::RuleExplicitGenericInvocation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1309);
    nonWildcardTypeArguments();
    setState(1310);
    explicitGenericInvocationSuffix();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentsOrDiamondContext ------------------------------------------------------------------

BlazeParser::TypeArgumentsOrDiamondContext::TypeArgumentsOrDiamondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::TypeArgumentsOrDiamondContext::LT() {
  return getToken(BlazeParser::LT, 0);
}

tree::TerminalNode* BlazeParser::TypeArgumentsOrDiamondContext::GT() {
  return getToken(BlazeParser::GT, 0);
}

BlazeParser::TypeArgumentsContext* BlazeParser::TypeArgumentsOrDiamondContext::typeArguments() {
  return getRuleContext<BlazeParser::TypeArgumentsContext>(0);
}


size_t BlazeParser::TypeArgumentsOrDiamondContext::getRuleIndex() const {
  return BlazeParser::RuleTypeArgumentsOrDiamond;
}

void BlazeParser::TypeArgumentsOrDiamondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArgumentsOrDiamond(this);
}

void BlazeParser::TypeArgumentsOrDiamondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArgumentsOrDiamond(this);
}


antlrcpp::Any BlazeParser::TypeArgumentsOrDiamondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitTypeArgumentsOrDiamond(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::TypeArgumentsOrDiamondContext* BlazeParser::typeArgumentsOrDiamond() {
  TypeArgumentsOrDiamondContext *_localctx = _tracker.createInstance<TypeArgumentsOrDiamondContext>(_ctx, getState());
  enterRule(_localctx, 188, BlazeParser::RuleTypeArgumentsOrDiamond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1315);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1312);
      match(BlazeParser::LT);
      setState(1313);
      match(BlazeParser::GT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1314);
      typeArguments();
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

//----------------- NonWildcardTypeArgumentsOrDiamondContext ------------------------------------------------------------------

BlazeParser::NonWildcardTypeArgumentsOrDiamondContext::NonWildcardTypeArgumentsOrDiamondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::NonWildcardTypeArgumentsOrDiamondContext::LT() {
  return getToken(BlazeParser::LT, 0);
}

tree::TerminalNode* BlazeParser::NonWildcardTypeArgumentsOrDiamondContext::GT() {
  return getToken(BlazeParser::GT, 0);
}

BlazeParser::NonWildcardTypeArgumentsContext* BlazeParser::NonWildcardTypeArgumentsOrDiamondContext::nonWildcardTypeArguments() {
  return getRuleContext<BlazeParser::NonWildcardTypeArgumentsContext>(0);
}


size_t BlazeParser::NonWildcardTypeArgumentsOrDiamondContext::getRuleIndex() const {
  return BlazeParser::RuleNonWildcardTypeArgumentsOrDiamond;
}

void BlazeParser::NonWildcardTypeArgumentsOrDiamondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNonWildcardTypeArgumentsOrDiamond(this);
}

void BlazeParser::NonWildcardTypeArgumentsOrDiamondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNonWildcardTypeArgumentsOrDiamond(this);
}


antlrcpp::Any BlazeParser::NonWildcardTypeArgumentsOrDiamondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitNonWildcardTypeArgumentsOrDiamond(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::NonWildcardTypeArgumentsOrDiamondContext* BlazeParser::nonWildcardTypeArgumentsOrDiamond() {
  NonWildcardTypeArgumentsOrDiamondContext *_localctx = _tracker.createInstance<NonWildcardTypeArgumentsOrDiamondContext>(_ctx, getState());
  enterRule(_localctx, 190, BlazeParser::RuleNonWildcardTypeArgumentsOrDiamond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1320);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1317);
      match(BlazeParser::LT);
      setState(1318);
      match(BlazeParser::GT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1319);
      nonWildcardTypeArguments();
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

//----------------- NonWildcardTypeArgumentsContext ------------------------------------------------------------------

BlazeParser::NonWildcardTypeArgumentsContext::NonWildcardTypeArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::NonWildcardTypeArgumentsContext::LT() {
  return getToken(BlazeParser::LT, 0);
}

BlazeParser::TypeListContext* BlazeParser::NonWildcardTypeArgumentsContext::typeList() {
  return getRuleContext<BlazeParser::TypeListContext>(0);
}

tree::TerminalNode* BlazeParser::NonWildcardTypeArgumentsContext::GT() {
  return getToken(BlazeParser::GT, 0);
}


size_t BlazeParser::NonWildcardTypeArgumentsContext::getRuleIndex() const {
  return BlazeParser::RuleNonWildcardTypeArguments;
}

void BlazeParser::NonWildcardTypeArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNonWildcardTypeArguments(this);
}

void BlazeParser::NonWildcardTypeArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNonWildcardTypeArguments(this);
}


antlrcpp::Any BlazeParser::NonWildcardTypeArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitNonWildcardTypeArguments(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::NonWildcardTypeArgumentsContext* BlazeParser::nonWildcardTypeArguments() {
  NonWildcardTypeArgumentsContext *_localctx = _tracker.createInstance<NonWildcardTypeArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 192, BlazeParser::RuleNonWildcardTypeArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1322);
    match(BlazeParser::LT);
    setState(1323);
    typeList();
    setState(1324);
    match(BlazeParser::GT);
   
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
  enterRule(_localctx, 194, BlazeParser::RuleTypeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1326);
    typeType();
    setState(1331);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::COMMA) {
      setState(1327);
      match(BlazeParser::COMMA);
      setState(1328);
      typeType();
      setState(1333);
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

BlazeParser::AnnotationContext* BlazeParser::TypeTypeContext::annotation() {
  return getRuleContext<BlazeParser::AnnotationContext>(0);
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
  enterRule(_localctx, 196, BlazeParser::RuleTypeType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1335);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BlazeParser::AT) {
      setState(1334);
      annotation();
    }
    setState(1339);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::IDENTIFIER: {
        setState(1337);
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
        setState(1338);
        primitiveType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1345);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1341);
        match(BlazeParser::LBRACK);
        setState(1342);
        match(BlazeParser::RBRACK); 
      }
      setState(1347);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx);
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
  enterRule(_localctx, 198, BlazeParser::RulePrimitiveType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1348);
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

//----------------- TypeArgumentsContext ------------------------------------------------------------------

BlazeParser::TypeArgumentsContext::TypeArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BlazeParser::TypeArgumentsContext::LT() {
  return getToken(BlazeParser::LT, 0);
}

std::vector<BlazeParser::TypeArgumentContext *> BlazeParser::TypeArgumentsContext::typeArgument() {
  return getRuleContexts<BlazeParser::TypeArgumentContext>();
}

BlazeParser::TypeArgumentContext* BlazeParser::TypeArgumentsContext::typeArgument(size_t i) {
  return getRuleContext<BlazeParser::TypeArgumentContext>(i);
}

tree::TerminalNode* BlazeParser::TypeArgumentsContext::GT() {
  return getToken(BlazeParser::GT, 0);
}

std::vector<tree::TerminalNode *> BlazeParser::TypeArgumentsContext::COMMA() {
  return getTokens(BlazeParser::COMMA);
}

tree::TerminalNode* BlazeParser::TypeArgumentsContext::COMMA(size_t i) {
  return getToken(BlazeParser::COMMA, i);
}


size_t BlazeParser::TypeArgumentsContext::getRuleIndex() const {
  return BlazeParser::RuleTypeArguments;
}

void BlazeParser::TypeArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArguments(this);
}

void BlazeParser::TypeArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BlazeParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArguments(this);
}


antlrcpp::Any BlazeParser::TypeArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BlazeParserVisitor*>(visitor))
    return parserVisitor->visitTypeArguments(this);
  else
    return visitor->visitChildren(this);
}

BlazeParser::TypeArgumentsContext* BlazeParser::typeArguments() {
  TypeArgumentsContext *_localctx = _tracker.createInstance<TypeArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 200, BlazeParser::RuleTypeArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1350);
    match(BlazeParser::LT);
    setState(1351);
    typeArgument();
    setState(1356);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BlazeParser::COMMA) {
      setState(1352);
      match(BlazeParser::COMMA);
      setState(1353);
      typeArgument();
      setState(1358);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1359);
    match(BlazeParser::GT);
   
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
  enterRule(_localctx, 202, BlazeParser::RuleSuperSuffix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1367);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(1361);
        arguments();
        break;
      }

      case BlazeParser::DOT: {
        enterOuterAlt(_localctx, 2);
        setState(1362);
        match(BlazeParser::DOT);
        setState(1363);
        match(BlazeParser::IDENTIFIER);
        setState(1365);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx)) {
        case 1: {
          setState(1364);
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
  enterRule(_localctx, 204, BlazeParser::RuleExplicitGenericInvocationSuffix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1373);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BlazeParser::SUPER: {
        enterOuterAlt(_localctx, 1);
        setState(1369);
        match(BlazeParser::SUPER);
        setState(1370);
        superSuffix();
        break;
      }

      case BlazeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(1371);
        match(BlazeParser::IDENTIFIER);
        setState(1372);
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
  enterRule(_localctx, 206, BlazeParser::RuleArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1375);
    match(BlazeParser::LPAREN);
    setState(1377);
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
      ((1ULL << (_la - 72)) & ((1ULL << (BlazeParser::LT - 72))
      | (1ULL << (BlazeParser::BANG - 72))
      | (1ULL << (BlazeParser::TILDE - 72))
      | (1ULL << (BlazeParser::INC - 72))
      | (1ULL << (BlazeParser::DEC - 72))
      | (1ULL << (BlazeParser::ADD - 72))
      | (1ULL << (BlazeParser::SUB - 72))
      | (1ULL << (BlazeParser::AT - 72))
      | (1ULL << (BlazeParser::IDENTIFIER - 72)))) != 0)) {
      setState(1376);
      expressionList();
    }
    setState(1379);
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
    case 82: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BlazeParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 17);
    case 1: return precpred(_ctx, 16);
    case 2: return precpred(_ctx, 15);
    case 3: return precpred(_ctx, 14);
    case 4: return precpred(_ctx, 12);
    case 5: return precpred(_ctx, 11);
    case 6: return precpred(_ctx, 10);
    case 7: return precpred(_ctx, 9);
    case 8: return precpred(_ctx, 8);
    case 9: return precpred(_ctx, 7);
    case 10: return precpred(_ctx, 6);
    case 11: return precpred(_ctx, 5);
    case 12: return precpred(_ctx, 25);
    case 13: return precpred(_ctx, 24);
    case 14: return precpred(_ctx, 20);
    case 15: return precpred(_ctx, 13);
    case 16: return precpred(_ctx, 3);

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
  "typeParameters", "typeParameter", "typeBound", "enumDeclaration", "enumConstants", 
  "enumConstant", "enumBodyDeclarations", "interfaceDeclaration", "classBody", 
  "interfaceBody", "classBodyDeclaration", "memberDeclaration", "methodDeclaration", 
  "methodBody", "typeTypeOrVoid", "genericMethodDeclaration", "genericConstructorDeclaration", 
  "constructorDeclaration", "fieldDeclaration", "interfaceBodyDeclaration", 
  "interfaceMemberDeclaration", "constDeclaration", "constantDeclarator", 
  "interfaceMethodDeclaration", "interfaceMethodModifier", "genericInterfaceMethodDeclaration", 
  "variableDeclarators", "variableDeclarator", "variableDeclaratorId", "variableInitializer", 
  "arrayInitializer", "classOrInterfaceType", "typeArgument", "qualifiedNameList", 
  "formalParameters", "formalParameterList", "formalParameter", "lastFormalParameter", 
  "qualifiedName", "literal", "integerLiteral", "floatLiteral", "annotation", 
  "elementValuePairs", "elementValuePair", "elementValue", "elementValueArrayInitializer", 
  "annotationTypeDeclaration", "annotationTypeBody", "annotationTypeElementDeclaration", 
  "annotationTypeElementRest", "annotationMethodOrConstantRest", "annotationMethodRest", 
  "annotationConstantRest", "defaultValue", "block", "blockStatement", "localVariableDeclaration", 
  "localTypeDeclaration", "statement", "catchClause", "catchType", "finallyBlock", 
  "resourceSpecification", "resources", "resource", "switchBlockStatementGroup", 
  "switchLabel", "forControl", "forInit", "enhancedForControl", "parExpression", 
  "expressionList", "methodCall", "expression", "lambdaExpression", "lambdaParameters", 
  "lambdaBody", "primary", "classType", "creator", "createdName", "innerCreator", 
  "arrayCreatorRest", "classCreatorRest", "explicitGenericInvocation", "typeArgumentsOrDiamond", 
  "nonWildcardTypeArgumentsOrDiamond", "nonWildcardTypeArguments", "typeList", 
  "typeType", "primitiveType", "typeArguments", "superSuffix", "explicitGenericInvocationSuffix", 
  "arguments"
};

std::vector<std::string> BlazeParser::_literalNames = {
  "", "'abstract'", "'assert'", "'boolean'", "'break'", "'byte'", "'case'", 
  "'catch'", "'char'", "'class'", "'const'", "'continue'", "'default'", 
  "'do'", "'double'", "'else'", "'enum'", "'extends'", "'final'", "'finally'", 
  "'float'", "'for'", "'if'", "'goto'", "'implements'", "'import'", "'instanceof'", 
  "'int'", "'interface'", "'long'", "'native'", "'new'", "'package'", "'private'", 
  "'protected'", "'public'", "'return'", "'short'", "'static'", "'strictfp'", 
  "'super'", "'switch'", "'synchronized'", "'this'", "'throw'", "'throws'", 
  "'transient'", "'try'", "'void'", "'volatile'", "'while'", "", "", "", 
  "", "", "", "", "", "", "'null'", "'('", "')'", "'{'", "'}'", "'['", "']'", 
  "';'", "','", "'.'", "'='", "'>'", "'<'", "'!'", "'~'", "'?'", "':'", 
  "'=='", "'<='", "'>='", "'!='", "'&&'", "'||'", "'++'", "'--'", "'+'", 
  "'-'", "'*'", "'/'", "'&'", "'|'", "'^'", "'%'", "'+='", "'-='", "'*='", 
  "'/='", "'&='", "'|='", "'^='", "'%='", "'<<='", "'>>='", "'>>>='", "'->'", 
  "'::'", "'@'", "'...'"
};

std::vector<std::string> BlazeParser::_symbolicNames = {
  "", "ABSTRACT", "ASSERT", "BOOLEAN", "BREAK", "BYTE", "CASE", "CATCH", 
  "CHAR", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", 
  "ENUM", "EXTENDS", "FINAL", "FINALLY", "FLOAT", "FOR", "IF", "GOTO", "IMPLEMENTS", 
  "IMPORT", "INSTANCEOF", "INT", "INTERFACE", "LONG", "NATIVE", "NEW", "PACKAGE", 
  "PRIVATE", "PROTECTED", "PUBLIC", "RETURN", "SHORT", "STATIC", "STRICTFP", 
  "SUPER", "SWITCH", "SYNCHRONIZED", "THIS", "THROW", "THROWS", "TRANSIENT", 
  "TRY", "VOID", "VOLATILE", "WHILE", "DECIMAL_LITERAL", "HEX_LITERAL", 
  "OCT_LITERAL", "BINARY_LITERAL", "FLOAT_LITERAL", "HEX_FLOAT_LITERAL", 
  "BOOL_LITERAL", "CHAR_LITERAL", "STRING_LITERAL", "NULL_LITERAL", "LPAREN", 
  "RPAREN", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMI", "COMMA", "DOT", 
  "ASSIGN", "GT", "LT", "BANG", "TILDE", "QUESTION", "COLON", "EQUAL", "LE", 
  "GE", "NOTEQUAL", "AND", "OR", "INC", "DEC", "ADD", "SUB", "MUL", "DIV", 
  "BITAND", "BITOR", "CARET", "MOD", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", 
  "DIV_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "MOD_ASSIGN", "LSHIFT_ASSIGN", 
  "RSHIFT_ASSIGN", "URSHIFT_ASSIGN", "ARROW", "COLONCOLON", "AT", "ELLIPSIS", 
  "WS", "COMMENT", "LINE_COMMENT", "IDENTIFIER"
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
    0x3, 0x71, 0x568, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x3, 0x2, 0x5, 0x2, 0xd4, 0xa, 0x2, 0x3, 0x2, 0x7, 0x2, 0xd7, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0xda, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0xdd, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0xe0, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 
    0x3, 0xe5, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0xe8, 0xb, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xf0, 0xa, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xf5, 0xa, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x7, 0x5, 0xfa, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xfd, 0xb, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x103, 0xa, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x106, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0x10d, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x117, 0xa, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x11b, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0x120, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x124, 
    0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x128, 0xa, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x130, 0xa, 0xa, 
    0xc, 0xa, 0xe, 0xa, 0x133, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x7, 
    0xb, 0x138, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x13b, 0xb, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x140, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x7, 0xc, 0x145, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x148, 0xb, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x14e, 0xa, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x5, 0xd, 0x152, 0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0x155, 
    0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0x158, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x15f, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 
    0x162, 0xb, 0xe, 0x3, 0xf, 0x7, 0xf, 0x165, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0x168, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x16c, 0xa, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0x16f, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 
    0x173, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x176, 0xb, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x17b, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x17f, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x7, 0x12, 0x185, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x188, 0xb, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x18e, 0xa, 0x13, 
    0xc, 0x13, 0xe, 0x13, 0x191, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0x197, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 
    0x19b, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x19e, 0xb, 0x14, 0x3, 0x14, 
    0x5, 0x14, 0x1a1, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x1ac, 
    0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 
    0x16, 0x1b3, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x1b6, 0xb, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x5, 0x16, 0x1ba, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x1c0, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x1c4, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 
    0x1b, 0x1d0, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x7, 0x1d, 0x1d9, 0xa, 0x1d, 0xc, 0x1d, 
    0xe, 0x1d, 0x1dc, 0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x1e0, 
    0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1e9, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x1ef, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 
    0x1f2, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x7, 0x20, 0x1f9, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x1fc, 0xb, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x7, 0x21, 0x202, 0xa, 0x21, 
    0xc, 0x21, 0xe, 0x21, 0x205, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x7, 0x21, 0x20a, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x20d, 0xb, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x211, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x217, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 
    0x21a, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x21e, 0xa, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x5, 0x22, 0x228, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x230, 0xa, 0x24, 
    0xc, 0x24, 0xe, 0x24, 0x233, 0xb, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x5, 0x25, 0x238, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 
    0x23d, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x240, 0xb, 0x26, 0x3, 0x27, 
    0x3, 0x27, 0x5, 0x27, 0x244, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x7, 0x28, 0x24a, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x24d, 
    0xb, 0x28, 0x3, 0x28, 0x5, 0x28, 0x250, 0xa, 0x28, 0x5, 0x28, 0x252, 
    0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x258, 
    0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x25d, 0xa, 0x29, 
    0x7, 0x29, 0x25f, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x262, 0xb, 0x29, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x268, 0xa, 0x2a, 
    0x5, 0x2a, 0x26a, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 
    0x26f, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x272, 0xb, 0x2b, 0x3, 0x2c, 
    0x3, 0x2c, 0x5, 0x2c, 0x276, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x7, 0x2d, 0x27d, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 
    0x280, 0xb, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x284, 0xa, 0x2d, 
    0x3, 0x2d, 0x5, 0x2d, 0x287, 0xa, 0x2d, 0x3, 0x2e, 0x7, 0x2e, 0x28a, 
    0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x28d, 0xb, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2f, 0x7, 0x2f, 0x293, 0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 
    0x296, 0xb, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x7, 0x30, 0x29f, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 
    0x2a2, 0xb, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x5, 0x31, 0x2aa, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 
    0x34, 0x2b5, 0xa, 0x34, 0x3, 0x34, 0x5, 0x34, 0x2b8, 0xa, 0x34, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 0x2bd, 0xa, 0x35, 0xc, 0x35, 
    0xe, 0x35, 0x2c0, 0xb, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x2c9, 0xa, 0x37, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 0x2cf, 0xa, 0x38, 0xc, 0x38, 
    0xe, 0x38, 0x2d2, 0xb, 0x38, 0x5, 0x38, 0x2d4, 0xa, 0x38, 0x3, 0x38, 
    0x5, 0x38, 0x2d7, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x7, 0x3a, 0x2e2, 
    0xa, 0x3a, 0xc, 0x3a, 0xe, 0x3a, 0x2e5, 0xb, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3b, 0x7, 0x3b, 0x2ea, 0xa, 0x3b, 0xc, 0x3b, 0xe, 0x3b, 0x2ed, 
    0xb, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x2f1, 0xa, 0x3b, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x2f9, 
    0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x2fd, 0xa, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x5, 0x3c, 0x301, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 
    0x305, 0xa, 0x3c, 0x5, 0x3c, 0x307, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 
    0x5, 0x3d, 0x30b, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x5, 0x3e, 0x311, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x31a, 0xa, 0x41, 0xc, 0x41, 
    0xe, 0x41, 0x31d, 0xb, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x326, 0xa, 0x42, 0x3, 0x43, 
    0x7, 0x43, 0x329, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 0x32c, 0xb, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x7, 0x44, 0x332, 0xa, 0x44, 
    0xc, 0x44, 0xe, 0x44, 0x335, 0xb, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 
    0x339, 0xa, 0x44, 0x3, 0x44, 0x5, 0x44, 0x33c, 0xa, 0x44, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x343, 0xa, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x5, 0x45, 0x34c, 0xa, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x6, 0x45, 0x361, 0xa, 0x45, 0xd, 0x45, 
    0xe, 0x45, 0x362, 0x3, 0x45, 0x5, 0x45, 0x366, 0xa, 0x45, 0x3, 0x45, 
    0x5, 0x45, 0x369, 0xa, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x7, 0x45, 0x36f, 0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 0x372, 0xb, 0x45, 
    0x3, 0x45, 0x5, 0x45, 0x375, 0xa, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x7, 0x45, 0x37b, 0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 0x37e, 
    0xb, 0x45, 0x3, 0x45, 0x7, 0x45, 0x381, 0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 
    0x384, 0xb, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x38e, 0xa, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 
    0x45, 0x397, 0xa, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 
    0x39c, 0xa, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x3a6, 0xa, 0x45, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x7, 0x46, 0x3ab, 0xa, 0x46, 0xc, 0x46, 0xe, 0x46, 
    0x3ae, 0xb, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x7, 0x47, 0x3b8, 0xa, 0x47, 0xc, 0x47, 
    0xe, 0x47, 0x3bb, 0xb, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 
    0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x3c3, 0xa, 0x49, 0x3, 0x49, 0x3, 0x49, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x7, 0x4a, 0x3ca, 0xa, 0x4a, 0xc, 0x4a, 
    0xe, 0x4a, 0x3cd, 0xb, 0x4a, 0x3, 0x4b, 0x7, 0x4b, 0x3d0, 0xa, 0x4b, 
    0xc, 0x4b, 0xe, 0x4b, 0x3d3, 0xb, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x6, 0x4c, 0x3db, 0xa, 0x4c, 0xd, 0x4c, 
    0xe, 0x4c, 0x3dc, 0x3, 0x4c, 0x6, 0x4c, 0x3e0, 0xa, 0x4c, 0xd, 0x4c, 
    0xe, 0x4c, 0x3e1, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x3e7, 
    0xa, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x3ec, 0xa, 0x4d, 
    0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x3f0, 0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x5, 0x4e, 0x3f4, 0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x3f8, 
    0xa, 0x4e, 0x5, 0x4e, 0x3fa, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 
    0x3fe, 0xa, 0x4f, 0x3, 0x50, 0x7, 0x50, 0x401, 0xa, 0x50, 0xc, 0x50, 
    0xe, 0x50, 0x404, 0xb, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
    0x3, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 
    0x52, 0x3, 0x52, 0x7, 0x52, 0x412, 0xa, 0x52, 0xc, 0x52, 0xe, 0x52, 
    0x415, 0xb, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x41a, 
    0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x420, 
    0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x426, 
    0xa, 0x53, 0x3, 0x53, 0x5, 0x53, 0x429, 0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x43d, 0xa, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x5, 0x54, 0x441, 0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x5, 0x54, 0x446, 0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x44a, 
    0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x45a, 0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x482, 0xa, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x488, 0xa, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x5, 0x54, 0x497, 0xa, 0x54, 0x3, 0x54, 0x7, 0x54, 0x49a, 0xa, 0x54, 
    0xc, 0x54, 0xe, 0x54, 0x49d, 0xb, 0x54, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 
    0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x4a6, 0xa, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x7, 0x56, 0x4ad, 
    0xa, 0x56, 0xc, 0x56, 0xe, 0x56, 0x4b0, 0xb, 0x56, 0x3, 0x56, 0x5, 0x56, 
    0x4b3, 0xa, 0x56, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x4b7, 0xa, 0x57, 
    0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
    0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 
    0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x4c9, 0xa, 0x58, 0x5, 0x58, 
    0x4cb, 0xa, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x4d0, 
    0xa, 0x59, 0x3, 0x59, 0x7, 0x59, 0x4d3, 0xa, 0x59, 0xc, 0x59, 0xe, 0x59, 
    0x4d6, 0xb, 0x59, 0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x4da, 0xa, 0x59, 
    0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
    0x5a, 0x5, 0x5a, 0x4e3, 0xa, 0x5a, 0x5, 0x5a, 0x4e5, 0xa, 0x5a, 0x3, 
    0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x4e9, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 
    0x3, 0x5b, 0x5, 0x5b, 0x4ee, 0xa, 0x5b, 0x7, 0x5b, 0x4f0, 0xa, 0x5b, 
    0xc, 0x5b, 0xe, 0x5b, 0x4f3, 0xb, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x4f6, 
    0xa, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x4fa, 0xa, 0x5c, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x7, 0x5d, 0x502, 
    0xa, 0x5d, 0xc, 0x5d, 0xe, 0x5d, 0x505, 0xb, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
    0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x7, 0x5d, 0x50e, 
    0xa, 0x5d, 0xc, 0x5d, 0xe, 0x5d, 0x511, 0xb, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
    0x7, 0x5d, 0x515, 0xa, 0x5d, 0xc, 0x5d, 0xe, 0x5d, 0x518, 0xb, 0x5d, 
    0x5, 0x5d, 0x51a, 0xa, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x51e, 
    0xa, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 
    0x60, 0x5, 0x60, 0x526, 0xa, 0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 
    0x5, 0x61, 0x52b, 0xa, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x7, 0x63, 0x534, 0xa, 0x63, 0xc, 0x63, 
    0xe, 0x63, 0x537, 0xb, 0x63, 0x3, 0x64, 0x5, 0x64, 0x53a, 0xa, 0x64, 
    0x3, 0x64, 0x3, 0x64, 0x5, 0x64, 0x53e, 0xa, 0x64, 0x3, 0x64, 0x3, 0x64, 
    0x7, 0x64, 0x542, 0xa, 0x64, 0xc, 0x64, 0xe, 0x64, 0x545, 0xb, 0x64, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x7, 
    0x66, 0x54d, 0xa, 0x66, 0xc, 0x66, 0xe, 0x66, 0x550, 0xb, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x5, 0x67, 
    0x558, 0xa, 0x67, 0x5, 0x67, 0x55a, 0xa, 0x67, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x5, 0x68, 0x560, 0xa, 0x68, 0x3, 0x69, 0x3, 0x69, 
    0x5, 0x69, 0x564, 0xa, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x2, 0x3, 
    0xa6, 0x6a, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
    0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 
    0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 
    0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 
    0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 
    0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 
    0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 
    0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0x2, 0xe, 0x4, 
    0x2, 0x13, 0x13, 0x2a, 0x2a, 0x3, 0x2, 0x35, 0x38, 0x3, 0x2, 0x39, 0x3a, 
    0x3, 0x2, 0x55, 0x58, 0x3, 0x2, 0x4b, 0x4c, 0x4, 0x2, 0x59, 0x5a, 0x5e, 
    0x5e, 0x3, 0x2, 0x57, 0x58, 0x4, 0x2, 0x49, 0x4a, 0x50, 0x51, 0x4, 0x2, 
    0x4f, 0x4f, 0x52, 0x52, 0x4, 0x2, 0x48, 0x48, 0x5f, 0x69, 0x3, 0x2, 
    0x55, 0x56, 0xa, 0x2, 0x5, 0x5, 0x7, 0x7, 0xa, 0xa, 0x10, 0x10, 0x16, 
    0x16, 0x1d, 0x1d, 0x1f, 0x1f, 0x27, 0x27, 0x2, 0x601, 0x2, 0xd3, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x6, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x105, 0x3, 0x2, 0x2, 0x2, 0xa, 0x10c, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x116, 0x3, 0x2, 0x2, 0x2, 0xe, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x11c, 0x3, 0x2, 0x2, 0x2, 0x12, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x14, 0x139, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x141, 0x3, 0x2, 0x2, 0x2, 0x18, 0x149, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x166, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x170, 0x3, 0x2, 0x2, 0x2, 0x20, 0x177, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x182, 0x3, 0x2, 0x2, 0x2, 0x24, 0x18b, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x1ad, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1c3, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1c8, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1d3, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1e8, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1f5, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x203, 0x3, 0x2, 0x2, 0x2, 0x42, 0x227, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x229, 0x3, 0x2, 0x2, 0x2, 0x46, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x48, 0x234, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x239, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x243, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x245, 0x3, 0x2, 0x2, 0x2, 0x50, 0x255, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x269, 0x3, 0x2, 0x2, 0x2, 0x54, 0x26b, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x273, 0x3, 0x2, 0x2, 0x2, 0x58, 0x286, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x294, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x29b, 0x3, 0x2, 0x2, 0x2, 0x60, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x62, 0x2ab, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x66, 0x2af, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x2c1, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2ca, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2df, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x76, 0x306, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x30a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x312, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x314, 0x3, 0x2, 0x2, 0x2, 0x80, 0x317, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x325, 0x3, 0x2, 0x2, 0x2, 0x84, 0x32a, 0x3, 0x2, 
    0x2, 0x2, 0x86, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x88, 0x3a5, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x3a7, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x3b4, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x90, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x3c6, 0x3, 0x2, 0x2, 0x2, 0x94, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x96, 0x3da, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x3f9, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x402, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0x40a, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x40e, 0x3, 0x2, 0x2, 
    0x2, 0xa4, 0x428, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x449, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0x49e, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0x4b6, 0x3, 0x2, 0x2, 0x2, 0xae, 0x4ca, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x4cf, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0x4e4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x4f5, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x4fd, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0x51b, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x51f, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0x525, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x52a, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0x52c, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x530, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0x539, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x546, 0x3, 0x2, 0x2, 0x2, 0xca, 0x548, 
    0x3, 0x2, 0x2, 0x2, 0xcc, 0x559, 0x3, 0x2, 0x2, 0x2, 0xce, 0x55f, 0x3, 
    0x2, 0x2, 0x2, 0xd0, 0x561, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd4, 0x5, 0x4, 
    0x3, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 0x5, 0x6, 0x4, 0x2, 
    0xd6, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xde, 
    0x3, 0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdd, 0x5, 
    0x8, 0x5, 0x2, 0xdc, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0xdf, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 
    0xe1, 0xe2, 0x7, 0x2, 0x2, 0x3, 0xe2, 0x3, 0x3, 0x2, 0x2, 0x2, 0xe3, 
    0xe5, 0x5, 0x66, 0x34, 0x2, 0xe4, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe8, 
    0x3, 0x2, 0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 
    0x2, 0x2, 0x2, 0xe7, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 
    0x2, 0x2, 0xe9, 0xea, 0x7, 0x22, 0x2, 0x2, 0xea, 0xeb, 0x5, 0x5e, 0x30, 
    0x2, 0xeb, 0xec, 0x7, 0x45, 0x2, 0x2, 0xec, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0xed, 0xef, 0x7, 0x1b, 0x2, 0x2, 0xee, 0xf0, 0x7, 0x28, 0x2, 0x2, 0xef, 
    0xee, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 
    0x3, 0x2, 0x2, 0x2, 0xf1, 0xf4, 0x5, 0x5e, 0x30, 0x2, 0xf2, 0xf3, 0x7, 
    0x47, 0x2, 0x2, 0xf3, 0xf5, 0x7, 0x59, 0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 
    0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x3, 0x2, 0x2, 
    0x2, 0xf6, 0xf7, 0x7, 0x45, 0x2, 0x2, 0xf7, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0xf8, 0xfa, 0x5, 0xc, 0x7, 0x2, 0xf9, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfa, 
    0xfd, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 
    0x3, 0x2, 0x2, 0x2, 0xfc, 0x102, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfb, 0x3, 
    0x2, 0x2, 0x2, 0xfe, 0x103, 0x5, 0x10, 0x9, 0x2, 0xff, 0x103, 0x5, 0x18, 
    0xd, 0x2, 0x100, 0x103, 0x5, 0x20, 0x11, 0x2, 0x101, 0x103, 0x5, 0x70, 
    0x39, 0x2, 0x102, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x102, 0xff, 0x3, 0x2, 0x2, 
    0x2, 0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 0x102, 0x101, 0x3, 0x2, 0x2, 
    0x2, 0x103, 0x106, 0x3, 0x2, 0x2, 0x2, 0x104, 0x106, 0x7, 0x45, 0x2, 
    0x2, 0x105, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x105, 0x104, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x9, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10d, 0x5, 0xc, 0x7, 0x2, 0x108, 
    0x10d, 0x7, 0x20, 0x2, 0x2, 0x109, 0x10d, 0x7, 0x2c, 0x2, 0x2, 0x10a, 
    0x10d, 0x7, 0x30, 0x2, 0x2, 0x10b, 0x10d, 0x7, 0x33, 0x2, 0x2, 0x10c, 
    0x107, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10c, 
    0x109, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10c, 
    0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x117, 
    0x5, 0x66, 0x34, 0x2, 0x10f, 0x117, 0x7, 0x25, 0x2, 0x2, 0x110, 0x117, 
    0x7, 0x24, 0x2, 0x2, 0x111, 0x117, 0x7, 0x23, 0x2, 0x2, 0x112, 0x117, 
    0x7, 0x28, 0x2, 0x2, 0x113, 0x117, 0x7, 0x3, 0x2, 0x2, 0x114, 0x117, 
    0x7, 0x14, 0x2, 0x2, 0x115, 0x117, 0x7, 0x29, 0x2, 0x2, 0x116, 0x10e, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x116, 0x110, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x111, 0x3, 0x2, 0x2, 0x2, 0x116, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x113, 0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x118, 0x11b, 0x7, 0x14, 0x2, 0x2, 0x119, 0x11b, 0x5, 
    0x66, 0x34, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x11b, 0xf, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x7, 0xb, 
    0x2, 0x2, 0x11d, 0x11f, 0x7, 0x71, 0x2, 0x2, 0x11e, 0x120, 0x5, 0x12, 
    0xa, 0x2, 0x11f, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 
    0x2, 0x2, 0x120, 0x123, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x7, 0x13, 
    0x2, 0x2, 0x122, 0x124, 0x5, 0xc6, 0x64, 0x2, 0x123, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 0x2, 0x2, 0x124, 0x127, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x126, 0x7, 0x1a, 0x2, 0x2, 0x126, 0x128, 0x5, 0xc4, 
    0x63, 0x2, 0x127, 0x125, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x5, 0x22, 
    0x12, 0x2, 0x12a, 0x11, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x7, 0x4a, 
    0x2, 0x2, 0x12c, 0x131, 0x5, 0x14, 0xb, 0x2, 0x12d, 0x12e, 0x7, 0x46, 
    0x2, 0x2, 0x12e, 0x130, 0x5, 0x14, 0xb, 0x2, 0x12f, 0x12d, 0x3, 0x2, 
    0x2, 0x2, 0x130, 0x133, 0x3, 0x2, 0x2, 0x2, 0x131, 0x12f, 0x3, 0x2, 
    0x2, 0x2, 0x131, 0x132, 0x3, 0x2, 0x2, 0x2, 0x132, 0x134, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x131, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x7, 0x49, 
    0x2, 0x2, 0x135, 0x13, 0x3, 0x2, 0x2, 0x2, 0x136, 0x138, 0x5, 0x66, 
    0x34, 0x2, 0x137, 0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x139, 0x137, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 0x2, 
    0x2, 0x2, 0x13a, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x13c, 0x13f, 0x7, 0x71, 0x2, 0x2, 0x13d, 0x13e, 0x7, 0x13, 
    0x2, 0x2, 0x13e, 0x140, 0x5, 0x16, 0xc, 0x2, 0x13f, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x141, 0x146, 0x5, 0xc6, 0x64, 0x2, 0x142, 0x143, 0x7, 0x5b, 0x2, 
    0x2, 0x143, 0x145, 0x5, 0xc6, 0x64, 0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 
    0x2, 0x145, 0x148, 0x3, 0x2, 0x2, 0x2, 0x146, 0x144, 0x3, 0x2, 0x2, 
    0x2, 0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x7, 0x12, 0x2, 0x2, 
    0x14a, 0x14d, 0x7, 0x71, 0x2, 0x2, 0x14b, 0x14c, 0x7, 0x1a, 0x2, 0x2, 
    0x14c, 0x14e, 0x5, 0xc4, 0x63, 0x2, 0x14d, 0x14b, 0x3, 0x2, 0x2, 0x2, 
    0x14d, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 0x2, 0x2, 
    0x14f, 0x151, 0x7, 0x41, 0x2, 0x2, 0x150, 0x152, 0x5, 0x1a, 0xe, 0x2, 
    0x151, 0x150, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 0x2, 0x2, 
    0x152, 0x154, 0x3, 0x2, 0x2, 0x2, 0x153, 0x155, 0x7, 0x46, 0x2, 0x2, 
    0x154, 0x153, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x3, 0x2, 0x2, 0x2, 
    0x155, 0x157, 0x3, 0x2, 0x2, 0x2, 0x156, 0x158, 0x5, 0x1e, 0x10, 0x2, 
    0x157, 0x156, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 
    0x158, 0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x7, 0x42, 0x2, 0x2, 
    0x15a, 0x19, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x160, 0x5, 0x1c, 0xf, 0x2, 
    0x15c, 0x15d, 0x7, 0x46, 0x2, 0x2, 0x15d, 0x15f, 0x5, 0x1c, 0xf, 0x2, 
    0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x162, 0x3, 0x2, 0x2, 0x2, 
    0x160, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 
    0x161, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 0x2, 0x163, 
    0x165, 0x5, 0x66, 0x34, 0x2, 0x164, 0x163, 0x3, 0x2, 0x2, 0x2, 0x165, 
    0x168, 0x3, 0x2, 0x2, 0x2, 0x166, 0x164, 0x3, 0x2, 0x2, 0x2, 0x166, 
    0x167, 0x3, 0x2, 0x2, 0x2, 0x167, 0x169, 0x3, 0x2, 0x2, 0x2, 0x168, 
    0x166, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16b, 0x7, 0x71, 0x2, 0x2, 0x16a, 
    0x16c, 0x5, 0xd0, 0x69, 0x2, 0x16b, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x16c, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x16d, 
    0x16f, 0x5, 0x22, 0x12, 0x2, 0x16e, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16e, 
    0x16f, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x170, 0x174, 
    0x7, 0x45, 0x2, 0x2, 0x171, 0x173, 0x5, 0x26, 0x14, 0x2, 0x172, 0x171, 
    0x3, 0x2, 0x2, 0x2, 0x173, 0x176, 0x3, 0x2, 0x2, 0x2, 0x174, 0x172, 
    0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x3, 0x2, 0x2, 0x2, 0x175, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x7, 
    0x1e, 0x2, 0x2, 0x178, 0x17a, 0x7, 0x71, 0x2, 0x2, 0x179, 0x17b, 0x5, 
    0x12, 0xa, 0x2, 0x17a, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x3, 
    0x2, 0x2, 0x2, 0x17b, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x7, 
    0x13, 0x2, 0x2, 0x17d, 0x17f, 0x5, 0xc4, 0x63, 0x2, 0x17e, 0x17c, 0x3, 
    0x2, 0x2, 0x2, 0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 
    0x2, 0x2, 0x2, 0x180, 0x181, 0x5, 0x24, 0x13, 0x2, 0x181, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x182, 0x186, 0x7, 0x41, 0x2, 0x2, 0x183, 0x185, 0x5, 
    0x26, 0x14, 0x2, 0x184, 0x183, 0x3, 0x2, 0x2, 0x2, 0x185, 0x188, 0x3, 
    0x2, 0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 
    0x2, 0x2, 0x2, 0x187, 0x189, 0x3, 0x2, 0x2, 0x2, 0x188, 0x186, 0x3, 
    0x2, 0x2, 0x2, 0x189, 0x18a, 0x7, 0x42, 0x2, 0x2, 0x18a, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x18b, 0x18f, 0x7, 0x41, 0x2, 0x2, 0x18c, 0x18e, 0x5, 
    0x38, 0x1d, 0x2, 0x18d, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x191, 0x3, 
    0x2, 0x2, 0x2, 0x18f, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x3, 
    0x2, 0x2, 0x2, 0x190, 0x192, 0x3, 0x2, 0x2, 0x2, 0x191, 0x18f, 0x3, 
    0x2, 0x2, 0x2, 0x192, 0x193, 0x7, 0x42, 0x2, 0x2, 0x193, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x194, 0x1a1, 0x7, 0x45, 0x2, 0x2, 0x195, 0x197, 0x7, 
    0x28, 0x2, 0x2, 0x196, 0x195, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x3, 
    0x2, 0x2, 0x2, 0x197, 0x198, 0x3, 0x2, 0x2, 0x2, 0x198, 0x1a1, 0x5, 
    0x80, 0x41, 0x2, 0x199, 0x19b, 0x5, 0xa, 0x6, 0x2, 0x19a, 0x199, 0x3, 
    0x2, 0x2, 0x2, 0x19b, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19a, 0x3, 
    0x2, 0x2, 0x2, 0x19c, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19f, 0x3, 
    0x2, 0x2, 0x2, 0x19e, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a1, 0x5, 
    0x28, 0x15, 0x2, 0x1a0, 0x194, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x196, 0x3, 
    0x2, 0x2, 0x2, 0x1a0, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x1a2, 0x1ac, 0x5, 0x2a, 0x16, 0x2, 0x1a3, 0x1ac, 0x5, 0x30, 
    0x19, 0x2, 0x1a4, 0x1ac, 0x5, 0x36, 0x1c, 0x2, 0x1a5, 0x1ac, 0x5, 0x34, 
    0x1b, 0x2, 0x1a6, 0x1ac, 0x5, 0x32, 0x1a, 0x2, 0x1a7, 0x1ac, 0x5, 0x20, 
    0x11, 0x2, 0x1a8, 0x1ac, 0x5, 0x70, 0x39, 0x2, 0x1a9, 0x1ac, 0x5, 0x10, 
    0x9, 0x2, 0x1aa, 0x1ac, 0x5, 0x18, 0xd, 0x2, 0x1ab, 0x1a2, 0x3, 0x2, 
    0x2, 0x2, 0x1ab, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1a4, 0x3, 0x2, 
    0x2, 0x2, 0x1ab, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1a6, 0x3, 0x2, 
    0x2, 0x2, 0x1ab, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1a8, 0x3, 0x2, 
    0x2, 0x2, 0x1ab, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1aa, 0x3, 0x2, 
    0x2, 0x2, 0x1ac, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x5, 0x2e, 
    0x18, 0x2, 0x1ae, 0x1af, 0x7, 0x71, 0x2, 0x2, 0x1af, 0x1b4, 0x5, 0x56, 
    0x2c, 0x2, 0x1b0, 0x1b1, 0x7, 0x43, 0x2, 0x2, 0x1b1, 0x1b3, 0x7, 0x44, 
    0x2, 0x2, 0x1b2, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b6, 0x3, 0x2, 
    0x2, 0x2, 0x1b4, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x3, 0x2, 
    0x2, 0x2, 0x1b5, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b4, 0x3, 0x2, 
    0x2, 0x2, 0x1b7, 0x1b8, 0x7, 0x2f, 0x2, 0x2, 0x1b8, 0x1ba, 0x5, 0x54, 
    0x2b, 0x2, 0x1b9, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 
    0x2, 0x2, 0x1ba, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x5, 0x2c, 
    0x17, 0x2, 0x1bc, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1c0, 0x5, 0x80, 
    0x41, 0x2, 0x1be, 0x1c0, 0x7, 0x45, 0x2, 0x2, 0x1bf, 0x1bd, 0x3, 0x2, 
    0x2, 0x2, 0x1bf, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x1c1, 0x1c4, 0x5, 0xc6, 0x64, 0x2, 0x1c2, 0x1c4, 0x7, 0x32, 0x2, 
    0x2, 0x1c3, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c2, 0x3, 0x2, 0x2, 
    0x2, 0x1c4, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x5, 0x12, 0xa, 
    0x2, 0x1c6, 0x1c7, 0x5, 0x2a, 0x16, 0x2, 0x1c7, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x1c8, 0x1c9, 0x5, 0x12, 0xa, 0x2, 0x1c9, 0x1ca, 0x5, 0x34, 0x1b, 
    0x2, 0x1ca, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x7, 0x71, 0x2, 
    0x2, 0x1cc, 0x1cf, 0x5, 0x56, 0x2c, 0x2, 0x1cd, 0x1ce, 0x7, 0x2f, 0x2, 
    0x2, 0x1ce, 0x1d0, 0x5, 0x54, 0x2b, 0x2, 0x1cf, 0x1cd, 0x3, 0x2, 0x2, 
    0x2, 0x1cf, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x3, 0x2, 0x2, 
    0x2, 0x1d1, 0x1d2, 0x5, 0x80, 0x41, 0x2, 0x1d2, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x1d3, 0x1d4, 0x5, 0xc6, 0x64, 0x2, 0x1d4, 0x1d5, 0x5, 0x46, 0x24, 
    0x2, 0x1d5, 0x1d6, 0x7, 0x45, 0x2, 0x2, 0x1d6, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x1d7, 0x1d9, 0x5, 0xa, 0x6, 0x2, 0x1d8, 0x1d7, 0x3, 0x2, 0x2, 
    0x2, 0x1d9, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1d8, 0x3, 0x2, 0x2, 
    0x2, 0x1da, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dd, 0x3, 0x2, 0x2, 
    0x2, 0x1dc, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1e0, 0x5, 0x3a, 0x1e, 
    0x2, 0x1de, 0x1e0, 0x7, 0x45, 0x2, 0x2, 0x1df, 0x1da, 0x3, 0x2, 0x2, 
    0x2, 0x1df, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x1e1, 0x1e9, 0x5, 0x3c, 0x1f, 0x2, 0x1e2, 0x1e9, 0x5, 0x40, 0x21, 0x2, 
    0x1e3, 0x1e9, 0x5, 0x44, 0x23, 0x2, 0x1e4, 0x1e9, 0x5, 0x20, 0x11, 0x2, 
    0x1e5, 0x1e9, 0x5, 0x70, 0x39, 0x2, 0x1e6, 0x1e9, 0x5, 0x10, 0x9, 0x2, 
    0x1e7, 0x1e9, 0x5, 0x18, 0xd, 0x2, 0x1e8, 0x1e1, 0x3, 0x2, 0x2, 0x2, 
    0x1e8, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e3, 0x3, 0x2, 0x2, 0x2, 
    0x1e8, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e5, 0x3, 0x2, 0x2, 0x2, 
    0x1e8, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e7, 0x3, 0x2, 0x2, 0x2, 
    0x1e9, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x5, 0xc6, 0x64, 0x2, 
    0x1eb, 0x1f0, 0x5, 0x3e, 0x20, 0x2, 0x1ec, 0x1ed, 0x7, 0x46, 0x2, 0x2, 
    0x1ed, 0x1ef, 0x5, 0x3e, 0x20, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 
    0x1ef, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1ee, 0x3, 0x2, 0x2, 0x2, 
    0x1f0, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f3, 0x3, 0x2, 0x2, 0x2, 
    0x1f2, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x7, 0x45, 0x2, 0x2, 
    0x1f4, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1fa, 0x7, 0x71, 0x2, 0x2, 
    0x1f6, 0x1f7, 0x7, 0x43, 0x2, 0x2, 0x1f7, 0x1f9, 0x7, 0x44, 0x2, 0x2, 
    0x1f8, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fc, 0x3, 0x2, 0x2, 0x2, 
    0x1fa, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x3, 0x2, 0x2, 0x2, 
    0x1fb, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fa, 0x3, 0x2, 0x2, 0x2, 
    0x1fd, 0x1fe, 0x7, 0x48, 0x2, 0x2, 0x1fe, 0x1ff, 0x5, 0x4c, 0x27, 0x2, 
    0x1ff, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x200, 0x202, 0x5, 0x42, 0x22, 0x2, 
    0x201, 0x200, 0x3, 0x2, 0x2, 0x2, 0x202, 0x205, 0x3, 0x2, 0x2, 0x2, 
    0x203, 0x201, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 0x2, 0x2, 
    0x204, 0x210, 0x3, 0x2, 0x2, 0x2, 0x205, 0x203, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x211, 0x5, 0x2e, 0x18, 0x2, 0x207, 0x20b, 0x5, 0x12, 0xa, 0x2, 
    0x208, 0x20a, 0x5, 0x66, 0x34, 0x2, 0x209, 0x208, 0x3, 0x2, 0x2, 0x2, 
    0x20a, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x209, 0x3, 0x2, 0x2, 0x2, 
    0x20b, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20e, 0x3, 0x2, 0x2, 0x2, 
    0x20d, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20f, 0x5, 0x2e, 0x18, 0x2, 
    0x20f, 0x211, 0x3, 0x2, 0x2, 0x2, 0x210, 0x206, 0x3, 0x2, 0x2, 0x2, 
    0x210, 0x207, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 0x3, 0x2, 0x2, 0x2, 
    0x212, 0x213, 0x7, 0x71, 0x2, 0x2, 0x213, 0x218, 0x5, 0x56, 0x2c, 0x2, 
    0x214, 0x215, 0x7, 0x43, 0x2, 0x2, 0x215, 0x217, 0x7, 0x44, 0x2, 0x2, 
    0x216, 0x214, 0x3, 0x2, 0x2, 0x2, 0x217, 0x21a, 0x3, 0x2, 0x2, 0x2, 
    0x218, 0x216, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 0x3, 0x2, 0x2, 0x2, 
    0x219, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x218, 0x3, 0x2, 0x2, 0x2, 
    0x21b, 0x21c, 0x7, 0x2f, 0x2, 0x2, 0x21c, 0x21e, 0x5, 0x54, 0x2b, 0x2, 
    0x21d, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 0x2, 0x2, 
    0x21e, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x5, 0x2c, 0x17, 0x2, 
    0x220, 0x41, 0x3, 0x2, 0x2, 0x2, 0x221, 0x228, 0x5, 0x66, 0x34, 0x2, 
    0x222, 0x228, 0x7, 0x25, 0x2, 0x2, 0x223, 0x228, 0x7, 0x3, 0x2, 0x2, 
    0x224, 0x228, 0x7, 0xe, 0x2, 0x2, 0x225, 0x228, 0x7, 0x28, 0x2, 0x2, 
    0x226, 0x228, 0x7, 0x29, 0x2, 0x2, 0x227, 0x221, 0x3, 0x2, 0x2, 0x2, 
    0x227, 0x222, 0x3, 0x2, 0x2, 0x2, 0x227, 0x223, 0x3, 0x2, 0x2, 0x2, 
    0x227, 0x224, 0x3, 0x2, 0x2, 0x2, 0x227, 0x225, 0x3, 0x2, 0x2, 0x2, 
    0x227, 0x226, 0x3, 0x2, 0x2, 0x2, 0x228, 0x43, 0x3, 0x2, 0x2, 0x2, 0x229, 
    0x22a, 0x5, 0x12, 0xa, 0x2, 0x22a, 0x22b, 0x5, 0x40, 0x21, 0x2, 0x22b, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x231, 0x5, 0x48, 0x25, 0x2, 0x22d, 
    0x22e, 0x7, 0x46, 0x2, 0x2, 0x22e, 0x230, 0x5, 0x48, 0x25, 0x2, 0x22f, 
    0x22d, 0x3, 0x2, 0x2, 0x2, 0x230, 0x233, 0x3, 0x2, 0x2, 0x2, 0x231, 
    0x22f, 0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 0x3, 0x2, 0x2, 0x2, 0x232, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x233, 0x231, 0x3, 0x2, 0x2, 0x2, 0x234, 0x237, 
    0x5, 0x4a, 0x26, 0x2, 0x235, 0x236, 0x7, 0x48, 0x2, 0x2, 0x236, 0x238, 
    0x5, 0x4c, 0x27, 0x2, 0x237, 0x235, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 
    0x3, 0x2, 0x2, 0x2, 0x238, 0x49, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23e, 0x7, 
    0x71, 0x2, 0x2, 0x23a, 0x23b, 0x7, 0x43, 0x2, 0x2, 0x23b, 0x23d, 0x7, 
    0x44, 0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x240, 0x3, 
    0x2, 0x2, 0x2, 0x23e, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x3, 
    0x2, 0x2, 0x2, 0x23f, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x240, 0x23e, 0x3, 0x2, 
    0x2, 0x2, 0x241, 0x244, 0x5, 0x4e, 0x28, 0x2, 0x242, 0x244, 0x5, 0xa6, 
    0x54, 0x2, 0x243, 0x241, 0x3, 0x2, 0x2, 0x2, 0x243, 0x242, 0x3, 0x2, 
    0x2, 0x2, 0x244, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x245, 0x251, 0x7, 0x41, 
    0x2, 0x2, 0x246, 0x24b, 0x5, 0x4c, 0x27, 0x2, 0x247, 0x248, 0x7, 0x46, 
    0x2, 0x2, 0x248, 0x24a, 0x5, 0x4c, 0x27, 0x2, 0x249, 0x247, 0x3, 0x2, 
    0x2, 0x2, 0x24a, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x249, 0x3, 0x2, 
    0x2, 0x2, 0x24b, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24f, 0x3, 0x2, 
    0x2, 0x2, 0x24d, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x250, 0x7, 0x46, 
    0x2, 0x2, 0x24f, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 0x3, 0x2, 
    0x2, 0x2, 0x250, 0x252, 0x3, 0x2, 0x2, 0x2, 0x251, 0x246, 0x3, 0x2, 
    0x2, 0x2, 0x251, 0x252, 0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x3, 0x2, 
    0x2, 0x2, 0x253, 0x254, 0x7, 0x42, 0x2, 0x2, 0x254, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x255, 0x257, 0x7, 0x71, 0x2, 0x2, 0x256, 0x258, 0x5, 0xca, 
    0x66, 0x2, 0x257, 0x256, 0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 0x3, 0x2, 
    0x2, 0x2, 0x258, 0x260, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x7, 0x47, 
    0x2, 0x2, 0x25a, 0x25c, 0x7, 0x71, 0x2, 0x2, 0x25b, 0x25d, 0x5, 0xca, 
    0x66, 0x2, 0x25c, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x3, 0x2, 
    0x2, 0x2, 0x25d, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x259, 0x3, 0x2, 
    0x2, 0x2, 0x25f, 0x262, 0x3, 0x2, 0x2, 0x2, 0x260, 0x25e, 0x3, 0x2, 
    0x2, 0x2, 0x260, 0x261, 0x3, 0x2, 0x2, 0x2, 0x261, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 0x263, 0x26a, 0x5, 0xc6, 0x64, 
    0x2, 0x264, 0x267, 0x7, 0x4d, 0x2, 0x2, 0x265, 0x266, 0x9, 0x2, 0x2, 
    0x2, 0x266, 0x268, 0x5, 0xc6, 0x64, 0x2, 0x267, 0x265, 0x3, 0x2, 0x2, 
    0x2, 0x267, 0x268, 0x3, 0x2, 0x2, 0x2, 0x268, 0x26a, 0x3, 0x2, 0x2, 
    0x2, 0x269, 0x263, 0x3, 0x2, 0x2, 0x2, 0x269, 0x264, 0x3, 0x2, 0x2, 
    0x2, 0x26a, 0x53, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x270, 0x5, 0x5e, 0x30, 
    0x2, 0x26c, 0x26d, 0x7, 0x46, 0x2, 0x2, 0x26d, 0x26f, 0x5, 0x5e, 0x30, 
    0x2, 0x26e, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x272, 0x3, 0x2, 0x2, 
    0x2, 0x270, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x270, 0x271, 0x3, 0x2, 0x2, 
    0x2, 0x271, 0x55, 0x3, 0x2, 0x2, 0x2, 0x272, 0x270, 0x3, 0x2, 0x2, 0x2, 
    0x273, 0x275, 0x7, 0x3f, 0x2, 0x2, 0x274, 0x276, 0x5, 0x58, 0x2d, 0x2, 
    0x275, 0x274, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x3, 0x2, 0x2, 0x2, 
    0x276, 0x277, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x7, 0x40, 0x2, 0x2, 
    0x278, 0x57, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27e, 0x5, 0x5a, 0x2e, 0x2, 
    0x27a, 0x27b, 0x7, 0x46, 0x2, 0x2, 0x27b, 0x27d, 0x5, 0x5a, 0x2e, 0x2, 
    0x27c, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x280, 0x3, 0x2, 0x2, 0x2, 
    0x27e, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x27f, 0x3, 0x2, 0x2, 0x2, 
    0x27f, 0x283, 0x3, 0x2, 0x2, 0x2, 0x280, 0x27e, 0x3, 0x2, 0x2, 0x2, 
    0x281, 0x282, 0x7, 0x46, 0x2, 0x2, 0x282, 0x284, 0x5, 0x5c, 0x2f, 0x2, 
    0x283, 0x281, 0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 0x3, 0x2, 0x2, 0x2, 
    0x284, 0x287, 0x3, 0x2, 0x2, 0x2, 0x285, 0x287, 0x5, 0x5c, 0x2f, 0x2, 
    0x286, 0x279, 0x3, 0x2, 0x2, 0x2, 0x286, 0x285, 0x3, 0x2, 0x2, 0x2, 
    0x287, 0x59, 0x3, 0x2, 0x2, 0x2, 0x288, 0x28a, 0x5, 0xe, 0x8, 0x2, 0x289, 
    0x288, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28b, 
    0x289, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28c, 
    0x28e, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28e, 
    0x28f, 0x5, 0xc6, 0x64, 0x2, 0x28f, 0x290, 0x5, 0x4a, 0x26, 0x2, 0x290, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x291, 0x293, 0x5, 0xe, 0x8, 0x2, 0x292, 0x291, 
    0x3, 0x2, 0x2, 0x2, 0x293, 0x296, 0x3, 0x2, 0x2, 0x2, 0x294, 0x292, 
    0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x3, 0x2, 0x2, 0x2, 0x295, 0x297, 
    0x3, 0x2, 0x2, 0x2, 0x296, 0x294, 0x3, 0x2, 0x2, 0x2, 0x297, 0x298, 
    0x5, 0xc6, 0x64, 0x2, 0x298, 0x299, 0x7, 0x6d, 0x2, 0x2, 0x299, 0x29a, 
    0x5, 0x4a, 0x26, 0x2, 0x29a, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x2a0, 
    0x7, 0x71, 0x2, 0x2, 0x29c, 0x29d, 0x7, 0x47, 0x2, 0x2, 0x29d, 0x29f, 
    0x7, 0x71, 0x2, 0x2, 0x29e, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a2, 
    0x3, 0x2, 0x2, 0x2, 0x2a0, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a1, 
    0x3, 0x2, 0x2, 0x2, 0x2a1, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a0, 0x3, 
    0x2, 0x2, 0x2, 0x2a3, 0x2aa, 0x5, 0x62, 0x32, 0x2, 0x2a4, 0x2aa, 0x5, 
    0x64, 0x33, 0x2, 0x2a5, 0x2aa, 0x7, 0x3c, 0x2, 0x2, 0x2a6, 0x2aa, 0x7, 
    0x3d, 0x2, 0x2, 0x2a7, 0x2aa, 0x7, 0x3b, 0x2, 0x2, 0x2a8, 0x2aa, 0x7, 
    0x3e, 0x2, 0x2, 0x2a9, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2a4, 0x3, 
    0x2, 0x2, 0x2, 0x2a9, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2a6, 0x3, 
    0x2, 0x2, 0x2, 0x2a9, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2a8, 0x3, 
    0x2, 0x2, 0x2, 0x2aa, 0x61, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ac, 0x9, 0x3, 
    0x2, 0x2, 0x2ac, 0x63, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2ae, 0x9, 0x4, 0x2, 
    0x2, 0x2ae, 0x65, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 0x7, 0x6c, 0x2, 
    0x2, 0x2b0, 0x2b7, 0x5, 0x5e, 0x30, 0x2, 0x2b1, 0x2b4, 0x7, 0x3f, 0x2, 
    0x2, 0x2b2, 0x2b5, 0x5, 0x68, 0x35, 0x2, 0x2b3, 0x2b5, 0x5, 0x6c, 0x37, 
    0x2, 0x2b4, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2b3, 0x3, 0x2, 0x2, 
    0x2, 0x2b4, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x3, 0x2, 0x2, 
    0x2, 0x2b6, 0x2b8, 0x7, 0x40, 0x2, 0x2, 0x2b7, 0x2b1, 0x3, 0x2, 0x2, 
    0x2, 0x2b7, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x2b9, 0x2be, 0x5, 0x6a, 0x36, 0x2, 0x2ba, 0x2bb, 0x7, 0x46, 0x2, 0x2, 
    0x2bb, 0x2bd, 0x5, 0x6a, 0x36, 0x2, 0x2bc, 0x2ba, 0x3, 0x2, 0x2, 0x2, 
    0x2bd, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bc, 0x3, 0x2, 0x2, 0x2, 
    0x2be, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x69, 0x3, 0x2, 0x2, 0x2, 0x2c0, 
    0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c2, 0x7, 0x71, 0x2, 0x2, 0x2c2, 
    0x2c3, 0x7, 0x48, 0x2, 0x2, 0x2c3, 0x2c4, 0x5, 0x6c, 0x37, 0x2, 0x2c4, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c9, 0x5, 0xa6, 0x54, 0x2, 0x2c6, 
    0x2c9, 0x5, 0x66, 0x34, 0x2, 0x2c7, 0x2c9, 0x5, 0x6e, 0x38, 0x2, 0x2c8, 
    0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c8, 
    0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2d3, 
    0x7, 0x41, 0x2, 0x2, 0x2cb, 0x2d0, 0x5, 0x6c, 0x37, 0x2, 0x2cc, 0x2cd, 
    0x7, 0x46, 0x2, 0x2, 0x2cd, 0x2cf, 0x5, 0x6c, 0x37, 0x2, 0x2ce, 0x2cc, 
    0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2ce, 
    0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d4, 
    0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2cb, 
    0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d6, 
    0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d7, 0x7, 0x46, 0x2, 0x2, 0x2d6, 0x2d5, 
    0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 
    0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d9, 0x7, 0x42, 0x2, 0x2, 0x2d9, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x2da, 0x2db, 0x7, 0x6c, 0x2, 0x2, 0x2db, 0x2dc, 
    0x7, 0x1e, 0x2, 0x2, 0x2dc, 0x2dd, 0x7, 0x71, 0x2, 0x2, 0x2dd, 0x2de, 
    0x5, 0x72, 0x3a, 0x2, 0x2de, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2e3, 
    0x7, 0x41, 0x2, 0x2, 0x2e0, 0x2e2, 0x5, 0x74, 0x3b, 0x2, 0x2e1, 0x2e0, 
    0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e1, 
    0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e6, 
    0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e7, 
    0x7, 0x42, 0x2, 0x2, 0x2e7, 0x73, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2ea, 
    0x5, 0xa, 0x6, 0x2, 0x2e9, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2ed, 
    0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ec, 
    0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2eb, 
    0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2f1, 0x5, 0x76, 0x3c, 0x2, 0x2ef, 0x2f1, 
    0x7, 0x45, 0x2, 0x2, 0x2f0, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2ef, 
    0x3, 0x2, 0x2, 0x2, 0x2f1, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f3, 0x5, 
    0xc6, 0x64, 0x2, 0x2f3, 0x2f4, 0x5, 0x78, 0x3d, 0x2, 0x2f4, 0x2f5, 0x7, 
    0x45, 0x2, 0x2, 0x2f5, 0x307, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f8, 0x5, 
    0x10, 0x9, 0x2, 0x2f7, 0x2f9, 0x7, 0x45, 0x2, 0x2, 0x2f8, 0x2f7, 0x3, 
    0x2, 0x2, 0x2, 0x2f8, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x307, 0x3, 
    0x2, 0x2, 0x2, 0x2fa, 0x2fc, 0x5, 0x20, 0x11, 0x2, 0x2fb, 0x2fd, 0x7, 
    0x45, 0x2, 0x2, 0x2fc, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 0x3, 
    0x2, 0x2, 0x2, 0x2fd, 0x307, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x300, 0x5, 
    0x18, 0xd, 0x2, 0x2ff, 0x301, 0x7, 0x45, 0x2, 0x2, 0x300, 0x2ff, 0x3, 
    0x2, 0x2, 0x2, 0x300, 0x301, 0x3, 0x2, 0x2, 0x2, 0x301, 0x307, 0x3, 
    0x2, 0x2, 0x2, 0x302, 0x304, 0x5, 0x70, 0x39, 0x2, 0x303, 0x305, 0x7, 
    0x45, 0x2, 0x2, 0x304, 0x303, 0x3, 0x2, 0x2, 0x2, 0x304, 0x305, 0x3, 
    0x2, 0x2, 0x2, 0x305, 0x307, 0x3, 0x2, 0x2, 0x2, 0x306, 0x2f2, 0x3, 
    0x2, 0x2, 0x2, 0x306, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x306, 0x2fa, 0x3, 
    0x2, 0x2, 0x2, 0x306, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x306, 0x302, 0x3, 
    0x2, 0x2, 0x2, 0x307, 0x77, 0x3, 0x2, 0x2, 0x2, 0x308, 0x30b, 0x5, 0x7a, 
    0x3e, 0x2, 0x309, 0x30b, 0x5, 0x7c, 0x3f, 0x2, 0x30a, 0x308, 0x3, 0x2, 
    0x2, 0x2, 0x30a, 0x309, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x30c, 0x30d, 0x7, 0x71, 0x2, 0x2, 0x30d, 0x30e, 0x7, 0x3f, 0x2, 
    0x2, 0x30e, 0x310, 0x7, 0x40, 0x2, 0x2, 0x30f, 0x311, 0x5, 0x7e, 0x40, 
    0x2, 0x310, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x310, 0x311, 0x3, 0x2, 0x2, 
    0x2, 0x311, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x312, 0x313, 0x5, 0x46, 0x24, 
    0x2, 0x313, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x314, 0x315, 0x7, 0xe, 0x2, 0x2, 
    0x315, 0x316, 0x5, 0x6c, 0x37, 0x2, 0x316, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x317, 0x31b, 0x7, 0x41, 0x2, 0x2, 0x318, 0x31a, 0x5, 0x82, 0x42, 0x2, 
    0x319, 0x318, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x31d, 0x3, 0x2, 0x2, 0x2, 
    0x31b, 0x319, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31c, 0x3, 0x2, 0x2, 0x2, 
    0x31c, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31b, 0x3, 0x2, 0x2, 0x2, 
    0x31e, 0x31f, 0x7, 0x42, 0x2, 0x2, 0x31f, 0x81, 0x3, 0x2, 0x2, 0x2, 
    0x320, 0x321, 0x5, 0x84, 0x43, 0x2, 0x321, 0x322, 0x7, 0x45, 0x2, 0x2, 
    0x322, 0x326, 0x3, 0x2, 0x2, 0x2, 0x323, 0x326, 0x5, 0x88, 0x45, 0x2, 
    0x324, 0x326, 0x5, 0x86, 0x44, 0x2, 0x325, 0x320, 0x3, 0x2, 0x2, 0x2, 
    0x325, 0x323, 0x3, 0x2, 0x2, 0x2, 0x325, 0x324, 0x3, 0x2, 0x2, 0x2, 
    0x326, 0x83, 0x3, 0x2, 0x2, 0x2, 0x327, 0x329, 0x5, 0xe, 0x8, 0x2, 0x328, 
    0x327, 0x3, 0x2, 0x2, 0x2, 0x329, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x32a, 
    0x328, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32b, 
    0x32d, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32d, 
    0x32e, 0x5, 0xc6, 0x64, 0x2, 0x32e, 0x32f, 0x5, 0x46, 0x24, 0x2, 0x32f, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x330, 0x332, 0x5, 0xc, 0x7, 0x2, 0x331, 0x330, 
    0x3, 0x2, 0x2, 0x2, 0x332, 0x335, 0x3, 0x2, 0x2, 0x2, 0x333, 0x331, 
    0x3, 0x2, 0x2, 0x2, 0x333, 0x334, 0x3, 0x2, 0x2, 0x2, 0x334, 0x338, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x333, 0x3, 0x2, 0x2, 0x2, 0x336, 0x339, 
    0x5, 0x10, 0x9, 0x2, 0x337, 0x339, 0x5, 0x20, 0x11, 0x2, 0x338, 0x336, 
    0x3, 0x2, 0x2, 0x2, 0x338, 0x337, 0x3, 0x2, 0x2, 0x2, 0x339, 0x33c, 
    0x3, 0x2, 0x2, 0x2, 0x33a, 0x33c, 0x7, 0x45, 0x2, 0x2, 0x33b, 0x333, 
    0x3, 0x2, 0x2, 0x2, 0x33b, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x87, 0x3, 
    0x2, 0x2, 0x2, 0x33d, 0x3a6, 0x5, 0x80, 0x41, 0x2, 0x33e, 0x33f, 0x7, 
    0x4, 0x2, 0x2, 0x33f, 0x342, 0x5, 0xa6, 0x54, 0x2, 0x340, 0x341, 0x7, 
    0x4e, 0x2, 0x2, 0x341, 0x343, 0x5, 0xa6, 0x54, 0x2, 0x342, 0x340, 0x3, 
    0x2, 0x2, 0x2, 0x342, 0x343, 0x3, 0x2, 0x2, 0x2, 0x343, 0x344, 0x3, 
    0x2, 0x2, 0x2, 0x344, 0x345, 0x7, 0x45, 0x2, 0x2, 0x345, 0x3a6, 0x3, 
    0x2, 0x2, 0x2, 0x346, 0x347, 0x7, 0x18, 0x2, 0x2, 0x347, 0x348, 0x5, 
    0xa0, 0x51, 0x2, 0x348, 0x34b, 0x5, 0x88, 0x45, 0x2, 0x349, 0x34a, 0x7, 
    0x11, 0x2, 0x2, 0x34a, 0x34c, 0x5, 0x88, 0x45, 0x2, 0x34b, 0x349, 0x3, 
    0x2, 0x2, 0x2, 0x34b, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x3a6, 0x3, 
    0x2, 0x2, 0x2, 0x34d, 0x34e, 0x7, 0x17, 0x2, 0x2, 0x34e, 0x34f, 0x7, 
    0x3f, 0x2, 0x2, 0x34f, 0x350, 0x5, 0x9a, 0x4e, 0x2, 0x350, 0x351, 0x7, 
    0x40, 0x2, 0x2, 0x351, 0x352, 0x5, 0x88, 0x45, 0x2, 0x352, 0x3a6, 0x3, 
    0x2, 0x2, 0x2, 0x353, 0x354, 0x7, 0x34, 0x2, 0x2, 0x354, 0x355, 0x5, 
    0xa0, 0x51, 0x2, 0x355, 0x356, 0x5, 0x88, 0x45, 0x2, 0x356, 0x3a6, 0x3, 
    0x2, 0x2, 0x2, 0x357, 0x358, 0x7, 0xf, 0x2, 0x2, 0x358, 0x359, 0x5, 
    0x88, 0x45, 0x2, 0x359, 0x35a, 0x7, 0x34, 0x2, 0x2, 0x35a, 0x35b, 0x5, 
    0xa0, 0x51, 0x2, 0x35b, 0x35c, 0x7, 0x45, 0x2, 0x2, 0x35c, 0x3a6, 0x3, 
    0x2, 0x2, 0x2, 0x35d, 0x35e, 0x7, 0x31, 0x2, 0x2, 0x35e, 0x368, 0x5, 
    0x80, 0x41, 0x2, 0x35f, 0x361, 0x5, 0x8a, 0x46, 0x2, 0x360, 0x35f, 0x3, 
    0x2, 0x2, 0x2, 0x361, 0x362, 0x3, 0x2, 0x2, 0x2, 0x362, 0x360, 0x3, 
    0x2, 0x2, 0x2, 0x362, 0x363, 0x3, 0x2, 0x2, 0x2, 0x363, 0x365, 0x3, 
    0x2, 0x2, 0x2, 0x364, 0x366, 0x5, 0x8e, 0x48, 0x2, 0x365, 0x364, 0x3, 
    0x2, 0x2, 0x2, 0x365, 0x366, 0x3, 0x2, 0x2, 0x2, 0x366, 0x369, 0x3, 
    0x2, 0x2, 0x2, 0x367, 0x369, 0x5, 0x8e, 0x48, 0x2, 0x368, 0x360, 0x3, 
    0x2, 0x2, 0x2, 0x368, 0x367, 0x3, 0x2, 0x2, 0x2, 0x369, 0x3a6, 0x3, 
    0x2, 0x2, 0x2, 0x36a, 0x36b, 0x7, 0x31, 0x2, 0x2, 0x36b, 0x36c, 0x5, 
    0x90, 0x49, 0x2, 0x36c, 0x370, 0x5, 0x80, 0x41, 0x2, 0x36d, 0x36f, 0x5, 
    0x8a, 0x46, 0x2, 0x36e, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x372, 0x3, 
    0x2, 0x2, 0x2, 0x370, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x370, 0x371, 0x3, 
    0x2, 0x2, 0x2, 0x371, 0x374, 0x3, 0x2, 0x2, 0x2, 0x372, 0x370, 0x3, 
    0x2, 0x2, 0x2, 0x373, 0x375, 0x5, 0x8e, 0x48, 0x2, 0x374, 0x373, 0x3, 
    0x2, 0x2, 0x2, 0x374, 0x375, 0x3, 0x2, 0x2, 0x2, 0x375, 0x3a6, 0x3, 
    0x2, 0x2, 0x2, 0x376, 0x377, 0x7, 0x2b, 0x2, 0x2, 0x377, 0x378, 0x5, 
    0xa0, 0x51, 0x2, 0x378, 0x37c, 0x7, 0x41, 0x2, 0x2, 0x379, 0x37b, 0x5, 
    0x96, 0x4c, 0x2, 0x37a, 0x379, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37e, 0x3, 
    0x2, 0x2, 0x2, 0x37c, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37d, 0x3, 
    0x2, 0x2, 0x2, 0x37d, 0x382, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37c, 0x3, 
    0x2, 0x2, 0x2, 0x37f, 0x381, 0x5, 0x98, 0x4d, 0x2, 0x380, 0x37f, 0x3, 
    0x2, 0x2, 0x2, 0x381, 0x384, 0x3, 0x2, 0x2, 0x2, 0x382, 0x380, 0x3, 
    0x2, 0x2, 0x2, 0x382, 0x383, 0x3, 0x2, 0x2, 0x2, 0x383, 0x385, 0x3, 
    0x2, 0x2, 0x2, 0x384, 0x382, 0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 0x7, 
    0x42, 0x2, 0x2, 0x386, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x387, 0x388, 0x7, 
    0x2c, 0x2, 0x2, 0x388, 0x389, 0x5, 0xa0, 0x51, 0x2, 0x389, 0x38a, 0x5, 
    0x80, 0x41, 0x2, 0x38a, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x38d, 0x7, 
    0x26, 0x2, 0x2, 0x38c, 0x38e, 0x5, 0xa6, 0x54, 0x2, 0x38d, 0x38c, 0x3, 
    0x2, 0x2, 0x2, 0x38d, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x38f, 0x3, 
    0x2, 0x2, 0x2, 0x38f, 0x3a6, 0x7, 0x45, 0x2, 0x2, 0x390, 0x391, 0x7, 
    0x2e, 0x2, 0x2, 0x391, 0x392, 0x5, 0xa6, 0x54, 0x2, 0x392, 0x393, 0x7, 
    0x45, 0x2, 0x2, 0x393, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x394, 0x396, 0x7, 
    0x6, 0x2, 0x2, 0x395, 0x397, 0x7, 0x71, 0x2, 0x2, 0x396, 0x395, 0x3, 
    0x2, 0x2, 0x2, 0x396, 0x397, 0x3, 0x2, 0x2, 0x2, 0x397, 0x398, 0x3, 
    0x2, 0x2, 0x2, 0x398, 0x3a6, 0x7, 0x45, 0x2, 0x2, 0x399, 0x39b, 0x7, 
    0xd, 0x2, 0x2, 0x39a, 0x39c, 0x7, 0x71, 0x2, 0x2, 0x39b, 0x39a, 0x3, 
    0x2, 0x2, 0x2, 0x39b, 0x39c, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39d, 0x3, 
    0x2, 0x2, 0x2, 0x39d, 0x3a6, 0x7, 0x45, 0x2, 0x2, 0x39e, 0x3a6, 0x7, 
    0x45, 0x2, 0x2, 0x39f, 0x3a0, 0x5, 0xa6, 0x54, 0x2, 0x3a0, 0x3a1, 0x7, 
    0x45, 0x2, 0x2, 0x3a1, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a3, 0x7, 
    0x71, 0x2, 0x2, 0x3a3, 0x3a4, 0x7, 0x4e, 0x2, 0x2, 0x3a4, 0x3a6, 0x5, 
    0x88, 0x45, 0x2, 0x3a5, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x33e, 0x3, 
    0x2, 0x2, 0x2, 0x3a5, 0x346, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x34d, 0x3, 
    0x2, 0x2, 0x2, 0x3a5, 0x353, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x357, 0x3, 
    0x2, 0x2, 0x2, 0x3a5, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x36a, 0x3, 
    0x2, 0x2, 0x2, 0x3a5, 0x376, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x387, 0x3, 
    0x2, 0x2, 0x2, 0x3a5, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x390, 0x3, 
    0x2, 0x2, 0x2, 0x3a5, 0x394, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x399, 0x3, 
    0x2, 0x2, 0x2, 0x3a5, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x39f, 0x3, 
    0x2, 0x2, 0x2, 0x3a5, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x3a7, 0x3a8, 0x7, 0x9, 0x2, 0x2, 0x3a8, 0x3ac, 0x7, 0x3f, 
    0x2, 0x2, 0x3a9, 0x3ab, 0x5, 0xe, 0x8, 0x2, 0x3aa, 0x3a9, 0x3, 0x2, 
    0x2, 0x2, 0x3ab, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3aa, 0x3, 0x2, 
    0x2, 0x2, 0x3ac, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3af, 0x3, 0x2, 
    0x2, 0x2, 0x3ae, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b0, 0x5, 0x8c, 
    0x47, 0x2, 0x3b0, 0x3b1, 0x7, 0x71, 0x2, 0x2, 0x3b1, 0x3b2, 0x7, 0x40, 
    0x2, 0x2, 0x3b2, 0x3b3, 0x5, 0x80, 0x41, 0x2, 0x3b3, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x3b4, 0x3b9, 0x5, 0x5e, 0x30, 0x2, 0x3b5, 0x3b6, 0x7, 0x5c, 
    0x2, 0x2, 0x3b6, 0x3b8, 0x5, 0x5e, 0x30, 0x2, 0x3b7, 0x3b5, 0x3, 0x2, 
    0x2, 0x2, 0x3b8, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3b7, 0x3, 0x2, 
    0x2, 0x2, 0x3b9, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x3bb, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3bd, 0x7, 0x15, 0x2, 
    0x2, 0x3bd, 0x3be, 0x5, 0x80, 0x41, 0x2, 0x3be, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x3bf, 0x3c0, 0x7, 0x3f, 0x2, 0x2, 0x3c0, 0x3c2, 0x5, 0x92, 0x4a, 
    0x2, 0x3c1, 0x3c3, 0x7, 0x45, 0x2, 0x2, 0x3c2, 0x3c1, 0x3, 0x2, 0x2, 
    0x2, 0x3c2, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3c4, 0x3, 0x2, 0x2, 
    0x2, 0x3c4, 0x3c5, 0x7, 0x40, 0x2, 0x2, 0x3c5, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x3c6, 0x3cb, 0x5, 0x94, 0x4b, 0x2, 0x3c7, 0x3c8, 0x7, 0x45, 0x2, 
    0x2, 0x3c8, 0x3ca, 0x5, 0x94, 0x4b, 0x2, 0x3c9, 0x3c7, 0x3, 0x2, 0x2, 
    0x2, 0x3ca, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3c9, 0x3, 0x2, 0x2, 
    0x2, 0x3cb, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x3cd, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3d0, 0x5, 0xe, 0x8, 0x2, 
    0x3cf, 0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d3, 0x3, 0x2, 0x2, 0x2, 
    0x3d1, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d2, 0x3, 0x2, 0x2, 0x2, 
    0x3d2, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d1, 0x3, 0x2, 0x2, 0x2, 
    0x3d4, 0x3d5, 0x5, 0x50, 0x29, 0x2, 0x3d5, 0x3d6, 0x5, 0x4a, 0x26, 0x2, 
    0x3d6, 0x3d7, 0x7, 0x48, 0x2, 0x2, 0x3d7, 0x3d8, 0x5, 0xa6, 0x54, 0x2, 
    0x3d8, 0x95, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3db, 0x5, 0x98, 0x4d, 0x2, 
    0x3da, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3dc, 0x3, 0x2, 0x2, 0x2, 
    0x3dc, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3dd, 0x3, 0x2, 0x2, 0x2, 
    0x3dd, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3e0, 0x5, 0x82, 0x42, 0x2, 
    0x3df, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3e1, 0x3, 0x2, 0x2, 0x2, 
    0x3e1, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e2, 0x3, 0x2, 0x2, 0x2, 
    0x3e2, 0x97, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e6, 0x7, 0x8, 0x2, 0x2, 0x3e4, 
    0x3e7, 0x5, 0xa6, 0x54, 0x2, 0x3e5, 0x3e7, 0x7, 0x71, 0x2, 0x2, 0x3e6, 
    0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e7, 
    0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3ec, 0x7, 0x4e, 0x2, 0x2, 0x3e9, 
    0x3ea, 0x7, 0xe, 0x2, 0x2, 0x3ea, 0x3ec, 0x7, 0x4e, 0x2, 0x2, 0x3eb, 
    0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3ec, 
    0x99, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3fa, 0x5, 0x9e, 0x50, 0x2, 0x3ee, 
    0x3f0, 0x5, 0x9c, 0x4f, 0x2, 0x3ef, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3ef, 
    0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3f1, 
    0x3f3, 0x7, 0x45, 0x2, 0x2, 0x3f2, 0x3f4, 0x5, 0xa6, 0x54, 0x2, 0x3f3, 
    0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f4, 
    0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f7, 0x7, 0x45, 0x2, 0x2, 0x3f6, 
    0x3f8, 0x5, 0xa2, 0x52, 0x2, 0x3f7, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f7, 
    0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3f9, 
    0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3fa, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fe, 0x5, 0x84, 0x43, 0x2, 0x3fc, 
    0x3fe, 0x5, 0xa2, 0x52, 0x2, 0x3fd, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0x3fd, 
    0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x401, 
    0x5, 0xe, 0x8, 0x2, 0x400, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x401, 0x404, 
    0x3, 0x2, 0x2, 0x2, 0x402, 0x400, 0x3, 0x2, 0x2, 0x2, 0x402, 0x403, 
    0x3, 0x2, 0x2, 0x2, 0x403, 0x405, 0x3, 0x2, 0x2, 0x2, 0x404, 0x402, 
    0x3, 0x2, 0x2, 0x2, 0x405, 0x406, 0x5, 0xc6, 0x64, 0x2, 0x406, 0x407, 
    0x5, 0x4a, 0x26, 0x2, 0x407, 0x408, 0x7, 0x4e, 0x2, 0x2, 0x408, 0x409, 
    0x5, 0xa6, 0x54, 0x2, 0x409, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x40b, 
    0x7, 0x3f, 0x2, 0x2, 0x40b, 0x40c, 0x5, 0xa6, 0x54, 0x2, 0x40c, 0x40d, 
    0x7, 0x40, 0x2, 0x2, 0x40d, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x413, 
    0x5, 0xa6, 0x54, 0x2, 0x40f, 0x410, 0x7, 0x46, 0x2, 0x2, 0x410, 0x412, 
    0x5, 0xa6, 0x54, 0x2, 0x411, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x412, 0x415, 
    0x3, 0x2, 0x2, 0x2, 0x413, 0x411, 0x3, 0x2, 0x2, 0x2, 0x413, 0x414, 
    0x3, 0x2, 0x2, 0x2, 0x414, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x415, 0x413, 0x3, 
    0x2, 0x2, 0x2, 0x416, 0x417, 0x7, 0x71, 0x2, 0x2, 0x417, 0x419, 0x7, 
    0x3f, 0x2, 0x2, 0x418, 0x41a, 0x5, 0xa2, 0x52, 0x2, 0x419, 0x418, 0x3, 
    0x2, 0x2, 0x2, 0x419, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41b, 0x3, 
    0x2, 0x2, 0x2, 0x41b, 0x429, 0x7, 0x40, 0x2, 0x2, 0x41c, 0x41d, 0x7, 
    0x2d, 0x2, 0x2, 0x41d, 0x41f, 0x7, 0x3f, 0x2, 0x2, 0x41e, 0x420, 0x5, 
    0xa2, 0x52, 0x2, 0x41f, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x420, 0x3, 
    0x2, 0x2, 0x2, 0x420, 0x421, 0x3, 0x2, 0x2, 0x2, 0x421, 0x429, 0x7, 
    0x40, 0x2, 0x2, 0x422, 0x423, 0x7, 0x2a, 0x2, 0x2, 0x423, 0x425, 0x7, 
    0x3f, 0x2, 0x2, 0x424, 0x426, 0x5, 0xa2, 0x52, 0x2, 0x425, 0x424, 0x3, 
    0x2, 0x2, 0x2, 0x425, 0x426, 0x3, 0x2, 0x2, 0x2, 0x426, 0x427, 0x3, 
    0x2, 0x2, 0x2, 0x427, 0x429, 0x7, 0x40, 0x2, 0x2, 0x428, 0x416, 0x3, 
    0x2, 0x2, 0x2, 0x428, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x428, 0x422, 0x3, 
    0x2, 0x2, 0x2, 0x429, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x42a, 0x42b, 0x8, 0x54, 
    0x1, 0x2, 0x42b, 0x44a, 0x5, 0xae, 0x58, 0x2, 0x42c, 0x44a, 0x5, 0xa4, 
    0x53, 0x2, 0x42d, 0x42e, 0x7, 0x21, 0x2, 0x2, 0x42e, 0x44a, 0x5, 0xb2, 
    0x5a, 0x2, 0x42f, 0x430, 0x7, 0x3f, 0x2, 0x2, 0x430, 0x431, 0x5, 0xc6, 
    0x64, 0x2, 0x431, 0x432, 0x7, 0x40, 0x2, 0x2, 0x432, 0x433, 0x5, 0xa6, 
    0x54, 0x17, 0x433, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x434, 0x435, 0x9, 0x5, 
    0x2, 0x2, 0x435, 0x44a, 0x5, 0xa6, 0x54, 0x15, 0x436, 0x437, 0x9, 0x6, 
    0x2, 0x2, 0x437, 0x44a, 0x5, 0xa6, 0x54, 0x14, 0x438, 0x44a, 0x5, 0xa8, 
    0x55, 0x2, 0x439, 0x43a, 0x5, 0xc6, 0x64, 0x2, 0x43a, 0x440, 0x7, 0x6b, 
    0x2, 0x2, 0x43b, 0x43d, 0x5, 0xca, 0x66, 0x2, 0x43c, 0x43b, 0x3, 0x2, 
    0x2, 0x2, 0x43c, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x3, 0x2, 
    0x2, 0x2, 0x43e, 0x441, 0x7, 0x71, 0x2, 0x2, 0x43f, 0x441, 0x7, 0x21, 
    0x2, 0x2, 0x440, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x440, 0x43f, 0x3, 0x2, 
    0x2, 0x2, 0x441, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x442, 0x443, 0x5, 0xb0, 
    0x59, 0x2, 0x443, 0x445, 0x7, 0x6b, 0x2, 0x2, 0x444, 0x446, 0x5, 0xca, 
    0x66, 0x2, 0x445, 0x444, 0x3, 0x2, 0x2, 0x2, 0x445, 0x446, 0x3, 0x2, 
    0x2, 0x2, 0x446, 0x447, 0x3, 0x2, 0x2, 0x2, 0x447, 0x448, 0x7, 0x21, 
    0x2, 0x2, 0x448, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x449, 0x42a, 0x3, 0x2, 
    0x2, 0x2, 0x449, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x449, 0x42d, 0x3, 0x2, 
    0x2, 0x2, 0x449, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x449, 0x434, 0x3, 0x2, 
    0x2, 0x2, 0x449, 0x436, 0x3, 0x2, 0x2, 0x2, 0x449, 0x438, 0x3, 0x2, 
    0x2, 0x2, 0x449, 0x439, 0x3, 0x2, 0x2, 0x2, 0x449, 0x442, 0x3, 0x2, 
    0x2, 0x2, 0x44a, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x44c, 0xc, 0x13, 
    0x2, 0x2, 0x44c, 0x44d, 0x9, 0x7, 0x2, 0x2, 0x44d, 0x49a, 0x5, 0xa6, 
    0x54, 0x14, 0x44e, 0x44f, 0xc, 0x12, 0x2, 0x2, 0x44f, 0x450, 0x9, 0x8, 
    0x2, 0x2, 0x450, 0x49a, 0x5, 0xa6, 0x54, 0x13, 0x451, 0x459, 0xc, 0x11, 
    0x2, 0x2, 0x452, 0x453, 0x7, 0x4a, 0x2, 0x2, 0x453, 0x45a, 0x7, 0x4a, 
    0x2, 0x2, 0x454, 0x455, 0x7, 0x49, 0x2, 0x2, 0x455, 0x456, 0x7, 0x49, 
    0x2, 0x2, 0x456, 0x45a, 0x7, 0x49, 0x2, 0x2, 0x457, 0x458, 0x7, 0x49, 
    0x2, 0x2, 0x458, 0x45a, 0x7, 0x49, 0x2, 0x2, 0x459, 0x452, 0x3, 0x2, 
    0x2, 0x2, 0x459, 0x454, 0x3, 0x2, 0x2, 0x2, 0x459, 0x457, 0x3, 0x2, 
    0x2, 0x2, 0x45a, 0x45b, 0x3, 0x2, 0x2, 0x2, 0x45b, 0x49a, 0x5, 0xa6, 
    0x54, 0x12, 0x45c, 0x45d, 0xc, 0x10, 0x2, 0x2, 0x45d, 0x45e, 0x9, 0x9, 
    0x2, 0x2, 0x45e, 0x49a, 0x5, 0xa6, 0x54, 0x11, 0x45f, 0x460, 0xc, 0xe, 
    0x2, 0x2, 0x460, 0x461, 0x9, 0xa, 0x2, 0x2, 0x461, 0x49a, 0x5, 0xa6, 
    0x54, 0xf, 0x462, 0x463, 0xc, 0xd, 0x2, 0x2, 0x463, 0x464, 0x7, 0x5b, 
    0x2, 0x2, 0x464, 0x49a, 0x5, 0xa6, 0x54, 0xe, 0x465, 0x466, 0xc, 0xc, 
    0x2, 0x2, 0x466, 0x467, 0x7, 0x5d, 0x2, 0x2, 0x467, 0x49a, 0x5, 0xa6, 
    0x54, 0xd, 0x468, 0x469, 0xc, 0xb, 0x2, 0x2, 0x469, 0x46a, 0x7, 0x5c, 
    0x2, 0x2, 0x46a, 0x49a, 0x5, 0xa6, 0x54, 0xc, 0x46b, 0x46c, 0xc, 0xa, 
    0x2, 0x2, 0x46c, 0x46d, 0x7, 0x53, 0x2, 0x2, 0x46d, 0x49a, 0x5, 0xa6, 
    0x54, 0xb, 0x46e, 0x46f, 0xc, 0x9, 0x2, 0x2, 0x46f, 0x470, 0x7, 0x54, 
    0x2, 0x2, 0x470, 0x49a, 0x5, 0xa6, 0x54, 0xa, 0x471, 0x472, 0xc, 0x8, 
    0x2, 0x2, 0x472, 0x473, 0x7, 0x4d, 0x2, 0x2, 0x473, 0x474, 0x5, 0xa6, 
    0x54, 0x2, 0x474, 0x475, 0x7, 0x4e, 0x2, 0x2, 0x475, 0x476, 0x5, 0xa6, 
    0x54, 0x9, 0x476, 0x49a, 0x3, 0x2, 0x2, 0x2, 0x477, 0x478, 0xc, 0x7, 
    0x2, 0x2, 0x478, 0x479, 0x9, 0xb, 0x2, 0x2, 0x479, 0x49a, 0x5, 0xa6, 
    0x54, 0x7, 0x47a, 0x47b, 0xc, 0x1b, 0x2, 0x2, 0x47b, 0x487, 0x7, 0x47, 
    0x2, 0x2, 0x47c, 0x488, 0x7, 0x71, 0x2, 0x2, 0x47d, 0x488, 0x5, 0xa4, 
    0x53, 0x2, 0x47e, 0x488, 0x7, 0x2d, 0x2, 0x2, 0x47f, 0x481, 0x7, 0x21, 
    0x2, 0x2, 0x480, 0x482, 0x5, 0xc2, 0x62, 0x2, 0x481, 0x480, 0x3, 0x2, 
    0x2, 0x2, 0x481, 0x482, 0x3, 0x2, 0x2, 0x2, 0x482, 0x483, 0x3, 0x2, 
    0x2, 0x2, 0x483, 0x488, 0x5, 0xb6, 0x5c, 0x2, 0x484, 0x485, 0x7, 0x2a, 
    0x2, 0x2, 0x485, 0x488, 0x5, 0xcc, 0x67, 0x2, 0x486, 0x488, 0x5, 0xbc, 
    0x5f, 0x2, 0x487, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x487, 0x47d, 0x3, 0x2, 
    0x2, 0x2, 0x487, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x487, 0x47f, 0x3, 0x2, 
    0x2, 0x2, 0x487, 0x484, 0x3, 0x2, 0x2, 0x2, 0x487, 0x486, 0x3, 0x2, 
    0x2, 0x2, 0x488, 0x49a, 0x3, 0x2, 0x2, 0x2, 0x489, 0x48a, 0xc, 0x1a, 
    0x2, 0x2, 0x48a, 0x48b, 0x7, 0x43, 0x2, 0x2, 0x48b, 0x48c, 0x5, 0xa6, 
    0x54, 0x2, 0x48c, 0x48d, 0x7, 0x44, 0x2, 0x2, 0x48d, 0x49a, 0x3, 0x2, 
    0x2, 0x2, 0x48e, 0x48f, 0xc, 0x16, 0x2, 0x2, 0x48f, 0x49a, 0x9, 0xc, 
    0x2, 0x2, 0x490, 0x491, 0xc, 0xf, 0x2, 0x2, 0x491, 0x492, 0x7, 0x1c, 
    0x2, 0x2, 0x492, 0x49a, 0x5, 0xc6, 0x64, 0x2, 0x493, 0x494, 0xc, 0x5, 
    0x2, 0x2, 0x494, 0x496, 0x7, 0x6b, 0x2, 0x2, 0x495, 0x497, 0x5, 0xca, 
    0x66, 0x2, 0x496, 0x495, 0x3, 0x2, 0x2, 0x2, 0x496, 0x497, 0x3, 0x2, 
    0x2, 0x2, 0x497, 0x498, 0x3, 0x2, 0x2, 0x2, 0x498, 0x49a, 0x7, 0x71, 
    0x2, 0x2, 0x499, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x499, 0x44e, 0x3, 0x2, 
    0x2, 0x2, 0x499, 0x451, 0x3, 0x2, 0x2, 0x2, 0x499, 0x45c, 0x3, 0x2, 
    0x2, 0x2, 0x499, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x499, 0x462, 0x3, 0x2, 
    0x2, 0x2, 0x499, 0x465, 0x3, 0x2, 0x2, 0x2, 0x499, 0x468, 0x3, 0x2, 
    0x2, 0x2, 0x499, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x499, 0x46e, 0x3, 0x2, 
    0x2, 0x2, 0x499, 0x471, 0x3, 0x2, 0x2, 0x2, 0x499, 0x477, 0x3, 0x2, 
    0x2, 0x2, 0x499, 0x47a, 0x3, 0x2, 0x2, 0x2, 0x499, 0x489, 0x3, 0x2, 
    0x2, 0x2, 0x499, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x499, 0x490, 0x3, 0x2, 
    0x2, 0x2, 0x499, 0x493, 0x3, 0x2, 0x2, 0x2, 0x49a, 0x49d, 0x3, 0x2, 
    0x2, 0x2, 0x49b, 0x499, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x49c, 0x3, 0x2, 
    0x2, 0x2, 0x49c, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x49d, 0x49b, 0x3, 0x2, 0x2, 
    0x2, 0x49e, 0x49f, 0x5, 0xaa, 0x56, 0x2, 0x49f, 0x4a0, 0x7, 0x6a, 0x2, 
    0x2, 0x4a0, 0x4a1, 0x5, 0xac, 0x57, 0x2, 0x4a1, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0x4a2, 0x4b3, 0x7, 0x71, 0x2, 0x2, 0x4a3, 0x4a5, 0x7, 0x3f, 0x2, 
    0x2, 0x4a4, 0x4a6, 0x5, 0x58, 0x2d, 0x2, 0x4a5, 0x4a4, 0x3, 0x2, 0x2, 
    0x2, 0x4a5, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x4a7, 0x3, 0x2, 0x2, 
    0x2, 0x4a7, 0x4b3, 0x7, 0x40, 0x2, 0x2, 0x4a8, 0x4a9, 0x7, 0x3f, 0x2, 
    0x2, 0x4a9, 0x4ae, 0x7, 0x71, 0x2, 0x2, 0x4aa, 0x4ab, 0x7, 0x46, 0x2, 
    0x2, 0x4ab, 0x4ad, 0x7, 0x71, 0x2, 0x2, 0x4ac, 0x4aa, 0x3, 0x2, 0x2, 
    0x2, 0x4ad, 0x4b0, 0x3, 0x2, 0x2, 0x2, 0x4ae, 0x4ac, 0x3, 0x2, 0x2, 
    0x2, 0x4ae, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4b1, 0x3, 0x2, 0x2, 
    0x2, 0x4b0, 0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4b3, 0x7, 0x40, 0x2, 
    0x2, 0x4b2, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4b2, 0x4a3, 0x3, 0x2, 0x2, 
    0x2, 0x4b2, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4b3, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0x4b4, 0x4b7, 0x5, 0xa6, 0x54, 0x2, 0x4b5, 0x4b7, 0x5, 0x80, 0x41, 0x2, 
    0x4b6, 0x4b4, 0x3, 0x2, 0x2, 0x2, 0x4b6, 0x4b5, 0x3, 0x2, 0x2, 0x2, 
    0x4b7, 0xad, 0x3, 0x2, 0x2, 0x2, 0x4b8, 0x4b9, 0x7, 0x3f, 0x2, 0x2, 
    0x4b9, 0x4ba, 0x5, 0xa6, 0x54, 0x2, 0x4ba, 0x4bb, 0x7, 0x40, 0x2, 0x2, 
    0x4bb, 0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4cb, 0x7, 0x2d, 0x2, 0x2, 
    0x4bd, 0x4cb, 0x7, 0x2a, 0x2, 0x2, 0x4be, 0x4cb, 0x5, 0x60, 0x31, 0x2, 
    0x4bf, 0x4cb, 0x7, 0x71, 0x2, 0x2, 0x4c0, 0x4c1, 0x5, 0x2e, 0x18, 0x2, 
    0x4c1, 0x4c2, 0x7, 0x47, 0x2, 0x2, 0x4c2, 0x4c3, 0x7, 0xb, 0x2, 0x2, 
    0x4c3, 0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4c8, 0x5, 0xc2, 0x62, 0x2, 
    0x4c5, 0x4c9, 0x5, 0xce, 0x68, 0x2, 0x4c6, 0x4c7, 0x7, 0x2d, 0x2, 0x2, 
    0x4c7, 0x4c9, 0x5, 0xd0, 0x69, 0x2, 0x4c8, 0x4c5, 0x3, 0x2, 0x2, 0x2, 
    0x4c8, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4cb, 0x3, 0x2, 0x2, 0x2, 
    0x4ca, 0x4b8, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4bc, 0x3, 0x2, 0x2, 0x2, 
    0x4ca, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4be, 0x3, 0x2, 0x2, 0x2, 
    0x4ca, 0x4bf, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4c0, 0x3, 0x2, 0x2, 0x2, 
    0x4ca, 0x4c4, 0x3, 0x2, 0x2, 0x2, 0x4cb, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x4cc, 
    0x4cd, 0x5, 0x50, 0x29, 0x2, 0x4cd, 0x4ce, 0x7, 0x47, 0x2, 0x2, 0x4ce, 
    0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4cc, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
    0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4d1, 
    0x4d3, 0x5, 0x66, 0x34, 0x2, 0x4d2, 0x4d1, 0x3, 0x2, 0x2, 0x2, 0x4d3, 
    0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d4, 
    0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4d5, 0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4d6, 
    0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4d7, 0x4d9, 0x7, 0x71, 0x2, 0x2, 0x4d8, 
    0x4da, 0x5, 0xca, 0x66, 0x2, 0x4d9, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4d9, 
    0x4da, 0x3, 0x2, 0x2, 0x2, 0x4da, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x4dc, 
    0x5, 0xc2, 0x62, 0x2, 0x4dc, 0x4dd, 0x5, 0xb4, 0x5b, 0x2, 0x4dd, 0x4de, 
    0x5, 0xba, 0x5e, 0x2, 0x4de, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4df, 0x4e2, 
    0x5, 0xb4, 0x5b, 0x2, 0x4e0, 0x4e3, 0x5, 0xb8, 0x5d, 0x2, 0x4e1, 0x4e3, 
    0x5, 0xba, 0x5e, 0x2, 0x4e2, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e1, 
    0x3, 0x2, 0x2, 0x2, 0x4e3, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4e4, 0x4db, 
    0x3, 0x2, 0x2, 0x2, 0x4e4, 0x4df, 0x3, 0x2, 0x2, 0x2, 0x4e5, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0x4e6, 0x4e8, 0x7, 0x71, 0x2, 0x2, 0x4e7, 0x4e9, 0x5, 
    0xbe, 0x60, 0x2, 0x4e8, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e9, 0x3, 
    0x2, 0x2, 0x2, 0x4e9, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4eb, 0x7, 
    0x47, 0x2, 0x2, 0x4eb, 0x4ed, 0x7, 0x71, 0x2, 0x2, 0x4ec, 0x4ee, 0x5, 
    0xbe, 0x60, 0x2, 0x4ed, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x4ed, 0x4ee, 0x3, 
    0x2, 0x2, 0x2, 0x4ee, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4ef, 0x4ea, 0x3, 
    0x2, 0x2, 0x2, 0x4f0, 0x4f3, 0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4ef, 0x3, 
    0x2, 0x2, 0x2, 0x4f1, 0x4f2, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f6, 0x3, 
    0x2, 0x2, 0x2, 0x4f3, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4f6, 0x5, 
    0xc8, 0x65, 0x2, 0x4f5, 0x4e6, 0x3, 0x2, 0x2, 0x2, 0x4f5, 0x4f4, 0x3, 
    0x2, 0x2, 0x2, 0x4f6, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f9, 0x7, 0x71, 
    0x2, 0x2, 0x4f8, 0x4fa, 0x5, 0xc0, 0x61, 0x2, 0x4f9, 0x4f8, 0x3, 0x2, 
    0x2, 0x2, 0x4f9, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4fb, 0x3, 0x2, 
    0x2, 0x2, 0x4fb, 0x4fc, 0x5, 0xba, 0x5e, 0x2, 0x4fc, 0xb7, 0x3, 0x2, 
    0x2, 0x2, 0x4fd, 0x519, 0x7, 0x43, 0x2, 0x2, 0x4fe, 0x503, 0x7, 0x44, 
    0x2, 0x2, 0x4ff, 0x500, 0x7, 0x43, 0x2, 0x2, 0x500, 0x502, 0x7, 0x44, 
    0x2, 0x2, 0x501, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0x502, 0x505, 0x3, 0x2, 
    0x2, 0x2, 0x503, 0x501, 0x3, 0x2, 0x2, 0x2, 0x503, 0x504, 0x3, 0x2, 
    0x2, 0x2, 0x504, 0x506, 0x3, 0x2, 0x2, 0x2, 0x505, 0x503, 0x3, 0x2, 
    0x2, 0x2, 0x506, 0x51a, 0x5, 0x4e, 0x28, 0x2, 0x507, 0x508, 0x5, 0xa6, 
    0x54, 0x2, 0x508, 0x50f, 0x7, 0x44, 0x2, 0x2, 0x509, 0x50a, 0x7, 0x43, 
    0x2, 0x2, 0x50a, 0x50b, 0x5, 0xa6, 0x54, 0x2, 0x50b, 0x50c, 0x7, 0x44, 
    0x2, 0x2, 0x50c, 0x50e, 0x3, 0x2, 0x2, 0x2, 0x50d, 0x509, 0x3, 0x2, 
    0x2, 0x2, 0x50e, 0x511, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x50d, 0x3, 0x2, 
    0x2, 0x2, 0x50f, 0x510, 0x3, 0x2, 0x2, 0x2, 0x510, 0x516, 0x3, 0x2, 
    0x2, 0x2, 0x511, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x512, 0x513, 0x7, 0x43, 
    0x2, 0x2, 0x513, 0x515, 0x7, 0x44, 0x2, 0x2, 0x514, 0x512, 0x3, 0x2, 
    0x2, 0x2, 0x515, 0x518, 0x3, 0x2, 0x2, 0x2, 0x516, 0x514, 0x3, 0x2, 
    0x2, 0x2, 0x516, 0x517, 0x3, 0x2, 0x2, 0x2, 0x517, 0x51a, 0x3, 0x2, 
    0x2, 0x2, 0x518, 0x516, 0x3, 0x2, 0x2, 0x2, 0x519, 0x4fe, 0x3, 0x2, 
    0x2, 0x2, 0x519, 0x507, 0x3, 0x2, 0x2, 0x2, 0x51a, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0x51b, 0x51d, 0x5, 0xd0, 0x69, 0x2, 0x51c, 0x51e, 0x5, 0x22, 0x12, 
    0x2, 0x51d, 0x51c, 0x3, 0x2, 0x2, 0x2, 0x51d, 0x51e, 0x3, 0x2, 0x2, 
    0x2, 0x51e, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x51f, 0x520, 0x5, 0xc2, 0x62, 
    0x2, 0x520, 0x521, 0x5, 0xce, 0x68, 0x2, 0x521, 0xbd, 0x3, 0x2, 0x2, 
    0x2, 0x522, 0x523, 0x7, 0x4a, 0x2, 0x2, 0x523, 0x526, 0x7, 0x49, 0x2, 
    0x2, 0x524, 0x526, 0x5, 0xca, 0x66, 0x2, 0x525, 0x522, 0x3, 0x2, 0x2, 
    0x2, 0x525, 0x524, 0x3, 0x2, 0x2, 0x2, 0x526, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0x527, 0x528, 0x7, 0x4a, 0x2, 0x2, 0x528, 0x52b, 0x7, 0x49, 0x2, 0x2, 
    0x529, 0x52b, 0x5, 0xc2, 0x62, 0x2, 0x52a, 0x527, 0x3, 0x2, 0x2, 0x2, 
    0x52a, 0x529, 0x3, 0x2, 0x2, 0x2, 0x52b, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x52c, 
    0x52d, 0x7, 0x4a, 0x2, 0x2, 0x52d, 0x52e, 0x5, 0xc4, 0x63, 0x2, 0x52e, 
    0x52f, 0x7, 0x49, 0x2, 0x2, 0x52f, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x530, 
    0x535, 0x5, 0xc6, 0x64, 0x2, 0x531, 0x532, 0x7, 0x46, 0x2, 0x2, 0x532, 
    0x534, 0x5, 0xc6, 0x64, 0x2, 0x533, 0x531, 0x3, 0x2, 0x2, 0x2, 0x534, 
    0x537, 0x3, 0x2, 0x2, 0x2, 0x535, 0x533, 0x3, 0x2, 0x2, 0x2, 0x535, 
    0x536, 0x3, 0x2, 0x2, 0x2, 0x536, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x537, 0x535, 
    0x3, 0x2, 0x2, 0x2, 0x538, 0x53a, 0x5, 0x66, 0x34, 0x2, 0x539, 0x538, 
    0x3, 0x2, 0x2, 0x2, 0x539, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x53a, 0x53d, 
    0x3, 0x2, 0x2, 0x2, 0x53b, 0x53e, 0x5, 0x50, 0x29, 0x2, 0x53c, 0x53e, 
    0x5, 0xc8, 0x65, 0x2, 0x53d, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x53d, 0x53c, 
    0x3, 0x2, 0x2, 0x2, 0x53e, 0x543, 0x3, 0x2, 0x2, 0x2, 0x53f, 0x540, 
    0x7, 0x43, 0x2, 0x2, 0x540, 0x542, 0x7, 0x44, 0x2, 0x2, 0x541, 0x53f, 
    0x3, 0x2, 0x2, 0x2, 0x542, 0x545, 0x3, 0x2, 0x2, 0x2, 0x543, 0x541, 
    0x3, 0x2, 0x2, 0x2, 0x543, 0x544, 0x3, 0x2, 0x2, 0x2, 0x544, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0x545, 0x543, 0x3, 0x2, 0x2, 0x2, 0x546, 0x547, 0x9, 
    0xd, 0x2, 0x2, 0x547, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x548, 0x549, 0x7, 0x4a, 
    0x2, 0x2, 0x549, 0x54e, 0x5, 0x52, 0x2a, 0x2, 0x54a, 0x54b, 0x7, 0x46, 
    0x2, 0x2, 0x54b, 0x54d, 0x5, 0x52, 0x2a, 0x2, 0x54c, 0x54a, 0x3, 0x2, 
    0x2, 0x2, 0x54d, 0x550, 0x3, 0x2, 0x2, 0x2, 0x54e, 0x54c, 0x3, 0x2, 
    0x2, 0x2, 0x54e, 0x54f, 0x3, 0x2, 0x2, 0x2, 0x54f, 0x551, 0x3, 0x2, 
    0x2, 0x2, 0x550, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x551, 0x552, 0x7, 0x49, 
    0x2, 0x2, 0x552, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x553, 0x55a, 0x5, 0xd0, 
    0x69, 0x2, 0x554, 0x555, 0x7, 0x47, 0x2, 0x2, 0x555, 0x557, 0x7, 0x71, 
    0x2, 0x2, 0x556, 0x558, 0x5, 0xd0, 0x69, 0x2, 0x557, 0x556, 0x3, 0x2, 
    0x2, 0x2, 0x557, 0x558, 0x3, 0x2, 0x2, 0x2, 0x558, 0x55a, 0x3, 0x2, 
    0x2, 0x2, 0x559, 0x553, 0x3, 0x2, 0x2, 0x2, 0x559, 0x554, 0x3, 0x2, 
    0x2, 0x2, 0x55a, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x55b, 0x55c, 0x7, 0x2a, 
    0x2, 0x2, 0x55c, 0x560, 0x5, 0xcc, 0x67, 0x2, 0x55d, 0x55e, 0x7, 0x71, 
    0x2, 0x2, 0x55e, 0x560, 0x5, 0xd0, 0x69, 0x2, 0x55f, 0x55b, 0x3, 0x2, 
    0x2, 0x2, 0x55f, 0x55d, 0x3, 0x2, 0x2, 0x2, 0x560, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0x561, 0x563, 0x7, 0x3f, 0x2, 0x2, 0x562, 0x564, 0x5, 0xa2, 0x52, 
    0x2, 0x563, 0x562, 0x3, 0x2, 0x2, 0x2, 0x563, 0x564, 0x3, 0x2, 0x2, 
    0x2, 0x564, 0x565, 0x3, 0x2, 0x2, 0x2, 0x565, 0x566, 0x7, 0x40, 0x2, 
    0x2, 0x566, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xad, 0xd3, 0xd8, 0xde, 0xe6, 
    0xef, 0xf4, 0xfb, 0x102, 0x105, 0x10c, 0x116, 0x11a, 0x11f, 0x123, 0x127, 
    0x131, 0x139, 0x13f, 0x146, 0x14d, 0x151, 0x154, 0x157, 0x160, 0x166, 
    0x16b, 0x16e, 0x174, 0x17a, 0x17e, 0x186, 0x18f, 0x196, 0x19c, 0x1a0, 
    0x1ab, 0x1b4, 0x1b9, 0x1bf, 0x1c3, 0x1cf, 0x1da, 0x1df, 0x1e8, 0x1f0, 
    0x1fa, 0x203, 0x20b, 0x210, 0x218, 0x21d, 0x227, 0x231, 0x237, 0x23e, 
    0x243, 0x24b, 0x24f, 0x251, 0x257, 0x25c, 0x260, 0x267, 0x269, 0x270, 
    0x275, 0x27e, 0x283, 0x286, 0x28b, 0x294, 0x2a0, 0x2a9, 0x2b4, 0x2b7, 
    0x2be, 0x2c8, 0x2d0, 0x2d3, 0x2d6, 0x2e3, 0x2eb, 0x2f0, 0x2f8, 0x2fc, 
    0x300, 0x304, 0x306, 0x30a, 0x310, 0x31b, 0x325, 0x32a, 0x333, 0x338, 
    0x33b, 0x342, 0x34b, 0x362, 0x365, 0x368, 0x370, 0x374, 0x37c, 0x382, 
    0x38d, 0x396, 0x39b, 0x3a5, 0x3ac, 0x3b9, 0x3c2, 0x3cb, 0x3d1, 0x3dc, 
    0x3e1, 0x3e6, 0x3eb, 0x3ef, 0x3f3, 0x3f7, 0x3f9, 0x3fd, 0x402, 0x413, 
    0x419, 0x41f, 0x425, 0x428, 0x43c, 0x440, 0x445, 0x449, 0x459, 0x481, 
    0x487, 0x496, 0x499, 0x49b, 0x4a5, 0x4ae, 0x4b2, 0x4b6, 0x4c8, 0x4ca, 
    0x4cf, 0x4d4, 0x4d9, 0x4e2, 0x4e4, 0x4e8, 0x4ed, 0x4f1, 0x4f5, 0x4f9, 
    0x503, 0x50f, 0x516, 0x519, 0x51d, 0x525, 0x52a, 0x535, 0x539, 0x53d, 
    0x543, 0x54e, 0x557, 0x559, 0x55f, 0x563, 
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
