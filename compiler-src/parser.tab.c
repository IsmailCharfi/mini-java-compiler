
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
#line 224 "parser.tab.c"

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
#define YYLAST   1426

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  245
/* YYNRULES -- Number of states.  */
#define YYNSTATES  400

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
       0,     0,     3,     5,     9,    11,    15,    19,    20,    23,
      24,    28,    34,    38,    41,    44,    47,    49,    51,    53,
      56,    57,    60,    61,    64,    65,    70,    75,    80,    86,
      91,    96,   100,   105,   109,   112,   113,   116,   117,   119,
     123,   125,   127,   129,   131,   133,   135,   137,   139,   141,
     143,   145,   148,   150,   151,   153,   156,   157,   159,   162,
     163,   165,   168,   169,   172,   175,   178,   180,   182,   186,
     190,   194,   198,   201,   205,   208,   210,   212,   213,   215,
     219,   222,   228,   232,   239,   242,   243,   246,   250,   253,
     255,   257,   261,   263,   267,   268,   272,   275,   276,   281,
     283,   287,   290,   292,   296,   298,   304,   306,   308,   311,
     315,   318,   321,   326,   330,   332,   334,   336,   338,   340,
     342,   344,   346,   348,   351,   355,   357,   359,   361,   363,
     365,   367,   369,   371,   373,   375,   377,   379,   381,   383,
     385,   387,   389,   391,   393,   395,   397,   399,   401,   403,
     406,   407,   409,   412,   413,   415,   417,   419,   422,   425,
     429,   431,   434,   436,   440,   442,   444,   446,   448,   450,
     454,   458,   460,   464,   465,   467,   470,   474,   476,   478,
     482,   485,   487,   489,   492,   493,   495,   497,   501,   505,
     507,   509,   513,   519,   525,   529,   532,   536,   540,   543,
     549,   555,   558,   562,   566,   572,   579,   585,   591,   593,
     596,   605,   607,   611,   616,   618,   621,   626,   628,   631,
     635,   639,   642,   644,   650,   655,   659,   665,   670,   673,
     676,   681,   682,   684,   686,   689,   691,   693,   695,   697,
     699,   701,   703,   705,   707,   709
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     106,     0,    -1,     4,    -1,   101,    67,     4,    -1,   101,
      -1,   102,    68,   101,    -1,    40,   101,    66,    -1,    -1,
     105,   104,    -1,    -1,    54,   101,    66,    -1,    54,   101,
      67,    71,    66,    -1,   103,   104,   107,    -1,   108,   107,
      -1,   109,   107,    -1,   110,   107,    -1,   108,    -1,   109,
      -1,   110,    -1,   111,   108,    -1,    -1,   112,   109,    -1,
      -1,   113,   110,    -1,    -1,   114,    64,   122,    65,    -1,
     115,    64,   123,    65,    -1,   116,    64,   124,    65,    -1,
     120,    11,     4,   117,   118,    -1,    11,     4,   117,   118,
      -1,   120,    12,     4,   117,    -1,    12,     4,   117,    -1,
     120,    13,     4,   118,    -1,    13,     4,   118,    -1,    17,
       4,    -1,    -1,    18,   119,    -1,    -1,     4,    -1,   119,
      68,     4,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    14,    -1,     6,    -1,    56,    -1,    28,    -1,    27,
      -1,    26,    -1,    36,    -1,   120,   121,    -1,   120,    -1,
      -1,   125,    -1,   125,   122,    -1,    -1,   126,    -1,   126,
     123,    -1,    -1,   127,    -1,   127,   124,    -1,    -1,   121,
     128,    -1,   121,   129,    -1,   121,   135,    -1,    12,    -1,
      13,    -1,   182,     4,   134,    -1,    20,     4,   134,    -1,
      20,    15,   134,    -1,   182,     4,   130,    -1,   131,    66,
      -1,   131,   132,    66,    -1,   137,   138,    -1,   137,    -1,
     138,    -1,    -1,   133,    -1,   133,    68,   132,    -1,     4,
     131,    -1,   142,   136,    64,   166,    65,    -1,   142,   136,
      66,    -1,     4,   142,   136,    64,   166,    65,    -1,    24,
     102,    -1,    -1,    62,    63,    -1,    62,    63,   137,    -1,
      74,   139,    -1,   140,    -1,   146,    -1,    64,   141,    65,
      -1,   139,    -1,   139,    68,   141,    -1,    -1,    60,   143,
      61,    -1,   182,   144,    -1,    -1,    67,    67,    67,   145,
      -1,   145,    -1,   145,    68,   143,    -1,     4,   137,    -1,
       4,    -1,   147,   150,   147,    -1,   147,    -1,   148,    95,
     146,    96,   147,    -1,   148,    -1,   149,    -1,   149,   151,
      -1,   149,    55,   182,    -1,   153,   149,    -1,   160,   149,
      -1,    60,   182,    61,   149,    -1,   157,   155,   156,    -1,
      74,    -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,
      89,    -1,    86,    -1,    87,    -1,    88,    -1,   152,   149,
      -1,   152,   149,   151,    -1,    92,    -1,    90,    -1,    91,
      -1,    93,    -1,    94,    -1,    75,    -1,    76,    -1,    78,
      -1,    80,    -1,    77,    -1,    79,    -1,    69,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,    97,    -1,    98,
      -1,    99,    -1,    69,    -1,    70,    -1,    97,    -1,    98,
      -1,   165,    -1,   165,   155,    -1,    -1,   154,    -1,   154,
     156,    -1,    -1,   159,    -1,   160,    -1,    58,    -1,    58,
     163,    -1,    16,   163,    -1,    59,   158,   161,    -1,   158,
      -1,   158,   164,    -1,     4,    -1,     4,    67,   158,    -1,
       3,    -1,    81,    -1,    41,    -1,    42,    -1,    37,    -1,
      60,   146,    61,    -1,    60,   162,    61,    -1,   146,    -1,
     146,    68,   162,    -1,    -1,   161,    -1,    67,     4,    -1,
      67,     4,   161,    -1,   146,    -1,   161,    -1,    67,     4,
     161,    -1,    67,     4,    -1,   146,    -1,   167,    -1,   166,
     167,    -1,    -1,   168,    -1,   169,    -1,   182,   132,    66,
      -1,    64,   166,    65,    -1,    66,    -1,   146,    -1,    43,
     160,   169,    -1,    43,   160,   169,    44,   169,    -1,    45,
      60,   178,    61,   169,    -1,    46,   160,   169,    -1,    49,
      66,    -1,    49,     4,    66,    -1,    48,     4,    66,    -1,
      48,    66,    -1,    50,   160,    64,   174,    65,    -1,    47,
     169,    46,   160,    66,    -1,    57,    66,    -1,    57,   146,
      66,    -1,    23,   146,    66,    -1,    28,   160,    64,   166,
      65,    -1,    21,    64,   166,    65,   170,   173,    -1,    21,
      64,   166,    65,   173,    -1,    21,    64,   166,    65,   170,
      -1,   171,    -1,   171,   170,    -1,    22,    60,   172,     4,
      61,    64,   166,    65,    -1,   101,    -1,   172,    93,   101,
      -1,    25,    64,   166,    65,    -1,   175,    -1,   174,   175,
      -1,   176,    64,   166,    65,    -1,   177,    -1,   177,   176,
      -1,    51,   146,    96,    -1,    51,     4,    96,    -1,    52,
      96,    -1,   179,    -1,   162,    66,   146,    66,   162,    -1,
     162,    66,    66,   162,    -1,   182,   145,   180,    -1,   181,
      66,   146,    66,   162,    -1,   181,    66,    66,   162,    -1,
      96,   146,    -1,    74,   139,    -1,    74,   139,    68,   132,
      -1,    -1,   183,    -1,   184,    -1,   182,   137,    -1,    30,
      -1,    32,    -1,    31,    -1,    34,    -1,    35,    -1,    38,
      -1,    39,    -1,    33,    -1,    29,    -1,     4,    -1,   184,
      67,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   114,   114,   115,   117,   118,   120,   121,   123,   124,
     126,   127,   129,   131,   132,   133,   134,   135,   136,   138,
     139,   141,   142,   144,   145,   147,   149,   151,   153,   154,
     156,   157,   159,   160,   162,   163,   165,   166,   168,   169,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   183,   184,   185,   187,   188,   189,   191,   192,   193,
     195,   196,   197,   200,   201,   202,   204,   206,   208,   209,
     210,   212,   214,   215,   217,   218,   219,   220,   222,   223,
     225,   227,   228,   230,   232,   233,   235,   236,   238,   240,
     241,   243,   245,   246,   247,   249,   251,   252,   254,   255,
     256,   258,   259,   261,   262,   264,   265,   267,   268,   269,
     271,   272,   273,   274,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   286,   287,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   306,   307,   308,   309,   310,   312,   313,   315,   316,
     317,   319,   320,   321,   323,   324,   325,   326,   327,   328,
     329,   330,   332,   333,   335,   336,   337,   338,   339,   341,
     343,   345,   346,   347,   349,   350,   351,   353,   354,   357,
     358,   359,   361,   362,   363,   365,   366,   370,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   393,   394,
     396,   398,   399,   401,   403,   404,   406,   408,   409,   411,
     412,   413,   415,   416,   417,   419,   421,   422,   423,   425,
     426,   427,   429,   430,   431,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   443,   444
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
  "MINUS_MINUS", "NOT", "$accept", "QUALIFIED_IDENTIFIER",
  "QUALIFIED_IDENTIFIER_LIST", "PACKAGE_DECLARATION", "IMPORTS",
  "SINGLE_IMPORT", "PROGRAM", "PROGRAM_BODY", "CLASSES", "INTERFACES",
  "ENUMS", "SIMPLE_CLASS", "SIMPLE_INTERFACE", "SIMPLE_ENUM",
  "CLASS_DECLARATION", "INTERFACE_DECLARATION", "ENUM_DECLARATION",
  "EXTENDING_PART", "IMPLEMENTING_PART", "IMPLEMENTED_LIST", "MODIFIER",
  "MODIFIERS", "CLASS_BODY", "INTERFACE_BODY", "ENUM_BODY",
  "CLASS_BODY_MEMBER", "INTERFACE_BODY_MEMBER", "ENUM_BODY_MEMBER",
  "METHOD_DECLARATOR", "FIELD_DECLARATOR", "FIELD_DECLARATOR_REST",
  "VARIABLE_DECLARATOR_REST", "VARIABLE_DECLARATOR_LIST",
  "VARIABLE_DECLARATOR", "METHOD_DECLARATOR_REST", "CONSTRUCTOR",
  "THROWING_PART", "ARRAY_BRACKETS", "ASSIGN_VARIABLE_INIT",
  "VARIABLE_INITIALIZER", "ARRAY_INITIALIZER", "VARIABLE_INITIALIZER_LIST",
  "FORMARL_PARAMETERS", "FORMARL_PARAMETER", "FORMARL_PARAMETER_REST",
  "VARIABLE_DECLARATOR_ID", "EXPRESSION", "EXPRESSION1", "EXPRESSION2",
  "EXPRESSION3", "ASSIGNMENT_OPERATOR", "INFIX_OPERATIONS", "INFIX_OP",
  "PREFIX_OP", "POSTFIX_OP", "SELECTORS", "POSTFIX_OPERATORS", "PRIMARY",
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   107,   107,   107,   107,   107,   107,   108,
     108,   109,   109,   110,   110,   111,   112,   113,   114,   114,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   121,   121,   121,   122,   122,   122,   123,   123,   123,
     124,   124,   124,   125,   125,   125,   126,   127,   128,   128,
     128,   129,   130,   130,   131,   131,   131,   131,   132,   132,
     133,   134,   134,   135,   136,   136,   137,   137,   138,   139,
     139,   140,   141,   141,   141,   142,   143,   143,   144,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   148,
     149,   149,   149,   149,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   151,   151,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   153,   153,   153,   153,   153,   154,   154,   155,   155,
     155,   156,   156,   156,   157,   157,   157,   157,   157,   157,
     157,   157,   158,   158,   159,   159,   159,   159,   159,   160,
     161,   162,   162,   162,   163,   163,   163,   164,   164,   165,
     165,   165,   166,   166,   166,   167,   167,   168,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   170,   170,
     171,   172,   172,   173,   174,   174,   175,   176,   176,   177,
     177,   177,   178,   178,   178,   179,   180,   180,   180,   181,
     181,   181,   182,   182,   182,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   184,   184
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
       1,     2,     0,     2,     2,     2,     1,     1,     3,     3,
       3,     3,     2,     3,     2,     1,     1,     0,     1,     3,
       2,     5,     3,     6,     2,     0,     2,     3,     2,     1,
       1,     3,     1,     3,     0,     3,     2,     0,     4,     1,
       3,     2,     1,     3,     1,     5,     1,     1,     2,     3,
       2,     2,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     1,     2,     0,     1,     1,     1,     2,     2,     3,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     0,     1,     2,     3,     1,     1,     3,
       2,     1,     1,     2,     0,     1,     1,     3,     3,     1,
       1,     3,     5,     5,     3,     2,     3,     3,     2,     5,
       5,     2,     3,     3,     5,     6,     5,     5,     1,     2,
       8,     1,     3,     4,     1,     2,     4,     1,     2,     3,
       3,     2,     1,     5,     4,     3,     5,     4,     2,     2,
       4,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3
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
      66,     0,    57,    67,     0,    60,    35,    35,    37,    11,
      34,    29,    38,    36,    51,   244,     0,   243,   235,   237,
     236,   242,   238,   239,   240,   241,    63,    64,    65,     0,
     232,   233,    25,    55,    26,    58,    27,    61,    37,    30,
      32,     0,    97,    85,     0,     0,    77,     0,   234,     0,
      28,    39,   244,     0,     0,     0,     0,    69,    85,    70,
       0,    71,     0,    68,    75,    76,    86,   245,    95,   102,
       0,    96,    99,     4,    84,   184,     0,   164,   162,     0,
     168,   166,   167,   156,     0,     0,    94,   144,   145,   165,
     141,   142,   143,    88,    89,    90,   104,   106,   107,     0,
     150,   160,   154,   155,    77,    72,     0,    78,    74,    87,
     101,     0,    97,     0,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   184,   189,   190,     0,
     182,   185,   186,     0,   184,    82,     0,   173,     0,   174,
     158,   157,     0,     0,     0,    92,     0,   114,   115,   116,
     117,   118,   120,   121,   122,   119,     0,     0,     0,   136,
     137,   138,   139,   140,   130,   131,   134,   132,   135,   133,
     126,   127,   125,   128,   129,   108,     0,   110,     0,   181,
     153,   148,   173,   177,   178,   161,   111,    80,    73,     0,
       0,   100,     5,   184,     0,     0,     0,     0,   173,     0,
       0,     0,   198,     0,   195,     0,   201,     0,     0,    83,
     183,     0,     0,   163,   171,     0,   175,   159,   169,     0,
      94,    91,   103,     0,   109,   123,   180,   146,   147,   151,
     113,   149,     0,    79,    98,     0,   203,   184,   191,     0,
       0,   222,     0,   194,     0,   197,   196,     0,   202,   188,
     187,    81,   173,   170,   176,   112,    93,     0,   124,   179,
     152,     0,     0,     0,     0,     0,   231,     0,     0,     0,
       0,   214,     0,   217,   172,   105,     0,     0,   207,   208,
     206,   204,   192,   173,     0,   193,     0,     0,   225,     0,
     200,   162,     0,   221,   199,   215,   184,   218,     0,   184,
     205,   209,   224,   173,   229,   228,     0,   220,   219,     0,
     211,     0,     0,   223,     0,   173,     0,   216,     0,     0,
     213,   230,   227,   173,     0,   212,   226,   184,     0,   210
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   144,     2,     7,     8,     3,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    62,    65,    83,
      37,    67,    68,    71,    74,    69,    72,    75,    96,    97,
     131,   132,   176,   177,   127,    98,   126,   118,   135,   215,
     164,   216,   128,   123,   141,   142,   198,   166,   167,   168,
     226,   245,   246,   169,   299,   250,   300,   170,   171,   172,
     173,   209,   285,   210,   255,   251,   199,   200,   201,   202,
     348,   349,   381,   350,   340,   341,   342,   343,   310,   311,
     358,   359,   203,   100,   101
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -262
static const yytype_int16 yypact[] =
{
      -4,    45,    -1,    68,  -262,    49,    45,  1250,    -1,  -262,
    -262,    73,    59,  -262,  -262,  -262,  -262,  -262,    75,    93,
     107,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  1250,  1250,
    1250,  1281,  1304,  1315,    57,    63,    71,    88,  -262,  -262,
    -262,    17,   101,   101,   119,  -262,  -262,  -262,  -262,   131,
    -262,   133,  -262,   134,   190,   137,   147,   165,   166,   167,
     108,   169,   119,  -262,   172,  -262,  1338,   124,   114,  1219,
    -262,   115,   137,  -262,   116,   147,   101,   101,   119,  -262,
    -262,  -262,  -262,   110,  -262,   122,    39,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,    27,
    -262,   117,  -262,  -262,  -262,  -262,  -262,  -262,   119,  -262,
    -262,   179,   204,   162,   122,   122,   -16,   126,  -262,   183,
    -262,  -262,  -262,   140,    18,    45,   128,  -262,   162,  -262,
     946,  -262,    15,  -262,   120,  -262,   148,  -262,  -262,   148,
     135,  -262,   127,   144,   145,   813,    41,  -262,   152,     4,
    -262,  -262,  -262,     4,   208,   943,   946,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  1101,   125,  1306,  1095,
     991,  1140,  -262,  1095,   -27,  -262,   149,   146,  -262,  -262,
    -262,   154,   204,    45,   -28,   158,  1095,   163,   163,   170,
     163,   872,    24,    28,   163,  1015,   813,  -262,  -262,   237,
    -262,  -262,  -262,    33,   813,  -262,   208,  1095,   221,  -262,
    -262,  -262,   171,   184,    72,   164,   185,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  1095,  1095,   204,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  1095,  -262,   244,  -262,
      54,   991,   943,  -262,  -262,  -262,  -262,  -262,  -262,   245,
     247,  -262,   144,   813,   186,  1095,   193,   872,   943,   872,
     213,   188,  -262,   195,  -262,   198,  -262,   197,   309,  -262,
    -262,   207,   381,  -262,   209,   220,   171,  -262,  -262,  1095,
     946,  -262,  -262,   192,   148,  1332,   171,  -262,  -262,    54,
    -262,  -262,     6,  -262,  -262,   453,  -262,   813,   246,   223,
     230,  -262,    34,  -262,   163,  -262,  -262,   113,  -262,  -262,
    -262,  -262,  1095,  -262,  -262,  -262,  -262,  1095,  -262,  -262,
    -262,    51,   525,   872,  1050,   872,   -41,   226,  1154,   202,
       0,  -262,   229,   113,  -262,  -262,   239,   236,   279,   283,
    -262,  -262,  -262,  1095,   242,  -262,   946,  1095,  -262,   243,
    -262,   -37,   214,  -262,  -262,  -262,   813,  -262,    45,   813,
    -262,  -262,  -262,  1095,   248,  -262,  1064,  -262,  -262,   597,
     144,    13,   669,  -262,   245,  1095,   249,  -262,   250,    45,
    -262,  -262,  -262,  1095,   253,   144,  -262,   813,   741,  -262
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -262,    -6,  -262,  -262,   306,  -262,  -262,    74,   288,   289,
     287,  -262,  -262,  -262,  -262,  -262,  -262,   -14,   -38,  -262,
      77,   256,   254,   252,   251,  -262,  -262,  -262,  -262,  -262,
    -262,   153,  -199,  -262,    52,  -262,   200,   -91,   199,  -127,
    -262,    55,   264,   178,  -262,  -240,  -129,  -210,  -262,  -160,
    -262,    36,  -262,  -262,  -262,    78,    62,  -262,  -131,  -262,
    -176,  -156,  -261,   210,  -262,  -262,  -194,  -191,  -262,  -185,
      16,  -262,  -262,     5,  -262,    30,    21,  -262,  -262,  -262,
    -262,  -262,   -62,  -262,  -262
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -245
static const yytype_int16 yytable[] =
{
      12,   165,   278,   163,   281,    99,   270,   309,   280,   247,
     282,   266,   267,   256,   269,   254,   292,   388,   275,   174,
     304,    39,   139,   212,    81,   134,   213,   165,   271,    63,
     206,   116,   273,   356,  -244,   117,     1,   174,   139,   206,
     110,   249,   253,   114,   112,   179,   117,   130,   180,     4,
     124,   338,   339,     6,   115,   357,   287,   264,   130,   377,
     303,   344,   108,   109,   207,   364,   277,   288,     9,   305,
     120,   208,   336,   346,   322,   283,   347,    39,   284,    42,
     117,   175,   308,   134,   313,   140,   295,   280,    60,   117,
     272,   280,   372,   214,   274,   117,   117,    43,   293,    57,
      58,    59,    45,    46,    47,   204,   389,   205,    49,    51,
      53,    44,   383,   332,   280,    10,    11,   345,    61,   143,
     124,    54,   249,   302,   392,    40,    41,    55,    85,   325,
     324,    66,   396,   289,   117,    56,   213,    64,   337,   284,
     329,   280,    57,    66,    86,    58,    66,    59,   352,    70,
     355,   297,   298,    87,    88,    89,    90,    91,    92,    93,
      73,   165,    94,    95,   338,   339,   294,   129,   133,    76,
      77,    78,   379,    80,    79,   382,    82,   262,   111,   102,
     104,   106,   112,   121,   119,   391,   125,   137,   280,   136,
     214,   280,   145,   284,   130,   182,    13,    14,    15,    16,
      17,   138,   181,   398,    21,   354,   312,   280,   122,   362,
     117,    11,   148,   183,   259,   258,    22,    23,    24,   206,
     227,   260,   263,   265,   284,   286,    25,   165,   375,   374,
     268,   207,   290,    87,    88,    89,    90,    91,    92,    93,
     147,   184,    94,    95,   284,   288,    26,   386,   296,   174,
     291,   139,   306,   149,   315,   -56,   284,   307,   185,   314,
     186,   316,   317,   318,   284,   187,    87,    88,    89,    90,
      91,    92,    93,   320,   150,    94,    95,   322,   151,   152,
     188,   323,   189,   190,   191,   192,   193,   194,   327,   334,
     333,   335,   360,   366,   195,   153,   154,   155,   363,   368,
     369,   196,   279,   197,   347,   346,   157,   158,   373,   376,
     378,   394,   147,   184,    38,   393,   384,   397,   159,    48,
      52,    50,    84,   103,   105,   149,   107,   257,   146,   301,
     185,   328,   186,   178,   160,   161,   162,   187,    87,    88,
      89,    90,    91,    92,    93,   326,   150,    94,    95,   113,
     151,   152,   188,   370,   189,   190,   191,   192,   193,   194,
     261,   330,   380,   211,   367,   371,   195,   153,   154,   155,
     365,     0,     0,   196,   319,   197,     0,     0,   157,   158,
       0,     0,     0,   395,   147,   184,     0,     0,     0,     0,
     159,     0,     0,     0,     0,     0,     0,   149,     0,     0,
       0,     0,   185,     0,   186,     0,   160,   161,   162,   187,
      87,    88,    89,    90,    91,    92,    93,     0,   150,    94,
      95,     0,   151,   152,   188,     0,   189,   190,   191,   192,
     193,   194,     0,     0,     0,     0,     0,     0,   195,   153,
     154,   155,     0,     0,     0,   196,   321,   197,     0,     0,
     157,   158,     0,     0,     0,     0,   147,   184,     0,     0,
       0,     0,   159,     0,     0,     0,     0,     0,     0,   149,
       0,     0,     0,     0,   185,     0,   186,     0,   160,   161,
     162,   187,    87,    88,    89,    90,    91,    92,    93,     0,
     150,    94,    95,     0,   151,   152,   188,     0,   189,   190,
     191,   192,   193,   194,     0,     0,     0,     0,     0,     0,
     195,   153,   154,   155,     0,     0,     0,   196,   331,   197,
       0,     0,   157,   158,     0,     0,     0,     0,   147,   184,
       0,     0,     0,     0,   159,     0,     0,     0,     0,     0,
       0,   149,     0,     0,     0,     0,   185,     0,   186,     0,
     160,   161,   162,   187,    87,    88,    89,    90,    91,    92,
      93,     0,   150,    94,    95,     0,   151,   152,   188,     0,
     189,   190,   191,   192,   193,   194,     0,     0,     0,     0,
       0,     0,   195,   153,   154,   155,     0,     0,     0,   196,
     351,   197,     0,     0,   157,   158,     0,     0,     0,     0,
     147,   184,     0,     0,     0,     0,   159,     0,     0,     0,
       0,     0,     0,   149,     0,     0,     0,     0,   185,     0,
     186,     0,   160,   161,   162,   187,    87,    88,    89,    90,
      91,    92,    93,     0,   150,    94,    95,     0,   151,   152,
     188,     0,   189,   190,   191,   192,   193,   194,     0,     0,
       0,     0,     0,     0,   195,   153,   154,   155,     0,     0,
       0,   196,   387,   197,     0,     0,   157,   158,     0,     0,
       0,     0,   147,   184,     0,     0,     0,     0,   159,     0,
       0,     0,     0,     0,     0,   149,     0,     0,     0,     0,
     185,     0,   186,     0,   160,   161,   162,   187,    87,    88,
      89,    90,    91,    92,    93,     0,   150,    94,    95,     0,
     151,   152,   188,     0,   189,   190,   191,   192,   193,   194,
       0,     0,     0,     0,     0,     0,   195,   153,   154,   155,
       0,     0,     0,   196,   390,   197,     0,     0,   157,   158,
       0,     0,     0,     0,   147,   184,     0,     0,     0,     0,
     159,     0,     0,     0,     0,     0,     0,   149,     0,     0,
       0,     0,   185,     0,   186,     0,   160,   161,   162,   187,
      87,    88,    89,    90,    91,    92,    93,     0,   150,    94,
      95,     0,   151,   152,   188,     0,   189,   190,   191,   192,
     193,   194,     0,     0,     0,     0,     0,     0,   195,   153,
     154,   155,     0,     0,     0,   196,   399,   197,     0,     0,
     157,   158,     0,     0,     0,     0,   147,   184,     0,     0,
       0,     0,   159,     0,     0,     0,     0,     0,     0,   149,
       0,     0,     0,     0,   185,     0,   186,     0,   160,   161,
     162,   187,    87,    88,    89,    90,    91,    92,    93,     0,
     150,    94,    95,     0,   151,   152,   188,     0,   189,   190,
     191,   192,   193,   194,     0,     0,     0,     0,     0,     0,
     195,   153,   154,   155,     0,   147,   148,   196,     0,   197,
       0,     0,   157,   158,     0,     0,     0,     0,   149,     0,
       0,     0,     0,   185,   159,   186,     0,     0,     0,     0,
     187,     0,     0,     0,     0,     0,     0,     0,     0,   150,
     160,   161,   162,   151,   152,   188,     0,   189,   190,   191,
     192,   193,   194,     0,     0,     0,     0,     0,     0,   195,
     153,   154,   155,     0,     0,     0,   196,     0,   197,     0,
       0,   157,   158,     0,     0,     0,   147,   184,     0,   147,
     148,     0,     0,   159,     0,     0,     0,     0,     0,   149,
       0,     0,   149,     0,     0,     0,     0,     0,     0,   160,
     161,   162,    87,    88,    89,    90,    91,    92,    93,     0,
     150,    94,    95,   150,   151,   152,     0,   151,   152,     0,
       0,     0,     0,     0,   147,   148,     0,     0,     0,     0,
       0,   153,   154,   155,   153,   154,   155,   149,     0,     0,
     156,     0,   157,   158,     0,   157,   158,     0,   147,   148,
       0,     0,     0,     0,   159,     0,     0,   159,   150,     0,
       0,   149,   151,   152,     0,     0,     0,     0,     0,     0,
     160,   161,   162,   160,   161,   162,     0,     0,     0,   153,
     154,   155,   150,   147,   148,     0,   151,   152,   248,     0,
     157,   158,     0,     0,     0,     0,   149,   147,   148,     0,
       0,     0,   159,   153,   154,   155,     0,     0,     0,     0,
     149,   276,     0,     0,   157,   158,     0,   150,   160,   161,
     162,   151,   152,     0,     0,     0,   159,     0,   147,   148,
       0,   150,     0,     0,     0,   151,   152,     0,   153,   154,
     155,   149,   160,   161,   162,     0,   353,     0,     0,   157,
     158,     0,   153,   154,   155,     0,     0,     0,     0,     0,
     385,   159,   150,   157,   158,     0,   151,   152,     0,     0,
       0,     0,     0,   147,   148,   159,     0,   160,   161,   162,
       0,     0,     0,   153,   154,   155,   149,   147,   361,     0,
       0,   160,   161,   162,   157,   158,     0,     0,     0,     0,
     149,     0,     0,     0,     0,   217,   159,   150,     0,     0,
       0,   151,   152,   218,   219,   220,   221,   222,   223,   224,
     225,   150,   160,   161,   162,   151,   152,     0,   153,   154,
     252,     0,     0,     0,     0,     0,     0,     0,     0,   157,
     158,     0,   153,   154,   155,     0,     0,     0,     0,     0,
       0,   159,     0,   157,   158,    13,    14,    15,    16,    17,
       0,     0,     0,    21,     0,   159,     0,   160,   161,   162,
       0,     0,     0,     0,     0,    22,    23,    24,     0,     0,
       0,   160,   161,   162,     0,    25,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    22,    23,    24,     0,
       0,     0,     0,     0,   -54,     0,    25,    13,    14,    15,
      16,    17,    18,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    22,    23,    24,
      13,    14,    15,    16,    17,     0,    19,    25,    21,     0,
       0,    13,    14,    15,    16,    17,     0,     0,    20,    21,
      22,    23,    24,     0,     0,     0,     0,    26,     0,     0,
      25,    22,    23,    24,    13,    14,    15,    16,    17,     0,
       0,    25,    21,     0,     0,     0,     0,     0,     0,     0,
      26,   228,     0,     0,    22,    23,    24,     0,     0,     0,
       0,    26,     0,     0,    25,   229,   230,   231,   232,   233,
       0,   234,   235,   236,   237,   238,   239,     0,     0,     0,
       0,     0,     0,     0,    26,     0,   240,   241,   242,   243,
     244,   229,   230,   231,   232,   233,     0,   234,   235,   236,
     237,   238,   239,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   240,   241,   242,   243,   244
};

static const yytype_int16 yycheck[] =
{
       6,   130,   196,   130,   203,    67,   191,   268,   199,   169,
     204,   187,   188,   173,   190,   171,   226,     4,   194,     4,
     260,     4,     4,   154,    62,   116,   155,   156,     4,    43,
      67,     4,     4,    74,    62,    62,    40,     4,     4,    67,
      78,   170,   171,     4,    60,   136,    62,    74,   139,     4,
     112,    51,    52,    54,    15,    96,   212,   186,    74,    96,
     259,   322,    76,    77,    60,    65,   195,    61,     0,   263,
     108,    67,   312,    22,    68,   206,    25,     4,   207,     4,
      62,    66,   267,   174,   269,    67,   246,   278,    71,    62,
      66,   282,   353,   155,    66,    62,    62,     4,   227,    11,
      12,    13,    28,    29,    30,    64,    93,    66,    31,    32,
      33,     4,   373,   307,   305,    66,    67,   327,    17,   125,
     182,    64,   251,   252,   385,    66,    67,    64,     4,   289,
     286,    54,   393,    61,    62,    64,   265,    18,   314,   268,
     296,   332,    11,    66,    20,    12,    69,    13,   333,    12,
     335,    97,    98,    29,    30,    31,    32,    33,    34,    35,
      13,   290,    38,    39,    51,    52,   228,   115,   116,     4,
       4,     4,   366,     4,    66,   369,     4,   183,    68,    65,
      65,    65,    60,     4,    67,   384,    24,     4,   379,    63,
     252,   382,    64,   322,    74,    68,     6,     7,     8,     9,
      10,    61,    67,   397,    14,   334,   268,   398,     4,   338,
      62,    67,     4,    68,    68,    66,    26,    27,    28,    67,
      95,    67,    64,    60,   353,     4,    36,   356,   357,   356,
      60,    60,    68,    29,    30,    31,    32,    33,    34,    35,
       3,     4,    38,    39,   373,    61,    56,   376,     4,     4,
      65,     4,    66,    16,    66,    65,   385,    64,    21,    46,
      23,    66,    64,    66,   393,    28,    29,    30,    31,    32,
      33,    34,    35,    66,    37,    38,    39,    68,    41,    42,
      43,    61,    45,    46,    47,    48,    49,    50,    96,    66,
      44,    61,    66,    64,    57,    58,    59,    60,    96,    60,
      64,    64,    65,    66,    25,    22,    69,    70,    66,    66,
      96,    61,     3,     4,     8,    66,    68,    64,    81,    31,
      33,    32,    66,    69,    72,    16,    75,   174,   128,   251,
      21,   295,    23,   134,    97,    98,    99,    28,    29,    30,
      31,    32,    33,    34,    35,   290,    37,    38,    39,    85,
      41,    42,    43,   348,    45,    46,    47,    48,    49,    50,
     182,   299,   368,   153,   343,   349,    57,    58,    59,    60,
     340,    -1,    -1,    64,    65,    66,    -1,    -1,    69,    70,
      -1,    -1,    -1,   389,     3,     4,    -1,    -1,    -1,    -1,
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
      64,    -1,    69,    70,    -1,    69,    70,    -1,     3,     4,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    81,    37,    -1,
      -1,    16,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,    97,    98,    99,    -1,    -1,    -1,    58,
      59,    60,    37,     3,     4,    -1,    41,    42,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    16,     3,     4,    -1,
      -1,    -1,    81,    58,    59,    60,    -1,    -1,    -1,    -1,
      16,    66,    -1,    -1,    69,    70,    -1,    37,    97,    98,
      99,    41,    42,    -1,    -1,    -1,    81,    -1,     3,     4,
      -1,    37,    -1,    -1,    -1,    41,    42,    -1,    58,    59,
      60,    16,    97,    98,    99,    -1,    66,    -1,    -1,    69,
      70,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      66,    81,    37,    69,    70,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,     3,     4,    81,    -1,    97,    98,    99,
      -1,    -1,    -1,    58,    59,    60,    16,     3,     4,    -1,
      -1,    97,    98,    99,    69,    70,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    74,    81,    37,    -1,    -1,
      -1,    41,    42,    82,    83,    84,    85,    86,    87,    88,
      89,    37,    97,    98,    99,    41,    42,    -1,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    69,    70,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    81,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    97,    98,    99,    -1,    36,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    36,     6,     7,     8,
       9,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    26,    27,    28,
       6,     7,     8,     9,    10,    -1,    12,    36,    14,    -1,
      -1,     6,     7,     8,     9,    10,    -1,    -1,    13,    14,
      26,    27,    28,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      36,    26,    27,    28,     6,     7,     8,     9,    10,    -1,
      -1,    36,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    55,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    36,    69,    70,    71,    72,    73,
      -1,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    90,    91,    92,    93,
      94,    69,    70,    71,    72,    73,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,   103,   106,     4,   101,    54,   104,   105,     0,
      66,    67,   101,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    26,    27,    28,    36,    56,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   120,   104,     4,
      66,    67,     4,     4,     4,   107,   107,   107,   108,   120,
     109,   120,   110,   120,    64,    64,    64,    11,    12,    13,
      71,    17,   117,   117,    18,   118,   120,   121,   122,   125,
      12,   123,   126,    13,   124,   127,     4,     4,     4,    66,
       4,   118,     4,   119,   121,     4,    20,    29,    30,    31,
      32,    33,    34,    35,    38,    39,   128,   129,   135,   182,
     183,   184,    65,   122,    65,   123,    65,   124,   117,   117,
     118,    68,    60,   142,     4,    15,     4,    62,   137,    67,
     118,     4,     4,   143,   182,    24,   136,   134,   142,   134,
      74,   130,   131,   134,   137,   138,    63,     4,    61,     4,
      67,   144,   145,   101,   102,    64,   136,     3,     4,    16,
      37,    41,    42,    58,    59,    60,    64,    69,    70,    81,
      97,    98,    99,   139,   140,   146,   147,   148,   149,   153,
     157,   158,   159,   160,     4,    66,   132,   133,   138,   137,
     137,    67,    68,    68,     4,    21,    23,    28,    43,    45,
      46,    47,    48,    49,    50,    57,    64,    66,   146,   166,
     167,   168,   169,   182,    64,    66,    67,    60,    67,   161,
     163,   163,   158,   146,   182,   139,   141,    74,    82,    83,
      84,    85,    86,    87,    88,    89,   150,    95,    55,    69,
      70,    71,    72,    73,    75,    76,    77,    78,    79,    80,
      90,    91,    92,    93,    94,   151,   152,   149,    67,   146,
     155,   165,    60,   146,   161,   164,   149,   131,    66,    68,
      67,   143,   101,    64,   146,    60,   160,   160,    60,   160,
     169,     4,    66,     4,    66,   160,    66,   146,   166,    65,
     167,   132,   166,   158,   146,   162,     4,   161,    61,    61,
      68,    65,   147,   146,   182,   149,     4,    97,    98,   154,
     156,   155,   146,   132,   145,   166,    66,    64,   169,   162,
     178,   179,   182,   169,    46,    66,    66,    64,    66,    65,
      66,    65,    68,    61,   161,   149,   141,    96,   151,   161,
     156,    65,   166,    44,    66,    61,   145,   160,    51,    52,
     174,   175,   176,   177,   162,   147,    22,    25,   170,   171,
     173,    65,   169,    66,   146,   169,    74,    96,   180,   181,
      66,     4,   146,    96,    65,   175,    64,   176,    60,    64,
     173,   170,   162,    66,   139,   146,    66,    96,    96,   166,
     101,   172,   166,   162,    68,    66,   146,    65,     4,    93,
      65,   132,   162,    66,    61,   101,   162,    64,   166,    65
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
#line 2042 "parser.tab.c"
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
#line 446 "parser.y"


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
