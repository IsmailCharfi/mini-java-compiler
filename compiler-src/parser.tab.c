
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
#define YYLAST   1487

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  252
/* YYNRULES -- Number of states.  */
#define YYNSTATES  422

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
     163,   165,   168,   169,   172,   175,   178,   184,   190,   195,
     199,   201,   203,   207,   211,   214,   218,   222,   226,   230,
     233,   237,   240,   242,   244,   245,   247,   251,   254,   260,
     264,   271,   274,   275,   278,   282,   285,   287,   289,   293,
     295,   299,   300,   304,   307,   308,   313,   315,   319,   322,
     324,   328,   330,   336,   338,   340,   343,   347,   350,   353,
     358,   362,   364,   366,   368,   370,   372,   374,   376,   378,
     380,   383,   387,   389,   391,   393,   395,   397,   399,   401,
     403,   405,   407,   409,   411,   413,   415,   417,   419,   421,
     423,   425,   427,   429,   431,   433,   435,   438,   439,   441,
     444,   445,   447,   449,   451,   454,   457,   461,   463,   466,
     468,   472,   474,   476,   478,   480,   482,   486,   490,   492,
     496,   497,   499,   502,   506,   508,   510,   514,   517,   519,
     521,   524,   525,   527,   529,   533,   537,   539,   541,   545,
     551,   557,   561,   564,   568,   572,   575,   581,   587,   590,
     594,   598,   604,   611,   617,   623,   625,   628,   637,   639,
     643,   648,   650,   653,   658,   660,   663,   667,   671,   674,
     676,   682,   687,   691,   697,   702,   705,   708,   713,   714,
     716,   718,   721,   723,   725,   727,   729,   731,   733,   735,
     737,   739,   741
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
     130,    -1,   121,   131,    -1,   121,   137,    -1,   184,     4,
     144,   138,    66,    -1,    20,     4,   144,   138,    66,    -1,
       4,   144,   138,    66,    -1,   128,    66,   122,    -1,   128,
      -1,   129,    -1,   128,    68,   129,    -1,     4,   163,   122,
      -1,     4,   122,    -1,   184,     4,   136,    -1,    20,     4,
     136,    -1,    20,    15,   136,    -1,   184,     4,   132,    -1,
     133,    66,    -1,   133,   134,    66,    -1,   139,   140,    -1,
     139,    -1,   140,    -1,    -1,   135,    -1,   135,    68,   134,
      -1,     4,   133,    -1,   144,   138,    64,   168,    65,    -1,
     144,   138,    66,    -1,     4,   144,   138,    64,   168,    65,
      -1,    24,   102,    -1,    -1,    62,    63,    -1,    62,    63,
     139,    -1,    74,   141,    -1,   142,    -1,   148,    -1,    64,
     143,    65,    -1,   141,    -1,   141,    68,   143,    -1,    -1,
      60,   145,    61,    -1,   184,   146,    -1,    -1,    67,    67,
      67,   147,    -1,   147,    -1,   147,    68,   145,    -1,     4,
     139,    -1,     4,    -1,   149,   152,   149,    -1,   149,    -1,
     150,    95,   148,    96,   149,    -1,   150,    -1,   151,    -1,
     151,   153,    -1,   151,    55,   184,    -1,   155,   151,    -1,
     162,   151,    -1,    60,   184,    61,   151,    -1,   159,   157,
     158,    -1,    74,    -1,    82,    -1,    83,    -1,    84,    -1,
      85,    -1,    89,    -1,    86,    -1,    87,    -1,    88,    -1,
     154,   151,    -1,   154,   151,   153,    -1,    92,    -1,    90,
      -1,    91,    -1,    93,    -1,    94,    -1,    75,    -1,    76,
      -1,    78,    -1,    80,    -1,    77,    -1,    79,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    97,
      -1,    98,    -1,    99,    -1,    69,    -1,    70,    -1,    97,
      -1,    98,    -1,   167,    -1,   167,   157,    -1,    -1,   156,
      -1,   156,   158,    -1,    -1,   161,    -1,   162,    -1,    58,
      -1,    58,   165,    -1,    16,   165,    -1,    59,   160,   163,
      -1,   160,    -1,   160,   166,    -1,     4,    -1,     4,    67,
     160,    -1,     3,    -1,    81,    -1,    41,    -1,    42,    -1,
      37,    -1,    60,   148,    61,    -1,    60,   164,    61,    -1,
     148,    -1,   148,    68,   164,    -1,    -1,   163,    -1,    67,
       4,    -1,    67,     4,   163,    -1,   148,    -1,   163,    -1,
      67,     4,   163,    -1,    67,     4,    -1,   148,    -1,   169,
      -1,   168,   169,    -1,    -1,   170,    -1,   171,    -1,   184,
     134,    66,    -1,    64,   168,    65,    -1,    66,    -1,   148,
      -1,    43,   162,   171,    -1,    43,   162,   171,    44,   171,
      -1,    45,    60,   180,    61,   171,    -1,    46,   162,   171,
      -1,    49,    66,    -1,    49,     4,    66,    -1,    48,     4,
      66,    -1,    48,    66,    -1,    50,   162,    64,   176,    65,
      -1,    47,   171,    46,   162,    66,    -1,    57,    66,    -1,
      57,   148,    66,    -1,    23,   148,    66,    -1,    28,   162,
      64,   168,    65,    -1,    21,    64,   168,    65,   172,   175,
      -1,    21,    64,   168,    65,   175,    -1,    21,    64,   168,
      65,   172,    -1,   173,    -1,   173,   172,    -1,    22,    60,
     174,     4,    61,    64,   168,    65,    -1,   101,    -1,   174,
      93,   101,    -1,    25,    64,   168,    65,    -1,   177,    -1,
     176,   177,    -1,   178,    64,   168,    65,    -1,   179,    -1,
     179,   178,    -1,    51,   148,    96,    -1,    51,     4,    96,
      -1,    52,    96,    -1,   181,    -1,   164,    66,   148,    66,
     164,    -1,   164,    66,    66,   164,    -1,   184,   147,   182,
      -1,   183,    66,   148,    66,   164,    -1,   183,    66,    66,
     164,    -1,    96,   148,    -1,    74,   141,    -1,    74,   141,
      68,   134,    -1,    -1,   185,    -1,   186,    -1,   184,   139,
      -1,    30,    -1,    32,    -1,    31,    -1,    34,    -1,    35,
      -1,    38,    -1,    39,    -1,    33,    -1,    29,    -1,     4,
      -1,   186,    67,     4,    -1
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
     195,   196,   197,   200,   201,   202,   204,   205,   206,   208,
     209,   212,   213,   215,   216,   218,   219,   220,   222,   224,
     225,   227,   228,   229,   230,   232,   233,   235,   237,   238,
     240,   242,   243,   245,   246,   248,   250,   251,   253,   255,
     256,   257,   259,   261,   262,   264,   265,   266,   268,   269,
     271,   272,   274,   275,   277,   278,   279,   281,   282,   283,
     284,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     296,   297,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   316,   317,
     318,   319,   320,   322,   323,   325,   326,   327,   329,   330,
     331,   333,   334,   335,   336,   337,   338,   339,   340,   342,
     343,   345,   346,   347,   348,   349,   351,   353,   355,   356,
     357,   359,   360,   361,   363,   364,   367,   368,   369,   371,
     372,   373,   375,   376,   380,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   403,   404,   406,   408,   409,
     411,   413,   414,   416,   418,   419,   421,   422,   423,   425,
     426,   427,   429,   431,   432,   433,   435,   436,   437,   439,
     440,   441,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   453,   454
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
     124,   124,   124,   125,   125,   125,   126,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   130,   131,   132,
     132,   133,   133,   133,   133,   134,   134,   135,   136,   136,
     137,   138,   138,   139,   139,   140,   141,   141,   142,   143,
     143,   143,   144,   145,   145,   146,   146,   146,   147,   147,
     148,   148,   149,   149,   150,   150,   150,   151,   151,   151,
     151,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     153,   153,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   155,   155,
     155,   155,   155,   156,   156,   157,   157,   157,   158,   158,
     158,   159,   159,   159,   159,   159,   159,   159,   159,   160,
     160,   161,   161,   161,   161,   161,   162,   163,   164,   164,
     164,   165,   165,   165,   166,   166,   167,   167,   167,   168,
     168,   168,   169,   169,   170,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   172,   172,   173,   174,   174,
     175,   176,   176,   177,   178,   178,   179,   179,   179,   180,
     180,   180,   181,   182,   182,   182,   183,   183,   183,   184,
     184,   184,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   186,   186
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
       3,     0,     3,     2,     0,     4,     1,     3,     2,     1,
       3,     1,     5,     1,     1,     2,     3,     2,     2,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     1,     2,
       0,     1,     1,     1,     2,     2,     3,     1,     2,     1,
       3,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       0,     1,     2,     3,     1,     1,     3,     2,     1,     1,
       2,     0,     1,     1,     3,     3,     1,     1,     3,     5,
       5,     3,     2,     3,     3,     2,     5,     5,     2,     3,
       3,     5,     6,     5,     5,     1,     2,     8,     1,     3,
       4,     1,     2,     4,     1,     2,     3,     3,     2,     1,
       5,     4,     3,     5,     4,     2,     2,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3
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
     251,     0,   250,   242,   244,   243,   249,   245,   246,   247,
     248,     0,    57,     0,   239,   240,    53,     0,    60,    70,
      71,    35,    35,    37,    11,    34,    29,    38,    36,    51,
     251,     0,    63,    64,    65,     0,    25,    55,   104,    92,
       0,    26,    58,     0,     0,   241,     0,   180,    74,    53,
      27,    61,    53,     0,    37,    30,    32,     0,    92,     0,
       0,    84,   251,     0,     0,     0,     0,    92,    92,    93,
     252,   171,   169,     0,   175,   173,   174,   163,     0,     0,
     151,   152,   172,   148,   149,   150,   178,   111,   113,   114,
       0,   157,   167,   161,   162,     0,    73,    69,    72,    28,
      39,     0,    76,    92,    77,     0,    78,     0,    75,    82,
      83,   102,   109,     0,   103,   106,     4,    91,    68,     0,
       0,    94,     0,     0,   181,   165,   164,     0,   169,     0,
       0,   180,   121,   122,   123,   124,   125,   127,   128,   129,
     126,     0,     0,     0,   143,   144,   145,   146,   147,   137,
     138,   141,   139,   142,   140,   133,   134,   132,   135,   136,
     115,     0,   117,     0,   188,   160,   155,   180,   184,   185,
     168,   118,   177,   191,     0,   101,    95,    96,    97,    84,
      79,     0,    85,    81,   108,     0,   104,     0,    67,    66,
     170,   182,   166,   176,     0,   179,   110,     0,   116,   130,
     187,   153,   154,   158,   120,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   191,   196,
     197,     0,   189,   192,   193,     0,   191,    89,    99,     0,
      87,    80,     0,     0,   107,     5,   183,   119,     0,   131,
     186,   159,   191,     0,     0,     0,     0,   180,     0,     0,
       0,   205,     0,   202,     0,   208,     0,     0,    90,   190,
       0,     0,   101,    98,    86,   105,   112,     0,   210,   191,
     198,     0,     0,   229,     0,   201,     0,   204,   203,     0,
     209,   195,   194,    88,   100,     0,     0,     0,     0,     0,
     238,     0,     0,     0,     0,   221,     0,   224,     0,     0,
     214,   215,   213,   211,   199,   180,     0,   200,     0,     0,
     232,     0,   207,   169,     0,   228,   206,   222,   191,   225,
       0,   191,   212,   216,   231,   180,   236,   235,     0,   227,
     226,     0,   218,     0,     0,   230,     0,   180,     0,   223,
       0,     0,   220,   237,   234,   180,     0,   219,   233,   191,
       0,   217
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   187,     2,     7,     8,     3,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    62,    65,    98,
      66,    67,    68,    81,    87,    69,    82,    88,    89,    90,
     102,   103,   176,   177,   251,   252,   172,   104,   136,   115,
     180,   298,   247,   299,   173,   133,   184,   185,   290,   157,
     158,   159,   211,   230,   231,   160,   273,   235,   274,   161,
     162,   163,   164,   194,   165,   195,   240,   236,   291,   292,
     293,   294,   370,   371,   403,   372,   364,   365,   366,   367,
     342,   343,   380,   381,   295,    84,    85
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -289
static const yytype_int16 yypact[] =
{
       9,    59,    -1,   102,  -289,    53,    59,   140,    -1,  -289,
    -289,   108,    71,  -289,  -289,  -289,  -289,  -289,   120,   131,
     139,  -289,  -289,  -289,  -289,  -289,  -289,  -289,   140,   140,
     140,  1317,  1328,  1361,    81,    97,   124,   146,  -289,  -289,
    -289,    18,    91,    91,   169,  -289,  -289,  -289,  -289,   180,
    -289,   182,  -289,   184,   202,  1381,   194,   196,   197,   199,
     147,   210,   169,  -289,   214,  -289,  1372,  1401,   154,  1251,
     163,   220,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,   160,  1381,    34,  -289,   159,  1228,   162,   194,    47,
    -289,    91,    91,   169,  -289,  -289,  -289,  -289,   165,  -289,
     163,    52,  -289,  -289,  -289,    37,  -289,  -289,  1414,   211,
     163,  -289,  -289,   163,   171,  -289,   232,   228,  -289,  1294,
    -289,  -289,   202,   194,   169,  -289,  -289,   233,   211,   163,
     163,    -8,  -289,   178,    25,    59,   174,   211,   211,   179,
    -289,  -289,   175,    15,  -289,  -289,  -289,    15,   241,   999,
    -289,  -289,  -289,  -289,  -289,  -289,   181,  1398,   151,   286,
     228,   123,  1134,  -289,   228,   187,  -289,  -289,  -289,  -289,
    -289,   186,  -289,   211,  -289,  1002,  -289,    22,  -289,   183,
    -289,  -289,   179,   185,  -289,   188,   192,   193,  -289,   189,
     205,  -289,   241,   249,  -289,  -289,  -289,   208,    42,   201,
      79,   228,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,   228,   228,  1414,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,   228,  -289,   250,  -289,    73,   123,   999,  -289,  -289,
    -289,  -289,  -289,   869,    68,  1002,  -289,  -289,  -289,    -4,
    -289,   206,   207,  -289,  -289,   212,  1414,    59,  -289,  -289,
    -289,   208,  -289,  -289,   228,  -289,  -289,   177,   179,  1385,
     208,  -289,  -289,    73,  -289,  -289,    39,   217,   228,   218,
     218,   222,   218,   928,    28,    29,   218,  1047,   869,  -289,
    -289,   273,  -289,  -289,  -289,    41,   869,  -289,   216,   209,
    -289,  -289,   281,   287,  -289,   192,  -289,  -289,   228,  -289,
    -289,  -289,   869,   224,   228,   229,   928,   999,   928,   253,
     247,  -289,   251,  -289,   231,  -289,   262,   365,  -289,  -289,
     263,   437,  1002,  -289,  -289,  -289,  -289,   509,  -289,   869,
     290,   269,   275,  -289,    44,  -289,   218,  -289,  -289,   122,
    -289,  -289,  -289,  -289,  -289,    49,   581,   928,  1099,   928,
     -31,   274,  1170,   248,   104,  -289,   288,   122,   291,   289,
     335,   345,  -289,  -289,  -289,   228,   307,  -289,  1002,   228,
    -289,   308,  -289,   -28,   279,  -289,  -289,  -289,   869,  -289,
      59,   869,  -289,  -289,  -289,   228,   314,  -289,  1119,  -289,
    -289,   653,   192,     8,   725,  -289,   281,   228,   319,  -289,
     322,    59,  -289,  -289,  -289,   228,   323,   192,  -289,   869,
     797,  -289
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -289,    -6,  -289,  -289,   381,  -289,  -289,   149,   359,   360,
     358,  -289,  -289,  -289,  -289,  -289,  -289,   -13,   -34,  -289,
     317,   343,   -46,   334,   313,  -289,  -289,  -289,  -289,   294,
    -289,  -289,  -289,   170,  -288,  -289,    54,  -289,  -101,  -118,
     239,  -172,  -289,    88,    23,   172,  -289,  -253,  -115,  -203,
    -289,  -154,  -289,   152,  -289,  -289,  -289,   190,   164,  -289,
    -123,  -289,  -262,   -81,  -200,   280,  -289,  -289,  -277,  -276,
    -289,  -274,    61,  -289,  -289,    63,  -289,    72,    75,  -289,
    -289,  -289,  -289,  -289,   -51,  -289,  -289
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -252
static const yytype_int16 yytable[] =
{
      12,   265,   156,   246,    83,   119,   232,   330,   266,   319,
     241,   327,   410,   179,   334,   329,   105,   315,   316,   331,
     318,   191,    39,   107,   324,   197,   249,   171,    96,   182,
      63,    83,   320,   322,   199,   337,   189,   190,   113,   192,
     118,   131,   340,   378,   345,   249,   234,   238,   182,     1,
     335,   329,   108,     6,   114,   329,   129,   134,   114,   126,
     248,   329,   356,     4,   254,   379,   175,   130,   399,   260,
     175,   368,   244,   166,   369,   117,   167,   269,   124,   125,
     329,   239,   193,   374,   361,   377,   156,   114,   250,    60,
     169,   360,   183,   109,   321,   323,   114,   267,   200,   114,
     263,   411,     9,   114,  -251,   336,   114,   201,    61,   192,
     307,   401,    39,   122,   404,   123,   262,   341,   413,    10,
      11,   234,   276,   128,    42,   329,   141,   142,   329,   186,
     248,   179,   296,   137,   297,    43,   138,    40,    41,   143,
     264,   114,   420,    44,   329,    54,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   362,   363,    57,    58,    59,
     144,    55,   268,   313,   145,   146,    22,    23,    24,   386,
     271,   272,   326,   362,   363,   394,    25,    45,    46,    47,
     306,   147,   148,   149,   174,   178,   200,    64,    56,   310,
     233,    57,   150,   151,    58,   405,    26,    59,    86,   199,
      91,    92,   156,    93,   152,   134,   396,   414,    13,    14,
      15,    16,    17,    94,    95,   418,    21,   248,    97,   106,
     153,   154,   155,   108,   110,   111,   116,   120,    22,    23,
      24,   141,   142,   127,   139,   135,   140,   170,    25,   181,
     188,   114,   192,   376,   143,   142,   212,   384,   242,   201,
     243,   305,   255,   261,   270,   258,   256,   175,    26,    11,
     156,   257,   263,   248,   397,   144,   344,   -56,   117,   145,
     146,   259,   301,   308,   333,   302,   141,   198,   314,   303,
     156,   312,   317,   408,   332,   249,   147,   148,   149,   143,
     338,   182,   156,   339,   277,   349,   278,   150,   151,   346,
     156,   279,    72,    73,    74,    75,    76,    77,    78,   152,
     144,    79,    80,   347,   145,   146,   280,   348,   281,   282,
     283,   284,   285,   286,    37,   153,   154,   155,   350,   352,
     287,   147,   148,   149,   357,   358,   359,   288,   328,   289,
     382,   213,   150,   151,   385,    37,    37,    37,    49,    51,
      53,   390,   388,   391,   152,   214,   215,   216,   217,   218,
     369,   219,   220,   221,   222,   223,   224,   368,   141,   198,
     153,   154,   155,   395,   398,   400,   225,   226,   227,   228,
     229,   143,   406,   416,   402,   415,   277,   419,   278,    38,
      48,    52,    50,   279,    72,    73,    74,    75,    76,    77,
      78,   121,   144,    79,    80,   417,   145,   146,   280,    99,
     281,   282,   283,   284,   285,   286,   112,   168,   253,   300,
     354,   309,   287,   147,   148,   149,   275,   196,   304,   288,
     351,   289,   393,   392,   150,   151,   387,   311,     0,     0,
     141,   198,   389,     0,     0,     0,   152,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,   277,     0,
     278,     0,   153,   154,   155,   279,    72,    73,    74,    75,
      76,    77,    78,     0,   144,    79,    80,     0,   145,   146,
     280,     0,   281,   282,   283,   284,   285,   286,     0,     0,
       0,     0,     0,     0,   287,   147,   148,   149,     0,     0,
       0,   288,   353,   289,     0,     0,   150,   151,     0,     0,
       0,     0,   141,   198,     0,     0,     0,     0,   152,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
     277,     0,   278,     0,   153,   154,   155,   279,    72,    73,
      74,    75,    76,    77,    78,     0,   144,    79,    80,     0,
     145,   146,   280,     0,   281,   282,   283,   284,   285,   286,
       0,     0,     0,     0,     0,     0,   287,   147,   148,   149,
       0,     0,     0,   288,   355,   289,     0,     0,   150,   151,
       0,     0,     0,     0,   141,   198,     0,     0,     0,     0,
     152,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,     0,   277,     0,   278,     0,   153,   154,   155,   279,
      72,    73,    74,    75,    76,    77,    78,     0,   144,    79,
      80,     0,   145,   146,   280,     0,   281,   282,   283,   284,
     285,   286,     0,     0,     0,     0,     0,     0,   287,   147,
     148,   149,     0,     0,     0,   288,   373,   289,     0,     0,
     150,   151,     0,     0,     0,     0,   141,   198,     0,     0,
       0,     0,   152,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,   277,     0,   278,     0,   153,   154,
     155,   279,    72,    73,    74,    75,    76,    77,    78,     0,
     144,    79,    80,     0,   145,   146,   280,     0,   281,   282,
     283,   284,   285,   286,     0,     0,     0,     0,     0,     0,
     287,   147,   148,   149,     0,     0,     0,   288,   409,   289,
       0,     0,   150,   151,     0,     0,     0,     0,   141,   198,
       0,     0,     0,     0,   152,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,   277,     0,   278,     0,
     153,   154,   155,   279,    72,    73,    74,    75,    76,    77,
      78,     0,   144,    79,    80,     0,   145,   146,   280,     0,
     281,   282,   283,   284,   285,   286,     0,     0,     0,     0,
       0,     0,   287,   147,   148,   149,     0,     0,     0,   288,
     412,   289,     0,     0,   150,   151,     0,     0,     0,     0,
     141,   198,     0,     0,     0,     0,   152,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,   277,     0,
     278,     0,   153,   154,   155,   279,    72,    73,    74,    75,
      76,    77,    78,     0,   144,    79,    80,     0,   145,   146,
     280,     0,   281,   282,   283,   284,   285,   286,     0,     0,
       0,     0,     0,     0,   287,   147,   148,   149,     0,     0,
       0,   288,   421,   289,     0,     0,   150,   151,     0,     0,
       0,     0,   141,   198,     0,     0,     0,     0,   152,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
     277,     0,   278,     0,   153,   154,   155,   279,    72,    73,
      74,    75,    76,    77,    78,     0,   144,    79,    80,     0,
     145,   146,   280,     0,   281,   282,   283,   284,   285,   286,
       0,     0,     0,     0,     0,     0,   287,   147,   148,   149,
       0,   141,   142,   288,     0,   289,     0,     0,   150,   151,
       0,     0,     0,     0,   143,     0,     0,     0,     0,   277,
     152,   278,     0,     0,     0,     0,   279,     0,     0,     0,
       0,     0,     0,     0,     0,   144,   153,   154,   155,   145,
     146,   280,     0,   281,   282,   283,   284,   285,   286,     0,
       0,     0,     0,     0,     0,   287,   147,   148,   149,     0,
       0,     0,   288,     0,   289,     0,     0,   150,   151,     0,
       0,     0,   141,   198,     0,   141,   142,     0,     0,   152,
       0,     0,     0,     0,     0,   143,     0,     0,   143,     0,
       0,     0,     0,     0,     0,   153,   154,   155,    72,    73,
      74,    75,    76,    77,    78,     0,   144,    79,    80,   144,
     145,   146,     0,   145,   146,     0,     0,     0,     0,     0,
     141,   142,     0,     0,     0,     0,     0,   147,   148,   149,
     147,   148,   149,   143,     0,     0,   245,     0,   150,   151,
       0,   150,   151,     0,     0,     0,     0,     0,     0,     0,
     152,     0,     0,   152,   144,     0,     0,     0,   145,   146,
       0,     0,     0,     0,     0,     0,   153,   154,   155,   153,
     154,   155,   141,   142,     0,   147,   148,   149,     0,     0,
       0,     0,     0,   325,     0,   143,   150,   151,     0,     0,
       0,     0,   141,   142,     0,     0,     0,     0,   152,     0,
       0,     0,     0,     0,     0,   143,   144,   141,   142,     0,
     145,   146,     0,     0,   153,   154,   155,     0,     0,     0,
     143,     0,     0,     0,     0,     0,   144,   147,   148,   149,
     145,   146,     0,     0,     0,   375,     0,     0,   150,   151,
       0,   144,     0,   141,   383,   145,   146,   147,   148,   149,
     152,     0,     0,     0,     0,   407,   143,     0,   150,   151,
       0,     0,   147,   148,   237,     0,   153,   154,   155,     0,
     152,     0,     0,   150,   151,     0,     0,   144,     0,     0,
       0,   145,   146,     0,     0,   152,   153,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   147,   148,
     149,   153,   154,   155,    13,    14,    15,    16,    17,   150,
     151,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,   152,     0,     0,    22,    23,    24,    13,    14,    15,
      16,    17,     0,     0,    25,    21,     0,   153,   154,   155,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
       0,     0,     0,     0,    26,     0,     0,    25,   117,     0,
       0,     0,     0,   -56,   -56,     0,   -56,     0,     0,     0,
      13,    14,    15,    16,    17,     0,     0,    26,    21,     0,
       0,     0,     0,     0,     0,     0,   -54,   -54,     0,   -54,
      22,    23,    24,    13,    14,    15,    16,    17,    18,     0,
      25,    21,     0,     0,    13,    14,    15,    16,    17,     0,
      19,     0,    21,    22,    23,    24,     0,     0,     0,     0,
      26,     0,     0,    25,    22,    23,    24,     0,     0,   -56,
     -56,     0,   -56,     0,    25,     0,     0,    13,    14,    15,
      16,    17,     0,    26,    20,    21,     0,     0,    13,    14,
      15,    16,    17,     0,    26,    70,    21,    22,    23,    24,
       0,     0,     0,     0,     0,     0,     0,    25,    22,    23,
      24,    71,     0,     0,     0,   100,     0,     0,    25,     0,
      72,    73,    74,    75,    76,    77,    78,    26,   132,    79,
      80,   101,     0,     0,     0,     0,     0,     0,    26,     0,
      72,    73,    74,    75,    76,    77,    78,     0,     0,    79,
      80,     0,     0,    72,    73,    74,    75,    76,    77,    78,
       0,     0,    79,    80,   214,   215,   216,   217,   218,     0,
     219,   220,   221,   222,   223,   224,     0,     0,     0,     0,
       0,     0,   202,     0,     0,   225,   226,   227,   228,   229,
     203,   204,   205,   206,   207,   208,   209,   210
};

static const yytype_int16 yycheck[] =
{
       6,   201,   117,   175,    55,    86,   160,   295,   211,   283,
     164,   288,     4,   131,   302,   291,    67,   279,   280,   296,
     282,   139,     4,    69,   286,   148,     4,   128,    62,     4,
      43,    82,     4,     4,   149,   312,   137,   138,     4,    67,
      86,     4,   316,    74,   318,     4,   161,   162,     4,    40,
     303,   327,    60,    54,    62,   331,     4,   108,    62,    93,
     175,   337,   339,     4,   182,    96,    74,    15,    96,   192,
      74,    22,   173,   119,    25,    60,   122,   231,    91,    92,
     356,   162,    67,   357,   346,   359,   201,    62,    66,    71,
     124,   344,    67,    70,    66,    66,    62,   212,   149,    62,
      61,    93,     0,    62,    62,   308,    62,    68,    17,    67,
     264,   388,     4,    66,   391,    68,   197,   317,   406,    66,
      67,   236,   237,   100,     4,   401,     3,     4,   404,   135,
     245,   249,    64,   110,    66,     4,   113,    66,    67,    16,
      61,    62,   419,     4,   420,    64,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    51,    52,    11,    12,    13,
      37,    64,   213,   278,    41,    42,    26,    27,    28,    65,
      97,    98,   287,    51,    52,   375,    36,    28,    29,    30,
     261,    58,    59,    60,   130,   131,   237,    18,    64,   270,
      67,    11,    69,    70,    12,   395,    56,    13,     4,   314,
       4,     4,   317,     4,    81,   256,   378,   407,     6,     7,
       8,     9,    10,    66,     4,   415,    14,   332,     4,    65,
      97,    98,    99,    60,     4,    65,    67,    65,    26,    27,
      28,     3,     4,    68,    63,    24,     4,     4,    36,    61,
      66,    62,    67,   358,    16,     4,    95,   362,    61,    68,
      64,   257,    67,     4,     4,    66,    68,    74,    56,    67,
     375,    68,    61,   378,   379,    37,   317,    65,    60,    41,
      42,    66,    66,    96,    65,    68,     3,     4,    60,    67,
     395,    64,    60,   398,    68,     4,    58,    59,    60,    16,
      66,     4,   407,    64,    21,    64,    23,    69,    70,    46,
     415,    28,    29,    30,    31,    32,    33,    34,    35,    81,
      37,    38,    39,    66,    41,    42,    43,    66,    45,    46,
      47,    48,    49,    50,     7,    97,    98,    99,    66,    66,
      57,    58,    59,    60,    44,    66,    61,    64,    65,    66,
      66,    55,    69,    70,    96,    28,    29,    30,    31,    32,
      33,    60,    64,    64,    81,    69,    70,    71,    72,    73,
      25,    75,    76,    77,    78,    79,    80,    22,     3,     4,
      97,    98,    99,    66,    66,    96,    90,    91,    92,    93,
      94,    16,    68,    61,   390,    66,    21,    64,    23,     8,
      31,    33,    32,    28,    29,    30,    31,    32,    33,    34,
      35,    88,    37,    38,    39,   411,    41,    42,    43,    66,
      45,    46,    47,    48,    49,    50,    82,   123,   179,   249,
     332,   269,    57,    58,    59,    60,   236,   147,   256,    64,
      65,    66,   371,   370,    69,    70,   364,   273,    -1,    -1,
       3,     4,   367,    -1,    -1,    -1,    81,    -1,    -1,    -1,
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
      -1,     3,     4,    64,    -1,    66,    -1,    -1,    69,    70,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,
      81,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    97,    98,    99,    41,
      42,    43,    -1,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    -1,
      -1,    -1,    64,    -1,    66,    -1,    -1,    69,    70,    -1,
      -1,    -1,     3,     4,    -1,     3,     4,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    98,    99,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    37,
      41,    42,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      58,    59,    60,    16,    -1,    -1,    64,    -1,    69,    70,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    81,    37,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,    97,
      98,    99,     3,     4,    -1,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    16,    69,    70,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    37,     3,     4,    -1,
      41,    42,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    37,    58,    59,    60,
      41,    42,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,
      -1,    37,    -1,     3,     4,    41,    42,    58,    59,    60,
      81,    -1,    -1,    -1,    -1,    66,    16,    -1,    69,    70,
      -1,    -1,    58,    59,    60,    -1,    97,    98,    99,    -1,
      81,    -1,    -1,    69,    70,    -1,    -1,    37,    -1,    -1,
      -1,    41,    42,    -1,    -1,    81,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    97,    98,    99,     6,     7,     8,     9,    10,    69,
      70,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    26,    27,    28,     6,     7,     8,
       9,    10,    -1,    -1,    36,    14,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    36,    60,    -1,
      -1,    -1,    -1,    65,    66,    -1,    68,    -1,    -1,    -1,
       6,     7,     8,     9,    10,    -1,    -1,    56,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    68,
      26,    27,    28,     6,     7,     8,     9,    10,    11,    -1,
      36,    14,    -1,    -1,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    26,    27,    28,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    36,    26,    27,    28,    -1,    -1,    65,
      66,    -1,    68,    -1,    36,    -1,    -1,     6,     7,     8,
       9,    10,    -1,    56,    13,    14,    -1,    -1,     6,     7,
       8,     9,    10,    -1,    56,     4,    14,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    26,    27,
      28,    20,    -1,    -1,    -1,     4,    -1,    -1,    36,    -1,
      29,    30,    31,    32,    33,    34,    35,    56,     4,    38,
      39,    20,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    38,
      39,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    38,    39,    69,    70,    71,    72,    73,    -1,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    90,    91,    92,    93,    94,
      82,    83,    84,    85,    86,    87,    88,    89
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
       4,    20,    29,    30,    31,    32,    33,    34,    35,    38,
      39,   123,   126,   184,   185,   186,     4,   124,   127,   128,
     129,     4,     4,     4,    66,     4,   118,     4,   119,   121,
       4,    20,   130,   131,   137,   184,    65,   122,    60,   144,
       4,    65,   123,     4,    62,   139,    67,    60,   122,   163,
      65,   124,    66,    68,   117,   117,   118,    68,   144,     4,
      15,     4,     4,   145,   184,    24,   138,   144,   144,    63,
       4,     3,     4,    16,    37,    41,    42,    58,    59,    60,
      69,    70,    81,    97,    98,    99,   148,   149,   150,   151,
     155,   159,   160,   161,   162,   164,   122,   122,   129,   118,
       4,   138,   136,   144,   136,    74,   132,   133,   136,   139,
     140,    61,     4,    67,   146,   147,   101,   102,    66,   138,
     138,   139,    67,    67,   163,   165,   165,   160,     4,   148,
     184,    68,    74,    82,    83,    84,    85,    86,    87,    88,
      89,   152,    95,    55,    69,    70,    71,    72,    73,    75,
      76,    77,    78,    79,    80,    90,    91,    92,    93,    94,
     153,   154,   151,    67,   148,   157,   167,    60,   148,   163,
     166,   151,    61,    64,   138,    64,   141,   142,   148,     4,
      66,   134,   135,   140,   139,    67,    68,    68,    66,    66,
     160,     4,   163,    61,    61,   164,   149,   148,   184,   151,
       4,    97,    98,   156,   158,   157,   148,    21,    23,    28,
      43,    45,    46,    47,    48,    49,    50,    57,    64,    66,
     148,   168,   169,   170,   171,   184,    64,    66,   141,   143,
     133,    66,    68,    67,   145,   101,   163,   151,    96,   153,
     163,   158,    64,   148,    60,   162,   162,    60,   162,   171,
       4,    66,     4,    66,   162,    66,   148,   168,    65,   169,
     134,   168,    68,    65,   134,   147,   149,   168,    66,    64,
     171,   164,   180,   181,   184,   171,    46,    66,    66,    64,
      66,    65,    66,    65,   143,    65,   168,    44,    66,    61,
     147,   162,    51,    52,   176,   177,   178,   179,    22,    25,
     172,   173,   175,    65,   171,    66,   148,   171,    74,    96,
     182,   183,    66,     4,   148,    96,    65,   177,    64,   178,
      60,    64,   175,   172,   164,    66,   141,   148,    66,    96,
      96,   168,   101,   174,   168,   164,    68,    66,   148,    65,
       4,    93,    65,   134,   164,    66,    61,   101,   164,    64,
     168,    65
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
#line 2071 "parser.tab.c"
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
#line 455 "parser.y"


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
