%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"

#define YYSTYPE char*

int line = 1;

void error(char *msg) {
    fprintf(stderr, "Lexical error in line %d: %s: %s\n", line, msg, yytext);
}
%}

delim                                   ([\t]|" ")*
figure                                  [0-9]
figureNotNull                           [1-9]
number                                  -?(0|{figureNotNull}{figure}*)|-?({figure}*\.{figure}+|{figure}+\.)([eE][+-]?{figure}+)?[fFdD]?
letter                                  [a-zA-Z]
identifier                              ({letter}|$|_)({letter}|_|{figure}|$)*
illegalIdentifier                       {figure}+({letter}|_|$)+({letter}|_|$|{figure})*

%%

"\n"                                    line++;
{delim}                                 /* do nothing */
"const"                                 { yylval = (int)strdup(yytext); return CONST; }
"final"                                 { yylval = (int)strdup(yytext); return FINAL; }
"public"                                { yylval = (int)strdup(yytext); return PUBLIC; }
"private"                               { yylval = (int)strdup(yytext); return PRIVATE; }
"protected"                             { yylval = (int)strdup(yytext); return PROTECTED; }
"static"                                { yylval = (int)strdup(yytext); return STATIC; }
"class"                                 { yylval = (int)strdup(yytext); return CLASS; }
"interface"                             { yylval = (int)strdup(yytext); return INTERFACE; }
"enum"                                  { yylval = (int)strdup(yytext); return ENUM; }
"abstract"                              { yylval = (int)strdup(yytext); return ABSTRACT; }
"main"                                  { yylval = (int)strdup(yytext); return MAIN; }
"super"                                 { yylval = (int)strdup(yytext); return SUPER; }
"extends"                               { yylval = (int)strdup(yytext); return EXTENDS; }
"implements"                            { yylval = (int)strdup(yytext); return IMPLEMENTS; }
"assert"                                { yylval = (int)strdup(yytext); return ASSERT; }
"void"                                  { yylval = (int)strdup(yytext); return VOID; }
"try"                                   { yylval = (int)strdup(yytext); return TRY; }
"catch"                                 { yylval = (int)strdup(yytext); return CATCH; }
"throw"                                 { yylval = (int)strdup(yytext); return THROW; }
"throws"                                { yylval = (int)strdup(yytext); return THROWS; }
"finally"                               { yylval = (int)strdup(yytext); return FINALLY; }
"volatile"                              { yylval = (int)strdup(yytext); return VOLATILE; }
"transient"                             { yylval = (int)strdup(yytext); return TRANSIENT; }
"synchronized"                          { yylval = (int)strdup(yytext); return SYNCHRONIZED; }
"boolean"                               { yylval = (int)strdup(yytext); return BOOLEAN; }
"byte"                                  { yylval = (int)strdup(yytext); return BYTE; }
"char"                                  { yylval = (int)strdup(yytext); return CHAR; }
"short"                                 { yylval = (int)strdup(yytext); return SHORT; }
"String"                                { yylval = (int)strdup(yytext); return STRING; }
"int"                                   { yylval = (int)strdup(yytext); return INT; }
"long"                                  { yylval = (int)strdup(yytext); return LONG; }
"strictfp"                              { yylval = (int)strdup(yytext); return STRICTFP; }
"null"                                  { yylval = (int)strdup(yytext); return NULL_; }
"float"                                 { yylval = (int)strdup(yytext); return FLOAT; }
"double"                                { yylval = (int)strdup(yytext); return DOUBLE; }
"package"                               { yylval = (int)strdup(yytext); return PACKAGE; }
"true"                                  { yylval = (int)strdup(yytext); return TRUE; }
"false"                                 { yylval = (int)strdup(yytext); return FALSE; }
"if"                                    { yylval = (int)strdup(yytext); return IF; }
"else"                                  { yylval = (int)strdup(yytext); return ELSE; }
"for"                                   { yylval = (int)strdup(yytext); return FOR; }
"while"                                 { yylval = (int)strdup(yytext); return WHILE; }
"do"                                    { yylval = (int)strdup(yytext); return DO; }
"continue"                              { yylval = (int)strdup(yytext); return CONTINUE; }
"break"                                 { yylval = (int)strdup(yytext); return BREAK; }
"switch"                                { yylval = (int)strdup(yytext); return SWITCH; }
"case"                                  { yylval = (int)strdup(yytext); return CASE; }
"default"                               { yylval = (int)strdup(yytext); return DEFAULT; }
"goto"                                  { yylval = (int)strdup(yytext); return GOTO; }
"import"                                { yylval = (int)strdup(yytext); return IMPORT; }
"instanceof"                            { yylval = (int)strdup(yytext); return INSTANCEOF; }
"native"                                { yylval = (int)strdup(yytext); return NATIVE; }
"return"                                { yylval = (int)strdup(yytext); return RETURN; }
"this"                                  { yylval = (int)strdup(yytext); return THIS; }
"new"                                   { yylval = (int)strdup(yytext); return NEW; }
"("                                     { yylval = (int)strdup(yytext); return OPENPARENT; }
")"                                     { yylval = (int)strdup(yytext); return CLOSEPARENT; }
"["                                     { yylval = (int)strdup(yytext); return OPENSQRBRACK; }
"]"                                     { yylval = (int)strdup(yytext); return CLOSESQRBRACK; }
"{"                                     { yylval = (int)strdup(yytext); return OPENBRAC; }
"}"                                     { yylval = (int)strdup(yytext); return CLOSEBRAC; }
";"                                     { yylval = (int)strdup(yytext); return SEMICOLON; }
"."                                     { yylval = (int)strdup(yytext); return DOT; }
","                                     { yylval = (int)strdup(yytext); return COMMA; }
"=="                                    { yylval = (int)strdup(yytext); return EQ; }
"!="                                    { yylval = (int)strdup(yytext); return NEQ; }
"<"                                     { yylval = (int)strdup(yytext); return LT; }
">"                                     { yylval = (int)strdup(yytext); return GT; }
"<="                                    { yylval = (int)strdup(yytext); return LE; }
">="                                    { yylval = (int)strdup(yytext); return GE; }
"+="                                    { yylval = (int)strdup(yytext); return PLUS_ASSIGN; }
"-="                                    { yylval = (int)strdup(yytext); return MINUS_ASSIGN; }
"*="                                    { yylval = (int)strdup(yytext); return TIMES_ASSIGN; }
"/="                                    { yylval = (int)strdup(yytext); return DIVIDE_ASSIGN; }
"&="                                    { yylval = (int)strdup(yytext); return BITWISE_AND_ASSIGN; }
"|="                                    { yylval = (int)strdup(yytext); return BITWISE_OR_ASSIGN; }
"^="                                    { yylval = (int)strdup(yytext); return XOR_ASSIGN; }
"%="                                    { yylval = (int)strdup(yytext); return MODULO_ASSIGN; }
"++"                                    { yylval = (int)strdup(yytext); return PLUS_PLUS; }
"--"                                    { yylval = (int)strdup(yytext); return MINUS_MINUS; }
"!"                                     { yylval = (int)strdup(yytext); return NOT; } 
"+"                                     { yylval = (int)strdup(yytext); return PLUS; }
"-"                                     { yylval = (int)strdup(yytext); return MINUS; }
"*"                                     { yylval = (int)strdup(yytext); return TIMES; }
"/"                                     { yylval = (int)strdup(yytext); return DIVIDE; }
"%"                                     { yylval = (int)strdup(yytext); return MODULO; }
"="                                     { yylval = (int)strdup(yytext); return ASSIGN; }
"&&"                                    { yylval = (int)strdup(yytext); return AND; }
"&"                                     { yylval = (int)strdup(yytext); return BITWISE_AND; }
"||"                                    { yylval = (int)strdup(yytext); return OR; }
"|"                                     { yylval = (int)strdup(yytext); return BITWISE_OR; }
"^"                                     { yylval = (int)strdup(yytext); return XOR; }
"?"                                     { yylval = (int)strdup(yytext); return TERNARY_IF; }
":"                                     { yylval = (int)strdup(yytext); return TERNARY_ELSE; }
"/*"                                    {
                                             int insideComment = 1;
                                             while(insideComment) {
                                                  char c = input();
                                                  if(c == '*') {
                                                       char ch = input();
                                                       if(ch == '/') {
                                                       insideComment = 0;
                                                       }
                                                       else unput(ch);
                                                  }
                                                  else if(c == '\n') line++;
                                                  else if(c == EOF) {
                                                       error("Comment not closed");
                                                       insideComment = 0;
                                                  }
                                             }
                                        }
"//"                                   { while (input() != '\n'){} line++;}
"\""                                   {while (input() != '"'){} return TYPED_STRING; }
{illegalIdentifier}                    { error("Illegal identifier"); yyterminate();}
{identifier}                           { yylval = (int)strdup(yytext); return IDENTIFIER; }
{number}                               { yylval = (int)strdup(yytext); return NUMBER; }
.                                      { error ("Invalid symbol"); yyterminate();}

%%

int yywrap()
{
    return 1;
}