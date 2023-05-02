
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "parser.y"

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



/* Line 189 of yacc.c  */
#line 160 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     IDENTIFIER = 259,
     CONST = 260,
     FINAL = 261,
     PUBLIC = 262,
     PRIVATE = 263,
     PROTECTED = 264,
     STATIC = 265,
     CLASS = 266,
     INTERFACE = 267,
     ENUM = 268,
     ABSTRACT = 269,
     MAIN = 270,
     SUPER = 271,
     EXTENDS = 272,
     IMPLEMENTS = 273,
     ASSERT = 274,
     VOID = 275,
     TRY = 276,
     CATCH = 277,
     THROW = 278,
     THROWS = 279,
     FINALLY = 280,
     VOLATILE = 281,
     TRANSIENT = 282,
     SYNCHRONIZED = 283,
     BOOLEAN = 284,
     BYTE = 285,
     CHAR = 286,
     SHORT = 287,
     STRING = 288,
     INT = 289,
     LONG = 290,
     STRICTFP = 291,
     NULL_ = 292,
     FLOAT = 293,
     DOUBLE = 294,
     PACKAGE = 295,
     TRUE = 296,
     FALSE = 297,
     IF = 298,
     ELSE = 299,
     FOR = 300,
     WHILE = 301,
     DO = 302,
     CONTINUE = 303,
     BREAK = 304,
     SWITCH = 305,
     CASE = 306,
     DEFAULT = 307,
     GOTO = 308,
     IMPORT = 309,
     INSTANCEOF = 310,
     NATIVE = 311,
     RETURN = 312,
     THIS = 313,
     NEW = 314,
     OPENPARENT = 315,
     CLOSEPARENT = 316,
     OPENSQRBRACK = 317,
     CLOSESQRBRACK = 318,
     OPENBRAC = 319,
     CLOSEBRAC = 320,
     SEMICOLON = 321,
     DOT = 322,
     COMMA = 323,
     PLUS = 324,
     MINUS = 325,
     TIMES = 326,
     DIVIDE = 327,
     MODULO = 328,
     ASSIGN = 329,
     EQ = 330,
     NEQ = 331,
     LT = 332,
     GT = 333,
     LE = 334,
     GE = 335,
     TYPED_STRING = 336,
     PLUS_ASSIGN = 337,
     MINUS_ASSIGN = 338,
     TIMES_ASSIGN = 339,
     DIVIDE_ASSIGN = 340,
     BITWISE_AND_ASSIGN = 341,
     BITWISE_OR_ASSIGN = 342,
     XOR_ASSIGN = 343,
     MODULO_ASSIGN = 344,
     AND = 345,
     BITWISE_AND = 346,
     OR = 347,
     BITWISE_OR = 348,
     XOR = 349,
     TERNARY_IF = 350,
     TERNARY_ELSE = 351,
     PLUS_PLUS = 352,
     MINUS_MINUS = 353,
     NOT = 354
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 301 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  246
/* YYNRULES -- Number of states.  */
#define YYNSTATES  421

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   354

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    13,    16,    17,    21,    23,
      27,    29,    33,    36,    39,    42,    44,    46,    48,    51,
      52,    55,    56,    59,    60,    65,    70,    75,    80,    86,
      91,    96,   100,   105,   109,   112,   113,   116,   117,   120,
     121,   123,   127,   129,   131,   133,   135,   137,   139,   141,
     143,   145,   147,   149,   152,   154,   155,   157,   160,   161,
     164,   166,   180,   182,   185,   186,   188,   191,   192,   195,
     198,   201,   207,   213,   218,   222,   224,   226,   230,   234,
     237,   240,   243,   246,   251,   254,   256,   258,   261,   266,
     269,   272,   278,   282,   289,   292,   293,   295,   299,   301,
     305,   308,   312,   314,   316,   320,   322,   326,   327,   331,
     334,   337,   340,   343,   344,   348,   350,   356,   358,   360,
     363,   367,   370,   373,   378,   382,   384,   386,   388,   390,
     392,   394,   396,   398,   400,   403,   407,   409,   411,   413,
     415,   417,   419,   421,   423,   425,   427,   429,   431,   433,
     435,   437,   439,   441,   443,   445,   447,   449,   451,   453,
     456,   457,   459,   462,   463,   465,   467,   469,   471,   474,
     476,   479,   481,   483,   485,   487,   489,   493,   497,   500,
     502,   504,   506,   510,   511,   514,   517,   520,   522,   525,
     526,   528,   530,   534,   537,   541,   545,   551,   557,   563,
     567,   571,   574,   577,   583,   589,   592,   596,   600,   606,
     613,   619,   625,   627,   629,   631,   634,   643,   645,   649,
     654,   656,   659,   664,   666,   669,   673,   677,   680,   682,
     688,   693,   696,   701,   706,   710,   712,   714,   717,   719,
     721,   723,   725,   727,   729,   731,   733
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     101,     0,    -1,   102,   103,   112,   107,    -1,    40,   106,
      66,    -1,    -1,   104,   103,    -1,    -1,    54,   105,    66,
      -1,     4,    -1,   105,    67,     4,    -1,     4,    -1,   106,
      67,     4,    -1,   108,   107,    -1,   109,   107,    -1,   110,
     107,    -1,   108,    -1,   109,    -1,   110,    -1,   111,   108,
      -1,    -1,   113,   109,    -1,    -1,   114,   110,    -1,    -1,
     115,   179,   124,   180,    -1,   115,   179,   125,   180,    -1,
     116,   179,   127,   180,    -1,   117,   179,   128,   180,    -1,
     122,    11,     4,   118,   120,    -1,    11,     4,   118,   120,
      -1,   122,    12,     4,   119,    -1,    12,     4,   119,    -1,
     122,    13,     4,   120,    -1,    13,     4,   120,    -1,    17,
       4,    -1,    -1,    17,     4,    -1,    -1,    18,   121,    -1,
      -1,     4,    -1,   121,    68,     4,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,    14,    -1,     6,    -1,    56,
      -1,    28,    -1,    27,    -1,    26,    -1,    36,    -1,   122,
     123,    -1,   122,    -1,    -1,   129,    -1,   129,   124,    -1,
      -1,   129,   125,    -1,   126,    -1,     7,    10,    20,    15,
      60,    33,    62,    63,     4,    61,   179,   176,   180,    -1,
     130,    -1,   130,   127,    -1,    -1,   131,    -1,   131,   128,
      -1,    -1,   123,   134,    -1,   123,   136,    -1,   123,   143,
      -1,   193,     4,   151,   144,    66,    -1,    20,     4,   151,
     144,    66,    -1,     4,   151,   144,    66,    -1,   132,    66,
     124,    -1,   132,    -1,   133,    -1,   132,    68,   133,    -1,
       4,   170,   124,    -1,     4,   124,    -1,   135,   142,    -1,
     193,     4,    -1,    20,     4,    -1,   139,   138,   148,   137,
      -1,   139,   137,    -1,    66,    -1,    74,    -1,   193,     4,
      -1,   141,   138,   148,   137,    -1,   141,   137,    -1,   193,
       4,    -1,   151,   144,   179,   176,   180,    -1,   151,   144,
      66,    -1,     4,   151,   144,   179,   176,   180,    -1,    24,
     145,    -1,    -1,   146,    -1,   145,    68,   146,    -1,     4,
      -1,   146,    67,     4,    -1,    62,    63,    -1,    62,    63,
     147,    -1,   149,    -1,   155,    -1,    64,   150,    65,    -1,
     148,    -1,   148,    68,   150,    -1,    -1,    60,   152,    61,
      -1,    60,    61,    -1,   153,   154,    -1,   193,     4,    -1,
      68,   152,    -1,    -1,   156,   159,   156,    -1,   156,    -1,
     157,    95,   155,    96,   156,    -1,   157,    -1,   158,    -1,
     158,   160,    -1,   158,    55,   193,    -1,   162,   158,    -1,
     169,   158,    -1,   158,    62,   155,    63,    -1,   166,   164,
     165,    -1,    74,    -1,    82,    -1,    83,    -1,    84,    -1,
      85,    -1,    89,    -1,    86,    -1,    87,    -1,    88,    -1,
     161,   158,    -1,   161,   158,   160,    -1,    92,    -1,    90,
      -1,    91,    -1,    93,    -1,    94,    -1,    75,    -1,    76,
      -1,    78,    -1,    80,    -1,    77,    -1,    79,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    97,
      -1,    98,    -1,    99,    -1,    69,    -1,    70,    -1,    97,
      -1,    98,    -1,   174,   164,    -1,    -1,   163,    -1,   163,
     165,    -1,    -1,   168,    -1,   169,    -1,    58,    -1,    16,
      -1,   167,   170,    -1,     4,    -1,    59,     4,    -1,     3,
      -1,    81,    -1,    41,    -1,    42,    -1,    37,    -1,    60,
     155,    61,    -1,   171,   173,   172,    -1,    60,   172,    -1,
      60,    -1,    61,    -1,   155,    -1,   155,    68,   173,    -1,
      -1,   175,   170,    -1,    67,     4,    -1,    67,     4,    -1,
     177,    -1,   176,   177,    -1,    -1,   140,    -1,   178,    -1,
     179,   176,   180,    -1,   155,    66,    -1,    43,   169,    66,
      -1,    43,   169,   178,    -1,    43,   169,   178,    44,   178,
      -1,    45,    60,   189,    61,   178,    -1,    45,    60,   189,
      61,    66,    -1,    46,   169,   178,    -1,    46,   169,    66,
      -1,    49,    66,    -1,    48,    66,    -1,    50,   169,    64,
     185,    65,    -1,    47,   178,    46,   169,    66,    -1,    57,
      66,    -1,    57,   155,    66,    -1,    23,   155,    66,    -1,
      28,   169,   179,   176,   180,    -1,    21,   179,   176,   180,
     181,   184,    -1,    21,   179,   176,   180,   184,    -1,    21,
     179,   176,   180,   181,    -1,    64,    -1,    65,    -1,   182,
      -1,   182,   181,    -1,    22,    60,   183,     4,    61,   179,
     176,    65,    -1,     4,    -1,   183,    93,     4,    -1,    25,
     179,   176,   180,    -1,   186,    -1,   185,   186,    -1,   187,
     179,   176,   180,    -1,   188,    -1,   188,   187,    -1,    51,
     155,    96,    -1,    51,     4,    96,    -1,    52,    96,    -1,
     190,    -1,   173,    66,   155,    66,   173,    -1,   173,    66,
      66,   173,    -1,   191,   192,    -1,   193,     4,    74,   148,
      -1,    66,   155,    66,   173,    -1,    66,    66,   173,    -1,
     194,    -1,     4,    -1,   193,   147,    -1,    30,    -1,    32,
      -1,    31,    -1,    34,    -1,    35,    -1,    38,    -1,    39,
      -1,    33,    -1,    29,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   191,   191,   193,   194,   197,   198,   201,   203,   211,
     218,   219,   222,   223,   224,   225,   226,   227,   230,   231,
     234,   235,   238,   239,   242,   244,   246,   248,   250,   255,
     262,   267,   274,   279,   285,   286,   289,   290,   293,   294,
     297,   298,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   314,   315,   316,   319,   320,   321,   324,
     325,   328,   330,   331,   332,   335,   336,   337,   341,   342,
     343,   346,   347,   348,   351,   352,   356,   357,   360,   361,
     364,   366,   370,   376,   377,   380,   386,   392,   400,   401,
     404,   411,   415,   421,   429,   430,   433,   434,   437,   438,
     441,   445,   453,   454,   457,   459,   460,   461,   464,   465,
     468,   470,   472,   473,   476,   477,   480,   481,   484,   485,
     486,   489,   490,   491,   492,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   506,   507,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   528,   529,   530,   531,   532,   535,   536,   539,
     540,   543,   544,   545,   548,   549,   550,   551,   552,   553,
     563,   579,   590,   601,   612,   623,   636,   638,   639,   642,
     644,   652,   653,   654,   657,   658,   668,   680,   681,   682,
     685,   686,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,   711,   713,   715,   716,   719,   721,   722,   725,
     727,   728,   731,   733,   734,   737,   738,   739,   742,   743,
     744,   747,   749,   755,   756,   760,   761,   762,   765,   766,
     767,   768,   769,   770,   771,   772,   773
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "IDENTIFIER", "CONST", "FINAL",
  "PUBLIC", "PRIVATE", "PROTECTED", "STATIC", "CLASS", "INTERFACE", "ENUM",
  "ABSTRACT", "MAIN", "SUPER", "EXTENDS", "IMPLEMENTS", "ASSERT", "VOID",
  "TRY", "CATCH", "THROW", "THROWS", "FINALLY", "VOLATILE", "TRANSIENT",
  "SYNCHRONIZED", "BOOLEAN", "BYTE", "CHAR", "SHORT", "STRING", "INT",
  "LONG", "STRICTFP", "NULL_", "FLOAT", "DOUBLE", "PACKAGE", "TRUE",
  "FALSE", "IF", "ELSE", "FOR", "WHILE", "DO", "CONTINUE", "BREAK",
  "SWITCH", "CASE", "DEFAULT", "GOTO", "IMPORT", "INSTANCEOF", "NATIVE",
  "RETURN", "THIS", "NEW", "OPENPARENT", "CLOSEPARENT", "OPENSQRBRACK",
  "CLOSESQRBRACK", "OPENBRAC", "CLOSEBRAC", "SEMICOLON", "DOT", "COMMA",
  "PLUS", "MINUS", "TIMES", "DIVIDE", "MODULO", "ASSIGN", "EQ", "NEQ",
  "LT", "GT", "LE", "GE", "TYPED_STRING", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "TIMES_ASSIGN", "DIVIDE_ASSIGN", "BITWISE_AND_ASSIGN",
  "BITWISE_OR_ASSIGN", "XOR_ASSIGN", "MODULO_ASSIGN", "AND", "BITWISE_AND",
  "OR", "BITWISE_OR", "XOR", "TERNARY_IF", "TERNARY_ELSE", "PLUS_PLUS",
  "MINUS_MINUS", "NOT", "$accept", "PROGRAM", "PACKAGE_DECLARATION",
  "IMPORTS", "SINGLE_IMPORT", "IMPORT_QUALIFIED_IDENTIFIER",
  "QUALIFIED_IDENTIFIER", "PROGRAM_BODY", "CLASSES", "INTERFACES", "ENUMS",
  "SIMPLE_CLASS", "MAIN_CLASS", "SIMPLE_INTERFACE", "SIMPLE_ENUM",
  "CLASS_DECLARATION", "INTERFACE_DECLARATION", "ENUM_DECLARATION",
  "CLASS_EXTENDING_PART", "INTERFACE_EXTENDING_PART", "IMPLEMENTING_PART",
  "IMPLEMENTED_LIST", "MODIFIER", "MODIFIERS", "CLASS_BODY",
  "MAIN_CLASS_BODY", "MAIN_METHOD", "INTERFACE_BODY", "ENUM_BODY",
  "CLASS_BODY_MEMBER", "INTERFACE_BODY_MEMBER", "ENUM_BODY_MEMBER",
  "ENUM_CONSTANTS", "ENUM_CONSTANT", "METHOD_DECLARATOR",
  "METHOD_DECLARATOR_HEAD", "FIELD_DECLARATOR", "END_INIT", "INIT_ASSIGN",
  "FIELD_DECLARATOR_HEAD", "VARIABLE_DECLARATOR",
  "VARIABLE_DECLARATOR_HEAD", "METHOD_DECLARATOR_REST", "CONSTRUCTOR",
  "THROWING_PART", "EXCEPTIONS_LIST", "QUALIFIED_EXCEPTION",
  "ARRAY_BRACKETS", "VARIABLE_INITIALIZER", "ARRAY_INITIALIZER",
  "VARIABLE_INITIALIZER_LIST", "FORMARL_PARAMETERS", "FORMARL_PARAMETER",
  "FORMARL_PARAMETER_HEAD", "FORMARL_PARAMETER_REST", "EXPRESSION",
  "EXPRESSION1", "EXPRESSION2", "EXPRESSION3", "ASSIGNMENT_OPERATOR",
  "INFIX_OPERATIONS", "INFIX_OP", "PREFIX_OP", "POSTFIX_OP", "SELECTORS",
  "POSTFIX_OPERATORS", "PRIMARY", "BEGIN_INSTANCIATION", "LITERAL",
  "PAR_EXPRESSION", "ARGUMENTS", "OPEN_ARGS_PARENT", "CLOSE_ARGS_PARENT",
  "EXPRESSION_LIST", "SELECTOR", "METHOD_SELECTOR", "BLOCK",
  "BLOCK_STATEMENT", "STATEMENT", "OPEN_NEW_BLOCK", "CLOSE_BLOCK",
  "CATCHES", "CATCH_CLAUSE", "CATCH_TYPE", "FINALLY_BLOCK",
  "SWITCH_BLOCK_STATEMENT_GROUPS", "SWITCH_BLOCK_STATEMENT_GROUP",
  "SWITCH_LABELS", "SWITCH_LABEL", "FOR_CONTROL", "FOR_VAR_CONTROL",
  "FOR_VAR_CONTROL_HEAD", "FOR_VAR_CONTROL_REST", "TYPE", "BASIC_TYPE", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   102,   102,   103,   103,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   112,   113,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   123,   123,   123,   124,   124,   124,   125,
     125,   126,   127,   127,   127,   128,   128,   128,   129,   129,
     129,   130,   130,   130,   131,   131,   132,   132,   133,   133,
     134,   135,   135,   136,   136,   137,   138,   139,   140,   140,
     141,   142,   142,   143,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   149,   150,   150,   150,   151,   151,
     152,   153,   154,   154,   155,   155,   156,   156,   157,   157,
     157,   158,   158,   158,   158,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   160,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   162,   162,   162,   162,   162,   163,   163,   164,
     164,   165,   165,   165,   166,   166,   166,   166,   166,   166,
     167,   168,   168,   168,   168,   168,   169,   170,   170,   171,
     172,   173,   173,   173,   174,   174,   175,   176,   176,   176,
     177,   177,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   179,   180,   181,   181,   182,   183,   183,   184,
     185,   185,   186,   187,   187,   188,   188,   188,   189,   189,
     189,   190,   191,   192,   192,   193,   193,   193,   194,   194,
     194,   194,   194,   194,   194,   194,   194
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     0,     2,     0,     3,     1,     3,
       1,     3,     2,     2,     2,     1,     1,     1,     2,     0,
       2,     0,     2,     0,     4,     4,     4,     4,     5,     4,
       4,     3,     4,     3,     2,     0,     2,     0,     2,     0,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     0,     1,     2,     0,     2,
       1,    13,     1,     2,     0,     1,     2,     0,     2,     2,
       2,     5,     5,     4,     3,     1,     1,     3,     3,     2,
       2,     2,     2,     4,     2,     1,     1,     2,     4,     2,
       2,     5,     3,     6,     2,     0,     1,     3,     1,     3,
       2,     3,     1,     1,     3,     1,     3,     0,     3,     2,
       2,     2,     2,     0,     3,     1,     5,     1,     1,     2,
       3,     2,     2,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     1,     2,     0,     1,     1,     1,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     3,     3,     2,     1,
       1,     1,     3,     0,     2,     2,     2,     1,     2,     0,
       1,     1,     3,     2,     3,     3,     5,     5,     5,     3,
       3,     2,     2,     5,     5,     2,     3,     3,     5,     6,
       5,     5,     1,     1,     1,     2,     8,     1,     3,     4,
       1,     2,     4,     1,     2,     3,     3,     2,     1,     5,
       4,     2,     4,     4,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     6,    10,     0,     1,     0,     0,     6,
       3,     0,     8,     0,    47,    42,    43,    44,    45,     0,
      46,    51,    50,    49,    52,    48,    19,     0,     0,     5,
      11,     7,     0,    35,     0,     0,     2,    15,    16,    17,
      19,    21,    23,     0,     0,     0,     0,   212,    55,     0,
       9,     0,    39,    37,    39,    12,    13,    14,    18,    20,
       0,    22,     0,    55,    64,    67,     0,     0,    42,    54,
       0,     0,    60,    55,    35,    34,     0,    29,     0,    31,
      33,     0,    55,   236,     0,   246,   238,   240,   239,   245,
     241,   242,   243,   244,     0,    62,     0,   235,    55,     0,
      65,    75,    76,    37,    39,     0,    53,   236,     0,    68,
       0,    69,     0,    70,     0,   213,    25,    59,    39,    40,
      38,    36,    24,    57,     0,    95,     0,    26,    63,     0,
       0,   237,   179,    79,    55,   183,    27,    66,    55,     0,
      30,    32,     0,    95,    82,    80,    95,    85,    86,    84,
       0,    87,    28,     0,   236,   109,     0,   113,     0,     0,
       0,    95,    95,   100,   180,   178,    78,   171,   169,   167,
     175,   173,   174,   166,     0,     0,   155,   156,   172,   152,
     153,   154,   181,   115,   117,   118,     0,   160,     0,   164,
     165,     0,    74,    77,     0,     0,     0,   107,     0,   102,
     103,    41,   108,     0,   110,   111,    98,    94,    96,    73,
       0,     0,   101,   170,     0,   183,   125,   126,   127,   128,
     129,   131,   132,   133,   130,     0,     0,     0,     0,   147,
     148,   149,   150,   151,   141,   142,   145,   143,   146,   144,
     137,   138,   136,   139,   140,   119,     0,   121,     0,   163,
     160,     0,   168,   122,   177,     0,   189,    92,   189,   105,
       0,    83,   112,     0,     0,    72,    71,   176,   182,   114,
       0,   120,     0,   134,   185,   157,   158,   161,   124,   159,
     184,     0,   169,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   190,     0,     0,     0,   187,   191,
     189,     0,     0,   107,   104,    97,    99,     0,   123,   135,
     162,     0,   189,     0,     0,     0,   183,     0,     0,   202,
     201,     0,   205,     0,    89,     0,   193,   188,    93,     0,
      90,    91,   106,   116,     0,     0,   207,   189,   194,   195,
       0,     0,   228,     0,     0,   200,   199,     0,     0,   206,
       0,   192,     0,     0,     0,     0,     0,     0,     0,   231,
       0,     0,     0,     0,     0,   220,     0,   223,    88,     0,
       0,     0,   211,   214,   210,   208,   196,   183,     0,   198,
     197,   183,     0,     0,   204,   169,     0,   227,   203,   221,
     189,   224,   189,     0,   189,   209,   215,   230,   183,   234,
     183,   232,   226,   225,     0,     0,   217,     0,     0,   229,
     233,   222,    61,     0,     0,   219,     0,   218,   189,     0,
     216
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,    13,     5,    36,    37,    38,
      39,    40,    26,    41,    42,    43,    44,    45,    52,    79,
      77,   120,    69,    70,    81,    71,    72,    94,    99,    82,
      95,   100,   101,   102,   109,   110,   111,   149,   150,   112,
     294,   295,   145,   113,   160,   207,   208,   131,   259,   199,
     260,   125,   156,   157,   204,   296,   183,   184,   185,   225,
     245,   246,   186,   277,   249,   278,   187,   188,   189,   190,
     134,   135,   165,   191,   250,   251,   297,   298,   299,   300,
     116,   372,   373,   407,   374,   364,   365,   366,   367,   341,
     342,   343,   359,   301,    97
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -281
static const yytype_int16 yypact[] =
{
      -9,    43,    52,    10,  -281,   -23,  -281,    55,   955,    10,
    -281,    68,  -281,   -11,  -281,  -281,  -281,  -281,  -281,    70,
    -281,  -281,  -281,  -281,  -281,  -281,   932,    14,    69,  -281,
    -281,  -281,    84,   103,   102,   117,  -281,   932,   932,   932,
     955,   966,   990,    14,    14,    14,    89,  -281,  1021,   123,
    -281,   124,   113,   115,   113,  -281,  -281,  -281,  -281,  -281,
     122,  -281,   125,   892,  1089,   131,   132,   135,   136,  1044,
    1106,    77,  -281,  1021,   103,  -281,   151,  -281,   152,  -281,
    -281,    77,   858,    97,   155,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,    77,  1089,     8,  -281,   174,    77,
     131,     0,  -281,   115,   113,   140,  -281,    97,   157,  -281,
      97,  -281,   -28,  -281,    20,  -281,  -281,  -281,   113,  -281,
      94,  -281,  -281,  -281,    79,   143,    97,  -281,  -281,    97,
     101,  -281,   114,  -281,   869,   538,  -281,  -281,   892,   131,
    -281,  -281,   159,   143,  -281,  -281,   143,  -281,  -281,  -281,
     479,   112,  -281,   172,  -281,  -281,   116,   126,    22,   175,
     119,   143,   143,   128,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,   187,   538,  -281,  -281,  -281,  -281,
    -281,  -281,   129,  1093,    98,  1012,   538,   137,   138,  -281,
     538,   114,  -281,  -281,   139,    14,     5,   479,   130,  -281,
    -281,  -281,  -281,   878,  -281,  -281,  -281,   141,   144,  -281,
     142,   146,  -281,  -281,   145,   538,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,   538,   538,   878,   538,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,   538,   153,   188,    -3,
     137,   138,  -281,   153,  -281,   170,   406,  -281,   406,   148,
     149,  -281,  -281,   175,   201,  -281,  -281,  -281,  -281,  -281,
     127,   128,   150,  1080,   147,  -281,  -281,    -3,  -281,  -281,
    -281,   156,   215,    14,   538,   160,   160,   161,   160,   642,
     158,   163,   160,   721,  -281,   -28,   165,   262,  -281,  -281,
     406,    24,   262,   479,  -281,   144,  -281,   538,  -281,  -281,
    -281,   162,   406,   167,    14,   465,   713,   524,   181,  -281,
    -281,   171,  -281,   177,  -281,   479,  -281,  -281,  -281,   262,
    -281,  -281,  -281,  -281,   233,   262,  -281,   406,  -281,   194,
     178,   180,  -281,   179,    30,  -281,  -281,   160,    64,  -281,
     130,  -281,   185,    26,   262,   642,   772,   583,   792,  -281,
     176,   182,   597,   164,    -2,  -281,    14,    64,  -281,    14,
     192,    14,   232,   236,  -281,  -281,  -281,   538,   193,  -281,
    -281,   538,   195,   479,  -281,   166,   168,  -281,  -281,  -281,
     406,  -281,   406,   259,   406,  -281,  -281,  -281,   538,  -281,
     538,  -281,  -281,  -281,   262,   262,  -281,     6,   262,  -281,
    -281,  -281,  -281,   206,   265,  -281,    14,  -281,   406,   334,
    -281
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -281,  -281,  -281,   263,  -281,  -281,  -281,    87,   231,   234,
     235,  -281,  -281,  -281,  -281,   268,  -281,  -281,   199,   183,
     -31,  -281,   111,   210,   -41,   207,  -281,   186,   184,   -33,
    -281,  -281,  -281,   190,  -281,  -281,  -281,  -192,   -13,  -281,
    -281,  -281,  -281,  -281,   -39,  -281,    25,   154,  -147,  -281,
     -14,   -68,    95,  -281,  -281,  -130,  -218,  -281,  -165,  -281,
      29,  -281,  -281,  -281,    56,    36,  -281,  -281,  -281,  -256,
    -175,  -281,   196,  -211,  -281,  -281,  -247,  -275,  -280,   -27,
     -80,   -59,  -281,  -281,   -57,  -281,   -48,   -49,  -281,  -281,
    -281,  -281,  -281,   -62,  -281
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -237
static const yytype_int16 yytable[] =
{
      48,   122,    96,   198,   268,   182,   261,   269,   114,   318,
     413,   302,   129,   252,   127,    73,    63,    64,    65,   136,
     200,   247,   327,    80,   151,   253,   205,   327,   330,   314,
     315,     1,   317,    96,   360,   339,   321,   346,   147,   143,
      73,   123,   146,    10,    11,   214,   148,     4,   370,   362,
     363,   371,     6,   329,   327,    31,    32,   133,   161,    12,
     327,   162,   158,   388,     7,   335,   138,   200,   139,    47,
     130,   257,    30,   141,    33,   376,   280,   380,    47,   327,
      49,   273,   130,   154,   130,   182,   130,   152,    50,   333,
     354,   361,   130,   166,   275,   276,   270,   192,   272,   414,
      49,    66,    67,   324,   195,   340,    53,   196,    85,    86,
      87,    88,    89,    90,    91,   362,   363,    92,    93,    28,
      51,    54,   210,   211,    55,    56,    57,    74,    75,   327,
     327,    76,    78,   327,    66,    98,   103,    46,    67,   104,
     155,   158,   115,   404,   327,   405,   105,   408,    46,    46,
      46,    28,    60,    62,   313,   119,   121,   124,   368,   126,
     142,   144,   153,   323,   163,   271,   397,   159,   256,   258,
     399,   419,   -81,   200,   194,   164,   201,   202,   350,   206,
      14,    15,    16,    17,    18,   209,   182,   409,    20,   410,
     130,   213,   274,   226,   203,   200,   147,   215,   132,   255,
      21,    22,    23,   281,   248,   306,   267,  -186,   265,   263,
      24,   264,   266,   308,   304,   228,   303,   328,   311,  -236,
     175,   316,   331,   307,   319,   334,   378,   347,   382,   320,
      25,   326,   386,   336,   132,   348,   401,   352,   355,   -58,
     -58,   357,   -58,   349,   356,   358,   369,   182,   384,   351,
     383,   182,   393,   200,   344,   353,   312,   371,   370,   398,
     387,   400,   402,   406,   403,   167,   282,   416,   182,   417,
     182,    58,    29,   118,   375,    59,    27,    61,   169,   106,
     117,   128,   325,   283,   137,   284,   140,   337,   305,   332,
     285,    85,    86,    87,    88,    89,    90,    91,   262,   170,
      92,    93,   309,   171,   172,   286,   279,   287,   288,   289,
     290,   291,   292,   310,   396,   395,   389,   212,   391,   293,
     173,   174,   175,     0,   411,   412,    47,   115,   415,   193,
       0,   176,   177,     0,     0,     0,     0,   167,   282,   390,
       0,     0,   392,   178,   394,     0,     0,     0,     0,     0,
     169,     0,     0,     0,     0,   283,     0,   284,     0,   179,
     180,   181,   285,    85,    86,    87,    88,    89,    90,    91,
       0,   170,    92,    93,     0,   171,   172,   286,     0,   287,
     288,   289,   290,   291,   292,     0,     0,   254,     0,   418,
       0,   293,   173,   174,   175,     0,     0,     0,    47,   420,
       0,     0,     0,   176,   177,     0,     0,     0,     0,   167,
     282,     0,     0,     0,     0,   178,     0,     0,     0,     0,
       0,     0,   169,     0,     0,     0,     0,   283,     0,   284,
       0,   179,   180,   181,   285,    85,    86,    87,    88,    89,
      90,    91,     0,   170,    92,    93,     0,   171,   172,   286,
       0,   287,   288,   289,   290,   291,   292,     0,     0,     0,
       0,     0,     0,   293,   173,   174,   175,     0,   167,   168,
      47,     0,     0,     0,     0,   176,   177,     0,     0,     0,
       0,   169,   167,   168,     0,     0,   283,   178,   284,     0,
       0,     0,     0,   285,     0,   169,     0,     0,     0,     0,
       0,     0,   170,   179,   180,   181,   171,   172,   286,     0,
     287,   288,   289,   290,   291,   292,   170,     0,     0,     0,
     171,   172,   293,   173,   174,   175,     0,   167,   168,    47,
       0,   338,     0,     0,   176,   177,     0,   173,   174,   175,
     169,   167,   168,   197,     0,   283,   178,   284,   176,   177,
       0,     0,   285,     0,   169,     0,     0,     0,     0,     0,
     178,   170,   179,   180,   181,   171,   172,   286,     0,   287,
     288,   289,   290,   291,   292,   170,   179,   180,   181,   171,
     172,   293,   173,   174,   175,     0,   167,   168,    47,     0,
     345,     0,     0,   176,   177,     0,   173,   174,   175,   169,
     167,   385,     0,     0,   283,   178,   284,   176,   177,     0,
       0,   285,     0,   169,     0,     0,     0,     0,     0,   178,
     170,   179,   180,   181,   171,   172,   286,     0,   287,   288,
     289,   290,   291,   292,   170,   179,   180,   181,   171,   172,
     293,   173,   174,   175,     0,   167,   168,    47,     0,   379,
       0,     0,   176,   177,     0,   173,   174,   175,   169,     0,
       0,     0,     0,   283,   178,   284,   176,   177,     0,     0,
     285,     0,     0,     0,     0,     0,     0,     0,   178,   170,
     179,   180,   181,   171,   172,   286,     0,   287,   288,   289,
     290,   291,   292,     0,   179,   180,   181,     0,     0,   293,
     173,   174,   175,     0,     0,     0,    47,     0,     0,     0,
       0,   176,   177,     0,     0,     0,   167,   282,     0,     0,
       0,     0,     0,   178,   167,   168,     0,     0,     0,   169,
       0,     0,     0,     0,     0,     0,     0,   169,     0,   179,
     180,   181,    85,    86,    87,    88,    89,    90,    91,     0,
     170,    92,    93,     0,   171,   172,     0,     0,   170,     0,
       0,     0,   171,   172,     0,     0,     0,     0,     0,     0,
       0,   173,   174,   175,     0,   167,   168,     0,     0,   173,
     174,   175,   176,   177,     0,     0,     0,   322,   169,     0,
     176,   177,     0,     0,   178,   167,   168,     0,     0,     0,
       0,     0,   178,     0,     0,     0,     0,     0,   169,   170,
     179,   180,   181,   171,   172,     0,     0,     0,   179,   180,
     181,     0,     0,     0,     0,     0,     0,     0,     0,   170,
     173,   174,   175,   171,   172,     0,     0,     0,   377,     0,
       0,   176,   177,     0,     0,     0,     0,     0,     0,     0,
     173,   174,   175,   178,     0,     0,     0,     0,   381,     0,
       0,   176,   177,     0,    14,    15,    16,    17,    18,   179,
     180,   181,    20,   178,     0,    14,    15,    16,    17,    18,
       0,     0,   154,    20,    21,    22,    23,     0,     0,   179,
     180,   181,     0,     0,    24,    21,    22,    23,    14,    15,
      16,    17,    18,     0,     0,    24,    20,    85,    86,    87,
      88,    89,    90,    91,    25,     0,    92,    93,    21,    22,
      23,     0,     0,   -56,   -56,    25,   -56,     0,    24,     0,
       0,     0,     0,     0,   -58,   -58,     0,   -58,    14,    15,
      16,    17,    18,    19,    34,    35,    20,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     0,   -58,    21,    22,
      23,    14,    15,    16,    17,    18,    19,     0,    24,    20,
       0,     0,    14,    15,    16,    17,    18,     0,    34,     0,
      20,    21,    22,    23,     0,     0,     0,     0,    25,     0,
       0,    24,    21,    22,    23,     0,    14,    15,    16,    17,
      18,     0,    24,    35,    20,     0,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,    21,    22,    23,     0,
       0,     0,    25,     0,     0,     0,    24,    14,    68,    16,
      17,    18,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    21,    22,    23,
      14,    15,    16,    17,    18,     0,     0,    24,    20,     0,
       0,     0,     0,     0,     0,     0,     0,   227,     0,     0,
      21,    22,    23,     0,   228,     0,     0,    25,     0,     0,
      24,   229,   230,   231,   232,   233,     0,   234,   235,   236,
     237,   238,   239,    83,     0,     0,     0,     0,     0,     0,
      25,     0,   240,   241,   242,   243,   244,     0,     0,    84,
     107,     0,     0,     0,     0,     0,     0,     0,    85,    86,
      87,    88,    89,    90,    91,     0,   108,    92,    93,     0,
       0,     0,     0,     0,     0,    85,    86,    87,    88,    89,
      90,    91,   228,     0,    92,    93,     0,     0,     0,   229,
     230,   231,   232,   233,     0,   234,   235,   236,   237,   238,
     239,     0,     0,     0,     0,     0,     0,   216,     0,     0,
     240,   241,   242,   243,   244,   217,   218,   219,   220,   221,
     222,   223,   224
};

static const yytype_int16 yycheck[] =
{
      27,    81,    64,   150,   215,   135,   198,   225,    70,   289,
       4,   258,     4,   188,    94,    48,    43,    44,    45,    99,
     150,   186,   297,    54,     4,   190,     4,   302,     4,   285,
     286,    40,   288,    95,     4,   315,   292,   317,    66,   107,
      73,    82,   110,    66,    67,   175,    74,     4,    22,    51,
      52,    25,     0,   300,   329,    66,    67,    98,   126,     4,
     335,   129,   124,    65,    54,   312,    66,   197,    68,    64,
      62,    66,     4,   104,     4,   355,   251,   357,    64,   354,
      11,   246,    62,     4,    62,   215,    62,   118,     4,   307,
     337,   347,    62,   134,    97,    98,   226,   138,   228,    93,
      11,    12,    13,   295,   143,   316,     4,   146,    29,    30,
      31,    32,    33,    34,    35,    51,    52,    38,    39,     8,
      17,     4,   161,   162,    37,    38,    39,     4,     4,   404,
     405,    18,    17,   408,    12,     4,     4,    26,    13,     4,
      61,   203,    65,   390,   419,   392,    10,   394,    37,    38,
      39,    40,    41,    42,   284,     4,     4,    60,   350,     4,
      20,     4,    68,   293,    63,   227,   377,    24,   195,   196,
     381,   418,    60,   303,    15,    61,     4,    61,   325,     4,
       6,     7,     8,     9,    10,    66,   316,   398,    14,   400,
      62,     4,     4,    95,    68,   325,    66,    68,    60,    60,
      26,    27,    28,    33,    67,     4,    61,    60,    66,    68,
      36,    67,    66,    63,    65,    62,    68,   297,    62,     4,
      60,    60,   302,    96,    66,    63,   356,    46,   358,    66,
      56,    66,   362,    66,    60,    64,   383,     4,    44,    65,
      66,    61,    68,    66,    66,    66,    61,   377,    66,   329,
      74,   381,    60,   383,   316,   335,   283,    25,    22,    66,
      96,    66,    96,     4,    96,     3,     4,    61,   398,     4,
     400,    40,     9,    74,   354,    41,     8,    42,    16,    69,
      73,    95,   295,    21,   100,    23,   103,   314,   263,   303,
      28,    29,    30,    31,    32,    33,    34,    35,   203,    37,
      38,    39,   273,    41,    42,    43,   250,    45,    46,    47,
      48,    49,    50,   277,   373,   372,   364,   163,   367,    57,
      58,    59,    60,    -1,   404,   405,    64,    65,   408,   139,
      -1,    69,    70,    -1,    -1,    -1,    -1,     3,     4,   366,
      -1,    -1,   369,    81,   371,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    21,    -1,    23,    -1,    97,
      98,    99,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    -1,    41,    42,    43,    -1,    45,
      46,    47,    48,    49,    50,    -1,    -1,   191,    -1,   416,
      -1,    57,    58,    59,    60,    -1,    -1,    -1,    64,    65,
      -1,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    21,    -1,    23,
      -1,    97,    98,    99,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    -1,    41,    42,    43,
      -1,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    -1,     3,     4,
      64,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,
      -1,    16,     3,     4,    -1,    -1,    21,    81,    23,    -1,
      -1,    -1,    -1,    28,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    97,    98,    99,    41,    42,    43,    -1,
      45,    46,    47,    48,    49,    50,    37,    -1,    -1,    -1,
      41,    42,    57,    58,    59,    60,    -1,     3,     4,    64,
      -1,    66,    -1,    -1,    69,    70,    -1,    58,    59,    60,
      16,     3,     4,    64,    -1,    21,    81,    23,    69,    70,
      -1,    -1,    28,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      81,    37,    97,    98,    99,    41,    42,    43,    -1,    45,
      46,    47,    48,    49,    50,    37,    97,    98,    99,    41,
      42,    57,    58,    59,    60,    -1,     3,     4,    64,    -1,
      66,    -1,    -1,    69,    70,    -1,    58,    59,    60,    16,
       3,     4,    -1,    -1,    21,    81,    23,    69,    70,    -1,
      -1,    28,    -1,    16,    -1,    -1,    -1,    -1,    -1,    81,
      37,    97,    98,    99,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    50,    37,    97,    98,    99,    41,    42,
      57,    58,    59,    60,    -1,     3,     4,    64,    -1,    66,
      -1,    -1,    69,    70,    -1,    58,    59,    60,    16,    -1,
      -1,    -1,    -1,    21,    81,    23,    69,    70,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    37,
      97,    98,    99,    41,    42,    43,    -1,    45,    46,    47,
      48,    49,    50,    -1,    97,    98,    99,    -1,    -1,    57,
      58,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    81,     3,     4,    -1,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    97,
      98,    99,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    -1,    41,    42,    -1,    -1,    37,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    -1,     3,     4,    -1,    -1,    58,
      59,    60,    69,    70,    -1,    -1,    -1,    66,    16,    -1,
      69,    70,    -1,    -1,    81,     3,     4,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    16,    37,
      97,    98,    99,    41,    42,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      58,    59,    60,    41,    42,    -1,    -1,    -1,    66,    -1,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    81,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    69,    70,    -1,     6,     7,     8,     9,    10,    97,
      98,    99,    14,    81,    -1,     6,     7,     8,     9,    10,
      -1,    -1,     4,    14,    26,    27,    28,    -1,    -1,    97,
      98,    99,    -1,    -1,    36,    26,    27,    28,     6,     7,
       8,     9,    10,    -1,    -1,    36,    14,    29,    30,    31,
      32,    33,    34,    35,    56,    -1,    38,    39,    26,    27,
      28,    -1,    -1,    65,    66,    56,    68,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    65,    66,    -1,    68,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    26,    27,
      28,     6,     7,     8,     9,    10,    11,    -1,    36,    14,
      -1,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    26,    27,    28,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    36,    26,    27,    28,    -1,     6,     7,     8,     9,
      10,    -1,    36,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    36,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    26,    27,    28,
       6,     7,     8,     9,    10,    -1,    -1,    36,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      26,    27,    28,    -1,    62,    -1,    -1,    56,    -1,    -1,
      36,    69,    70,    71,    72,    73,    -1,    75,    76,    77,
      78,    79,    80,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    90,    91,    92,    93,    94,    -1,    -1,    20,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    -1,    20,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    62,    -1,    38,    39,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      90,    91,    92,    93,    94,    82,    83,    84,    85,    86,
      87,    88,    89
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,   101,   102,     4,   106,     0,    54,   103,   104,
      66,    67,     4,   105,     6,     7,     8,     9,    10,    11,
      14,    26,    27,    28,    36,    56,   112,   115,   122,   103,
       4,    66,    67,     4,    12,    13,   107,   108,   109,   110,
     111,   113,   114,   115,   116,   117,   122,    64,   179,    11,
       4,    17,   118,     4,     4,   107,   107,   107,   108,   109,
     122,   110,   122,   179,   179,   179,    12,    13,     7,   122,
     123,   125,   126,   129,     4,     4,    18,   120,    17,   119,
     120,   124,   129,     4,    20,    29,    30,    31,    32,    33,
      34,    35,    38,    39,   127,   130,   193,   194,     4,   128,
     131,   132,   133,     4,     4,    10,   123,     4,    20,   134,
     135,   136,   139,   143,   193,    65,   180,   125,   118,     4,
     121,     4,   180,   124,    60,   151,     4,   180,   127,     4,
      62,   147,    60,   124,   170,   171,   180,   128,    66,    68,
     119,   120,    20,   151,     4,   142,   151,    66,    74,   137,
     138,     4,   120,    68,     4,    61,   152,   153,   193,    24,
     144,   151,   151,    63,    61,   172,   124,     3,     4,    16,
      37,    41,    42,    58,    59,    60,    69,    70,    81,    97,
      98,    99,   155,   156,   157,   158,   162,   166,   167,   168,
     169,   173,   124,   133,    15,   144,   144,    64,   148,   149,
     155,     4,    61,    68,   154,     4,     4,   145,   146,    66,
     144,   144,   147,     4,   155,    68,    74,    82,    83,    84,
      85,    86,    87,    88,    89,   159,    95,    55,    62,    69,
      70,    71,    72,    73,    75,    76,    77,    78,    79,    80,
      90,    91,    92,    93,    94,   160,   161,   158,    67,   164,
     174,   175,   170,   158,   172,    60,   179,    66,   179,   148,
     150,   137,   152,    68,    67,    66,    66,    61,   173,   156,
     155,   193,   155,   158,     4,    97,    98,   163,   165,   164,
     170,    33,     4,    21,    23,    28,    43,    45,    46,    47,
      48,    49,    50,    57,   140,   141,   155,   176,   177,   178,
     179,   193,   176,    68,    65,   146,     4,    96,    63,   160,
     165,    62,   179,   155,   169,   169,    60,   169,   178,    66,
      66,   169,    66,   155,   137,   138,    66,   177,   180,   176,
       4,   180,   150,   156,    63,   176,    66,   179,    66,   178,
     173,   189,   190,   191,   193,    66,   178,    46,    64,    66,
     148,   180,     4,   180,   176,    44,    66,    61,    66,   192,
       4,   169,    51,    52,   185,   186,   187,   188,   137,    61,
      22,    25,   181,   182,   184,   180,   178,    66,   155,    66,
     178,    66,   155,    74,    66,     4,   155,    96,    65,   186,
     179,   187,   179,    60,   179,   184,   181,   173,    66,   173,
      66,   148,    96,    96,   176,   176,     4,   183,   176,   173,
     173,   180,   180,     4,    93,   180,    61,     4,   179,   176,
      65
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    {  printf("Compiled successfully"); printTab(); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    {
                                    if (!multipleLevelImport) 
                                    {
                                        currentNode = insertSymbol((yyvsp[(1) - (1)]), _IMPORT, -1, "UNKNOWN", _GLOBAL, blockId, NULL);
                                    }
                                    multipleLevelImport = 0;
                                ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {
                                    multipleLevelImport = 1;
                                    currentNode = insertSymbol((yyvsp[(3) - (3)]), _IMPORT, -1, "UNKNOWN", _GLOBAL, blockId, NULL);
                                ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 251 "parser.y"
    { 
                                    checkClassDeclaration((yyvsp[(3) - (5)])); 
                                    currentClass = currentNode = insertSymbol((yyvsp[(3) - (5)]), _DECLARATION, _CLASS, "UNKNOWN", _GLOBAL, blockId, NULL); 
                                ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    { 
                                    checkClassDeclaration((yyvsp[(2) - (4)])); 
                                    currentClass = currentNode = insertSymbol((yyvsp[(2) - (4)]), _DECLARATION, _CLASS, "UNKNOWN", _GLOBAL, blockId, NULL); 
                                ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 263 "parser.y"
    { 
                                    checkInterfaceDeclaration((yyvsp[(3) - (4)])); 
                                    currentClass = currentNode = insertSymbol((yyvsp[(3) - (4)]), _DECLARATION, _INTERFACE, "UNKNOWN", _GLOBAL, blockId, NULL);
                                ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 268 "parser.y"
    {
                                    checkInterfaceDeclaration((yyvsp[(2) - (3)])); 
                                    currentClass = currentNode = insertSymbol((yyvsp[(2) - (3)]), _DECLARATION, _INTERFACE, "UNKNOWN", _GLOBAL, blockId, NULL);
                                ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    {
                                    checkEnumDeclaration((yyvsp[(3) - (4)])); 
                                    currentClass = currentNode = insertSymbol((yyvsp[(3) - (4)]), _DECLARATION, _ENUM, "UNKNOWN", _GLOBAL, blockId, NULL);
                                ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    {
                                    checkEnumDeclaration((yyvsp[(2) - (3)])); 
                                    currentClass = currentNode = insertSymbol((yyvsp[(2) - (3)]), _DECLARATION, _ENUM, "UNKNOWN", _GLOBAL, blockId, NULL);
                                ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 285 "parser.y"
    { checkClassExistance((yyvsp[(2) - (2)])); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 289 "parser.y"
    { checkInterfaceExistance((yyvsp[(2) - (2)])); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    { checkInterfaceExistance((yyvsp[(1) - (1)])); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 298 "parser.y"
    { checkInterfaceExistance((yyvsp[(3) - (3)])); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 367 "parser.y"
    {
                                    currentMethod = currentNode = insertSymbol((yyvsp[(2) - (2)]), _DECLARATION, _METHOD, (yyvsp[(1) - (2)]), _GLOBAL, blockId, currentClass->name);
                                ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 371 "parser.y"
    {
                                    currentMethod = currentNode = insertSymbol((yyvsp[(2) - (2)]), _DECLARATION, _METHOD, (yyvsp[(1) - (2)]), _GLOBAL, blockId, currentClass->name);
                                ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 381 "parser.y"
    {
                                    insideAssign = 0;
                                ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 387 "parser.y"
    {
                                    insideAssign = 1;
                                ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 393 "parser.y"
    {
                                    checkVariableDeclaration((yyvsp[(2) - (2)]), _GLOBAL, blockId);
                                    currentNode = insertSymbol((yyvsp[(2) - (2)]), _DECLARATION, _VARIABLE, (yyvsp[(1) - (2)]), _GLOBAL, blockId, currentClass->name); 
                                ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 405 "parser.y"
    {
                                    checkVariableDeclaration((yyvsp[(2) - (2)]), _LOCAL, blockId);
                                    currentNode = insertSymbol((yyvsp[(2) - (2)]), _DECLARATION, _VARIABLE, (yyvsp[(1) - (2)]), _LOCAL, blockId, NULL); 
                                ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 412 "parser.y"
    { 
                                    checkMethodDeclaration(currentMethod->name, currentMethod->blockId);
                                ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 416 "parser.y"
    { 
                                    checkMethodDeclaration(currentMethod->name, currentMethod->blockId); 
                                ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 422 "parser.y"
    {
                                    currentMethod = currentNode = insertSymbol((yyvsp[(1) - (6)]), _DECLARATION, _CONSTRUCTOR, "void", _GLOBAL, blockId, currentClass->name); 
                                    checkConstructorName((yyvsp[(1) - (6)]), currentClass->name);
                                    checkMethodDeclaration(currentMethod->name, currentMethod->blockId);
                                ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 437 "parser.y"
    { checkClassExistance((yyvsp[(1) - (1)])); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 438 "parser.y"
    { checkClassExistance((yyvsp[(3) - (3)])); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 442 "parser.y"
    {
                                    strcpy((yyval), "[]");
                                ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 446 "parser.y"
    {
                                    strcpy((yyval), "["); strcat((yyval), "]"); 
                                    strcat((yyval), (yyvsp[(3) - (3)]));
                                ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 470 "parser.y"
    { addMethodArg(currentMethod, (yyvsp[(2) - (2)]), (yyvsp[(1) - (2)])); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 486 "parser.y"
    { checkClassExistance((yyvsp[(3) - (3)])); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 550 "parser.y"
    { usingThis = 1; ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 554 "parser.y"
    { 
                                    checkVariableExistance((yyvsp[(1) - (1)]), _LOCAL, blockId, 1);
                                    if (insideArgs)
                                    {
                                        insertCallArg(methodCall, (yyvsp[(1) - (1)]), NULL);
                                    }
                                ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 564 "parser.y"
    {
                                   checkClassExistance((yyvsp[(2) - (2)]));
                                    if (insideArgs)
                                    {
                                        insertCallArg(methodCall, NULL, (yyvsp[(2) - (2)]));
                                    } 
                                    if (insideAssign)
                                    {
                                        checkVariableInitType(currentNode, (yyvsp[(2) - (2)]));
                                    }
                                    methodCall = insertSymbol((yyvsp[(2) - (2)]), _CALL, _CONSTRUCTOR, (yyvsp[(2) - (2)]), _LOCAL, blockId, currentClass->name);
                                    pushMethod(methodCall);
                                ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 580 "parser.y"
    {
                                    if (insideArgs) 
                                    {
                                        insertCallArg(methodCall, NULL, "NUMBER");
                                    }
                                    else if (insideAssign)
                                    {
                                        checkVariableInitType(currentNode, "NUMBER");
                                    }
                                ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 591 "parser.y"
    {
                                    if (insideArgs) 
                                    {
                                        insertCallArg(methodCall, NULL, "String");
                                    }
                                    else if (insideAssign)
                                    {
                                        checkVariableInitType(currentNode, "String");
                                    }
                                ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 602 "parser.y"
    {
                                    if (insideArgs) 
                                    {
                                       insertCallArg(methodCall, NULL, "TRUE");
                                    }
                                    else if (insideAssign)
                                    {
                                        checkVariableInitType(currentNode, "TRUE");
                                    }
                                ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 613 "parser.y"
    {
                                    if (insideArgs) 
                                    {
                                       insertCallArg(methodCall, NULL, "FALSE");
                                    }
                                    else if (insideAssign)
                                    {
                                        checkVariableInitType(currentNode, "FALSE");
                                    }
                                ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 624 "parser.y"
    {
                                    if (insideArgs) 
                                    {
                                        insertCallArg(methodCall, NULL, "NULL_");
                                    }
                                    if (insideAssign)
                                    {
                                        checkVariableInitType(currentNode, "NULL_");
                                    }
                                ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 642 "parser.y"
    { insideArgs = 1; ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 645 "parser.y"
    { 
                                    insideArgs = 0; 
                                    checkMissingArgs(methodCall, currentClass->name);
                                    popMethod();
                                    methodCall = peekMethod(); 
                                ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 659 "parser.y"
    { 
                                    if (usingThis) 
                                    {  
                                        checkFieldExistanceInClass((yyvsp[(2) - (2)]), currentClass->name);
                                        usingThis = 0; 
                                    }
                                ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 669 "parser.y"
    {
                                    if (usingThis) 
                                    { 
                                        checkMethodExistanceInClass((yyvsp[(2) - (2)]), currentClass->name); 
                                        methodCall = currentNode = insertSymbol((yyvsp[(2) - (2)]), _CALL, _METHOD, "unknown", _LOCAL, blockId, currentClass->name);
                                        pushMethod(methodCall);
                                        usingThis = 0; 
                                    } 
                                ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 711 "parser.y"
    { idCounter++; blockId = idCounter; push(blockId);;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 713 "parser.y"
    { pop(); blockId = peek();;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 721 "parser.y"
    { checkClassExistance((yyvsp[(1) - (1)])); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 722 "parser.y"
    { checkClassExistance((yyvsp[(3) - (3)])); ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 738 "parser.y"
    { CheckVariableExistanceQuitIfNotExists((yyvsp[(2) - (3)]), _LOCAL, blockId); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 750 "parser.y"
    {
                                   currentNode = insertSymbol((yyvsp[(2) - (4)]), _VARIABLE, _DECLARATION, (yyvsp[(1) - (4)]), _LOCAL, blockId, "FOR");     
                                ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 761 "parser.y"
    { checkClassExistance((yyvsp[(1) - (1)])) ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 762 "parser.y"
    {strcat((yyval), (yyvsp[(2) - (2)]));;}
    break;



/* Line 1455 of yacc.c  */
#line 2560 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 775 "parser.y"


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
