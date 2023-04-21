
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

int yylex(void);
void yyerror(const char *msg);

extern int line;


/* Line 189 of yacc.c  */
#line 83 "parser.tab.c"

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
     NOT = 354,
     SPREAD = 355
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
#line 225 "parser.tab.c"

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1569

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  254
/* YYNRULES -- Number of states.  */
#define YYNSTATES  427

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   355

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
      95,    96,    97,    98,    99,   100
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    15,    19,    20,    23,
      24,    28,    34,    38,    41,    44,    47,    49,    51,    53,
      56,    57,    60,    61,    64,    65,    70,    75,    80,    86,
      91,    96,   100,   105,   109,   112,   113,   116,   117,   119,
     123,   125,   127,   129,   131,   133,   135,   137,   139,   141,
     143,   145,   148,   150,   151,   153,   156,   157,   159,   162,
     163,   165,   168,   169,   172,   175,   178,   184,   190,   195,
     199,   201,   203,   207,   211,   214,   218,   222,   226,   230,
     233,   237,   240,   242,   244,   245,   247,   251,   254,   260,
     264,   271,   274,   275,   278,   282,   285,   287,   289,   293,
     295,   299,   300,   304,   307,   308,   311,   313,   317,   320,
     322,   326,   328,   334,   336,   338,   341,   345,   348,   351,
     356,   361,   365,   367,   369,   371,   373,   375,   377,   379,
     381,   383,   386,   390,   392,   394,   396,   398,   400,   402,
     404,   406,   408,   410,   412,   414,   416,   418,   420,   422,
     424,   426,   428,   430,   432,   434,   436,   438,   441,   442,
     444,   447,   448,   450,   452,   454,   457,   460,   464,   466,
     469,   473,   475,   477,   479,   481,   483,   485,   489,   493,
     495,   499,   500,   502,   505,   509,   511,   513,   515,   519,
     522,   524,   526,   529,   530,   532,   534,   538,   542,   544,
     547,   551,   557,   563,   567,   570,   574,   578,   581,   587,
     593,   596,   600,   604,   610,   617,   623,   629,   631,   634,
     643,   645,   649,   654,   656,   659,   664,   666,   669,   673,
     677,   680,   682,   688,   693,   697,   703,   708,   711,   714,
     719,   720,   722,   724,   727,   729,   731,   733,   735,   737,
     739,   741,   743,   745,   747
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     107,     0,    -1,     4,    -1,   102,    67,     4,    -1,   102,
      -1,   103,    68,   102,    -1,    40,   102,    66,    -1,    -1,
     106,   105,    -1,    -1,    54,   102,    66,    -1,    54,   102,
      67,    71,    66,    -1,   104,   105,   108,    -1,   109,   108,
      -1,   110,   108,    -1,   111,   108,    -1,   109,    -1,   110,
      -1,   111,    -1,   112,   109,    -1,    -1,   113,   110,    -1,
      -1,   114,   111,    -1,    -1,   115,    64,   123,    65,    -1,
     116,    64,   124,    65,    -1,   117,    64,   125,    65,    -1,
     121,    11,     4,   118,   119,    -1,    11,     4,   118,   119,
      -1,   121,    12,     4,   118,    -1,    12,     4,   118,    -1,
     121,    13,     4,   119,    -1,    13,     4,   119,    -1,    17,
       4,    -1,    -1,    18,   120,    -1,    -1,     4,    -1,   120,
      68,     4,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    14,    -1,     6,    -1,    56,    -1,    28,    -1,    27,
      -1,    26,    -1,    36,    -1,   121,   122,    -1,   121,    -1,
      -1,   126,    -1,   126,   123,    -1,    -1,   127,    -1,   127,
     124,    -1,    -1,   128,    -1,   128,   125,    -1,    -1,   122,
     131,    -1,   122,   132,    -1,   122,   138,    -1,   185,     4,
     145,   139,    66,    -1,    20,     4,   145,   139,    66,    -1,
       4,   145,   139,    66,    -1,   129,    66,   123,    -1,   129,
      -1,   130,    -1,   129,    68,   130,    -1,     4,   164,   123,
      -1,     4,   123,    -1,   185,     4,   137,    -1,    20,     4,
     137,    -1,    20,    15,   137,    -1,   185,     4,   133,    -1,
     134,    66,    -1,   134,   135,    66,    -1,   140,   141,    -1,
     140,    -1,   141,    -1,    -1,   136,    -1,   136,    68,   135,
      -1,     4,   134,    -1,   145,   139,    64,   169,    65,    -1,
     145,   139,    66,    -1,     4,   145,   139,    64,   169,    65,
      -1,    24,   103,    -1,    -1,    62,    63,    -1,    62,    63,
     140,    -1,    74,   142,    -1,   143,    -1,   149,    -1,    64,
     144,    65,    -1,   142,    -1,   142,    68,   144,    -1,    -1,
      60,   146,    61,    -1,   185,   147,    -1,    -1,   100,   148,
      -1,   148,    -1,   148,    68,   146,    -1,     4,   140,    -1,
       4,    -1,   150,   153,   150,    -1,   150,    -1,   151,    95,
     149,    96,   150,    -1,   151,    -1,   152,    -1,   152,   154,
      -1,   152,    55,   185,    -1,   156,   152,    -1,   163,   152,
      -1,    60,   185,    61,   152,    -1,   152,    62,   149,    63,
      -1,   160,   158,   159,    -1,    74,    -1,    82,    -1,    83,
      -1,    84,    -1,    85,    -1,    89,    -1,    86,    -1,    87,
      -1,    88,    -1,   155,   152,    -1,   155,   152,   154,    -1,
      92,    -1,    90,    -1,    91,    -1,    93,    -1,    94,    -1,
      75,    -1,    76,    -1,    78,    -1,    80,    -1,    77,    -1,
      79,    -1,    69,    -1,    70,    -1,    71,    -1,    72,    -1,
      73,    -1,    97,    -1,    98,    -1,    99,    -1,    69,    -1,
      70,    -1,    97,    -1,    98,    -1,   168,    -1,   168,   158,
      -1,    -1,   157,    -1,   157,   159,    -1,    -1,   162,    -1,
     163,    -1,    58,    -1,    58,   166,    -1,    16,   166,    -1,
      59,   161,   164,    -1,   161,    -1,   161,   167,    -1,     4,
      67,   161,    -1,     4,    -1,     3,    -1,    81,    -1,    41,
      -1,    42,    -1,    37,    -1,    60,   149,    61,    -1,    60,
     165,    61,    -1,   149,    -1,   149,    68,   165,    -1,    -1,
     164,    -1,    67,     4,    -1,    67,     4,   164,    -1,   149,
      -1,   164,    -1,   157,    -1,    67,     4,   164,    -1,    67,
       4,    -1,   149,    -1,   170,    -1,   169,   170,    -1,    -1,
     171,    -1,   172,    -1,   185,   135,    66,    -1,    64,   169,
      65,    -1,    66,    -1,   149,    66,    -1,    43,   163,   172,
      -1,    43,   163,   172,    44,   172,    -1,    45,    60,   181,
      61,   172,    -1,    46,   163,   172,    -1,    49,    66,    -1,
      49,     4,    66,    -1,    48,     4,    66,    -1,    48,    66,
      -1,    50,   163,    64,   177,    65,    -1,    47,   172,    46,
     163,    66,    -1,    57,    66,    -1,    57,   149,    66,    -1,
      23,   149,    66,    -1,    28,   163,    64,   169,    65,    -1,
      21,    64,   169,    65,   173,   176,    -1,    21,    64,   169,
      65,   176,    -1,    21,    64,   169,    65,   173,    -1,   174,
      -1,   174,   173,    -1,    22,    60,   175,     4,    61,    64,
     169,    65,    -1,   102,    -1,   175,    93,   102,    -1,    25,
      64,   169,    65,    -1,   178,    -1,   177,   178,    -1,   179,
      64,   169,    65,    -1,   180,    -1,   180,   179,    -1,    51,
     149,    96,    -1,    51,     4,    96,    -1,    52,    96,    -1,
     182,    -1,   165,    66,   149,    66,   165,    -1,   165,    66,
      66,   165,    -1,   185,   148,   183,    -1,   184,    66,   149,
      66,   165,    -1,   184,    66,    66,   165,    -1,    96,   149,
      -1,    74,   142,    -1,    74,   142,    68,   135,    -1,    -1,
     186,    -1,   187,    -1,   185,   140,    -1,    30,    -1,    32,
      -1,    31,    -1,    34,    -1,    35,    -1,    38,    -1,    39,
      -1,    33,    -1,    29,    -1,     4,    -1,   187,    67,     4,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   115,   115,   116,   118,   119,   121,   122,   124,   125,
     127,   128,   130,   132,   133,   134,   135,   136,   137,   139,
     140,   142,   143,   145,   146,   148,   150,   152,   154,   155,
     157,   158,   160,   161,   163,   164,   166,   167,   169,   170,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   184,   185,   186,   188,   189,   190,   192,   193,   194,
     196,   197,   198,   201,   202,   203,   205,   206,   207,   209,
     210,   213,   214,   216,   217,   219,   220,   221,   223,   225,
     226,   228,   229,   230,   231,   233,   234,   236,   238,   239,
     241,   243,   244,   246,   247,   249,   251,   252,   254,   256,
     257,   258,   260,   262,   263,   265,   266,   267,   269,   270,
     272,   273,   275,   276,   278,   279,   280,   282,   283,   284,
     285,   286,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   298,   299,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   318,
     319,   320,   321,   322,   324,   325,   327,   328,   329,   331,
     332,   333,   335,   336,   337,   338,   339,   340,   341,   342,
     344,   345,   347,   348,   349,   350,   351,   353,   355,   357,
     358,   359,   361,   362,   363,   365,   366,   367,   370,   371,
     372,   374,   375,   376,   378,   379,   383,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   406,   407,   409,
     411,   412,   414,   416,   417,   419,   421,   422,   424,   425,
     426,   428,   429,   430,   432,   434,   435,   436,   438,   439,
     440,   442,   443,   444,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   456,   457
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
  "MINUS_MINUS", "NOT", "SPREAD", "$accept", "QUALIFIED_IDENTIFIER",
  "QUALIFIED_IDENTIFIER_LIST", "PACKAGE_DECLARATION", "IMPORTS",
  "SINGLE_IMPORT", "PROGRAM", "PROGRAM_BODY", "CLASSES", "INTERFACES",
  "ENUMS", "SIMPLE_CLASS", "SIMPLE_INTERFACE", "SIMPLE_ENUM",
  "CLASS_DECLARATION", "INTERFACE_DECLARATION", "ENUM_DECLARATION",
  "EXTENDING_PART", "IMPLEMENTING_PART", "IMPLEMENTED_LIST", "MODIFIER",
  "MODIFIERS", "CLASS_BODY", "INTERFACE_BODY", "ENUM_BODY",
  "CLASS_BODY_MEMBER", "INTERFACE_BODY_MEMBER", "ENUM_BODY_MEMBER",
  "ENUM_CONSTANTS", "ENUM_CONSTANT", "METHOD_DECLARATOR",
  "FIELD_DECLARATOR", "FIELD_DECLARATOR_REST", "VARIABLE_DECLARATOR_REST",
  "VARIABLE_DECLARATOR_LIST", "VARIABLE_DECLARATOR",
  "METHOD_DECLARATOR_REST", "CONSTRUCTOR", "THROWING_PART",
  "ARRAY_BRACKETS", "ASSIGN_VARIABLE_INIT", "VARIABLE_INITIALIZER",
  "ARRAY_INITIALIZER", "VARIABLE_INITIALIZER_LIST", "FORMARL_PARAMETERS",
  "FORMARL_PARAMETER", "FORMARL_PARAMETER_REST", "VARIABLE_DECLARATOR_ID",
  "EXPRESSION", "EXPRESSION1", "EXPRESSION2", "EXPRESSION3",
  "ASSIGNMENT_OPERATOR", "INFIX_OPERATIONS", "INFIX_OP", "PREFIX_OP",
  "POSTFIX_OP", "SELECTORS", "POSTFIX_OPERATORS", "PRIMARY",
  "IDENTIFIER_SEQUENCE", "LITERAL", "PAR_EXPRESSION", "ARGUMENTS",
  "EXPRESSION_LIST", "SUPER_SUFFIX", "IDENTIFER_SUFFIX", "SELECTOR",
  "BLOCK", "BLOCK_STATEMENT", "LOCAL_VARIABLE_DECLARATION_STATEMENT",
  "STATEMENT", "CATCHES", "CATCH_CLAUSE", "CATCH_TYPE", "FINALLY_BLOCK",
  "SWITCH_BLOCK_STATEMENT_GROUPS", "SWITCH_BLOCK_STATEMENT_GROUP",
  "SWITCH_LABELS", "SWITCH_LABEL", "FOR_CONTROL", "FOR_VAR_CONTROL",
  "FOR_VAR_CONTROL_REST", "FOR_VARIABLE_DECLARATORS_REST", "TYPE",
  "BASIC_TYPE", "REFERENCE_TYPE", 0
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   108,   108,   108,   108,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   113,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   122,   122,   122,   123,   123,   123,   124,   124,   124,
     125,   125,   125,   126,   126,   126,   127,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   131,   132,   133,
     133,   134,   134,   134,   134,   135,   135,   136,   137,   137,
     138,   139,   139,   140,   140,   141,   142,   142,   143,   144,
     144,   144,   145,   146,   146,   147,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   151,   152,   152,   152,
     152,   152,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   154,   154,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   156,
     156,   156,   156,   156,   157,   157,   158,   158,   158,   159,
     159,   159,   160,   160,   160,   160,   160,   160,   160,   160,
     161,   161,   162,   162,   162,   162,   162,   163,   164,   165,
     165,   165,   166,   166,   166,   167,   167,   167,   168,   168,
     168,   169,   169,   169,   170,   170,   171,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   173,   173,   174,
     175,   175,   176,   177,   177,   178,   179,   179,   180,   180,
     180,   181,   181,   181,   182,   183,   183,   183,   184,   184,
     184,   185,   185,   185,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   187,   187
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     3,     0,     2,     0,
       3,     5,     3,     2,     2,     2,     1,     1,     1,     2,
       0,     2,     0,     2,     0,     4,     4,     4,     5,     4,
       4,     3,     4,     3,     2,     0,     2,     0,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     0,     1,     2,     0,     1,     2,     0,
       1,     2,     0,     2,     2,     2,     5,     5,     4,     3,
       1,     1,     3,     3,     2,     3,     3,     3,     3,     2,
       3,     2,     1,     1,     0,     1,     3,     2,     5,     3,
       6,     2,     0,     2,     3,     2,     1,     1,     3,     1,
       3,     0,     3,     2,     0,     2,     1,     3,     2,     1,
       3,     1,     5,     1,     1,     2,     3,     2,     2,     4,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     1,
       2,     0,     1,     1,     1,     2,     2,     3,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     0,     1,     2,     3,     1,     1,     1,     3,     2,
       1,     1,     2,     0,     1,     1,     3,     3,     1,     2,
       3,     5,     5,     3,     2,     3,     3,     2,     5,     5,
       2,     3,     3,     5,     6,     5,     5,     1,     2,     8,
       1,     3,     4,     1,     2,     4,     1,     2,     3,     3,
       2,     1,     5,     4,     3,     5,     4,     2,     2,     4,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     9,     0,     2,     0,     0,    20,     9,     1,
       6,     0,     0,    45,    40,    41,    42,    43,     0,     0,
       0,    44,    49,    48,    47,    50,    46,    12,    16,    17,
      18,    20,    22,    24,     0,     0,     0,     0,     8,     3,
      10,     0,    35,    35,    37,    13,    14,    15,    19,     0,
      21,     0,    23,     0,    53,    59,    62,     0,     0,     0,
       0,     0,    37,    31,     0,    33,    52,     0,     0,    53,
     253,     0,   252,   244,   246,   245,   251,   247,   248,   249,
     250,     0,    57,     0,   241,   242,    53,     0,    60,    70,
      71,    35,    35,    37,    11,    34,    29,    38,    36,    51,
     253,     0,    63,    64,    65,     0,    25,    55,   104,    92,
       0,    26,    58,     0,     0,   243,     0,   181,    74,    53,
      27,    61,    53,     0,    37,    30,    32,     0,    92,     0,
       0,    84,   253,     0,     0,     0,     0,    92,    92,    93,
     254,   172,   171,     0,   176,   174,   175,   164,     0,     0,
     152,   153,   173,   149,   150,   151,   179,   111,   113,   114,
       0,   158,   168,   162,   163,     0,    73,    69,    72,    28,
      39,     0,    76,    92,    77,     0,    78,     0,    75,    82,
      83,   102,   109,     0,   103,   106,     4,    91,    68,     0,
       0,    94,     0,     0,   182,   166,   165,     0,   171,     0,
       0,   181,   122,   123,   124,   125,   126,   128,   129,   130,
     127,     0,     0,     0,     0,   144,   145,   146,   147,   148,
     138,   139,   142,   140,   143,   141,   134,   135,   133,   136,
     137,   115,     0,   117,     0,   190,   161,   156,   181,   154,
     155,   185,   187,   186,   169,   118,   178,   193,     0,   101,
      95,    96,    97,    84,    79,     0,    85,    81,   108,   105,
     104,     0,    67,    66,   170,   183,   167,   177,     0,   180,
     110,     0,   116,     0,   131,   189,   154,   155,   159,   121,
     157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   193,   198,     0,     0,   191,   194,   195,
       0,   193,    89,    99,     0,    87,    80,     0,   107,     5,
     184,   119,     0,   120,   132,   188,   160,   193,     0,     0,
       0,     0,   181,     0,     0,     0,   207,     0,   204,     0,
     210,     0,     0,   199,    90,   192,     0,     0,   101,    98,
      86,   112,     0,   212,   193,   200,     0,     0,   231,     0,
     203,     0,   206,   205,     0,   211,   197,   196,    88,   100,
       0,     0,     0,     0,     0,   240,     0,     0,     0,     0,
     223,     0,   226,     0,     0,   216,   217,   215,   213,   201,
     181,     0,   202,     0,     0,   234,     0,   209,   171,     0,
     230,   208,   224,   193,   227,     0,   193,   214,   218,   233,
     181,   238,   237,     0,   229,   228,     0,   220,     0,     0,
     232,     0,   181,     0,   225,     0,     0,   222,   239,   236,
     181,     0,   221,   235,   193,     0,   219
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   187,     2,     7,     8,     3,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    62,    65,    98,
      66,    67,    68,    81,    87,    69,    82,    88,    89,    90,
     102,   103,   176,   177,   255,   256,   172,   104,   136,   115,
     180,   303,   251,   304,   173,   133,   184,   185,   295,   157,
     158,   159,   211,   231,   232,   160,   278,   236,   279,   161,
     162,   163,   164,   194,   165,   195,   244,   237,   296,   297,
     298,   299,   375,   376,   408,   377,   369,   370,   371,   372,
     347,   348,   385,   386,   300,    84,    85
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -290
static const yytype_int16 yypact[] =
{
       2,    76,    54,   111,  -290,    10,    76,  1397,    54,  -290,
    -290,   121,    93,  -290,  -290,  -290,  -290,  -290,   136,   138,
     148,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  1397,  1397,
    1397,  1408,  1431,  1442,    51,   102,   107,   126,  -290,  -290,
    -290,    12,   145,   145,   161,  -290,  -290,  -290,  -290,   169,
    -290,   170,  -290,   172,   137,  1353,   179,   183,   184,   185,
     124,   187,   161,  -290,   188,  -290,   190,  1501,   130,  1310,
     147,   201,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,   144,  1353,    17,  -290,   143,  1299,   146,   179,    36,
    -290,   145,   145,   161,  -290,  -290,  -290,  -290,   151,  -290,
     147,    37,  -290,  -290,  -290,    25,  -290,  -290,   227,   191,
     147,  -290,  -290,   147,   157,  -290,   210,  1118,  -290,  1334,
    -290,  -290,   137,   179,   161,  -290,  -290,   219,   191,   147,
     147,    52,  -290,   163,     7,    76,   159,   191,   191,   165,
    -290,  -290,   166,   -16,  -290,  -290,  -290,   -16,   224,   983,
    -290,  -290,  -290,  -290,  -290,  -290,   162,   155,   139,  1424,
    1118,   232,  1154,  -290,  1118,   171,  -290,  -290,  -290,  -290,
    -290,   181,  -290,   191,  -290,   986,  -290,    18,  -290,   175,
    -290,  -290,   165,   246,  -290,   186,   196,   203,  -290,   206,
     209,  -290,   224,   248,  -290,  -290,  -290,   193,   166,   215,
      57,  1118,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,  1118,  1118,   227,  1118,  -290,  -290,  -290,  -290,  -290,
    -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,  -290,  1118,   216,   273,  -290,    77,   232,   983,  1189,
    1203,  -290,  -290,  -290,  -290,   216,  -290,   853,    64,   986,
    -290,  -290,  -290,    -4,  -290,   213,   214,  -290,  -290,  -290,
     227,    76,  -290,  -290,  -290,   193,  -290,  -290,  1118,  -290,
    -290,   189,   165,   220,  1475,   193,  -290,  -290,    77,  -290,
    -290,     5,   222,  1118,   228,   228,   229,   228,   912,    23,
      27,   228,  1031,   853,  -290,   231,   277,  -290,  -290,  -290,
      32,   853,  -290,   226,   230,  -290,  -290,   299,  -290,   196,
    -290,   216,  1118,  -290,  -290,  -290,  -290,   853,   251,  1118,
     257,   912,   983,   912,   282,   266,  -290,   267,  -290,   274,
    -290,   278,   349,  -290,  -290,  -290,   279,   421,   986,  -290,
    -290,  -290,   493,  -290,   853,   295,   283,   287,  -290,    33,
    -290,   228,  -290,  -290,    98,  -290,  -290,  -290,  -290,  -290,
      49,   565,   912,  1083,   912,   -34,   284,  1234,   244,    83,
    -290,   290,    98,   291,   292,   330,   335,  -290,  -290,  -290,
    1118,   293,  -290,   986,  1118,  -290,   294,  -290,   -28,   265,
    -290,  -290,  -290,   853,  -290,    76,   853,  -290,  -290,  -290,
    1118,   296,  -290,  1103,  -290,  -290,   637,   196,     8,   709,
    -290,   299,  1118,   297,  -290,   301,    76,  -290,  -290,  -290,
    1118,   302,   196,  -290,   853,   781,  -290
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -290,    -6,  -290,  -290,   359,  -290,  -290,   140,   337,   339,
     336,  -290,  -290,  -290,  -290,  -290,  -290,    14,   -38,  -290,
     125,   307,   -19,   303,   305,  -290,  -290,  -290,  -290,   280,
    -290,  -290,  -290,   149,  -287,  -290,    47,  -290,   -74,  -122,
     221,  -171,  -290,    63,   -35,   152,  -290,  -177,  -116,  -203,
    -290,  -141,  -290,   131,  -290,  -290,   242,   174,   142,  -290,
    -110,  -290,  -259,   -81,  -199,   269,  -290,  -290,  -283,  -289,
    -290,  -274,    41,  -290,  -290,    46,  -290,    53,    55,  -290,
    -290,  -290,  -290,  -290,   -52,  -290,  -290
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -151
static const yytype_int16 yytable[] =
{
      12,   156,   269,    83,   250,   119,   259,   335,   270,   179,
     332,   182,   415,   336,   324,   105,    39,   191,   337,   233,
     340,   113,   253,   245,    96,   320,   321,   325,   323,   131,
      83,   327,   329,   199,   342,   109,   253,   182,   197,   192,
     383,   129,     1,   335,   117,   235,   241,   345,   335,   350,
     107,   193,   130,   335,   171,   126,   134,    63,   114,   252,
     258,   361,   384,   189,   190,   128,   267,   118,   404,   114,
     175,   373,   335,   201,   374,   137,    10,    11,   138,   114,
       4,   243,   264,    60,   254,   156,   169,   114,   379,   326,
     382,   274,   366,   328,   114,   114,   271,   200,   273,   248,
     166,   416,   122,   167,   123,   124,   125,   183,     6,   341,
     406,     9,   108,   409,   114,    54,   266,   335,   268,   114,
     335,   235,   281,   346,   418,    39,   175,   311,   301,   186,
     302,   179,    37,   252,   367,   368,   335,    57,    58,    59,
      42,   425,    43,    13,    14,    15,    16,    17,   391,   367,
     368,    21,    44,    37,    37,    37,    49,    51,    53,    40,
      41,   272,    61,    22,    23,    24,    55,   318,    45,    46,
      47,    56,   365,    25,   276,   277,   331,   174,   178,    64,
      57,   399,    58,    86,   310,    59,   200,    91,    92,    93,
      94,    95,    97,    26,   315,   106,    13,    14,    15,    16,
      17,   410,   -56,   199,    21,   110,   156,   108,   134,   111,
     116,   120,   401,   419,   140,   135,    22,    23,    24,   127,
     139,   423,   252,   170,   181,   188,    25,   114,   142,   202,
     201,   132,   246,   192,   212,   141,   142,   203,   204,   205,
     206,   207,   208,   209,   210,   247,    26,   381,   143,   175,
     182,   389,   265,   117,   260,   309,    72,    73,    74,    75,
      76,    77,    78,    11,   156,    79,    80,   252,   402,   144,
     349,   261,   262,   145,   146,   263,   267,   275,   214,   306,
     141,   198,   307,   313,   156,   312,   317,   413,   319,   322,
     147,   148,   149,   143,   338,   339,   156,   333,   282,   234,
     283,   150,   151,   253,   156,   284,    72,    73,    74,    75,
      76,    77,    78,   152,   144,    79,    80,   343,   145,   146,
     285,   344,   286,   287,   288,   289,   290,   291,   351,   153,
     154,   155,   352,   353,   292,   147,   148,   149,   354,   362,
     390,   293,   334,   294,   355,   357,   150,   151,   364,   363,
     387,   395,   141,   198,   393,   374,   396,   373,   152,   400,
     403,   405,   421,   420,   411,   143,   424,    38,    48,    52,
     282,    50,   283,    99,   153,   154,   155,   284,    72,    73,
      74,    75,    76,    77,    78,   112,   144,    79,    80,   407,
     145,   146,   285,   121,   286,   287,   288,   289,   290,   291,
     257,   359,   305,   168,   242,   314,   292,   147,   148,   149,
     422,   280,   308,   293,   356,   294,   196,   398,   150,   151,
     316,   397,   392,     0,   141,   198,     0,   394,     0,     0,
     152,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,     0,   282,     0,   283,     0,   153,   154,   155,   284,
      72,    73,    74,    75,    76,    77,    78,     0,   144,    79,
      80,     0,   145,   146,   285,     0,   286,   287,   288,   289,
     290,   291,     0,     0,     0,     0,     0,     0,   292,   147,
     148,   149,     0,     0,     0,   293,   358,   294,     0,     0,
     150,   151,     0,     0,     0,     0,   141,   198,     0,     0,
       0,     0,   152,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,   282,     0,   283,     0,   153,   154,
     155,   284,    72,    73,    74,    75,    76,    77,    78,     0,
     144,    79,    80,     0,   145,   146,   285,     0,   286,   287,
     288,   289,   290,   291,     0,     0,     0,     0,     0,     0,
     292,   147,   148,   149,     0,     0,     0,   293,   360,   294,
       0,     0,   150,   151,     0,     0,     0,     0,   141,   198,
       0,     0,     0,     0,   152,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,   282,     0,   283,     0,
     153,   154,   155,   284,    72,    73,    74,    75,    76,    77,
      78,     0,   144,    79,    80,     0,   145,   146,   285,     0,
     286,   287,   288,   289,   290,   291,     0,     0,     0,     0,
       0,     0,   292,   147,   148,   149,     0,     0,     0,   293,
     378,   294,     0,     0,   150,   151,     0,     0,     0,     0,
     141,   198,     0,     0,     0,     0,   152,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,   282,     0,
     283,     0,   153,   154,   155,   284,    72,    73,    74,    75,
      76,    77,    78,     0,   144,    79,    80,     0,   145,   146,
     285,     0,   286,   287,   288,   289,   290,   291,     0,     0,
       0,     0,     0,     0,   292,   147,   148,   149,     0,     0,
       0,   293,   414,   294,     0,     0,   150,   151,     0,     0,
       0,     0,   141,   198,     0,     0,     0,     0,   152,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
     282,     0,   283,     0,   153,   154,   155,   284,    72,    73,
      74,    75,    76,    77,    78,     0,   144,    79,    80,     0,
     145,   146,   285,     0,   286,   287,   288,   289,   290,   291,
       0,     0,     0,     0,     0,     0,   292,   147,   148,   149,
       0,     0,     0,   293,   417,   294,     0,     0,   150,   151,
       0,     0,     0,     0,   141,   198,     0,     0,     0,     0,
     152,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,     0,   282,     0,   283,     0,   153,   154,   155,   284,
      72,    73,    74,    75,    76,    77,    78,     0,   144,    79,
      80,     0,   145,   146,   285,     0,   286,   287,   288,   289,
     290,   291,     0,     0,     0,     0,     0,     0,   292,   147,
     148,   149,     0,     0,     0,   293,   426,   294,     0,     0,
     150,   151,     0,     0,     0,     0,   141,   198,     0,     0,
       0,     0,   152,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,   282,     0,   283,     0,   153,   154,
     155,   284,    72,    73,    74,    75,    76,    77,    78,     0,
     144,    79,    80,     0,   145,   146,   285,     0,   286,   287,
     288,   289,   290,   291,     0,     0,     0,     0,     0,     0,
     292,   147,   148,   149,     0,   141,   142,   293,     0,   294,
       0,     0,   150,   151,     0,     0,     0,     0,   143,     0,
       0,     0,     0,   282,   152,   283,     0,     0,     0,     0,
     284,     0,     0,     0,     0,     0,     0,     0,     0,   144,
     153,   154,   155,   145,   146,   285,     0,   286,   287,   288,
     289,   290,   291,     0,     0,     0,     0,     0,     0,   292,
     147,   148,   149,     0,     0,     0,   293,     0,   294,     0,
       0,   150,   151,     0,     0,     0,   141,   198,     0,   141,
     142,     0,     0,   152,     0,     0,     0,     0,     0,   143,
       0,     0,   143,     0,     0,     0,     0,     0,     0,   153,
     154,   155,    72,    73,    74,    75,    76,    77,    78,     0,
     144,    79,    80,   144,   145,   146,     0,   145,   146,     0,
       0,     0,     0,     0,   141,   142,     0,     0,     0,     0,
       0,   147,   148,   149,   147,   148,   149,   143,     0,     0,
     249,     0,   150,   151,     0,   150,   151,     0,     0,     0,
       0,     0,     0,     0,   152,     0,     0,   152,   144,     0,
       0,     0,   145,   146,     0,     0,     0,     0,     0,     0,
     153,   154,   155,   153,   154,   155,   141,   142,     0,   147,
     148,   149,     0,     0,     0,     0,     0,   330,     0,   143,
     150,   151,     0,     0,     0,     0,   141,   142,     0,     0,
       0,     0,   152,     0,     0,     0,     0,     0,     0,   143,
     144,   141,   142,     0,   145,   146,     0,     0,   153,   154,
     155,     0,     0,     0,   143,     0,     0,     0,     0,     0,
     144,   147,   148,   149,   145,   146,     0,     0,     0,   380,
       0,     0,   150,   151,     0,   144,     0,   141,   142,   145,
     146,   147,   148,   149,   152,     0,     0,     0,     0,   412,
     143,     0,   150,   151,     0,     0,   147,   148,   149,     0,
     153,   154,   155,     0,   152,     0,     0,   150,   151,     0,
       0,   144,  -149,  -149,     0,   145,   146,     0,     0,   152,
     153,   154,   155,     0,     0,  -149,  -150,  -150,     0,     0,
       0,     0,   147,   148,   238,   153,   154,   155,     0,  -150,
       0,     0,     0,   150,   151,     0,  -149,     0,     0,     0,
    -149,  -149,     0,     0,     0,   152,     0,   141,   388,     0,
    -150,     0,     0,     0,  -150,  -150,     0,  -149,  -149,  -149,
     143,   239,   240,   155,     0,     0,     0,     0,  -149,  -149,
       0,  -150,  -150,  -150,     0,     0,     0,     0,     0,     0,
    -149,   144,  -150,  -150,     0,   145,   146,     0,     0,     0,
       0,     0,     0,     0,  -150,     0,  -149,  -149,  -149,     0,
       0,     0,   147,   148,   149,     0,     0,     0,     0,     0,
    -150,  -150,  -150,   150,   151,    13,    14,    15,    16,    17,
       0,     0,     0,    21,     0,   152,    13,    14,    15,    16,
      17,     0,     0,     0,    21,    22,    23,    24,     0,     0,
       0,   153,   154,   155,     0,    25,    22,    23,    24,     0,
      13,    14,    15,    16,    17,     0,    25,     0,    21,     0,
       0,     0,     0,     0,     0,    26,     0,    70,     0,   117,
      22,    23,    24,     0,   -56,   -56,    26,   -56,     0,     0,
      25,     0,     0,    71,     0,   -54,   -54,     0,   -54,     0,
       0,     0,    72,    73,    74,    75,    76,    77,    78,     0,
      26,    79,    80,     0,     0,     0,     0,     0,     0,   -56,
     -56,     0,   -56,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,    13,    14,    15,    16,    17,    18,
       0,     0,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,    25,    22,    23,    24,    13,    14,    15,
      16,    17,     0,    19,    25,    21,     0,     0,    13,    14,
      15,    16,    17,    26,     0,    20,    21,    22,    23,    24,
       0,     0,     0,     0,    26,     0,     0,    25,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,    25,   213,
       0,     0,     0,     0,     0,     0,   214,    26,     0,     0,
       0,     0,     0,   215,   216,   217,   218,   219,    26,   220,
     221,   222,   223,   224,   225,   100,     0,     0,     0,     0,
       0,     0,     0,     0,   226,   227,   228,   229,   230,     0,
       0,   101,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,    77,    78,   214,     0,    79,
      80,     0,     0,     0,   215,   216,   217,   218,   219,     0,
     220,   221,   222,   223,   224,   225,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   227,   228,   229,   230
};

static const yytype_int16 yycheck[] =
{
       6,   117,   201,    55,   175,    86,   183,   296,   211,   131,
     293,     4,     4,   300,   288,    67,     4,   139,   301,   160,
     307,     4,     4,   164,    62,   284,   285,     4,   287,     4,
      82,     4,   291,   149,   317,    70,     4,     4,   148,    67,
      74,     4,    40,   332,    60,   161,   162,   321,   337,   323,
      69,    67,    15,   342,   128,    93,   108,    43,    62,   175,
     182,   344,    96,   137,   138,   100,    61,    86,    96,    62,
      74,    22,   361,    68,    25,   110,    66,    67,   113,    62,
       4,   162,   192,    71,    66,   201,   124,    62,   362,    66,
     364,   232,   351,    66,    62,    62,   212,   149,   214,   173,
     119,    93,    66,   122,    68,    91,    92,   100,    54,   312,
     393,     0,    60,   396,    62,    64,   197,   406,    61,    62,
     409,   237,   238,   322,   411,     4,    74,   268,    64,   135,
      66,   253,     7,   249,    51,    52,   425,    11,    12,    13,
       4,   424,     4,     6,     7,     8,     9,    10,    65,    51,
      52,    14,     4,    28,    29,    30,    31,    32,    33,    66,
      67,   213,    17,    26,    27,    28,    64,   283,    28,    29,
      30,    64,   349,    36,    97,    98,   292,   130,   131,    18,
      11,   380,    12,     4,   265,    13,   238,     4,     4,     4,
      66,     4,     4,    56,   275,    65,     6,     7,     8,     9,
      10,   400,    65,   319,    14,     4,   322,    60,   260,    65,
      67,    65,   383,   412,     4,    24,    26,    27,    28,    68,
      63,   420,   338,     4,    61,    66,    36,    62,     4,    74,
      68,     4,    61,    67,    95,     3,     4,    82,    83,    84,
      85,    86,    87,    88,    89,    64,    56,   363,    16,    74,
       4,   367,     4,    60,    68,   261,    29,    30,    31,    32,
      33,    34,    35,    67,   380,    38,    39,   383,   384,    37,
     322,    68,    66,    41,    42,    66,    61,     4,    62,    66,
       3,     4,    68,    63,   400,    96,    64,   403,    60,    60,
      58,    59,    60,    16,    68,    65,   412,    66,    21,    67,
      23,    69,    70,     4,   420,    28,    29,    30,    31,    32,
      33,    34,    35,    81,    37,    38,    39,    66,    41,    42,
      43,    64,    45,    46,    47,    48,    49,    50,    46,    97,
      98,    99,    66,    66,    57,    58,    59,    60,    64,    44,
      96,    64,    65,    66,    66,    66,    69,    70,    61,    66,
      66,    60,     3,     4,    64,    25,    64,    22,    81,    66,
      66,    96,    61,    66,    68,    16,    64,     8,    31,    33,
      21,    32,    23,    66,    97,    98,    99,    28,    29,    30,
      31,    32,    33,    34,    35,    82,    37,    38,    39,   395,
      41,    42,    43,    88,    45,    46,    47,    48,    49,    50,
     179,   338,   253,   123,   162,   274,    57,    58,    59,    60,
     416,   237,   260,    64,    65,    66,   147,   376,    69,    70,
     278,   375,   369,    -1,     3,     4,    -1,   372,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    21,    -1,    23,    -1,    97,    98,    99,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    -1,    41,    42,    43,    -1,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,
      69,    70,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    21,    -1,    23,    -1,    97,    98,
      99,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    -1,    -1,    -1,    64,    65,    66,
      -1,    -1,    69,    70,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    21,    -1,    23,    -1,
      97,    98,    99,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    -1,    41,    42,    43,    -1,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    -1,    -1,    -1,    64,
      65,    66,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,    -1,
      23,    -1,    97,    98,    99,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    -1,    41,    42,
      43,    -1,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    -1,    -1,
      -1,    64,    65,    66,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,
      21,    -1,    23,    -1,    97,    98,    99,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    -1,
      41,    42,    43,    -1,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      -1,    -1,    -1,    64,    65,    66,    -1,    -1,    69,    70,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    21,    -1,    23,    -1,    97,    98,    99,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    -1,    41,    42,    43,    -1,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,
      69,    70,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    21,    -1,    23,    -1,    97,    98,
      99,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    -1,     3,     4,    64,    -1,    66,
      -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    21,    81,    23,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      97,    98,    99,    41,    42,    43,    -1,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    -1,    -1,    -1,    64,    -1,    66,    -1,
      -1,    69,    70,    -1,    -1,    -1,     3,     4,    -1,     3,
       4,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    37,    41,    42,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    58,    59,    60,    16,    -1,    -1,
      64,    -1,    69,    70,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    81,    37,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,    97,    98,    99,     3,     4,    -1,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    16,
      69,    70,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      37,     3,     4,    -1,    41,    42,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      37,    58,    59,    60,    41,    42,    -1,    -1,    -1,    66,
      -1,    -1,    69,    70,    -1,    37,    -1,     3,     4,    41,
      42,    58,    59,    60,    81,    -1,    -1,    -1,    -1,    66,
      16,    -1,    69,    70,    -1,    -1,    58,    59,    60,    -1,
      97,    98,    99,    -1,    81,    -1,    -1,    69,    70,    -1,
      -1,    37,     3,     4,    -1,    41,    42,    -1,    -1,    81,
      97,    98,    99,    -1,    -1,    16,     3,     4,    -1,    -1,
      -1,    -1,    58,    59,    60,    97,    98,    99,    -1,    16,
      -1,    -1,    -1,    69,    70,    -1,    37,    -1,    -1,    -1,
      41,    42,    -1,    -1,    -1,    81,    -1,     3,     4,    -1,
      37,    -1,    -1,    -1,    41,    42,    -1,    58,    59,    60,
      16,    97,    98,    99,    -1,    -1,    -1,    -1,    69,    70,
      -1,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    37,    69,    70,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    97,    98,    99,    -1,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,    69,    70,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    81,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    26,    27,    28,    -1,    -1,
      -1,    97,    98,    99,    -1,    36,    26,    27,    28,    -1,
       6,     7,     8,     9,    10,    -1,    36,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,     4,    -1,    60,
      26,    27,    28,    -1,    65,    66,    56,    68,    -1,    -1,
      36,    -1,    -1,    20,    -1,    65,    66,    -1,    68,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    -1,
      56,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    -1,    68,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,     6,     7,     8,     9,    10,    11,
      -1,    -1,    14,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    26,    27,    28,     6,     7,     8,
       9,    10,    -1,    12,    36,    14,    -1,    -1,     6,     7,
       8,     9,    10,    56,    -1,    13,    14,    26,    27,    28,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    36,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    56,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    56,    75,
      76,    77,    78,    79,    80,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    62,    -1,    38,
      39,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,   104,   107,     4,   102,    54,   105,   106,     0,
      66,    67,   102,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    26,    27,    28,    36,    56,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   121,   105,     4,
      66,    67,     4,     4,     4,   108,   108,   108,   109,   121,
     110,   121,   111,   121,    64,    64,    64,    11,    12,    13,
      71,    17,   118,   118,    18,   119,   121,   122,   123,   126,
       4,    20,    29,    30,    31,    32,    33,    34,    35,    38,
      39,   124,   127,   185,   186,   187,     4,   125,   128,   129,
     130,     4,     4,     4,    66,     4,   119,     4,   120,   122,
       4,    20,   131,   132,   138,   185,    65,   123,    60,   145,
       4,    65,   124,     4,    62,   140,    67,    60,   123,   164,
      65,   125,    66,    68,   118,   118,   119,    68,   145,     4,
      15,     4,     4,   146,   185,    24,   139,   145,   145,    63,
       4,     3,     4,    16,    37,    41,    42,    58,    59,    60,
      69,    70,    81,    97,    98,    99,   149,   150,   151,   152,
     156,   160,   161,   162,   163,   165,   123,   123,   130,   119,
       4,   139,   137,   145,   137,    74,   133,   134,   137,   140,
     141,    61,     4,   100,   147,   148,   102,   103,    66,   139,
     139,   140,    67,    67,   164,   166,   166,   161,     4,   149,
     185,    68,    74,    82,    83,    84,    85,    86,    87,    88,
      89,   153,    95,    55,    62,    69,    70,    71,    72,    73,
      75,    76,    77,    78,    79,    80,    90,    91,    92,    93,
      94,   154,   155,   152,    67,   149,   158,   168,    60,    97,
      98,   149,   157,   164,   167,   152,    61,    64,   139,    64,
     142,   143,   149,     4,    66,   135,   136,   141,   140,   148,
      68,    68,    66,    66,   161,     4,   164,    61,    61,   165,
     150,   149,   185,   149,   152,     4,    97,    98,   157,   159,
     158,   149,    21,    23,    28,    43,    45,    46,    47,    48,
      49,    50,    57,    64,    66,   149,   169,   170,   171,   172,
     185,    64,    66,   142,   144,   134,    66,    68,   146,   102,
     164,   152,    96,    63,   154,   164,   159,    64,   149,    60,
     163,   163,    60,   163,   172,     4,    66,     4,    66,   163,
      66,   149,   169,    66,    65,   170,   135,   169,    68,    65,
     135,   150,   169,    66,    64,   172,   165,   181,   182,   185,
     172,    46,    66,    66,    64,    66,    65,    66,    65,   144,
      65,   169,    44,    66,    61,   148,   163,    51,    52,   177,
     178,   179,   180,    22,    25,   173,   174,   176,    65,   172,
      66,   149,   172,    74,    96,   183,   184,    66,     4,   149,
      96,    65,   178,    64,   179,    60,    64,   176,   173,   165,
      66,   142,   149,    66,    96,    96,   169,   102,   175,   169,
     165,    68,    66,   149,    65,     4,    93,    65,   135,   165,
      66,    61,   102,   165,    64,   169,    65
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
      

/* Line 1455 of yacc.c  */
#line 2090 "parser.tab.c"
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
#line 458 "parser.y"


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
