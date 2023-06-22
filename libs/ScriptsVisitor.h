
// Generated from Scripts.antlr by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "ScriptsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ScriptsParser.
 */
class  ScriptsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ScriptsParser.
   */
    virtual antlrcpp::Any visitInifile(ScriptsParser::InifileContext *context) = 0;

    virtual antlrcpp::Any visitSections(ScriptsParser::SectionsContext *context) = 0;

    virtual antlrcpp::Any visitWhitespaceclass(ScriptsParser::WhitespaceclassContext *context) = 0;

    virtual antlrcpp::Any visitWhitespace(ScriptsParser::WhitespaceContext *context) = 0;

    virtual antlrcpp::Any visitSpacedelimiter(ScriptsParser::SpacedelimiterContext *context) = 0;

    virtual antlrcpp::Any visitSection(ScriptsParser::SectionContext *context) = 0;

    virtual antlrcpp::Any visitSectionheader(ScriptsParser::SectionheaderContext *context) = 0;

    virtual antlrcpp::Any visitSectionname(ScriptsParser::SectionnameContext *context) = 0;

    virtual antlrcpp::Any visitKeys(ScriptsParser::KeysContext *context) = 0;

    virtual antlrcpp::Any visitKey(ScriptsParser::KeyContext *context) = 0;

    virtual antlrcpp::Any visitTokkey(ScriptsParser::TokkeyContext *context) = 0;

    virtual antlrcpp::Any visitTokis(ScriptsParser::TokisContext *context) = 0;

    virtual antlrcpp::Any visitTokvalue(ScriptsParser::TokvalueContext *context) = 0;

    virtual antlrcpp::Any visitToklogon(ScriptsParser::ToklogonContext *context) = 0;

    virtual antlrcpp::Any visitToklogoff(ScriptsParser::ToklogoffContext *context) = 0;

    virtual antlrcpp::Any visitTokstartup(ScriptsParser::TokstartupContext *context) = 0;

    virtual antlrcpp::Any visitTokshutdown(ScriptsParser::TokshutdownContext *context) = 0;

    virtual antlrcpp::Any visitAlpha(ScriptsParser::AlphaContext *context) = 0;

    virtual antlrcpp::Any visitDigit(ScriptsParser::DigitContext *context) = 0;

    virtual antlrcpp::Any visitLf(ScriptsParser::LfContext *context) = 0;

    virtual antlrcpp::Any visitCr(ScriptsParser::CrContext *context) = 0;

    virtual antlrcpp::Any visitWsp(ScriptsParser::WspContext *context) = 0;


};

