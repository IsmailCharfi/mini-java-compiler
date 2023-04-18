%{
	

#include <stdio.h>	
 			
int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;

int yyerror(char const *msg) {
	fprintf(stderr, "%s line %d\n", msg,yylineno);
	return 0;
}

%error-verbose

%}

%token  PUBLIC
%token  PRIVATE
%token  PROTECTED
%token  STATIC
%token  CLASS
%token  VOID
%token  MAIN
%token  EXTENDS
%token  IMPLEMENTS
%token  RETURN
%token  THIS
%token  NEW
%token  IF
%token  ELSE
%token  WHILE
%token  NUMBER
%token  DATATYPE
%token  OPENPARENT
%token  CLOSEPARENT
%token  OPENSQRBRACK
%token  CLOSESQRBRACK
%token  OPENBRAC
%token  CLOSEBRAC
%token  AND
%token  OR
%token  DOT
%token  SEMICOLON
%token  COMMA
%token  EQUAL
%token  FOR
%token  IDENTIFIER
%token  TYPEDSTRING
%token  COMMENT
%token  COMMENTLINE
%token  ARITHMETICOPERATOR
%token  COMPARAISONOPERATOR
%token  BINARYOPERATOR
%token  STRINGTYPE
 
%start program

%%
                                                           
program             : MainClass Classes           {printf("COMPILING finished with success\n");}
                    | Classes MainClass           {printf("COMPILING finished with success\n");}
                    | Classes {printf("COMPILING finished with success\n");}
                    ;

Classes             : SimpleClass Classes | ;

MainClass           : ClassDeclaration OPENBRAC Properties MethodDeclaration MainMethod CLOSEBRAC
                    | ClassDeclaration error Properties MethodDeclaration MainMethod CLOSEBRAC { yyerror (" Open bracket is missing  "); YYABORT;}
                    | ClassDeclaration OPENBRAC Properties MethodDeclaration MainMethod error { yyerror (" Close brackets is missing  "); YYABORT;}
                    ;

SimpleClass         : ClassDeclaration OPENBRAC Properties MethodDeclaration CLOSEBRAC
                    | ClassDeclaration OPENBRAC MethodDeclaration Properties CLOSEBRAC
                    | ClassDeclaration error Properties MethodDeclaration CLOSEBRAC { yyerror (" Open bracket is missing  "); YYABORT;}
                    | ClassDeclaration error MethodDeclaration Properties CLOSEBRAC { yyerror (" Open bracket is missing  "); YYABORT;}
                    | ClassDeclaration OPENBRAC Properties MethodDeclaration error { yyerror (" Close brackets is missing  "); YYABORT;}
                    | ClassDeclaration OPENBRAC MethodDeclaration Properties error { yyerror (" Close brackets is missing  "); YYABORT;}
                    ;

ClassDeclaration    : ClassIdentifier Extending Implementing
                    | ClassIdentifier Implementing Extending
                    | error Extending Implementing { yyerror (" class identifier is missing  "); YYABORT;}
                    | error Implementing Extending { yyerror (" class identifier is missing  "); YYABORT;}
                    ;

ClassIdentifier     : CLASS IDENTIFIER  {printf("success");}
                    | error IDENTIFIER   { printf("class"); yyerror (" Class keyword is missing  "); YYABORT;}
                    | CLASS error   { yyerror (" Identifier is missing  "); YYABORT;}
                    ;

Extending           : EXTENDS IDENTIFIER
                    | error IDENTIFIER        { yyerror (" Extends or implements keyword is missing  "); YYABORT;}
                    | EXTENDS error      { yyerror (" Identifier is missing  "); YYABORT;}
                    | 
                    ;

Implementing        : IMPLEMENTS IDENTIFIER
                    | error IDENTIFIER { yyerror (" Extends or implements keyword is missing  "); YYABORT;}
                    | IMPLEMENTS error { yyerror (" Identifier is missing  "); YYABORT;}
                    |
                    ;

Properties          : Property Properties | ;

Property            : DATATYPE IDENTIFIER SEMICOLON
                    | error IDENTIFIER SEMICOLON     { yyerror (" Valid Type is MISSING  "); YYABORT;}
                    | DATATYPE error  SEMICOLON      { yyerror (" Identifier is MISSING  "); YYABORT;}
                    | DATATYPE IDENTIFIER EQUAL InitValue SEMICOLON
                    | error IDENTIFIER EQUAL InitValue SEMICOLON   { yyerror (" Valid Type is MISSING  "); YYABORT;}
                    | DATATYPE error  EQUAL InitValue SEMICOLON      { yyerror (" Identifier is MISSING  "); YYABORT;}
                    | DATATYPE IDENTIFIER  error InitValue SEMICOLON      { yyerror (" equal is MISSING in init "); YYABORT;}
                    | DATATYPE IDENTIFIER  EQUAL error SEMICOLON      { yyerror (" init value is MISSING  "); YYABORT;}
                    ;

InitValue           : ;

MainMethod          : PUBLIC STATIC VOID MAIN OPENPARENT MainMethodParams CLOSEPARENT OPENBRAC Statement CLOSEBRAC
                    | PUBLIC STATIC VOID MAIN OPENPARENT MainMethodParams CLOSEPARENT OPENBRAC Statement CLOSEBRAC      { yyerror (" Open brackets is missing  "); YYABORT;}
                    | error STATIC VOID MAIN OPENPARENT MainMethodParams CLOSEPARENT OPENBRAC Statement CLOSEBRAC    { yyerror (" Public keyword is missing  "); YYABORT;}
                    | PUBLIC error VOID MAIN OPENPARENT MainMethodParams CLOSEPARENT OPENBRAC Statement CLOSEBRAC    { yyerror (" Static keyword is missing  "); YYABORT;}
                    | PUBLIC STATIC error MAIN OPENPARENT MainMethodParams CLOSEPARENT OPENBRAC Statement CLOSEBRAC  { yyerror (" Void keyword is missing  "); YYABORT;}
                    | PUBLIC STATIC VOID error OPENPARENT MainMethodParams CLOSEPARENT OPENBRAC Statement CLOSEBRAC  { yyerror (" Main keyword is missing  "); YYABORT;}
                    | PUBLIC STATIC VOID MAIN error MainMethodParams CLOSEPARENT OPENBRAC Statement CLOSEBRAC        { yyerror (" Open parentheses is missing  "); YYABORT;}
                    | PUBLIC STATIC VOID MAIN OPENPARENT MainMethodParams error OPENBRAC Statement CLOSEBRAC         { yyerror (" Close parentheses is missing  "); YYABORT;}
                    | PUBLIC STATIC VOID MAIN OPENPARENT MainMethodParams CLOSEPARENT error Statement CLOSEBRAC      { yyerror (" Open brackets is missing  "); YYABORT;}
                    | PUBLIC STATIC VOID MAIN OPENPARENT MainMethodParams CLOSEPARENT OPENBRAC error CLOSEBRAC      { yyerror(" Statement is missing  "); YYABORT;}
                    | PUBLIC STATIC VOID MAIN OPENPARENT MainMethodParams CLOSEPARENT OPENBRAC Statement error       { yyerror(" Close brackets is missing  "); YYABORT;}
                    ;

MainMethodParams      : STRINGTYPE OPENSQRBRACK CLOSESQRBRACK IDENTIFIER
                        | error OPENSQRBRACK CLOSESQRBRACK IDENTIFIER                                 { yyerror (" String type is missing  "); YYABORT;}
                        | STRINGTYPE error CLOSESQRBRACK IDENTIFIER                                       { yyerror (" Open brackets is missing  "); YYABORT;}
                        | STRINGTYPE OPENSQRBRACK error IDENTIFIER                                        { yyerror (" Close brackets is missing  "); YYABORT;}
                        | STRINGTYPE OPENSQRBRACK CLOSESQRBRACK error                                { yyerror (" Identifier is missing  "); YYABORT;}

DECLARATION          :  ACCESSSPECIFIERS DATATYPE IDENTIFIER 
                        | error DATATYPE IDENTIFIER     { yyerror (" Valid access specifier is missing "); YYABORT;}
                        | ACCESSSPECIFIERS DATATYPE error     { yyerror (" Identifier is missing  "); YYABORT;}
                        | ACCESSSPECIFIERS error IDENTIFIER  { yyerror (" Valid Type is missing  "); YYABORT;}
                        ; 

DECLARATIONLINE         :  DECLARATION SEMICOLON
                        | error  SEMICOLON    { yyerror (" Valid var declaration is missing "); YYABORT;}
                        | DECLARATION  error  { yyerror (" semi colon is missing  "); YYABORT;}
                        ;

ACCESSSPECIFIERS     : PUBLIC
                        | PRIVATE
                        | PROTECTED
                        | error  { yyerror (" Valid access specifier is missing "); YYABORT;}

MethodType           : DATATYPE IDENTIFIER
                        | error IDENTIFIER                    { yyerror (" Valid Type is MISSING  "); YYABORT;}
                        | DATATYPE error                 { yyerror (" Identifier is MISSING  "); YYABORT;}
                        ;

OTHERPARAMS           : COMMA DECLARATION OTHERPARAMS
                        | error DECLARATION OTHERPARAMS           { yyerror (" Comma is missing  "); YYABORT;}
                        ;

MethodParams         :  DECLARATION OTHERPARAMS;

MethodDeclaration    :  ACCESSSPECIFIERS MethodType OPENPARENT MethodParams CLOSEPARENT OPENBRAC DECLARATION Statement RETURN Expression SEMICOLON CLOSEBRAC
                        | error MethodType OPENPARENT CLOSEPARENT MethodParams OPENBRAC DECLARATION Statement RETURN Expression SEMICOLON CLOSEBRAC    { yyerror (" valid acceess specifier is missing  "); YYABORT;}
                        | ACCESSSPECIFIERS error error CLOSEPARENT MethodParams OPENBRAC DECLARATION Statement RETURN Expression SEMICOLON CLOSEBRAC        { yyerror (" Open parentheses is needed  "); YYABORT;}
                        | ACCESSSPECIFIERS MethodType OPENPARENT error OPENBRAC DECLARATION Statement RETURN Expression SEMICOLON CLOSEBRAC         { yyerror (" Close parentheses is needed  "); YYABORT;}
                        | ACCESSSPECIFIERS  MethodType OPENPARENT MethodParams CLOSEPARENT error DECLARATION Statement RETURN Expression SEMICOLON CLOSEBRAC      { yyerror (" Open brackets is needed  "); YYABORT;}
                        | ACCESSSPECIFIERS MethodType OPENPARENT MethodParams CLOSEPARENT OPENBRAC DECLARATION Statement error Expression SEMICOLON CLOSEBRAC    { yyerror (" Return is needed  "); YYABORT;}
                        | ACCESSSPECIFIERS MethodType OPENPARENT MethodParams CLOSEPARENT OPENBRAC DECLARATION Statement RETURN Expression error CLOSEBRAC       { yyerror (" Semi colon is needed  "); YYABORT;}
                        | ACCESSSPECIFIERS MethodType OPENPARENT MethodParams CLOSEPARENT OPENBRAC DECLARATION Statement RETURN Expression SEMICOLON error      { yyerror (" Close brackets is needed  "); YYABORT;}
                        ;

Statement            :  OPENBRAC Statement Statement CLOSEBRAC
                        | error Statement Statement CLOSEBRAC                                               { yyerror (" Open brackets is needed  "); YYABORT;}
                        | OPENBRAC Statement Statement error                                                { yyerror (" Close brackets is needed  "); YYABORT;}
                        | IF OPENPARENT Expression CLOSEPARENT Statement Statement ELSE Statement Statement
                        | error OPENPARENT Expression CLOSEPARENT Statement ELSE Statement               { yyerror (" If  is needed  "); YYABORT;}
                        | IF error Expression CLOSEPARENT Statement ELSE Statement                       { yyerror (" Open parentheses brackets is needed  "); YYABORT;}
                        | IF OPENPARENT Expression error Statement ELSE Statement                        { yyerror (" Close parentheses is needed  "); YYABORT;}
                        | IF OPENPARENT Expression CLOSEPARENT Statement error Statement                 { yyerror (" Else is needed  "); YYABORT;}
                        | error OPENPARENT Expression CLOSEPARENT Statement                               { yyerror (" While is needed  "); YYABORT;}
                        | WHILE error Expression CLOSEPARENT Statement                                    { yyerror (" Open parentheses is needed  "); YYABORT;}
                        | WHILE OPENPARENT Expression error Statement                                     { yyerror (" Close parentheses is needed  "); YYABORT;}
                        |
                        ;

Expression           :  ARITHMETICOPERATOR Expression
                        | BINARYOPERATOR Expression
                        | COMPARAISONOPERATOR Expression
                        | THIS
                        | IDENTIFIER
                        |
                        ;
%%

extern FILE *yyin;

int main()
{
    yyparse();
}

  
                   
