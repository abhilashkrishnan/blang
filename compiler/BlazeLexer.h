
#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  BlazeLexer : public antlr4::Lexer {
public:
  enum {
    ABSTRACT = 1, ASSERT = 2, BOOLEAN = 3, BREAK = 4, BYTE = 5, CASE = 6, 
    CATCH = 7, CHAR = 8, CLASS = 9, CONST = 10, CONTINUE = 11, DEFAULT = 12, 
    DO = 13, DOUBLE = 14, ELSE = 15, ENUM = 16, EXTENDS = 17, FINAL = 18, 
    FINALLY = 19, FLOAT = 20, FOR = 21, IF = 22, GOTO = 23, IMPLEMENTS = 24, 
    IMPORT = 25, INSTANCEOF = 26, INT = 27, INTERFACE = 28, LONG = 29, NATIVE = 30, 
    NEW = 31, PACKAGE = 32, PRIVATE = 33, PROTECTED = 34, PUBLIC = 35, RETURN = 36, 
    SHORT = 37, STATIC = 38, SUPER = 39, SWITCH = 40, SYNCHRONIZED = 41, 
    THIS = 42, THROW = 43, THROWS = 44, TRANSIENT = 45, TRY = 46, VOID = 47, 
    VOLATILE = 48, WHILE = 49, DECIMAL_LITERAL = 50, HEX_LITERAL = 51, OCT_LITERAL = 52, 
    BINARY_LITERAL = 53, FLOAT_LITERAL = 54, HEX_FLOAT_LITERAL = 55, BOOL_LITERAL = 56, 
    CHAR_LITERAL = 57, STRING_LITERAL = 58, NULL_LITERAL = 59, LPAREN = 60, 
    RPAREN = 61, LBRACE = 62, RBRACE = 63, LBRACK = 64, RBRACK = 65, SEMI = 66, 
    COMMA = 67, DOT = 68, ASSIGN = 69, GT = 70, LT = 71, BANG = 72, TILDE = 73, 
    QUESTION = 74, COLON = 75, EQUAL = 76, LE = 77, GE = 78, NOTEQUAL = 79, 
    AND = 80, OR = 81, INC = 82, DEC = 83, ADD = 84, SUB = 85, MUL = 86, 
    DIV = 87, BITAND = 88, BITOR = 89, CARET = 90, MOD = 91, ADD_ASSIGN = 92, 
    SUB_ASSIGN = 93, MUL_ASSIGN = 94, DIV_ASSIGN = 95, AND_ASSIGN = 96, 
    OR_ASSIGN = 97, XOR_ASSIGN = 98, MOD_ASSIGN = 99, LSHIFT_ASSIGN = 100, 
    RSHIFT_ASSIGN = 101, URSHIFT_ASSIGN = 102, AT = 103, ELLIPSIS = 104, 
    WS = 105, COMMENT = 106, LINE_COMMENT = 107, IDENTIFIER = 108
  };

  BlazeLexer(antlr4::CharStream *input);
  ~BlazeLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpptest
