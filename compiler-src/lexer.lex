%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"

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
illegalIdentifier                       ({figure})({letter}|_|{figure}|$)+

%%

"\n"                                    line++;
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
"=="                                    { return EQ; }
"!="                                    { return NEQ; }
"<"                                     { return LT; }
">"                                     { return GT; }
"<="                                    { return LE; }
">="                                    { return GE; }
"+="                                    { return PLUS_ASSIGN; }
"-="                                    { return MINUS_ASSIGN; }
"*="                                    { return TIMES_ASSIGN; }
"/="                                    { return DIVIDE_ASSIGN; }
"&="                                    { return BITWISE_AND_ASSIGN; }
"|="                                    { return BITWISE_OR_ASSIGN; }
"^="                                    { return XOR_ASSIGN; }
"%="                                    { return MODULO_ASSIGN; }
"++"                                    { return PLUS_PLUS; }
"--"                                    { return MINUS_MINUS; }
"!"                                     { return NOT; } 
"+"                                     { return PLUS; }
"-"                                     { return MINUS; }
"*"                                     { return TIMES; }
"/"                                     { return DIVIDE; }
"%"                                     { return MODULO; }
"="                                     { return ASSIGN; }
"&&"                                    { return AND; }
"&"                                     { return BITWISE_AND; }
"||"                                    { return OR; }
"|"                                     { return BITWISE_OR; }
"^"                                     { return XOR; }
"?"                                     { return TERNARY_IF; }
":"                                     { return TERNARY_ELSE; }
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
{identifier}                           { return IDENTIFIER; }
{number}                               { return NUMBER; }
.                                      { error ("Invalid symbol"); yyterminate();}

%%

int yywrap()
{
    return 1;
}