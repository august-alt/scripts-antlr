
// Generated from Scripts.antlr by ANTLR 4.9.2


#include "ScriptsVisitor.h"

#include "ScriptsParser.h"


using namespace antlrcpp;
using namespace antlr4;

ScriptsParser::ScriptsParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ScriptsParser::~ScriptsParser() {
  delete _interpreter;
}

std::string ScriptsParser::getGrammarFileName() const {
  return "Scripts.antlr";
}

const std::vector<std::string>& ScriptsParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ScriptsParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InifileContext ------------------------------------------------------------------

ScriptsParser::InifileContext::InifileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ScriptsParser::WhitespaceContext *> ScriptsParser::InifileContext::whitespace() {
  return getRuleContexts<ScriptsParser::WhitespaceContext>();
}

ScriptsParser::WhitespaceContext* ScriptsParser::InifileContext::whitespace(size_t i) {
  return getRuleContext<ScriptsParser::WhitespaceContext>(i);
}

ScriptsParser::SectionsContext* ScriptsParser::InifileContext::sections() {
  return getRuleContext<ScriptsParser::SectionsContext>(0);
}

tree::TerminalNode* ScriptsParser::InifileContext::EOF() {
  return getToken(ScriptsParser::EOF, 0);
}


size_t ScriptsParser::InifileContext::getRuleIndex() const {
  return ScriptsParser::RuleInifile;
}


antlrcpp::Any ScriptsParser::InifileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitInifile(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::InifileContext* ScriptsParser::inifile() {
  InifileContext *_localctx = _tracker.createInstance<InifileContext>(_ctx, getState());
  enterRule(_localctx, 0, ScriptsParser::RuleInifile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    whitespace();
    setState(45);
    sections();
    setState(46);
    whitespace();
    setState(47);
    match(ScriptsParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SectionsContext ------------------------------------------------------------------

ScriptsParser::SectionsContext::SectionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ScriptsParser::SectionContext *> ScriptsParser::SectionsContext::section() {
  return getRuleContexts<ScriptsParser::SectionContext>();
}

ScriptsParser::SectionContext* ScriptsParser::SectionsContext::section(size_t i) {
  return getRuleContext<ScriptsParser::SectionContext>(i);
}


size_t ScriptsParser::SectionsContext::getRuleIndex() const {
  return ScriptsParser::RuleSections;
}


antlrcpp::Any ScriptsParser::SectionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitSections(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::SectionsContext* ScriptsParser::sections() {
  SectionsContext *_localctx = _tracker.createInstance<SectionsContext>(_ctx, getState());
  enterRule(_localctx, 2, ScriptsParser::RuleSections);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(50); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(49);
              section();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(52); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhitespaceclassContext ------------------------------------------------------------------

ScriptsParser::WhitespaceclassContext::WhitespaceclassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ScriptsParser::CrContext* ScriptsParser::WhitespaceclassContext::cr() {
  return getRuleContext<ScriptsParser::CrContext>(0);
}

ScriptsParser::LfContext* ScriptsParser::WhitespaceclassContext::lf() {
  return getRuleContext<ScriptsParser::LfContext>(0);
}

ScriptsParser::WspContext* ScriptsParser::WhitespaceclassContext::wsp() {
  return getRuleContext<ScriptsParser::WspContext>(0);
}


size_t ScriptsParser::WhitespaceclassContext::getRuleIndex() const {
  return ScriptsParser::RuleWhitespaceclass;
}


antlrcpp::Any ScriptsParser::WhitespaceclassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitWhitespaceclass(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::WhitespaceclassContext* ScriptsParser::whitespaceclass() {
  WhitespaceclassContext *_localctx = _tracker.createInstance<WhitespaceclassContext>(_ctx, getState());
  enterRule(_localctx, 4, ScriptsParser::RuleWhitespaceclass);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(57);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ScriptsParser::CR: {
        enterOuterAlt(_localctx, 1);
        setState(54);
        cr();
        break;
      }

      case ScriptsParser::LF: {
        enterOuterAlt(_localctx, 2);
        setState(55);
        lf();
        break;
      }

      case ScriptsParser::SP:
      case ScriptsParser::HTAB: {
        enterOuterAlt(_localctx, 3);
        setState(56);
        wsp();
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

//----------------- WhitespaceContext ------------------------------------------------------------------

ScriptsParser::WhitespaceContext::WhitespaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ScriptsParser::WhitespaceclassContext *> ScriptsParser::WhitespaceContext::whitespaceclass() {
  return getRuleContexts<ScriptsParser::WhitespaceclassContext>();
}

ScriptsParser::WhitespaceclassContext* ScriptsParser::WhitespaceContext::whitespaceclass(size_t i) {
  return getRuleContext<ScriptsParser::WhitespaceclassContext>(i);
}


size_t ScriptsParser::WhitespaceContext::getRuleIndex() const {
  return ScriptsParser::RuleWhitespace;
}


antlrcpp::Any ScriptsParser::WhitespaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitWhitespace(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::WhitespaceContext* ScriptsParser::whitespace() {
  WhitespaceContext *_localctx = _tracker.createInstance<WhitespaceContext>(_ctx, getState());
  enterRule(_localctx, 6, ScriptsParser::RuleWhitespace);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(62);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(59);
        whitespaceclass(); 
      }
      setState(64);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpacedelimiterContext ------------------------------------------------------------------

ScriptsParser::SpacedelimiterContext::SpacedelimiterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ScriptsParser::WhitespaceclassContext *> ScriptsParser::SpacedelimiterContext::whitespaceclass() {
  return getRuleContexts<ScriptsParser::WhitespaceclassContext>();
}

ScriptsParser::WhitespaceclassContext* ScriptsParser::SpacedelimiterContext::whitespaceclass(size_t i) {
  return getRuleContext<ScriptsParser::WhitespaceclassContext>(i);
}


size_t ScriptsParser::SpacedelimiterContext::getRuleIndex() const {
  return ScriptsParser::RuleSpacedelimiter;
}


antlrcpp::Any ScriptsParser::SpacedelimiterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitSpacedelimiter(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::SpacedelimiterContext* ScriptsParser::spacedelimiter() {
  SpacedelimiterContext *_localctx = _tracker.createInstance<SpacedelimiterContext>(_ctx, getState());
  enterRule(_localctx, 8, ScriptsParser::RuleSpacedelimiter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(66); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(65);
              whitespaceclass();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(68); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SectionContext ------------------------------------------------------------------

ScriptsParser::SectionContext::SectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ScriptsParser::SectionheaderContext* ScriptsParser::SectionContext::sectionheader() {
  return getRuleContext<ScriptsParser::SectionheaderContext>(0);
}

ScriptsParser::KeysContext* ScriptsParser::SectionContext::keys() {
  return getRuleContext<ScriptsParser::KeysContext>(0);
}


size_t ScriptsParser::SectionContext::getRuleIndex() const {
  return ScriptsParser::RuleSection;
}


antlrcpp::Any ScriptsParser::SectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitSection(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::SectionContext* ScriptsParser::section() {
  SectionContext *_localctx = _tracker.createInstance<SectionContext>(_ctx, getState());
  enterRule(_localctx, 10, ScriptsParser::RuleSection);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    sectionheader();
    setState(71);
    keys();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SectionheaderContext ------------------------------------------------------------------

ScriptsParser::SectionheaderContext::SectionheaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ScriptsParser::WhitespaceContext* ScriptsParser::SectionheaderContext::whitespace() {
  return getRuleContext<ScriptsParser::WhitespaceContext>(0);
}

ScriptsParser::SectionnameContext* ScriptsParser::SectionheaderContext::sectionname() {
  return getRuleContext<ScriptsParser::SectionnameContext>(0);
}

ScriptsParser::SpacedelimiterContext* ScriptsParser::SectionheaderContext::spacedelimiter() {
  return getRuleContext<ScriptsParser::SpacedelimiterContext>(0);
}


size_t ScriptsParser::SectionheaderContext::getRuleIndex() const {
  return ScriptsParser::RuleSectionheader;
}


antlrcpp::Any ScriptsParser::SectionheaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitSectionheader(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::SectionheaderContext* ScriptsParser::sectionheader() {
  SectionheaderContext *_localctx = _tracker.createInstance<SectionheaderContext>(_ctx, getState());
  enterRule(_localctx, 12, ScriptsParser::RuleSectionheader);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    whitespace();
    setState(74);
    match(ScriptsParser::T__0);
    setState(75);
    sectionname();
    setState(76);
    match(ScriptsParser::T__1);
    setState(77);
    spacedelimiter();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SectionnameContext ------------------------------------------------------------------

ScriptsParser::SectionnameContext::SectionnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ScriptsParser::ToklogonContext* ScriptsParser::SectionnameContext::toklogon() {
  return getRuleContext<ScriptsParser::ToklogonContext>(0);
}

ScriptsParser::ToklogoffContext* ScriptsParser::SectionnameContext::toklogoff() {
  return getRuleContext<ScriptsParser::ToklogoffContext>(0);
}

ScriptsParser::TokstartupContext* ScriptsParser::SectionnameContext::tokstartup() {
  return getRuleContext<ScriptsParser::TokstartupContext>(0);
}

ScriptsParser::TokshutdownContext* ScriptsParser::SectionnameContext::tokshutdown() {
  return getRuleContext<ScriptsParser::TokshutdownContext>(0);
}


size_t ScriptsParser::SectionnameContext::getRuleIndex() const {
  return ScriptsParser::RuleSectionname;
}


antlrcpp::Any ScriptsParser::SectionnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitSectionname(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::SectionnameContext* ScriptsParser::sectionname() {
  SectionnameContext *_localctx = _tracker.createInstance<SectionnameContext>(_ctx, getState());
  enterRule(_localctx, 14, ScriptsParser::RuleSectionname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(83);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(79);
      toklogon();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(80);
      toklogoff();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(81);
      tokstartup();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(82);
      tokshutdown();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeysContext ------------------------------------------------------------------

ScriptsParser::KeysContext::KeysContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ScriptsParser::KeyContext *> ScriptsParser::KeysContext::key() {
  return getRuleContexts<ScriptsParser::KeyContext>();
}

ScriptsParser::KeyContext* ScriptsParser::KeysContext::key(size_t i) {
  return getRuleContext<ScriptsParser::KeyContext>(i);
}


size_t ScriptsParser::KeysContext::getRuleIndex() const {
  return ScriptsParser::RuleKeys;
}


antlrcpp::Any ScriptsParser::KeysContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitKeys(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::KeysContext* ScriptsParser::keys() {
  KeysContext *_localctx = _tracker.createInstance<KeysContext>(_ctx, getState());
  enterRule(_localctx, 16, ScriptsParser::RuleKeys);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(86); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(85);
              key();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(88); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyContext ------------------------------------------------------------------

ScriptsParser::KeyContext::KeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ScriptsParser::TokkeyContext* ScriptsParser::KeyContext::tokkey() {
  return getRuleContext<ScriptsParser::TokkeyContext>(0);
}

ScriptsParser::TokisContext* ScriptsParser::KeyContext::tokis() {
  return getRuleContext<ScriptsParser::TokisContext>(0);
}

ScriptsParser::TokvalueContext* ScriptsParser::KeyContext::tokvalue() {
  return getRuleContext<ScriptsParser::TokvalueContext>(0);
}


size_t ScriptsParser::KeyContext::getRuleIndex() const {
  return ScriptsParser::RuleKey;
}


antlrcpp::Any ScriptsParser::KeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitKey(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::KeyContext* ScriptsParser::key() {
  KeyContext *_localctx = _tracker.createInstance<KeyContext>(_ctx, getState());
  enterRule(_localctx, 18, ScriptsParser::RuleKey);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    tokkey();
    setState(91);
    tokis();
    setState(92);
    tokvalue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TokkeyContext ------------------------------------------------------------------

ScriptsParser::TokkeyContext::TokkeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ScriptsParser::WhitespaceContext* ScriptsParser::TokkeyContext::whitespace() {
  return getRuleContext<ScriptsParser::WhitespaceContext>(0);
}

std::vector<ScriptsParser::AlphaContext *> ScriptsParser::TokkeyContext::alpha() {
  return getRuleContexts<ScriptsParser::AlphaContext>();
}

ScriptsParser::AlphaContext* ScriptsParser::TokkeyContext::alpha(size_t i) {
  return getRuleContext<ScriptsParser::AlphaContext>(i);
}

std::vector<ScriptsParser::DigitContext *> ScriptsParser::TokkeyContext::digit() {
  return getRuleContexts<ScriptsParser::DigitContext>();
}

ScriptsParser::DigitContext* ScriptsParser::TokkeyContext::digit(size_t i) {
  return getRuleContext<ScriptsParser::DigitContext>(i);
}


size_t ScriptsParser::TokkeyContext::getRuleIndex() const {
  return ScriptsParser::RuleTokkey;
}


antlrcpp::Any ScriptsParser::TokkeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitTokkey(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::TokkeyContext* ScriptsParser::tokkey() {
  TokkeyContext *_localctx = _tracker.createInstance<TokkeyContext>(_ctx, getState());
  enterRule(_localctx, 20, ScriptsParser::RuleTokkey);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    whitespace();
    setState(97); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(97);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ScriptsParser::ALPHA: {
          setState(95);
          alpha();
          break;
        }

        case ScriptsParser::DIGIT: {
          setState(96);
          digit();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(99); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ScriptsParser::ALPHA

    || _la == ScriptsParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TokisContext ------------------------------------------------------------------

ScriptsParser::TokisContext::TokisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ScriptsParser::WhitespaceContext* ScriptsParser::TokisContext::whitespace() {
  return getRuleContext<ScriptsParser::WhitespaceContext>(0);
}


size_t ScriptsParser::TokisContext::getRuleIndex() const {
  return ScriptsParser::RuleTokis;
}


antlrcpp::Any ScriptsParser::TokisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitTokis(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::TokisContext* ScriptsParser::tokis() {
  TokisContext *_localctx = _tracker.createInstance<TokisContext>(_ctx, getState());
  enterRule(_localctx, 22, ScriptsParser::RuleTokis);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    whitespace();
    setState(102);
    match(ScriptsParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TokvalueContext ------------------------------------------------------------------

ScriptsParser::TokvalueContext::TokvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ScriptsParser::WhitespaceContext* ScriptsParser::TokvalueContext::whitespace() {
  return getRuleContext<ScriptsParser::WhitespaceContext>(0);
}

ScriptsParser::SpacedelimiterContext* ScriptsParser::TokvalueContext::spacedelimiter() {
  return getRuleContext<ScriptsParser::SpacedelimiterContext>(0);
}

std::vector<ScriptsParser::AlphaContext *> ScriptsParser::TokvalueContext::alpha() {
  return getRuleContexts<ScriptsParser::AlphaContext>();
}

ScriptsParser::AlphaContext* ScriptsParser::TokvalueContext::alpha(size_t i) {
  return getRuleContext<ScriptsParser::AlphaContext>(i);
}

std::vector<ScriptsParser::DigitContext *> ScriptsParser::TokvalueContext::digit() {
  return getRuleContexts<ScriptsParser::DigitContext>();
}

ScriptsParser::DigitContext* ScriptsParser::TokvalueContext::digit(size_t i) {
  return getRuleContext<ScriptsParser::DigitContext>(i);
}


size_t ScriptsParser::TokvalueContext::getRuleIndex() const {
  return ScriptsParser::RuleTokvalue;
}


antlrcpp::Any ScriptsParser::TokvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitTokvalue(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::TokvalueContext* ScriptsParser::tokvalue() {
  TokvalueContext *_localctx = _tracker.createInstance<TokvalueContext>(_ctx, getState());
  enterRule(_localctx, 24, ScriptsParser::RuleTokvalue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    whitespace();
    setState(108); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(108);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ScriptsParser::ALPHA: {
          setState(105);
          alpha();
          break;
        }

        case ScriptsParser::T__3: {
          setState(106);
          match(ScriptsParser::T__3);
          break;
        }

        case ScriptsParser::DIGIT: {
          setState(107);
          digit();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(110); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ScriptsParser::T__3)
      | (1ULL << ScriptsParser::ALPHA)
      | (1ULL << ScriptsParser::DIGIT))) != 0));
    setState(112);
    spacedelimiter();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ToklogonContext ------------------------------------------------------------------

ScriptsParser::ToklogonContext::ToklogonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ScriptsParser::WhitespaceContext *> ScriptsParser::ToklogonContext::whitespace() {
  return getRuleContexts<ScriptsParser::WhitespaceContext>();
}

ScriptsParser::WhitespaceContext* ScriptsParser::ToklogonContext::whitespace(size_t i) {
  return getRuleContext<ScriptsParser::WhitespaceContext>(i);
}


size_t ScriptsParser::ToklogonContext::getRuleIndex() const {
  return ScriptsParser::RuleToklogon;
}


antlrcpp::Any ScriptsParser::ToklogonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitToklogon(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::ToklogonContext* ScriptsParser::toklogon() {
  ToklogonContext *_localctx = _tracker.createInstance<ToklogonContext>(_ctx, getState());
  enterRule(_localctx, 26, ScriptsParser::RuleToklogon);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    whitespace();

    setState(115);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__4

    || _la == ScriptsParser::T__5)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(116);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__6

    || _la == ScriptsParser::T__7)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(117);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__8

    || _la == ScriptsParser::T__9)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(118);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__6

    || _la == ScriptsParser::T__7)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(119);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__10

    || _la == ScriptsParser::T__11)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(121);
    whitespace();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ToklogoffContext ------------------------------------------------------------------

ScriptsParser::ToklogoffContext::ToklogoffContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ScriptsParser::WhitespaceContext *> ScriptsParser::ToklogoffContext::whitespace() {
  return getRuleContexts<ScriptsParser::WhitespaceContext>();
}

ScriptsParser::WhitespaceContext* ScriptsParser::ToklogoffContext::whitespace(size_t i) {
  return getRuleContext<ScriptsParser::WhitespaceContext>(i);
}


size_t ScriptsParser::ToklogoffContext::getRuleIndex() const {
  return ScriptsParser::RuleToklogoff;
}


antlrcpp::Any ScriptsParser::ToklogoffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitToklogoff(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::ToklogoffContext* ScriptsParser::toklogoff() {
  ToklogoffContext *_localctx = _tracker.createInstance<ToklogoffContext>(_ctx, getState());
  enterRule(_localctx, 28, ScriptsParser::RuleToklogoff);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    whitespace();

    setState(124);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__4

    || _la == ScriptsParser::T__5)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(125);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__6

    || _la == ScriptsParser::T__7)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(126);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__8

    || _la == ScriptsParser::T__9)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(127);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__6

    || _la == ScriptsParser::T__7)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(128);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__12

    || _la == ScriptsParser::T__13)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(129);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__12

    || _la == ScriptsParser::T__13)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(131);
    whitespace();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TokstartupContext ------------------------------------------------------------------

ScriptsParser::TokstartupContext::TokstartupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ScriptsParser::WhitespaceContext *> ScriptsParser::TokstartupContext::whitespace() {
  return getRuleContexts<ScriptsParser::WhitespaceContext>();
}

ScriptsParser::WhitespaceContext* ScriptsParser::TokstartupContext::whitespace(size_t i) {
  return getRuleContext<ScriptsParser::WhitespaceContext>(i);
}


size_t ScriptsParser::TokstartupContext::getRuleIndex() const {
  return ScriptsParser::RuleTokstartup;
}


antlrcpp::Any ScriptsParser::TokstartupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitTokstartup(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::TokstartupContext* ScriptsParser::tokstartup() {
  TokstartupContext *_localctx = _tracker.createInstance<TokstartupContext>(_ctx, getState());
  enterRule(_localctx, 30, ScriptsParser::RuleTokstartup);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    whitespace();

    setState(134);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__14

    || _la == ScriptsParser::T__15)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(135);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__16

    || _la == ScriptsParser::T__17)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(136);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__18

    || _la == ScriptsParser::T__19)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(137);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__20

    || _la == ScriptsParser::T__21)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(138);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__16

    || _la == ScriptsParser::T__17)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(139);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__22

    || _la == ScriptsParser::T__23)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(140);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__24

    || _la == ScriptsParser::T__25)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(142);
    whitespace();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TokshutdownContext ------------------------------------------------------------------

ScriptsParser::TokshutdownContext::TokshutdownContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ScriptsParser::WhitespaceContext *> ScriptsParser::TokshutdownContext::whitespace() {
  return getRuleContexts<ScriptsParser::WhitespaceContext>();
}

ScriptsParser::WhitespaceContext* ScriptsParser::TokshutdownContext::whitespace(size_t i) {
  return getRuleContext<ScriptsParser::WhitespaceContext>(i);
}


size_t ScriptsParser::TokshutdownContext::getRuleIndex() const {
  return ScriptsParser::RuleTokshutdown;
}


antlrcpp::Any ScriptsParser::TokshutdownContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitTokshutdown(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::TokshutdownContext* ScriptsParser::tokshutdown() {
  TokshutdownContext *_localctx = _tracker.createInstance<TokshutdownContext>(_ctx, getState());
  enterRule(_localctx, 32, ScriptsParser::RuleTokshutdown);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    whitespace();

    setState(145);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__14

    || _la == ScriptsParser::T__15)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(146);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__26

    || _la == ScriptsParser::T__27)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(147);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__22

    || _la == ScriptsParser::T__23)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(148);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__16

    || _la == ScriptsParser::T__17)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(149);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__28

    || _la == ScriptsParser::T__29)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(150);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__6

    || _la == ScriptsParser::T__7)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(151);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__30

    || _la == ScriptsParser::T__31)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(152);
    _la = _input->LA(1);
    if (!(_la == ScriptsParser::T__10

    || _la == ScriptsParser::T__11)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(154);
    whitespace();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlphaContext ------------------------------------------------------------------

ScriptsParser::AlphaContext::AlphaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ScriptsParser::AlphaContext::ALPHA() {
  return getToken(ScriptsParser::ALPHA, 0);
}


size_t ScriptsParser::AlphaContext::getRuleIndex() const {
  return ScriptsParser::RuleAlpha;
}


antlrcpp::Any ScriptsParser::AlphaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitAlpha(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::AlphaContext* ScriptsParser::alpha() {
  AlphaContext *_localctx = _tracker.createInstance<AlphaContext>(_ctx, getState());
  enterRule(_localctx, 34, ScriptsParser::RuleAlpha);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(ScriptsParser::ALPHA);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DigitContext ------------------------------------------------------------------

ScriptsParser::DigitContext::DigitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ScriptsParser::DigitContext::DIGIT() {
  return getToken(ScriptsParser::DIGIT, 0);
}


size_t ScriptsParser::DigitContext::getRuleIndex() const {
  return ScriptsParser::RuleDigit;
}


antlrcpp::Any ScriptsParser::DigitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitDigit(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::DigitContext* ScriptsParser::digit() {
  DigitContext *_localctx = _tracker.createInstance<DigitContext>(_ctx, getState());
  enterRule(_localctx, 36, ScriptsParser::RuleDigit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    match(ScriptsParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LfContext ------------------------------------------------------------------

ScriptsParser::LfContext::LfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ScriptsParser::LfContext::LF() {
  return getToken(ScriptsParser::LF, 0);
}


size_t ScriptsParser::LfContext::getRuleIndex() const {
  return ScriptsParser::RuleLf;
}


antlrcpp::Any ScriptsParser::LfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitLf(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::LfContext* ScriptsParser::lf() {
  LfContext *_localctx = _tracker.createInstance<LfContext>(_ctx, getState());
  enterRule(_localctx, 38, ScriptsParser::RuleLf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(ScriptsParser::LF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CrContext ------------------------------------------------------------------

ScriptsParser::CrContext::CrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ScriptsParser::CrContext::CR() {
  return getToken(ScriptsParser::CR, 0);
}


size_t ScriptsParser::CrContext::getRuleIndex() const {
  return ScriptsParser::RuleCr;
}


antlrcpp::Any ScriptsParser::CrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitCr(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::CrContext* ScriptsParser::cr() {
  CrContext *_localctx = _tracker.createInstance<CrContext>(_ctx, getState());
  enterRule(_localctx, 40, ScriptsParser::RuleCr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(ScriptsParser::CR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WspContext ------------------------------------------------------------------

ScriptsParser::WspContext::WspContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ScriptsParser::WspContext::SP() {
  return getTokens(ScriptsParser::SP);
}

tree::TerminalNode* ScriptsParser::WspContext::SP(size_t i) {
  return getToken(ScriptsParser::SP, i);
}

std::vector<tree::TerminalNode *> ScriptsParser::WspContext::HTAB() {
  return getTokens(ScriptsParser::HTAB);
}

tree::TerminalNode* ScriptsParser::WspContext::HTAB(size_t i) {
  return getToken(ScriptsParser::HTAB, i);
}


size_t ScriptsParser::WspContext::getRuleIndex() const {
  return ScriptsParser::RuleWsp;
}


antlrcpp::Any ScriptsParser::WspContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptsVisitor*>(visitor))
    return parserVisitor->visitWsp(this);
  else
    return visitor->visitChildren(this);
}

ScriptsParser::WspContext* ScriptsParser::wsp() {
  WspContext *_localctx = _tracker.createInstance<WspContext>(_ctx, getState());
  enterRule(_localctx, 42, ScriptsParser::RuleWsp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(165); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(164);
              _la = _input->LA(1);
              if (!(_la == ScriptsParser::SP

              || _la == ScriptsParser::HTAB)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(167); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ScriptsParser::_decisionToDFA;
atn::PredictionContextCache ScriptsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ScriptsParser::_atn;
std::vector<uint16_t> ScriptsParser::_serializedATN;

std::vector<std::string> ScriptsParser::_ruleNames = {
  "inifile", "sections", "whitespaceclass", "whitespace", "spacedelimiter", 
  "section", "sectionheader", "sectionname", "keys", "key", "tokkey", "tokis", 
  "tokvalue", "toklogon", "toklogoff", "tokstartup", "tokshutdown", "alpha", 
  "digit", "lf", "cr", "wsp"
};

std::vector<std::string> ScriptsParser::_literalNames = {
  "", "'['", "']'", "'='", "'_'", "'L'", "'l'", "'O'", "'o'", "'G'", "'g'", 
  "'N'", "'n'", "'F'", "'f'", "'S'", "'s'", "'T'", "'t'", "'A'", "'a'", 
  "'R'", "'r'", "'U'", "'u'", "'P'", "'p'", "'H'", "'h'", "'D'", "'d'", 
  "'W'", "'w'", "", "", "'\u000A'", "'\u000D'", "'\u0020'", "'\u0009'"
};

std::vector<std::string> ScriptsParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "ALPHA", "DIGIT", 
  "LF", "CR", "SP", "HTAB"
};

dfa::Vocabulary ScriptsParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ScriptsParser::_tokenNames;

ScriptsParser::Initializer::Initializer() {
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

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x28, 0xac, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x3, 0x6, 0x3, 0x35, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x36, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3c, 0xa, 0x4, 0x3, 0x5, 0x7, 0x5, 
       0x3f, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x42, 0xb, 0x5, 0x3, 0x6, 0x6, 
       0x6, 0x45, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x46, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x56, 0xa, 
       0x9, 0x3, 0xa, 0x6, 0xa, 0x59, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x5a, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x6, 0xc, 0x64, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0x65, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x6, 
       0xe, 0x6f, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0x70, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x17, 0x6, 0x17, 0xa8, 0xa, 0x17, 0xd, 0x17, 0xe, 
       0x17, 0xa9, 0x3, 0x17, 0x2, 0x2, 0x18, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
       0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
       0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2, 0x11, 0x3, 0x2, 0x7, 0x8, 0x3, 
       0x2, 0x9, 0xa, 0x3, 0x2, 0xb, 0xc, 0x3, 0x2, 0xd, 0xe, 0x3, 0x2, 
       0xf, 0x10, 0x3, 0x2, 0x11, 0x12, 0x3, 0x2, 0x13, 0x14, 0x3, 0x2, 
       0x15, 0x16, 0x3, 0x2, 0x17, 0x18, 0x3, 0x2, 0x19, 0x1a, 0x3, 0x2, 
       0x1b, 0x1c, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x1f, 0x20, 0x3, 0x2, 
       0x21, 0x22, 0x3, 0x2, 0x27, 0x28, 0x2, 0xa4, 0x2, 0x2e, 0x3, 0x2, 
       0x2, 0x2, 0x4, 0x34, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3b, 0x3, 0x2, 0x2, 
       0x2, 0x8, 0x40, 0x3, 0x2, 0x2, 0x2, 0xa, 0x44, 0x3, 0x2, 0x2, 0x2, 
       0xc, 0x48, 0x3, 0x2, 0x2, 0x2, 0xe, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x10, 
       0x55, 0x3, 0x2, 0x2, 0x2, 0x12, 0x58, 0x3, 0x2, 0x2, 0x2, 0x14, 0x5c, 
       0x3, 0x2, 0x2, 0x2, 0x16, 0x60, 0x3, 0x2, 0x2, 0x2, 0x18, 0x67, 0x3, 
       0x2, 0x2, 0x2, 0x1a, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x74, 0x3, 0x2, 
       0x2, 0x2, 0x1e, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x20, 0x87, 0x3, 0x2, 0x2, 
       0x2, 0x22, 0x92, 0x3, 0x2, 0x2, 0x2, 0x24, 0x9e, 0x3, 0x2, 0x2, 0x2, 
       0x26, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x28, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x2a, 
       0xa4, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 
       0x5, 0x8, 0x5, 0x2, 0x2f, 0x30, 0x5, 0x4, 0x3, 0x2, 0x30, 0x31, 0x5, 
       0x8, 0x5, 0x2, 0x31, 0x32, 0x7, 0x2, 0x2, 0x3, 0x32, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0x33, 0x35, 0x5, 0xc, 0x7, 0x2, 0x34, 0x33, 0x3, 0x2, 0x2, 
       0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 
       0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0x5, 0x3, 0x2, 0x2, 0x2, 0x38, 
       0x3c, 0x5, 0x2a, 0x16, 0x2, 0x39, 0x3c, 0x5, 0x28, 0x15, 0x2, 0x3a, 
       0x3c, 0x5, 0x2c, 0x17, 0x2, 0x3b, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3b, 
       0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x7, 
       0x3, 0x2, 0x2, 0x2, 0x3d, 0x3f, 0x5, 0x6, 0x4, 0x2, 0x3e, 0x3d, 0x3, 
       0x2, 0x2, 0x2, 0x3f, 0x42, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 0x3, 0x2, 
       0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x9, 0x3, 0x2, 0x2, 
       0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x43, 0x45, 0x5, 0x6, 0x4, 0x2, 
       0x44, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 
       0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0xb, 
       0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x5, 0xe, 0x8, 0x2, 0x49, 0x4a, 0x5, 
       0x12, 0xa, 0x2, 0x4a, 0xd, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x5, 0x8, 
       0x5, 0x2, 0x4c, 0x4d, 0x7, 0x3, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x10, 
       0x9, 0x2, 0x4e, 0x4f, 0x7, 0x4, 0x2, 0x2, 0x4f, 0x50, 0x5, 0xa, 0x6, 
       0x2, 0x50, 0xf, 0x3, 0x2, 0x2, 0x2, 0x51, 0x56, 0x5, 0x1c, 0xf, 0x2, 
       0x52, 0x56, 0x5, 0x1e, 0x10, 0x2, 0x53, 0x56, 0x5, 0x20, 0x11, 0x2, 
       0x54, 0x56, 0x5, 0x22, 0x12, 0x2, 0x55, 0x51, 0x3, 0x2, 0x2, 0x2, 
       0x55, 0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 
       0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x11, 0x3, 0x2, 0x2, 0x2, 0x57, 0x59, 
       0x5, 0x14, 0xb, 0x2, 0x58, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 
       0x3, 0x2, 0x2, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 
       0x2, 0x2, 0x2, 0x5b, 0x13, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x5, 0x16, 
       0xc, 0x2, 0x5d, 0x5e, 0x5, 0x18, 0xd, 0x2, 0x5e, 0x5f, 0x5, 0x1a, 
       0xe, 0x2, 0x5f, 0x15, 0x3, 0x2, 0x2, 0x2, 0x60, 0x63, 0x5, 0x8, 0x5, 
       0x2, 0x61, 0x64, 0x5, 0x24, 0x13, 0x2, 0x62, 0x64, 0x5, 0x26, 0x14, 
       0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 
       0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 
       0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x17, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 
       0x5, 0x8, 0x5, 0x2, 0x68, 0x69, 0x7, 0x5, 0x2, 0x2, 0x69, 0x19, 0x3, 
       0x2, 0x2, 0x2, 0x6a, 0x6e, 0x5, 0x8, 0x5, 0x2, 0x6b, 0x6f, 0x5, 0x24, 
       0x13, 0x2, 0x6c, 0x6f, 0x7, 0x6, 0x2, 0x2, 0x6d, 0x6f, 0x5, 0x26, 
       0x14, 0x2, 0x6e, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 
       0x2, 0x2, 0x6e, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 
       0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 
       0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x5, 0xa, 0x6, 0x2, 0x73, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x5, 0x8, 0x5, 0x2, 0x75, 0x76, 
       0x9, 0x2, 0x2, 0x2, 0x76, 0x77, 0x9, 0x3, 0x2, 0x2, 0x77, 0x78, 0x9, 
       0x4, 0x2, 0x2, 0x78, 0x79, 0x9, 0x3, 0x2, 0x2, 0x79, 0x7a, 0x9, 0x5, 
       0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x5, 0x8, 0x5, 
       0x2, 0x7c, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x5, 0x8, 0x5, 0x2, 
       0x7e, 0x7f, 0x9, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x9, 0x3, 0x2, 0x2, 0x80, 
       0x81, 0x9, 0x4, 0x2, 0x2, 0x81, 0x82, 0x9, 0x3, 0x2, 0x2, 0x82, 0x83, 
       0x9, 0x6, 0x2, 0x2, 0x83, 0x84, 0x9, 0x6, 0x2, 0x2, 0x84, 0x85, 0x3, 
       0x2, 0x2, 0x2, 0x85, 0x86, 0x5, 0x8, 0x5, 0x2, 0x86, 0x1f, 0x3, 0x2, 
       0x2, 0x2, 0x87, 0x88, 0x5, 0x8, 0x5, 0x2, 0x88, 0x89, 0x9, 0x7, 0x2, 
       0x2, 0x89, 0x8a, 0x9, 0x8, 0x2, 0x2, 0x8a, 0x8b, 0x9, 0x9, 0x2, 0x2, 
       0x8b, 0x8c, 0x9, 0xa, 0x2, 0x2, 0x8c, 0x8d, 0x9, 0x8, 0x2, 0x2, 0x8d, 
       0x8e, 0x9, 0xb, 0x2, 0x2, 0x8e, 0x8f, 0x9, 0xc, 0x2, 0x2, 0x8f, 0x90, 
       0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x5, 0x8, 0x5, 0x2, 0x91, 0x21, 0x3, 
       0x2, 0x2, 0x2, 0x92, 0x93, 0x5, 0x8, 0x5, 0x2, 0x93, 0x94, 0x9, 0x7, 
       0x2, 0x2, 0x94, 0x95, 0x9, 0xd, 0x2, 0x2, 0x95, 0x96, 0x9, 0xb, 0x2, 
       0x2, 0x96, 0x97, 0x9, 0x8, 0x2, 0x2, 0x97, 0x98, 0x9, 0xe, 0x2, 0x2, 
       0x98, 0x99, 0x9, 0x3, 0x2, 0x2, 0x99, 0x9a, 0x9, 0xf, 0x2, 0x2, 0x9a, 
       0x9b, 0x9, 0x5, 0x2, 0x2, 0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 
       0x5, 0x8, 0x5, 0x2, 0x9d, 0x23, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 
       0x23, 0x2, 0x2, 0x9f, 0x25, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 
       0x24, 0x2, 0x2, 0xa1, 0x27, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 
       0x25, 0x2, 0x2, 0xa3, 0x29, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 
       0x26, 0x2, 0x2, 0xa5, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa8, 0x9, 
       0x10, 0x2, 0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 
       0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 
       0x2, 0x2, 0xaa, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xd, 0x36, 0x3b, 0x40, 
       0x46, 0x55, 0x5a, 0x63, 0x65, 0x6e, 0x70, 0xa9, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ScriptsParser::Initializer ScriptsParser::_init;
