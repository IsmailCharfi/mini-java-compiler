
%{
#include <stdio.h>	

int yylex(void);
void yyerror(const char *msg);

extern int line;
%}

%error-verbose

%start PROGRAM

%token  NUMBER
%token  IDENTIFIER
%token  CONST
%token  FINAL
%token  PUBLIC
%token  PRIVATE
%token  PROTECTED
%token  STATIC
%token  CLASS
%token  INTERFACE
%token  ENUM
%token  ABSTRACT
%token  MAIN
%token  SUPER
%token  EXTENDS
%token  IMPLEMENTS
%token  ASSERT
%token  VOID
%token  TRY
%token  CATCH
%token  THROW
%token  THROWS
%token  FINALLY
%token  VOLATILE
%token  TRANSIENT
%token  SYNCHRONIZED
%token  BOOLEAN
%token  BYTE
%token  CHAR
%token  SHORT
%token  STRING
%token  INT
%token  LONG
%token  STRICTFP
%token  NULL_
%token  FLOAT
%token  DOUBLE
%token  PACKAGE
%token  TRUE
%token  FALSE
%token  IF
%token  ELSE
%token  FOR
%token  WHILE
%token  DO
%token  CONTINUE
%token  BREAK
%token  SWITCH
%token  CASE
%token  DEFAULT
%token  GOTO
%token  IMPORT
%token  INSTANCEOF
%token  NATIVE
%token  RETURN
%token  THIS
%token  NEW
%token  OPENPARENT
%token  CLOSEPARENT
%token  OPENSQRBRACK
%token  CLOSESQRBRACK
%token  OPENBRAC
%token  CLOSEBRAC
%token  SEMICOLON
%token  DOT
%token  COMMA
%token  PLUS
%token  MINUS
%token  TIMES
%token  DIVIDE
%token  MODULO
%token  ASSIGN
%token  EQ
%token  NEQ
%token  LT
%token  GT
%token  LE
%token  GE
%token  TYPED_STRING
%token  PLUS_ASSIGN
%token  MINUS_ASSIGN
%token  TIMES_ASSIGN
%token  DIVIDE_ASSIGN
%token  BITWISE_AND_ASSIGN
%token  BITWISE_OR_ASSIGN
%token  XOR_ASSIGN
%token  MODULO_ASSIGN
%token  AND
%token  BITWISE_AND
%token  OR
%token  BITWISE_OR
%token  XOR
%token  TERNARY_IF
%token  TERNARY_ELSE
%token  PLUS_PLUS
%token  MINUS_MINUS
%token  NOT
%token SPREAD

%%
QUALIFIED_IDENTIFIER:           IDENTIFIER 
                                | QUALIFIED_IDENTIFIER DOT IDENTIFIER;

QUALIFIED_IDENTIFIER_LIST:      QUALIFIED_IDENTIFIER 
                                | QUALIFIED_IDENTIFIER_LIST COMMA QUALIFIED_IDENTIFIER;

PACKAGE_DECLARATION:            PACKAGE QUALIFIED_IDENTIFIER SEMICOLON
                                |;

IMPORTS:                        SINGLE_IMPORT IMPORTS 
                                |;

SINGLE_IMPORT:                  IMPORT QUALIFIED_IDENTIFIER SEMICOLON
                                | IMPORT QUALIFIED_IDENTIFIER DOT TIMES SEMICOLON;

PROGRAM:                        PACKAGE_DECLARATION IMPORTS PROGRAM_BODY;

PROGRAM_BODY:                   CLASSES PROGRAM_BODY
                                | INTERFACES PROGRAM_BODY
                                | ENUMS PROGRAM_BODY
                                | CLASSES
                                | INTERFACES
                                | ENUMS;                    

CLASSES:                        SIMPLE_CLASS CLASSES 
                                |;

INTERFACES:                     SIMPLE_INTERFACE INTERFACES 
                                |;

ENUMS:                          SIMPLE_ENUM ENUMS 
                                |;

SIMPLE_CLASS:                   CLASS_DECLARATION OPENBRAC CLASS_BODY CLOSEBRAC;

SIMPLE_INTERFACE:               INTERFACE_DECLARATION OPENBRAC INTERFACE_BODY CLOSEBRAC;

SIMPLE_ENUM:                    ENUM_DECLARATION OPENBRAC ENUM_BODY CLOSEBRAC;

CLASS_DECLARATION:              MODIFIER CLASS IDENTIFIER EXTENDING_PART IMPLEMENTING_PART
                                | CLASS IDENTIFIER EXTENDING_PART IMPLEMENTING_PART;

INTERFACE_DECLARATION:          MODIFIER INTERFACE IDENTIFIER EXTENDING_PART
                                | INTERFACE IDENTIFIER EXTENDING_PART;

ENUM_DECLARATION:               MODIFIER ENUM IDENTIFIER IMPLEMENTING_PART
                                | ENUM IDENTIFIER IMPLEMENTING_PART;    

EXTENDING_PART:                 EXTENDS IDENTIFIER
                                | ;

IMPLEMENTING_PART:              IMPLEMENTS IMPLEMENTED_LIST
                                | ;

IMPLEMENTED_LIST:               IDENTIFIER 
                                | IMPLEMENTED_LIST COMMA IDENTIFIER;

MODIFIER:                       PUBLIC
                                | PRIVATE
                                | PROTECTED
                                | STATIC
                                | ABSTRACT
                                | FINAL
                                | NATIVE
                                | SYNCHRONIZED
                                | TRANSIENT
                                | VOLATILE
                                | STRICTFP;

MODIFIERS:                      MODIFIER MODIFIERS
                                | MODIFIER
                                |;

CLASS_BODY:                     CLASS_BODY_MEMBER
                                | CLASS_BODY_MEMBER CLASS_BODY
                                |;

INTERFACE_BODY:                 INTERFACE_BODY_MEMBER
                                | INTERFACE_BODY_MEMBER INTERFACE_BODY
                                |;

ENUM_BODY:                      ENUM_BODY_MEMBER
                                | ENUM_BODY_MEMBER ENUM_BODY
                                |;


CLASS_BODY_MEMBER:              MODIFIERS METHOD_DECLARATOR
                                | MODIFIERS FIELD_DECLARATOR
                                | MODIFIERS CONSTRUCTOR;

INTERFACE_BODY_MEMBER:          TYPE IDENTIFIER FORMARL_PARAMETERS THROWING_PART SEMICOLON
                                | VOID IDENTIFIER FORMARL_PARAMETERS THROWING_PART SEMICOLON
                                | IDENTIFIER FORMARL_PARAMETERS THROWING_PART SEMICOLON;

ENUM_BODY_MEMBER:               ENUM_CONSTANTS SEMICOLON CLASS_BODY
                                | ENUM_CONSTANTS;


ENUM_CONSTANTS:                 ENUM_CONSTANT
                                | ENUM_CONSTANTS COMMA ENUM_CONSTANT;

ENUM_CONSTANT:                  IDENTIFIER ARGUMENTS CLASS_BODY
                                | IDENTIFIER CLASS_BODY;

METHOD_DECLARATOR:              TYPE IDENTIFIER METHOD_DECLARATOR_REST
                                | VOID IDENTIFIER METHOD_DECLARATOR_REST
                                | VOID MAIN METHOD_DECLARATOR_REST;

FIELD_DECLARATOR:               TYPE IDENTIFIER FIELD_DECLARATOR_REST;

FIELD_DECLARATOR_REST:          VARIABLE_DECLARATOR_REST SEMICOLON
                                | VARIABLE_DECLARATOR_REST COMMA VARIABLE_DECLARATOR_LIST SEMICOLON;

VARIABLE_DECLARATOR_REST:       ARRAY_BRACKETS ASSIGN_VARIABLE_INIT
                                | ARRAY_BRACKETS
                                | ASSIGN_VARIABLE_INIT
                                | ;

VARIABLE_DECLARATOR_LIST:       VARIABLE_DECLARATOR 
                                | VARIABLE_DECLARATOR COMMA VARIABLE_DECLARATOR_LIST;

VARIABLE_DECLARATOR:            IDENTIFIER  VARIABLE_DECLARATOR_REST;

METHOD_DECLARATOR_REST:         FORMARL_PARAMETERS THROWING_PART OPENBRAC BLOCK CLOSEBRAC
                                | FORMARL_PARAMETERS THROWING_PART SEMICOLON;

CONSTRUCTOR:                    IDENTIFIER FORMARL_PARAMETERS THROWING_PART OPENBRAC BLOCK CLOSEBRAC;

THROWING_PART:                  THROWS QUALIFIED_IDENTIFIER_LIST
                                |;

ARRAY_BRACKETS:                 OPENSQRBRACK CLOSESQRBRACK 
                                | OPENSQRBRACK CLOSESQRBRACK ARRAY_BRACKETS;

ASSIGN_VARIABLE_INIT:           ASSIGN VARIABLE_INITIALIZER;

VARIABLE_INITIALIZER:           ARRAY_INITIALIZER 
                                | EXPRESSION;

ARRAY_INITIALIZER:              OPENBRAC VARIABLE_INITIALIZER_LIST CLOSEBRAC;

VARIABLE_INITIALIZER_LIST:      VARIABLE_INITIALIZER
                                | VARIABLE_INITIALIZER COMMA VARIABLE_INITIALIZER_LIST
                                |;

FORMARL_PARAMETERS:             OPENPARENT FORMARL_PARAMETER CLOSEPARENT;

FORMARL_PARAMETER:              TYPE FORMARL_PARAMETER_REST
                                |;

FORMARL_PARAMETER_REST:         SPREAD VARIABLE_DECLARATOR_ID
                                | VARIABLE_DECLARATOR_ID
                                | VARIABLE_DECLARATOR_ID COMMA FORMARL_PARAMETER;

VARIABLE_DECLARATOR_ID:         IDENTIFIER ARRAY_BRACKETS
                                | IDENTIFIER;

EXPRESSION:                     EXPRESSION1 ASSIGNMENT_OPERATOR EXPRESSION1
                                | EXPRESSION1;

EXPRESSION1:                    EXPRESSION2 TERNARY_IF EXPRESSION TERNARY_ELSE EXPRESSION1
                                | EXPRESSION2;

EXPRESSION2:                    EXPRESSION3
                                | EXPRESSION3 INFIX_OPERATIONS
                                | EXPRESSION3 INSTANCEOF TYPE;

EXPRESSION3:                    PREFIX_OP EXPRESSION3
                                | PAR_EXPRESSION EXPRESSION3
                                | OPENPARENT TYPE CLOSEPARENT EXPRESSION3
                                | EXPRESSION3 OPENSQRBRACK EXPRESSION CLOSESQRBRACK
                                | PRIMARY SELECTORS POSTFIX_OPERATORS;

ASSIGNMENT_OPERATOR:            ASSIGN
                                | PLUS_ASSIGN
                                | MINUS_ASSIGN
                                | TIMES_ASSIGN
                                | DIVIDE_ASSIGN
                                | MODULO_ASSIGN
                                | BITWISE_AND_ASSIGN
                                | BITWISE_OR_ASSIGN
                                | XOR_ASSIGN;

INFIX_OPERATIONS:               INFIX_OP EXPRESSION3
                                | INFIX_OP EXPRESSION3 INFIX_OPERATIONS;

INFIX_OP:                       OR
                                | AND
                                | BITWISE_AND
                                | BITWISE_OR
                                | XOR
                                | EQ
                                | NEQ
                                | GT
                                | GE
                                | LT
                                | LE
                                | PLUS
                                | MINUS
                                | TIMES
                                | DIVIDE
                                | MODULO;

PREFIX_OP:                      PLUS_PLUS
                                | MINUS_MINUS
                                | NOT
                                | PLUS
                                | MINUS;

POSTFIX_OP:                     PLUS_PLUS
                                | MINUS_MINUS;

SELECTORS:                      SELECTOR 
                                | SELECTOR SELECTORS
                                |;

POSTFIX_OPERATORS:              POSTFIX_OP 
                                | POSTFIX_OP POSTFIX_OPERATORS
                                |;

PRIMARY:                        LITERAL 
                                | PAR_EXPRESSION
                                | THIS
                                | THIS SUPER_SUFFIX
                                | SUPER SUPER_SUFFIX
                                | NEW IDENTIFIER_SEQUENCE ARGUMENTS
                                | IDENTIFIER_SEQUENCE
                                | IDENTIFIER_SEQUENCE IDENTIFER_SUFFIX;

IDENTIFIER_SEQUENCE:            IDENTIFIER DOT IDENTIFIER_SEQUENCE
                                | IDENTIFIER;

LITERAL:                        NUMBER
                                | TYPED_STRING
                                | TRUE
                                | FALSE
                                | NULL_;

PAR_EXPRESSION:                 OPENPARENT EXPRESSION CLOSEPARENT;

ARGUMENTS:                      OPENPARENT EXPRESSION_LIST CLOSEPARENT;

EXPRESSION_LIST:                EXPRESSION 
                                | EXPRESSION COMMA EXPRESSION_LIST
                                |;

SUPER_SUFFIX:                   ARGUMENTS
                                | DOT IDENTIFIER
                                | DOT IDENTIFIER ARGUMENTS;

IDENTIFER_SUFFIX:               EXPRESSION
                                | ARGUMENTS
                                | POSTFIX_OP;


SELECTOR:                       DOT IDENTIFIER ARGUMENTS
                                | DOT IDENTIFIER;

BLOCK:                          BLOCK_STATEMENT 
                                | BLOCK BLOCK_STATEMENT
                                |;

BLOCK_STATEMENT:                LOCAL_VARIABLE_DECLARATION_STATEMENT
                                | STATEMENT;

                

LOCAL_VARIABLE_DECLARATION_STATEMENT:  TYPE VARIABLE_DECLARATOR_LIST SEMICOLON;

STATEMENT:                      OPENBRAC BLOCK CLOSEBRAC
                                | SEMICOLON
                                | EXPRESSION SEMICOLON
                                | IF PAR_EXPRESSION STATEMENT
                                | IF PAR_EXPRESSION STATEMENT ELSE STATEMENT
                                | FOR OPENPARENT FOR_CONTROL CLOSEPARENT STATEMENT
                                | WHILE PAR_EXPRESSION STATEMENT
                                | BREAK SEMICOLON
                                | BREAK IDENTIFIER SEMICOLON
                                | CONTINUE IDENTIFIER SEMICOLON
                                | CONTINUE SEMICOLON
                                | SWITCH PAR_EXPRESSION OPENBRAC SWITCH_BLOCK_STATEMENT_GROUPS CLOSEBRAC
                                | DO STATEMENT WHILE PAR_EXPRESSION SEMICOLON
                                | RETURN SEMICOLON
                                | RETURN EXPRESSION SEMICOLON
                                | THROW EXPRESSION SEMICOLON
                                | SYNCHRONIZED PAR_EXPRESSION OPENBRAC BLOCK CLOSEBRAC
                                | TRY OPENBRAC BLOCK CLOSEBRAC CATCHES FINALLY_BLOCK
                                | TRY OPENBRAC BLOCK CLOSEBRAC FINALLY_BLOCK
                                | TRY OPENBRAC BLOCK CLOSEBRAC CATCHES;

CATCHES:                        CATCH_CLAUSE 
                                | CATCH_CLAUSE CATCHES;

CATCH_CLAUSE:                   CATCH OPENPARENT CATCH_TYPE IDENTIFIER CLOSEPARENT OPENBRAC BLOCK CLOSEBRAC;

CATCH_TYPE:                     QUALIFIED_IDENTIFIER 
                                | CATCH_TYPE BITWISE_OR QUALIFIED_IDENTIFIER;

FINALLY_BLOCK:                  FINALLY OPENBRAC BLOCK CLOSEBRAC;

SWITCH_BLOCK_STATEMENT_GROUPS:  SWITCH_BLOCK_STATEMENT_GROUP 
                                | SWITCH_BLOCK_STATEMENT_GROUPS SWITCH_BLOCK_STATEMENT_GROUP;

SWITCH_BLOCK_STATEMENT_GROUP:   SWITCH_LABELS OPENBRAC BLOCK CLOSEBRAC;

SWITCH_LABELS:                  SWITCH_LABEL 
                                | SWITCH_LABEL SWITCH_LABELS;

SWITCH_LABEL:                   CASE EXPRESSION TERNARY_ELSE
                                | CASE IDENTIFIER TERNARY_ELSE
                                | DEFAULT TERNARY_ELSE;

FOR_CONTROL:                    FOR_VAR_CONTROL
                                | EXPRESSION_LIST SEMICOLON EXPRESSION SEMICOLON EXPRESSION_LIST
                                | EXPRESSION_LIST SEMICOLON SEMICOLON EXPRESSION_LIST;

FOR_VAR_CONTROL:                TYPE VARIABLE_DECLARATOR_ID FOR_VAR_CONTROL_REST;

FOR_VAR_CONTROL_REST:           FOR_VARIABLE_DECLARATORS_REST SEMICOLON EXPRESSION SEMICOLON EXPRESSION_LIST
                                | FOR_VARIABLE_DECLARATORS_REST SEMICOLON SEMICOLON EXPRESSION_LIST
                                | TERNARY_ELSE EXPRESSION;

FOR_VARIABLE_DECLARATORS_REST:  ASSIGN VARIABLE_INITIALIZER 
                                | ASSIGN VARIABLE_INITIALIZER COMMA VARIABLE_DECLARATOR_LIST
                                | ;

TYPE:                           BASIC_TYPE 
                                | REFERENCE_TYPE;
                                | TYPE ARRAY_BRACKETS;

BASIC_TYPE:                     BYTE
                                | SHORT
                                | CHAR
                                | INT
                                | LONG
                                | FLOAT
                                | DOUBLE
                                | STRING
                                | BOOLEAN;

REFERENCE_TYPE:                 IDENTIFIER
                                | REFERENCE_TYPE DOT IDENTIFIER;
%%

extern FILE *yyin;

void yyerror(char const *msg) {
	fprintf(stderr, "Syntax error in line %d: %s\n", line, msg);
}

int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

    return 0;
}