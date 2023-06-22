
// Generated from Scripts.antlr by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "ScriptsVisitor.h"


/**
 * This class provides an empty implementation of ScriptsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ScriptsBaseVisitor : public ScriptsVisitor {
public:

  virtual antlrcpp::Any visitInifile(ScriptsParser::InifileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSections(ScriptsParser::SectionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhitespaceclass(ScriptsParser::WhitespaceclassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhitespace(ScriptsParser::WhitespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpacedelimiter(ScriptsParser::SpacedelimiterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSection(ScriptsParser::SectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSectionheader(ScriptsParser::SectionheaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSectionname(ScriptsParser::SectionnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeys(ScriptsParser::KeysContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKey(ScriptsParser::KeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTokkey(ScriptsParser::TokkeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTokis(ScriptsParser::TokisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTokvalue(ScriptsParser::TokvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToklogon(ScriptsParser::ToklogonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToklogoff(ScriptsParser::ToklogoffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTokstartup(ScriptsParser::TokstartupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTokshutdown(ScriptsParser::TokshutdownContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlpha(ScriptsParser::AlphaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDigit(ScriptsParser::DigitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLf(ScriptsParser::LfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCr(ScriptsParser::CrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWsp(ScriptsParser::WspContext *ctx) override {
    return visitChildren(ctx);
  }


};

