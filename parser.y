
%{
#include <stdio.h>	

int yylex(void);
void yyerror(const char *msg);

extern int yylineno;
%}

%error-verbose

%start program

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
%token  COMMENT
%token  COMMENT_LINE
%token  TYPED_STRING

%%
program: IDENTIFIER {printf("compiled with 0 errors");}
%%

extern FILE *yyin;

void yyerror(char const *msg) {
	fprintf(stderr, "Syntax error in line %d: %s\n", yylineno, msg);
}

int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

    return 0;
}