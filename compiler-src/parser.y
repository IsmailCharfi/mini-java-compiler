
%{
#include <stdio.h>	
#include <string.h>
#include <stdlib.h>
#include "semantic.h"

#define YYSTYPE char*
#define MAX_STACK_SIZE 100

int yylex(void);
void yyerror(const char *msg);

extern int line;

int blockIdStack[MAX_STACK_SIZE] = {0};
int idCounter = 0;
int blockId = 0;
int top = 0;
int multipleLevelImport = 0;
int inImports = 0;
int usingThis = 0;
int insideArgs = 0;
int insideAssign = 0;

void push(int id) {
    if (top == MAX_STACK_SIZE - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    top++;
    blockIdStack[top] = id;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    top--;
    return blockIdStack[top];
}

int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        exit(1);
    }
    return blockIdStack[top];
}

Node* currentNode = NULL;
Node* currentClass = NULL;
Node* currentMethod = NULL;
Node* methodCall = NULL;

Node* methodsCallStack[MAX_STACK_SIZE];
int methodIndex = 0;

void pushMethod(Node* method) {
    if (methodIndex == MAX_STACK_SIZE - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    methodIndex++;
    methodsCallStack[methodIndex] = method;
}

Node* popMethod() {
    if (methodIndex == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    methodIndex--;
    return methodsCallStack[methodIndex];
}

Node* peekMethod() {
    if (methodIndex == -1) {
        printf("Stack is empty\n");
        exit(1);
    }
    return methodsCallStack[methodIndex];
}

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

%%
PROGRAM:                        PACKAGE_DECLARATION IMPORTS MAIN_CLASS PROGRAM_BODY {  printf("Compiled successfully"); printTab(); };

PACKAGE_DECLARATION:            PACKAGE QUALIFIED_IDENTIFIER SEMICOLON
                                |
                                ;

IMPORTS:                        SINGLE_IMPORT IMPORTS 
                                |
                                ;

SINGLE_IMPORT:                  IMPORT IMPORT_QUALIFIED_IDENTIFIER SEMICOLON;

IMPORT_QUALIFIED_IDENTIFIER:    IDENTIFIER  
                                {
                                    if (!multipleLevelImport) 
                                    {
                                        currentNode = insertSymbol($1, _IMPORT, -1, "UNKNOWN", _GLOBAL, blockId, NULL);
                                    }
                                    multipleLevelImport = 0;
                                }
                                | IMPORT_QUALIFIED_IDENTIFIER DOT IDENTIFIER
                                {
                                    multipleLevelImport = 1;
                                    currentNode = insertSymbol($3, _IMPORT, -1, "UNKNOWN", _GLOBAL, blockId, NULL);
                                }
                                ;

QUALIFIED_IDENTIFIER:           IDENTIFIER 
                                | QUALIFIED_IDENTIFIER DOT IDENTIFIER
                                ;

PROGRAM_BODY:                   CLASSES PROGRAM_BODY
                                | INTERFACES PROGRAM_BODY
                                | ENUMS PROGRAM_BODY
                                | CLASSES
                                | INTERFACES 
                                | ENUMS 
                                ;                    

CLASSES:                        SIMPLE_CLASS CLASSES
                                |
                                ;

INTERFACES:                     SIMPLE_INTERFACE INTERFACES 
                                |
                                ;

ENUMS:                          SIMPLE_ENUM ENUMS 
                                |
                                ;

SIMPLE_CLASS:                   CLASS_DECLARATION OPEN_NEW_BLOCK CLASS_BODY CLOSE_BLOCK;

MAIN_CLASS:                     CLASS_DECLARATION OPEN_NEW_BLOCK MAIN_CLASS_BODY CLOSE_BLOCK;

SIMPLE_INTERFACE:               INTERFACE_DECLARATION OPEN_NEW_BLOCK INTERFACE_BODY CLOSE_BLOCK;

SIMPLE_ENUM:                    ENUM_DECLARATION OPEN_NEW_BLOCK ENUM_BODY CLOSE_BLOCK;

CLASS_DECLARATION:              MODIFIER CLASS IDENTIFIER CLASS_EXTENDING_PART IMPLEMENTING_PART 
                                { 
                                    checkClassDeclaration($3); 
                                    currentClass = currentNode = insertSymbol($3, _DECLARATION, _CLASS, "UNKNOWN", _GLOBAL, blockId, NULL); 
                                }
                                | CLASS IDENTIFIER CLASS_EXTENDING_PART IMPLEMENTING_PART 
                                { 
                                    checkClassDeclaration($2); 
                                    currentClass = currentNode = insertSymbol($2, _DECLARATION, _CLASS, "UNKNOWN", _GLOBAL, blockId, NULL); 
                                }
                                ;

INTERFACE_DECLARATION:          MODIFIER INTERFACE IDENTIFIER INTERFACE_EXTENDING_PART 
                                { 
                                    checkInterfaceDeclaration($3); 
                                    currentClass = currentNode = insertSymbol($3, _DECLARATION, _INTERFACE, "UNKNOWN", _GLOBAL, blockId, NULL);
                                }
                                | INTERFACE IDENTIFIER INTERFACE_EXTENDING_PART 
                                {
                                    checkInterfaceDeclaration($2); 
                                    currentClass = currentNode = insertSymbol($2, _DECLARATION, _INTERFACE, "UNKNOWN", _GLOBAL, blockId, NULL);
                                }
                                ;

ENUM_DECLARATION:               MODIFIER ENUM IDENTIFIER IMPLEMENTING_PART 
                                {
                                    checkEnumDeclaration($3); 
                                    currentClass = currentNode = insertSymbol($3, _DECLARATION, _ENUM, "UNKNOWN", _GLOBAL, blockId, NULL);
                                }
                                | ENUM IDENTIFIER IMPLEMENTING_PART 
                                {
                                    checkEnumDeclaration($2); 
                                    currentClass = currentNode = insertSymbol($2, _DECLARATION, _ENUM, "UNKNOWN", _GLOBAL, blockId, NULL);
                                };   

CLASS_EXTENDING_PART:           EXTENDS IDENTIFIER { checkClassExistance($2); }
                                | 
                                ;

INTERFACE_EXTENDING_PART:       EXTENDS IDENTIFIER { checkInterfaceExistance($2); }
                                | 
                                ;  

IMPLEMENTING_PART:              IMPLEMENTS IMPLEMENTED_LIST
                                | 
                                ;

IMPLEMENTED_LIST:               IDENTIFIER  { checkInterfaceExistance($1); }
                                | IMPLEMENTED_LIST COMMA IDENTIFIER { checkInterfaceExistance($3); }
                                ;

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
                                | STRICTFP
                                ;

MODIFIERS:                      MODIFIER MODIFIERS
                                | MODIFIER
                                |
                                ;

CLASS_BODY:                     CLASS_BODY_MEMBER
                                | CLASS_BODY_MEMBER CLASS_BODY
                                |
                                ;

MAIN_CLASS_BODY:                CLASS_BODY_MEMBER MAIN_CLASS_BODY
                                | MAIN_METHOD
                                ;

MAIN_METHOD:                    PUBLIC STATIC VOID MAIN OPENPARENT STRING OPENSQRBRACK CLOSESQRBRACK IDENTIFIER CLOSEPARENT OPEN_NEW_BLOCK BLOCK CLOSE_BLOCK;

INTERFACE_BODY:                 INTERFACE_BODY_MEMBER
                                | INTERFACE_BODY_MEMBER INTERFACE_BODY
                                |
                                ;

ENUM_BODY:                      ENUM_BODY_MEMBER
                                | ENUM_BODY_MEMBER ENUM_BODY
                                |
                                ;


CLASS_BODY_MEMBER:              MODIFIERS METHOD_DECLARATOR
                                | MODIFIERS FIELD_DECLARATOR
                                | MODIFIERS CONSTRUCTOR
                                ;

INTERFACE_BODY_MEMBER:          TYPE IDENTIFIER FORMARL_PARAMETERS THROWING_PART SEMICOLON
                                | VOID IDENTIFIER FORMARL_PARAMETERS THROWING_PART SEMICOLON
                                | IDENTIFIER FORMARL_PARAMETERS THROWING_PART SEMICOLON
                                ;

ENUM_BODY_MEMBER:               ENUM_CONSTANTS SEMICOLON CLASS_BODY
                                | ENUM_CONSTANTS
                                ;


ENUM_CONSTANTS:                 ENUM_CONSTANT
                                | ENUM_CONSTANTS COMMA ENUM_CONSTANT
                                ;

ENUM_CONSTANT:                  IDENTIFIER ARGUMENTS CLASS_BODY
                                | IDENTIFIER CLASS_BODY
                                ;

METHOD_DECLARATOR:              METHOD_DECLARATOR_HEAD METHOD_DECLARATOR_REST;

METHOD_DECLARATOR_HEAD:         TYPE IDENTIFIER
                                {
                                    currentMethod = currentNode = insertSymbol($2, _DECLARATION, _METHOD, $1, _GLOBAL, blockId, currentClass->name);
                                }
                                | VOID IDENTIFIER
                                {
                                    currentMethod = currentNode = insertSymbol($2, _DECLARATION, _METHOD, $1, _GLOBAL, blockId, currentClass->name);
                                }
                                ;

FIELD_DECLARATOR:               FIELD_DECLARATOR_HEAD INIT_ASSIGN VARIABLE_INITIALIZER END_INIT
                                | FIELD_DECLARATOR_HEAD END_INIT
                                ;

END_INIT:                       SEMICOLON
                                {
                                    insideAssign = 0;
                                }
                                ;

INIT_ASSIGN:                    ASSIGN 
                                {
                                    insideAssign = 1;
                                }
                                ;

FIELD_DECLARATOR_HEAD:          TYPE IDENTIFIER 
                                {
                                    checkVariableDeclaration($2, _GLOBAL, blockId);
                                    currentNode = insertSymbol($2, _DECLARATION, _VARIABLE, $1, _GLOBAL, blockId, currentClass->name); 
                                }
                                ;


VARIABLE_DECLARATOR:            VARIABLE_DECLARATOR_HEAD INIT_ASSIGN VARIABLE_INITIALIZER END_INIT
                                | VARIABLE_DECLARATOR_HEAD END_INIT
                                ;

VARIABLE_DECLARATOR_HEAD:       TYPE IDENTIFIER
                                {
                                    checkVariableDeclaration($2, _LOCAL, blockId);
                                    currentNode = insertSymbol($2, _DECLARATION, _VARIABLE, $1, _LOCAL, blockId, NULL); 
                                }
                                ;

METHOD_DECLARATOR_REST:         FORMARL_PARAMETERS THROWING_PART OPEN_NEW_BLOCK BLOCK CLOSE_BLOCK 
                                { 
                                    checkMethodDeclaration(currentMethod->name, currentMethod->blockId);
                                }
                                | FORMARL_PARAMETERS THROWING_PART SEMICOLON 
                                { 
                                    checkMethodDeclaration(currentMethod->name, currentMethod->blockId); 
                                }
                                ;

CONSTRUCTOR:                    IDENTIFIER FORMARL_PARAMETERS THROWING_PART OPEN_NEW_BLOCK BLOCK CLOSE_BLOCK
                                {
                                    currentMethod = currentNode = insertSymbol($1, _DECLARATION, _CONSTRUCTOR, "void", _GLOBAL, blockId, currentClass->name); 
                                    checkConstructorName($1, currentClass->name);
                                    checkMethodDeclaration(currentMethod->name, currentMethod->blockId);
                                }
                                ;

THROWING_PART:                  THROWS EXCEPTIONS_LIST
                                |
                                ;

EXCEPTIONS_LIST:                QUALIFIED_EXCEPTION 
                                | EXCEPTIONS_LIST COMMA QUALIFIED_EXCEPTION
                                ;

QUALIFIED_EXCEPTION:            IDENTIFIER  { checkClassExistance($1); }
                                | QUALIFIED_EXCEPTION DOT IDENTIFIER { checkClassExistance($3); }
                                ;

ARRAY_BRACKETS:                 OPENSQRBRACK CLOSESQRBRACK 
                                {
                                    strcpy($$, "[]");
                                }
                                | OPENSQRBRACK CLOSESQRBRACK ARRAY_BRACKETS 
                                {
                                    strcpy($$, "["); strcat($$, "]"); 
                                    strcat($$, $3);
                                }
                                ;


VARIABLE_INITIALIZER:           ARRAY_INITIALIZER 
                                | EXPRESSION
                                ;

ARRAY_INITIALIZER:              OPENBRAC VARIABLE_INITIALIZER_LIST CLOSEBRAC;

VARIABLE_INITIALIZER_LIST:      VARIABLE_INITIALIZER
                                | VARIABLE_INITIALIZER COMMA VARIABLE_INITIALIZER_LIST
                                |
                                ;

FORMARL_PARAMETERS:             OPENPARENT FORMARL_PARAMETER CLOSEPARENT
                                | OPENPARENT CLOSEPARENT
                                ;

FORMARL_PARAMETER:              FORMARL_PARAMETER_HEAD FORMARL_PARAMETER_REST; 

FORMARL_PARAMETER_HEAD:         TYPE IDENTIFIER { addMethodArg(currentMethod, $2, $1); };

FORMARL_PARAMETER_REST:         COMMA FORMARL_PARAMETER
                                |
                                ;

EXPRESSION:                     EXPRESSION1 ASSIGNMENT_OPERATOR EXPRESSION1
                                | EXPRESSION1
                                ;

EXPRESSION1:                    EXPRESSION2 TERNARY_IF EXPRESSION TERNARY_ELSE EXPRESSION1
                                | EXPRESSION2
                                ;

EXPRESSION2:                    EXPRESSION3
                                | EXPRESSION3 INFIX_OPERATIONS
                                | EXPRESSION3 INSTANCEOF TYPE { checkClassExistance($3); }
                                ;

EXPRESSION3:                    PREFIX_OP EXPRESSION3
                                | PAR_EXPRESSION EXPRESSION3
                                | EXPRESSION3 OPENSQRBRACK EXPRESSION CLOSESQRBRACK
                                | PRIMARY SELECTORS POSTFIX_OPERATORS
                                ;

ASSIGNMENT_OPERATOR:            ASSIGN
                                | PLUS_ASSIGN
                                | MINUS_ASSIGN
                                | TIMES_ASSIGN
                                | DIVIDE_ASSIGN
                                | MODULO_ASSIGN
                                | BITWISE_AND_ASSIGN
                                | BITWISE_OR_ASSIGN
                                | XOR_ASSIGN
                                ;

INFIX_OPERATIONS:               INFIX_OP EXPRESSION3
                                | INFIX_OP EXPRESSION3 INFIX_OPERATIONS
                                ;

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
                                | MODULO
                                ;

PREFIX_OP:                      PLUS_PLUS
                                | MINUS_MINUS
                                | NOT
                                | PLUS
                                | MINUS
                                ;

POSTFIX_OP:                     PLUS_PLUS
                                | MINUS_MINUS
                                ;

SELECTORS:                      SELECTOR SELECTORS
                                |
                                ;

POSTFIX_OPERATORS:              POSTFIX_OP 
                                | POSTFIX_OP POSTFIX_OPERATORS
                                |
                                ;

PRIMARY:                        LITERAL
                                | PAR_EXPRESSION
                                | THIS { usingThis = 1; }
                                | SUPER
                                | BEGIN_INSTANCIATION ARGUMENTS 
                                | IDENTIFIER 
                                { 
                                    checkVariableExistance($1, _LOCAL, blockId, 1);
                                    if (insideArgs)
                                    {
                                        insertCallArg(methodCall, $1, NULL);
                                    }
                                }
                                ;

BEGIN_INSTANCIATION:            NEW IDENTIFIER
                                {
                                   checkClassExistance($2);
                                    if (insideArgs)
                                    {
                                        insertCallArg(methodCall, NULL, $2);
                                    } 
                                    if (insideAssign)
                                    {
                                        checkVariableInitType(currentNode, $2);
                                    }
                                    methodCall = insertSymbol($2, _CALL, _CONSTRUCTOR, $2, _LOCAL, blockId, currentClass->name);
                                    pushMethod(methodCall);
                                }
                                ;

LITERAL:                        NUMBER
                                {
                                    if (insideArgs) 
                                    {
                                        insertCallArg(methodCall, NULL, "NUMBER");
                                    }
                                    else if (insideAssign)
                                    {
                                        checkVariableInitType(currentNode, "NUMBER");
                                    }
                                }
                                | TYPED_STRING
                                {
                                    if (insideArgs) 
                                    {
                                        insertCallArg(methodCall, NULL, "String");
                                    }
                                    else if (insideAssign)
                                    {
                                        checkVariableInitType(currentNode, "String");
                                    }
                                }
                                | TRUE
                                {
                                    if (insideArgs) 
                                    {
                                       insertCallArg(methodCall, NULL, "TRUE");
                                    }
                                    else if (insideAssign)
                                    {
                                        checkVariableInitType(currentNode, "TRUE");
                                    }
                                }
                                | FALSE
                                {
                                    if (insideArgs) 
                                    {
                                       insertCallArg(methodCall, NULL, "FALSE");
                                    }
                                    else if (insideAssign)
                                    {
                                        checkVariableInitType(currentNode, "FALSE");
                                    }
                                }
                                | NULL_
                                {
                                    if (insideArgs) 
                                    {
                                        insertCallArg(methodCall, NULL, "NULL_");
                                    }
                                    if (insideAssign)
                                    {
                                        checkVariableInitType(currentNode, "NULL_");
                                    }
                                }
                                ;

PAR_EXPRESSION:                 OPENPARENT EXPRESSION CLOSEPARENT;

ARGUMENTS:                      OPEN_ARGS_PARENT EXPRESSION_LIST CLOSE_ARGS_PARENT
                                | OPENPARENT CLOSE_ARGS_PARENT
                                ;

OPEN_ARGS_PARENT:               OPENPARENT { insideArgs = 1; };

CLOSE_ARGS_PARENT:              CLOSEPARENT 
                                { 
                                    insideArgs = 0; 
                                    checkMissingArgs(methodCall, currentClass->name);
                                    popMethod();
                                    methodCall = peekMethod(); 
                                };

EXPRESSION_LIST:                EXPRESSION
                                | EXPRESSION COMMA EXPRESSION_LIST  
                                |
                                ;

SELECTOR:                       METHOD_SELECTOR ARGUMENTS 
                                | DOT IDENTIFIER 
                                { 
                                    if (usingThis) 
                                    {  
                                        checkFieldExistanceInClass($2, currentClass->name);
                                        usingThis = 0; 
                                    }
                                }
                                ;

METHOD_SELECTOR:                DOT IDENTIFIER
                                {
                                    if (usingThis) 
                                    { 
                                        checkMethodExistanceInClass($2, currentClass->name); 
                                        methodCall = currentNode = insertSymbol($2, _CALL, _METHOD, "unknown", _LOCAL, blockId, currentClass->name);
                                        pushMethod(methodCall);
                                        usingThis = 0; 
                                    } 
                                }
                                ;

BLOCK:                          BLOCK_STATEMENT 
                                | BLOCK BLOCK_STATEMENT
                                |
                                ;

BLOCK_STATEMENT:                VARIABLE_DECLARATOR
                                | STATEMENT
                                ;

STATEMENT:                      OPEN_NEW_BLOCK BLOCK CLOSE_BLOCK
                                | EXPRESSION SEMICOLON
                                | IF PAR_EXPRESSION SEMICOLON
                                | IF PAR_EXPRESSION STATEMENT
                                | IF PAR_EXPRESSION STATEMENT ELSE STATEMENT
                                | FOR OPENPARENT FOR_CONTROL CLOSEPARENT STATEMENT
                                | FOR OPENPARENT FOR_CONTROL CLOSEPARENT SEMICOLON
                                | WHILE PAR_EXPRESSION STATEMENT
                                | WHILE PAR_EXPRESSION SEMICOLON
                                | BREAK SEMICOLON
                                | CONTINUE SEMICOLON
                                | SWITCH PAR_EXPRESSION OPENBRAC SWITCH_BLOCK_STATEMENT_GROUPS CLOSEBRAC
                                | DO STATEMENT WHILE PAR_EXPRESSION SEMICOLON
                                | RETURN SEMICOLON
                                | RETURN EXPRESSION SEMICOLON
                                | THROW EXPRESSION SEMICOLON
                                | SYNCHRONIZED PAR_EXPRESSION OPEN_NEW_BLOCK BLOCK CLOSE_BLOCK
                                | TRY OPEN_NEW_BLOCK BLOCK CLOSE_BLOCK CATCHES FINALLY_BLOCK
                                | TRY OPEN_NEW_BLOCK BLOCK CLOSE_BLOCK FINALLY_BLOCK
                                | TRY OPEN_NEW_BLOCK BLOCK CLOSE_BLOCK CATCHES
                                ;

OPEN_NEW_BLOCK:                 OPENBRAC  { idCounter++; blockId = idCounter; push(blockId);};

CLOSE_BLOCK:                    CLOSEBRAC { pop(); blockId = peek();};

CATCHES:                        CATCH_CLAUSE 
                                | CATCH_CLAUSE CATCHES
                                ;

CATCH_CLAUSE:                   CATCH OPENPARENT CATCH_TYPE IDENTIFIER CLOSEPARENT OPEN_NEW_BLOCK BLOCK CLOSEBRAC;

CATCH_TYPE:                     IDENTIFIER { checkClassExistance($1); }
                                | CATCH_TYPE BITWISE_OR IDENTIFIER { checkClassExistance($3); }
                                ;

FINALLY_BLOCK:                  FINALLY OPEN_NEW_BLOCK BLOCK CLOSE_BLOCK;

SWITCH_BLOCK_STATEMENT_GROUPS:  SWITCH_BLOCK_STATEMENT_GROUP 
                                | SWITCH_BLOCK_STATEMENT_GROUPS SWITCH_BLOCK_STATEMENT_GROUP
                                ;

SWITCH_BLOCK_STATEMENT_GROUP:   SWITCH_LABELS OPEN_NEW_BLOCK BLOCK CLOSE_BLOCK;

SWITCH_LABELS:                  SWITCH_LABEL 
                                | SWITCH_LABEL SWITCH_LABELS
                                ;

SWITCH_LABEL:                   CASE EXPRESSION TERNARY_ELSE
                                | CASE IDENTIFIER TERNARY_ELSE { CheckVariableExistanceQuitIfNotExists($2, _LOCAL, blockId); }
                                | DEFAULT TERNARY_ELSE
                                ;

FOR_CONTROL:                    FOR_VAR_CONTROL
                                | EXPRESSION_LIST SEMICOLON EXPRESSION SEMICOLON EXPRESSION_LIST
                                | EXPRESSION_LIST SEMICOLON SEMICOLON EXPRESSION_LIST
                                ;

FOR_VAR_CONTROL:                FOR_VAR_CONTROL_HEAD FOR_VAR_CONTROL_REST;

FOR_VAR_CONTROL_HEAD:           TYPE IDENTIFIER ASSIGN VARIABLE_INITIALIZER
                                {
                                   currentNode = insertSymbol($2, _VARIABLE, _DECLARATION, $1, _LOCAL, blockId, "FOR");     
                                }
                                ;

FOR_VAR_CONTROL_REST:            SEMICOLON EXPRESSION SEMICOLON EXPRESSION_LIST
                                |  SEMICOLON SEMICOLON EXPRESSION_LIST
                                ;


TYPE:                           BASIC_TYPE 
                                | IDENTIFIER { checkClassExistance($1) }
                                | TYPE ARRAY_BRACKETS {strcat($$, $2);}
                                ;

BASIC_TYPE:                     BYTE
                                | SHORT
                                | CHAR
                                | INT
                                | LONG
                                | FLOAT
                                | DOUBLE
                                | STRING
                                | BOOLEAN
                                ;
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