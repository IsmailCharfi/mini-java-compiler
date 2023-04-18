%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"

void error(char *msg) {
    fprintf(stderr, "Lexical error in line %d: %s: %s\n", yylineno, msg, yytext);
}
%}

%option yylineno

delim                                   ([\t]|" ")*
figure                                  [0-9]
figureNotNull                           [1-9]
number                                  -?(0|{figureNotNull}{figure}*)|-?({figure}*\.{figure}+|{figure}+\.)([eE][+-]?{figure}+)?[fFdD]?
letter                                  [a-zA-Z]
identifier                              ({letter}|$|_)({letter}|_|{figure}|$)*
illegalIdentifier                       ({figure})({letter}|_|{figure}|$)*

%%

"\n"                                    ++yylineno;
{delim}                                 /* do nothing */
"const"                                 { return CONST; }
"final"                                 { return FINAL; }
"public"                                { return PUBLIC; }
"private"                               { return PRIVATE; }
"protected"                             { return PROTECTED; }
"static"                                { return STATIC; }
"class"                                 { return CLASS; }
"interface"                             { return INTERFACE; }
"enum"                                  { return ENUM; }
"abstract"                              { return ABSTRACT; }
"main"                                  { return MAIN; }
"super"                                 { return SUPER; }
"extends"                               { return EXTENDS; }
"implements"                            { return IMPLEMENTS; }
"assert"                                { return ASSERT; }
"void"                                  { return VOID; }
"try"                                   { return TRY; }
"catch"                                 { return CATCH; }
"throw"                                 { return THROW; }
"throws"                                { return THROWS; }
"finally"                               { return FINALLY; }
"volatile"                              { return VOLATILE; }
"transient"                             { return TRANSIENT; }
"synchronized"                          { return SYNCHRONIZED; }
"boolean"                               { return BOOLEAN; }
"byte"                                  { return BYTE; }
"char"                                  { return CHAR; }
"short"                                 { return SHORT; }
"String"                                { return STRING; }
"int"                                   { return INT; }
"long"                                  { return LONG; }
"strictfp"                              { return STRICTFP; }
"null"                                  { return NULL_; }
"float"                                 { return FLOAT; }
"double"                                { return DOUBLE; }
"package"                               { return PACKAGE; }
"true"                                  { return TRUE; }
"false"                                 { return FALSE; }
"if"                                    { return IF; }
"else"                                  { return ELSE; }
"for"                                   { return FOR; }
"while"                                 { return WHILE; }
"do"                                    { return DO; }
"continue"                              { return CONTINUE; }
"break"                                 { return BREAK; }
"switch"                                { return SWITCH; }
"case"                                  { return CASE; }
"default"                               { return DEFAULT; }
"goto"                                  { return GOTO; }
"import"                                { return IMPORT; }
"instanceof"                            { return INSTANCEOF; }
"native"                                { return NATIVE; }
"return"                                { return RETURN; }
"this"                                  { return THIS; }
"new"                                   { return NEW; }
"("                                     { return OPENPARENT; }
")"                                     { return CLOSEPARENT; }
"["                                     { return OPENSQRBRACK; }
"]"                                     { return CLOSESQRBRACK; }
"{"                                     { return OPENBRAC; }
"}"                                     { return CLOSEBRAC; }
";"                                     { return SEMICOLON; }
"."                                     { return DOT; }
","                                     { return COMMA; }
"+"                                     { return PLUS; }
"-"                                     { return MINUS; }
"*"                                     { return TIMES; }
"/"                                     { return DIVIDE; }
"%"                                     { return MODULO; }
"="                                     { return ASSIGN; }
"=="                                    { return EQ; }
"!="                                    { return NEQ; }
"<"                                     { return LT; }
">"                                     { return GT; }
"<="                                    { return LE; }
">="                                    { return GE; }
"/*"                                    {
                                             int insideComment = 1;
                                             while(insideComment) {
                                                  char c = input();
                                                  if(c == '*') {
                                                       char ch = input();
                                                       if(ch == '/') {
                                                       insideComment = 0;
                                                       return COMMENT;
                                                       }
                                                       else unput(ch);
                                                  }
                                                  else if(c == '\n') yylineno++;
                                                  else if(c == EOF) {
                                                       error("Error comment not closed");
                                                       insideComment = 0;
                                                  }
                                             }
                                        }
"//"                                   { while (input() != '\n'){} return COMMENT_LINE;}
"\""                                   {while (input() != '"'){} return TYPED_STRING; }
{illegalIdentifier}                    { error("Illegal identifier"); yyterminate();}
{identifier}                           { return IDENTIFIER; }
{number}                               { return NUMBER; }
.                                      { error ("Illegal character"); yyterminate();}

%%

int yywrap()
{
    return 1;
}