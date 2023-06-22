
// Generated from Scripts.antlr by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  ScriptsParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    ALPHA = 33, DIGIT = 34, LF = 35, CR = 36, SP = 37, HTAB = 38
  };

  enum {
    RuleInifile = 0, RuleSections = 1, RuleWhitespaceclass = 2, RuleWhitespace = 3, 
    RuleSpacedelimiter = 4, RuleSection = 5, RuleSectionheader = 6, RuleSectionname = 7, 
    RuleKeys = 8, RuleKey = 9, RuleTokkey = 10, RuleTokis = 11, RuleTokvalue = 12, 
    RuleToklogon = 13, RuleToklogoff = 14, RuleTokstartup = 15, RuleTokshutdown = 16, 
    RuleAlpha = 17, RuleDigit = 18, RuleLf = 19, RuleCr = 20, RuleWsp = 21
  };

  explicit ScriptsParser(antlr4::TokenStream *input);
  ~ScriptsParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class InifileContext;
  class SectionsContext;
  class WhitespaceclassContext;
  class WhitespaceContext;
  class SpacedelimiterContext;
  class SectionContext;
  class SectionheaderContext;
  class SectionnameContext;
  class KeysContext;
  class KeyContext;
  class TokkeyContext;
  class TokisContext;
  class TokvalueContext;
  class ToklogonContext;
  class ToklogoffContext;
  class TokstartupContext;
  class TokshutdownContext;
  class AlphaContext;
  class DigitContext;
  class LfContext;
  class CrContext;
  class WspContext; 

  class  InifileContext : public antlr4::ParserRuleContext {
  public:
    InifileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WhitespaceContext *> whitespace();
    WhitespaceContext* whitespace(size_t i);
    SectionsContext *sections();
    antlr4::tree::TerminalNode *EOF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InifileContext* inifile();

  class  SectionsContext : public antlr4::ParserRuleContext {
  public:
    SectionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SectionContext *> section();
    SectionContext* section(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SectionsContext* sections();

  class  WhitespaceclassContext : public antlr4::ParserRuleContext {
  public:
    WhitespaceclassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CrContext *cr();
    LfContext *lf();
    WspContext *wsp();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhitespaceclassContext* whitespaceclass();

  class  WhitespaceContext : public antlr4::ParserRuleContext {
  public:
    WhitespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WhitespaceclassContext *> whitespaceclass();
    WhitespaceclassContext* whitespaceclass(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhitespaceContext* whitespace();

  class  SpacedelimiterContext : public antlr4::ParserRuleContext {
  public:
    SpacedelimiterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WhitespaceclassContext *> whitespaceclass();
    WhitespaceclassContext* whitespaceclass(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpacedelimiterContext* spacedelimiter();

  class  SectionContext : public antlr4::ParserRuleContext {
  public:
    SectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SectionheaderContext *sectionheader();
    KeysContext *keys();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SectionContext* section();

  class  SectionheaderContext : public antlr4::ParserRuleContext {
  public:
    SectionheaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WhitespaceContext *whitespace();
    SectionnameContext *sectionname();
    SpacedelimiterContext *spacedelimiter();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SectionheaderContext* sectionheader();

  class  SectionnameContext : public antlr4::ParserRuleContext {
  public:
    SectionnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ToklogonContext *toklogon();
    ToklogoffContext *toklogoff();
    TokstartupContext *tokstartup();
    TokshutdownContext *tokshutdown();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SectionnameContext* sectionname();

  class  KeysContext : public antlr4::ParserRuleContext {
  public:
    KeysContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeyContext *> key();
    KeyContext* key(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeysContext* keys();

  class  KeyContext : public antlr4::ParserRuleContext {
  public:
    KeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TokkeyContext *tokkey();
    TokisContext *tokis();
    TokvalueContext *tokvalue();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyContext* key();

  class  TokkeyContext : public antlr4::ParserRuleContext {
  public:
    TokkeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WhitespaceContext *whitespace();
    std::vector<AlphaContext *> alpha();
    AlphaContext* alpha(size_t i);
    std::vector<DigitContext *> digit();
    DigitContext* digit(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TokkeyContext* tokkey();

  class  TokisContext : public antlr4::ParserRuleContext {
  public:
    TokisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WhitespaceContext *whitespace();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TokisContext* tokis();

  class  TokvalueContext : public antlr4::ParserRuleContext {
  public:
    TokvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WhitespaceContext *whitespace();
    SpacedelimiterContext *spacedelimiter();
    std::vector<AlphaContext *> alpha();
    AlphaContext* alpha(size_t i);
    std::vector<DigitContext *> digit();
    DigitContext* digit(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TokvalueContext* tokvalue();

  class  ToklogonContext : public antlr4::ParserRuleContext {
  public:
    ToklogonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WhitespaceContext *> whitespace();
    WhitespaceContext* whitespace(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ToklogonContext* toklogon();

  class  ToklogoffContext : public antlr4::ParserRuleContext {
  public:
    ToklogoffContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WhitespaceContext *> whitespace();
    WhitespaceContext* whitespace(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ToklogoffContext* toklogoff();

  class  TokstartupContext : public antlr4::ParserRuleContext {
  public:
    TokstartupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WhitespaceContext *> whitespace();
    WhitespaceContext* whitespace(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TokstartupContext* tokstartup();

  class  TokshutdownContext : public antlr4::ParserRuleContext {
  public:
    TokshutdownContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WhitespaceContext *> whitespace();
    WhitespaceContext* whitespace(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TokshutdownContext* tokshutdown();

  class  AlphaContext : public antlr4::ParserRuleContext {
  public:
    AlphaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALPHA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlphaContext* alpha();

  class  DigitContext : public antlr4::ParserRuleContext {
  public:
    DigitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGIT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DigitContext* digit();

  class  LfContext : public antlr4::ParserRuleContext {
  public:
    LfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LfContext* lf();

  class  CrContext : public antlr4::ParserRuleContext {
  public:
    CrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CrContext* cr();

  class  WspContext : public antlr4::ParserRuleContext {
  public:
    WspContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HTAB();
    antlr4::tree::TerminalNode* HTAB(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WspContext* wsp();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

