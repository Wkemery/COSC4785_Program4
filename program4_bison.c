/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 8 "program4.y" /* yacc.c:339  */



#include <iostream>
#include <FlexLexer.h>
#include "Node.h"
#include "Lexeme.h"

using namespace std;

extern vector<Node*> forest;
extern yyFlexLexer scanner;

#define yylex() scanner.yylex()

// need the function prototype for the parser.

void yyerror(const char *);


#line 87 "program4_bison.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "program4_bison.h".  */
#ifndef YY_YY_PROGRAM4_BISON_H_INCLUDED
# define YY_YY_PROGRAM4_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CLASS = 258,
    THIS = 259,
    IF = 260,
    ELSE = 261,
    WHILE = 262,
    RETURN = 263,
    PRINT = 264,
    READ = 265,
    VOID = 266,
    NEW = 267,
    NULLKEYWORD = 268,
    INT = 269,
    ASSIGNOP = 270,
    DOTOP = 271,
    COMMA = 272,
    LPAREN = 273,
    RPAREN = 274,
    LBRACK = 275,
    RBRACK = 276,
    LBRACE = 277,
    RBRACE = 278,
    PLUS = 279,
    MINUS = 280,
    NOT = 281,
    DOUBEQ = 282,
    NOTEQ = 283,
    LESSEQ = 284,
    GREATEQ = 285,
    LESS = 286,
    GREAT = 287,
    TIMES = 288,
    DIVIDE = 289,
    MOD = 290,
    DOUBAND = 291,
    DOUBBAR = 292,
    IDENTIFIER = 293,
    SEMICO = 294,
    NUM = 295,
    IFEL = 296,
    NAME = 297,
    RE = 298,
    BIN = 299,
    PRO = 300,
    NEG = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "program4.y" /* yacc.c:355  */

  Node* ttype;
  Lexeme* token;


#line 180 "program4_bison.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROGRAM4_BISON_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 197 "program4_bison.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   605

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  223

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    95,    95,    96,   100,   108,   114,   118,   122,   126,
     130,   134,   138,   145,   149,   155,   160,   165,   175,   180,
     185,   195,   200,   205,   215,   219,   223,   227,   231,   235,
     239,   243,   246,   249,   256,   270,   274,   278,   282,   293,
     310,   315,   326,   336,   340,   348,   353,   357,   361,   368,
     377,   381,   385,   390,   397,   398,   408,   413,   417,   424,
     439,   443,   447,   451,   458,   461,   469,   472,   481,   484,
     492,   495,   503,   507,   515,   516,   518,   522,   530,   545,
     549,   553,   557,   565,   573,   577,   581,   588,   596,   600,
     604,   611,   618,   622,   626,   630,   634,   638,   642,   646,
     650,   659,   663,   667,   675,   701,   705,   707,   708,   709,
     713,   714,   715,   716,   717,   718,   721,   722,   723,   724,
     726,   727,   728,   731,   735,   739,   743,   749,   750,   751,
     765
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "THIS", "IF", "ELSE", "WHILE",
  "RETURN", "PRINT", "READ", "VOID", "NEW", "NULLKEYWORD", "INT",
  "ASSIGNOP", "DOTOP", "COMMA", "LPAREN", "RPAREN", "LBRACK", "RBRACK",
  "LBRACE", "RBRACE", "PLUS", "MINUS", "NOT", "DOUBEQ", "NOTEQ", "LESSEQ",
  "GREATEQ", "LESS", "GREAT", "TIMES", "DIVIDE", "MOD", "DOUBAND",
  "DOUBBAR", "IDENTIFIER", "SEMICO", "NUM", "IFEL", "NAME", "RE", "BIN",
  "PRO", "NEG", "$accept", "input", "classdec", "classbody", "vardecr",
  "constructordecr", "methoddecr", "statement", "block", "statementr",
  "conditionalstatement", "constructordec", "methoddec", "paramlist",
  "param", "vardec", "expression", "name", "newexpression",
  "brackexpression", "arglist", "unaryop", "relationop", "productop",
  "sumop", "type", "multibracks", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -118

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-118)))

#define YYTABLE_NINF -125

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     191,  -118,   239,  -118,   -26,  -118,    -4,   521,  -118,    27,
      57,  -118,   241,     5,    37,    53,  -118,  -118,  -118,    20,
      55,    61,    74,    84,    74,  -118,  -118,    98,   127,  -118,
     287,  -118,   381,  -118,    64,  -118,  -118,    57,  -118,    65,
       8,   125,  -118,  -118,   114,     9,    94,   123,   110,  -118,
    -118,   386,  -118,  -118,   136,  -118,  -118,   161,  -118,   157,
     166,  -118,  -118,  -118,   329,  -118,    13,     1,  -118,  -118,
     157,   185,  -118,   157,   189,  -118,   194,   195,   107,   205,
    -118,    12,  -118,   340,  -118,  -118,   352,  -118,   285,    43,
    -118,  -118,  -118,  -118,   157,  -118,   202,   177,   177,   189,
     215,    52,  -118,   177,  -118,  -118,  -118,   207,  -118,  -118,
     566,   137,  -118,   196,   177,   148,   189,  -118,   376,   189,
    -118,  -118,   206,    45,   177,   177,     2,  -118,  -118,   401,
     552,    69,  -118,   221,   253,   420,   177,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,   225,   244,   254,   273,   189,  -118,   533,   228,   189,
     439,  -118,   189,   292,  -118,  -118,   233,   457,    88,    88,
      88,  -118,  -118,   148,   240,    74,   158,   240,    74,  -118,
    -118,   189,   512,   189,  -118,   189,   274,   209,   115,   177,
     214,  -118,  -118,  -118,  -118,   236,  -118,  -118,  -118,   270,
    -118,   476,   148,    74,   189,  -118,   192,    74,  -118,  -118,
    -118,  -118,  -118,  -118,    88,  -118,  -118,   494,  -118,  -118,
    -118,  -118,  -118
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     1,     0,     3,     0,     0,     5,     0,
     123,     6,   124,     0,     0,     0,    18,    21,    15,     0,
       0,     0,   125,     0,   126,    17,     7,     0,     0,    16,
      20,    11,     0,    19,     0,    23,    13,   124,    22,     0,
       0,     0,   129,   127,     0,     0,     0,    54,     0,    20,
       8,     0,    14,    10,     0,    59,    58,     0,    57,     0,
       0,   130,   128,    49,     0,    47,     0,     0,    56,     9,
       0,     0,    53,     0,    39,    79,     0,     0,     0,     0,
      35,    80,    30,     0,    40,    32,     0,    31,     0,     0,
      48,    46,    55,    51,     0,    52,     0,     0,     0,     0,
       0,     0,    61,     0,   107,   108,   109,    80,    29,    60,
       0,    75,    74,     0,     0,     0,    17,    36,     0,    42,
      38,    41,     0,     0,     0,     0,     0,    50,    83,     0,
       0,     0,   100,    96,    92,     0,     0,   121,   120,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   122,
      28,     0,     0,     0,     0,    65,    64,   106,     0,   129,
       0,    37,    34,     0,    82,    81,     0,     0,     0,     0,
       0,    63,    62,     0,    97,    99,     0,    93,    94,    73,
      72,    67,    66,    69,    68,    71,    70,     0,     0,     0,
       0,    86,    85,    33,    24,     0,    87,    84,    44,    43,
      27,     0,     0,    98,    90,    89,     0,    95,    77,    78,
      76,   105,    26,    25,     0,   103,   101,     0,    91,    88,
      45,   104,   102
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,  -118,  -118,  -118,   217,   276,   129,   -84,   -37,   212,
    -118,    42,    86,   247,  -118,    -9,   -73,   -63,  -118,   162,
    -117,  -118,  -118,  -118,  -118,     4,   -10
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     8,    13,    14,    15,    84,    85,    86,
      87,    16,    17,    46,    47,    18,   157,   111,   112,   174,
     158,   113,   151,   152,   153,    34,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    88,   121,    56,    29,   110,    25,   166,    65,    56,
      63,    19,     6,  -124,    90,    10,     9,    19,     7,    10,
      88,    39,    72,    88,   129,   130,    57,    48,    26,    91,
     135,    64,   115,    93,   121,    64,    95,   188,    30,    37,
     156,    58,   160,    12,    39,    48,   164,    58,     9,   163,
    -124,    10,   167,   132,    35,    88,    33,   127,    40,   206,
      31,    48,    42,   160,     9,    20,   133,    10,    89,    33,
     171,    48,   211,    41,    29,    12,    36,    21,   182,   184,
     186,   126,    43,   165,   198,   199,   200,    89,   172,    99,
     134,    37,    75,    76,    44,    77,    78,    79,    10,    49,
     201,    38,    54,    45,    55,    88,    88,    88,    99,     9,
      64,    75,    10,    66,    38,    61,   209,   100,    38,   101,
     102,    50,    37,   175,   178,   103,   107,    82,    35,   217,
     220,   104,   105,   106,   210,    62,    12,    38,     9,    10,
      67,    10,    28,    32,    59,   107,   108,   109,    68,   159,
      52,    88,    75,   123,    57,   154,    51,   125,   100,   204,
     101,   102,    75,    37,   203,    37,   103,   207,   100,    43,
     101,   102,   104,   105,   106,    10,   103,   205,    99,    64,
      70,    75,   104,   105,   106,    73,   107,   100,   109,   101,
     102,    -2,     1,   218,    -2,   103,   107,   155,   109,    37,
      75,   104,   105,   106,    94,    96,   100,   162,   101,   102,
      75,   219,    97,    98,   103,   107,   100,   109,   101,   102,
     104,   105,   106,   114,   103,    96,   181,   136,   208,    75,
     104,   105,   106,   131,   107,   100,   109,   101,   102,     3,
     128,   173,     4,   103,   107,   183,   109,   190,    75,   104,
     105,   106,   195,   212,   100,   185,   101,   102,    75,    23,
     202,    21,   103,   107,   100,   109,   101,   102,   104,   105,
     106,   176,   103,   173,   187,   213,   214,    75,   104,   105,
     106,    83,   107,   100,   109,   101,   102,   -12,    60,    27,
     -12,   103,   107,   193,   109,   118,   177,   104,   105,   106,
     122,   123,     0,   124,    71,   125,     0,   145,   146,   147,
     148,   107,     0,   109,    92,     0,   137,   138,     0,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      74,   194,     0,    75,    76,     0,    77,    78,    79,     0,
       0,   116,     0,    10,    75,    76,     0,    77,    78,    79,
       0,    64,    80,   119,    10,     0,    75,    76,     0,    77,
      78,    79,    64,   117,     0,     0,     0,    81,    82,     0,
       0,     0,     0,     0,    64,   120,     0,   119,    81,    82,
      75,    76,    35,    77,    78,    79,     0,    35,     0,     0,
     107,    82,     9,     0,     0,    10,     0,     9,    64,   161,
      10,     0,   168,     0,    53,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   107,    82,     0,     0,     0,    37,
     169,   179,     0,     0,    37,   137,   138,     0,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   180,
     191,     0,     0,     0,   137,   138,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   196,     0,
     192,     0,     0,   137,   138,     0,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   215,   197,     0,
       0,   137,   138,     0,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   221,     0,   216,     0,     0,
     137,   138,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,     0,   222,     0,     0,   137,   138,
       0,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,     9,     0,     0,    10,   137,   138,     0,     0,
       0,     0,     0,     0,    11,   145,   146,   147,   148,   149,
     189,     0,     0,     0,     0,     0,     0,   137,   138,    12,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   170,     0,     0,     0,     0,   137,   138,     0,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     137,   138,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,     0,   150
};

static const yytype_int16 yycheck[] =
{
      10,    64,    86,     1,    13,    78,     1,   124,    45,     1,
       1,     7,    38,     1,     1,    14,    11,    13,    22,    14,
      83,     1,    59,    86,    97,    98,    18,    23,    23,    66,
     103,    22,    20,    70,   118,    22,    73,   154,     1,    38,
     113,    39,   115,    38,     1,    41,     1,    39,    11,   122,
      38,    14,   125,     1,     1,   118,    14,    94,    38,   176,
      23,    57,     1,   136,    11,    38,    14,    14,    64,    27,
       1,    67,   189,    18,    83,    38,    23,    20,   151,   152,
     153,    38,    21,    38,   168,   169,   170,    83,    19,     1,
      38,    38,     4,     5,    20,     7,     8,     9,    14,     1,
     173,    15,    38,    19,    39,   168,   169,   170,     1,    11,
      22,     4,    14,    19,    28,     1,     1,    10,    32,    12,
      13,    23,    38,   133,   134,    18,    38,    39,     1,   202,
     214,    24,    25,    26,    19,    21,    38,    51,    11,    14,
      17,    14,    13,    14,    19,    38,    39,    40,    38,     1,
      23,   214,     4,    16,    18,    18,    27,    20,    10,     1,
      12,    13,     4,    38,   174,    38,    18,   177,    10,    21,
      12,    13,    24,    25,    26,    14,    18,    19,     1,    22,
      19,     4,    24,    25,    26,    19,    38,    10,    40,    12,
      13,     0,     1,     1,     3,    18,    38,     1,    40,    38,
       4,    24,    25,    26,    19,    16,    10,     1,    12,    13,
       4,    19,    18,    18,    18,    38,    10,    40,    12,    13,
      24,    25,    26,    18,    18,    16,     1,    20,    19,     4,
      24,    25,    26,    18,    38,    10,    40,    12,    13,     0,
      38,    20,     3,    18,    38,     1,    40,    19,     4,    24,
      25,    26,    19,    39,    10,     1,    12,    13,     4,    18,
      20,    20,    18,    38,    10,    40,    12,    13,    24,    25,
      26,    18,    18,    20,     1,    39,     6,     4,    24,    25,
      26,    64,    38,    10,    40,    12,    13,     0,    41,    13,
       3,    18,    38,     1,    40,    83,   134,    24,    25,    26,
      15,    16,    -1,    18,    57,    20,    -1,    33,    34,    35,
      36,    38,    -1,    40,    67,    -1,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
       1,    39,    -1,     4,     5,    -1,     7,     8,     9,    -1,
      -1,     1,    -1,    14,     4,     5,    -1,     7,     8,     9,
      -1,    22,    23,     1,    14,    -1,     4,     5,    -1,     7,
       8,     9,    22,    23,    -1,    -1,    -1,    38,    39,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,     1,    38,    39,
       4,     5,     1,     7,     8,     9,    -1,     1,    -1,    -1,
      38,    39,    11,    -1,    -1,    14,    -1,    11,    22,    23,
      14,    -1,     1,    -1,    23,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    38,
      19,     1,    -1,    -1,    38,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    19,
       1,    -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,     1,    -1,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,     1,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,     1,    -1,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    21,    -1,    -1,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    11,    -1,    -1,    14,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    33,    34,    35,    36,    37,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    38,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    48,     0,     3,    49,    38,    22,    50,    11,
      14,    23,    38,    51,    52,    53,    58,    59,    62,    72,
      38,    20,    73,    18,    73,     1,    23,    52,    53,    62,
       1,    23,    53,    58,    72,     1,    23,    38,    59,     1,
      38,    18,     1,    21,    20,    19,    60,    61,    72,     1,
      23,    53,    23,    23,    38,    39,     1,    18,    39,    19,
      60,     1,    21,     1,    22,    55,    19,    17,    38,    23,
      19,    60,    55,    19,     1,     4,     5,     7,     8,     9,
      23,    38,    39,    51,    54,    55,    56,    57,    64,    72,
       1,    55,    60,    55,    19,    55,    16,    18,    18,     1,
      10,    12,    13,    18,    24,    25,    26,    38,    39,    40,
      63,    64,    65,    68,    18,    20,     1,    23,    56,     1,
      23,    54,    15,    16,    18,    20,    38,    55,    38,    63,
      63,    18,     1,    14,    38,    63,    20,    24,    25,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      39,    69,    70,    71,    18,     1,    63,    63,    67,     1,
      63,    23,     1,    63,     1,    38,    67,    63,     1,    19,
      19,     1,    19,    20,    66,    73,    18,    66,    73,     1,
      19,     1,    63,     1,    63,     1,    63,     1,    67,    17,
      19,     1,    21,     1,    39,    19,     1,    21,    54,    54,
      54,    63,    20,    73,     1,    19,    67,    73,    19,     1,
      19,    67,    39,    39,     6,     1,    21,    63,     1,    19,
      54,     1,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    48,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    51,    51,    51,    52,    52,
      52,    53,    53,    53,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    55,    55,    55,
      56,    56,    56,    57,    57,    57,    58,    58,    58,    58,
      59,    59,    59,    59,    60,    60,    61,    62,    62,    62,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    66,    67,    67,    68,    68,    68,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      71,    71,    71,    72,    72,    72,    72,    73,    73,    73,
      73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     3,     2,     3,     4,     5,
       4,     3,     3,     3,     4,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     4,     5,     5,     5,     3,     2,
       1,     1,     1,     4,     3,     2,     3,     4,     3,     2,
       1,     2,     2,     5,     5,     7,     5,     4,     5,     4,
       6,     5,     6,     5,     1,     3,     2,     3,     3,     3,
       1,     1,     3,     3,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     4,     4,     4,     1,
       1,     3,     3,     3,     4,     4,     4,     4,     5,     4,
       4,     5,     2,     3,     3,     4,     2,     3,     4,     3,
       2,     3,     4,     3,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     3,     2,
       3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* CLASS  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1257 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 4: /* THIS  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1263 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 5: /* IF  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1269 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 6: /* ELSE  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1275 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 7: /* WHILE  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1281 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 8: /* RETURN  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1287 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 9: /* PRINT  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1293 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 10: /* READ  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1299 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 11: /* VOID  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1305 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 12: /* NEW  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1311 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 13: /* NULLKEYWORD  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1317 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 14: /* INT  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1323 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 15: /* ASSIGNOP  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1329 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 16: /* DOTOP  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1335 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 17: /* COMMA  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1341 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 18: /* LPAREN  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1347 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 19: /* RPAREN  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1353 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 20: /* LBRACK  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1359 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 21: /* RBRACK  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1365 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 22: /* LBRACE  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1371 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 23: /* RBRACE  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1377 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 24: /* PLUS  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1383 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 25: /* MINUS  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1389 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 26: /* NOT  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1395 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 27: /* DOUBEQ  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1401 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 28: /* NOTEQ  */
#line 65 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1407 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 29: /* LESSEQ  */
#line 65 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1413 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 30: /* GREATEQ  */
#line 65 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1419 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 31: /* LESS  */
#line 65 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1425 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 32: /* GREAT  */
#line 65 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1431 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 33: /* TIMES  */
#line 65 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1437 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 34: /* DIVIDE  */
#line 65 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1443 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 35: /* MOD  */
#line 65 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1449 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 36: /* DOUBAND  */
#line 66 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1455 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 37: /* DOUBBAR  */
#line 66 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1461 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 38: /* IDENTIFIER  */
#line 66 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1467 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 39: /* SEMICO  */
#line 66 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1473 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 40: /* NUM  */
#line 66 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1479 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 49: /* classdec  */
#line 70 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1485 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 50: /* classbody  */
#line 71 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1491 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 51: /* vardecr  */
#line 71 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1497 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 52: /* constructordecr  */
#line 72 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1503 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 53: /* methoddecr  */
#line 73 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1509 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 54: /* statement  */
#line 70 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1515 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 55: /* block  */
#line 71 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1521 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 56: /* statementr  */
#line 71 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1527 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 57: /* conditionalstatement  */
#line 70 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1533 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 58: /* constructordec  */
#line 72 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1539 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 59: /* methoddec  */
#line 72 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1545 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 60: /* paramlist  */
#line 72 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1551 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 61: /* param  */
#line 71 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1557 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 63: /* expression  */
#line 68 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1563 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 64: /* name  */
#line 68 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1569 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 65: /* newexpression  */
#line 70 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1575 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 66: /* brackexpression  */
#line 69 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1581 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 67: /* arglist  */
#line 69 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1587 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 68: /* unaryop  */
#line 68 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1593 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 69: /* relationop  */
#line 69 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1599 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 70: /* productop  */
#line 69 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1605 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 71: /* sumop  */
#line 69 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1611 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 72: /* type  */
#line 71 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1617 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 73: /* multibracks  */
#line 68 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1623 "program4_bison.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 96 "program4.y" /* yacc.c:1646  */
    { 
            if(!(yyvsp[0].ttype)->getErr()) forest.push_back((yyvsp[0].ttype));
            else delete (yyvsp[0].ttype);
        }
#line 1890 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 4:
#line 100 "program4.y" /* yacc.c:1646  */
    {
          cerr << ": Unknown Around " << yylval.token->line << ":" 
          << yylval.token->column <<endl << endl; 
          yyclearin;
          yyerrok;
        }
#line 1901 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 5:
#line 108 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new ClassDec((yyvsp[-1].token)->value, (yyvsp[0].ttype));
                delete (yyvsp[-2].token); delete (yyvsp[-1].token);
                }
#line 1910 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 6:
#line 114 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ClassBody(CLASSBODYEMPTY);
                  delete (yyvsp[-1].token); delete (yyvsp[0].token);
                  }
#line 1919 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 7:
#line 118 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ClassBody((yyvsp[-1].ttype), CLASSBODYVAR);
                  delete (yyvsp[-2].token); delete (yyvsp[0].token);
                  }
#line 1928 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 8:
#line 122 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ClassBody((yyvsp[-2].ttype), (yyvsp[-1].ttype), CLASSBODYVARCON);
                  delete (yyvsp[-3].token); delete (yyvsp[0].token);
                  }
#line 1937 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 9:
#line 126 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new ClassBody((yyvsp[-3].ttype), (yyvsp[-2].ttype), (yyvsp[-1].ttype), CLASSBODYVARCONMET);
                  delete (yyvsp[-4].token); delete (yyvsp[0].token);
                  }
#line 1946 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 10:
#line 130 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ClassBody((yyvsp[-2].ttype), (yyvsp[-1].ttype), CLASSBODYCONMET);
                  delete (yyvsp[-3].token); delete (yyvsp[0].token);
                  }
#line 1955 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 11:
#line 134 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ClassBody((yyvsp[-1].ttype), CLASSBODYCON);
                  delete (yyvsp[-2].token); delete (yyvsp[0].token);
            }
#line 1964 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 12:
#line 138 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ErrNode();
                  cerr << "Missing right brace around " << yylval.token->line
                  << ":" << yylval.token->column << endl << endl;
                  yyerrok;
                  delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
            }
#line 1976 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 13:
#line 145 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ClassBody((yyvsp[-1].ttype), CLASSBODYMET);
                  delete (yyvsp[-2].token); delete (yyvsp[0].token);
                  }
#line 1985 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 14:
#line 149 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ClassBody((yyvsp[-2].ttype), (yyvsp[-1].ttype), CLASSBODYVARMET);
                  delete (yyvsp[-3].token); delete (yyvsp[0].token);
            }
#line 1994 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 15:
#line 155 "program4.y" /* yacc.c:1646  */
    { 
              //$$ = $1; 
              (yyval.ttype) = new RNode(RECVARDEC);
              ((RNode*)(yyval.ttype))->add((yyvsp[0].ttype));
}
#line 2004 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 16:
#line 160 "program4.y" /* yacc.c:1646  */
    {
                //$$ = new RecursiveNode($1, $2, RECVARDEC);  
                ((RNode*)(yyvsp[-1].ttype))->add((yyvsp[0].ttype));
                (yyval.ttype) = (yyvsp[-1].ttype);
                }
#line 2014 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 17:
#line 165 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ErrNode();  
                  cerr << ": Unexpected token after variable declaration around " << yylval.token->line
                  << ":" << yylval.token->column << endl << endl;
                  yyclearin;
                  yyerrok;
                  delete (yyvsp[-1].ttype);
                }
#line 2027 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 18:
#line 175 "program4.y" /* yacc.c:1646  */
    { 
                        (yyval.ttype) = new RNode(RECCONDEC);
                        ((RNode*)(yyval.ttype))->add((yyvsp[0].ttype));
/*                         $$ = $1;  */
                        }
#line 2037 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 19:
#line 180 "program4.y" /* yacc.c:1646  */
    {
/*                         $$ = new RecursiveNode($1, $2, RECCONDEC);   */
                        ((RNode*)(yyvsp[-1].ttype))->add((yyvsp[0].ttype));
                        (yyval.ttype) = (yyvsp[-1].ttype);
                        }
#line 2047 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 20:
#line 185 "program4.y" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new ErrNode();  
                        cerr << ": Unexpected token after constructor declaration around " << yylval.token->line
                        << ":" << yylval.token->column << endl << endl;
                        yyclearin;
                        yyerrok;
                        delete (yyvsp[-1].ttype);
                        }
#line 2060 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 21:
#line 195 "program4.y" /* yacc.c:1646  */
    { 
/*   $$ = $1;  */
                  (yyval.ttype) = new RNode(RECMETDEC);
                  ((RNode*)(yyval.ttype))->add((yyvsp[0].ttype));
}
#line 2070 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 22:
#line 200 "program4.y" /* yacc.c:1646  */
    {
/*                   $$ = new RecursiveNode($1, $2, RECMETDEC);   */
                  ((RNode*)(yyvsp[-1].ttype))->add((yyvsp[0].ttype));
                  (yyval.ttype) = (yyvsp[-1].ttype);
                  }
#line 2080 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 23:
#line 205 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ErrNode();  
                  cerr << ": Unexpected token after method declaration around " << yylval.token->line
                  << ":" << yylval.token->column << endl << endl;
                  yyclearin;
                  yyerrok;
                  delete (yyvsp[-1].ttype);
                  }
#line 2093 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 24:
#line 215 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new Statement((yyvsp[-3].ttype), (yyvsp[-1].ttype), STMNTNAMEEXP);
                delete (yyvsp[-2].token); delete (yyvsp[0].token);
                }
#line 2102 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 25:
#line 219 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement((yyvsp[-4].ttype), (yyvsp[-2].ttype), STMNTNAMEARGL);
                  delete (yyvsp[-3].token); delete (yyvsp[-1].token); delete (yyvsp[0].token);
                  }
#line 2111 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 26:
#line 223 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement((yyvsp[-2].ttype), STMNTPRNTARGL);
                  delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token); delete (yyvsp[0].token);
                  }
#line 2120 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 27:
#line 227 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement((yyvsp[-2].ttype), (yyvsp[0].ttype), STMNTWHILE);
                  delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token);
                  }
#line 2129 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 28:
#line 231 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement((yyvsp[-1].ttype), SMTNTRETURN);
                  delete (yyvsp[-2].token); delete (yyvsp[0].token);
                  }
#line 2138 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 29:
#line 235 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement(SMTNTRETURN);
                  delete (yyvsp[-1].token); delete (yyvsp[0].token);
                  }
#line 2147 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 30:
#line 239 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement(STMNTSEMI);
                  delete (yyvsp[0].token);
                  }
#line 2156 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 31:
#line 243 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement((yyvsp[0].ttype), STMNTCOND);
                  }
#line 2164 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 32:
#line 246 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement((yyvsp[0].ttype), STMNTBLOCK);
                  }
#line 2172 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 33:
#line 249 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ErrNode();
                  cerr << "Expected semicolon after expression around " << yylval.token->line
                  << ":" << yylval.token->column << endl << endl;
                  yyerrok;
                  delete (yyvsp[-3].ttype); delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
                }
#line 2184 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 34:
#line 256 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ErrNode();
                  cerr << "Expected semicolon before " << yylval.token->line
                  << ":" << yylval.token->column << endl << endl;
                  yyerrok;
                  delete (yyvsp[-2].ttype); delete (yyvsp[-1].token); //delete $3;
                }
#line 2196 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 35:
#line 270 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new Block(BLOCKEMPTY);
              delete (yyvsp[-1].token); delete (yyvsp[0].token);
              }
#line 2205 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 36:
#line 274 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new Block((yyvsp[-1].ttype), BLOCKVARDEC);
              delete (yyvsp[-2].token); delete (yyvsp[0].token);
              }
#line 2214 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 37:
#line 278 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new Block((yyvsp[-2].ttype), (yyvsp[-1].ttype), BLOCKVARSTMNT);
              delete (yyvsp[-3].token); delete (yyvsp[0].token);
              }
#line 2223 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 38:
#line 282 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new Block((yyvsp[-1].ttype), BLOCKSTMNT);
              delete (yyvsp[-2].token); delete (yyvsp[0].token);
              }
#line 2232 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 39:
#line 293 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new ErrNode();
            cerr << "Expected right bracket at " << (yyvsp[-1].token)->line
            << ":" << (yyvsp[-1].token)->column << endl << endl;
            yyerrok;
            delete (yyvsp[-1].token);
          
        }
#line 2245 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 40:
#line 310 "program4.y" /* yacc.c:1646  */
    { 
/*   $$ = $1;  */
                  (yyval.ttype) = new RNode(RECSTMNT);
                  ((RNode*)(yyval.ttype))->add((yyvsp[0].ttype));
                  }
#line 2255 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 41:
#line 315 "program4.y" /* yacc.c:1646  */
    {
/*                     $$ = new RecursiveNode($1, $2, RECSTMNT); */
                  ((RNode*)(yyvsp[-1].ttype))->add((yyvsp[0].ttype));
                  (yyval.ttype) = (yyvsp[-1].ttype);
                  }
#line 2265 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 42:
#line 326 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ErrNode();
                  cerr << "Incomplete Statement around " << yylval.token->line << ":" 
                  << yylval.token->column << endl << endl;
                  yyerrok;
                  yyclearin;
                  delete (yyvsp[-1].ttype);
                  }
#line 2278 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 43:
#line 336 "program4.y" /* yacc.c:1646  */
    {
                            (yyval.ttype) = new CondStatement((yyvsp[-2].ttype), (yyvsp[0].ttype), CONDSTMNT);
                            delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token);
                            }
#line 2287 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 44:
#line 340 "program4.y" /* yacc.c:1646  */
    {
                            (yyval.ttype) = new ErrNode();
                            cerr << "Expected right parenthesis after"
                            << " expression around " << (yyvsp[-3].token)->line << ":" 
                            << (yyvsp[-3].token)->column << endl << endl;
                            yyerrok;
                            delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-2].ttype); delete (yyvsp[0].ttype);
                            }
#line 2300 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 45:
#line 348 "program4.y" /* yacc.c:1646  */
    {
                            (yyval.ttype) = new CondStatement((yyvsp[-4].ttype), (yyvsp[-2].ttype), (yyvsp[0].ttype), CONDSTMNTELSE);
                            delete (yyvsp[-6].token); delete (yyvsp[-5].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token);
                            }
#line 2309 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 46:
#line 353 "program4.y" /* yacc.c:1646  */
    {
                      (yyval.ttype) = new ConstructorDec((yyvsp[-4].token)->value, (yyvsp[-2].ttype), (yyvsp[0].ttype), CONSTDEC);
                      delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token);
                      }
#line 2318 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 47:
#line 357 "program4.y" /* yacc.c:1646  */
    {
                      (yyval.ttype) = new ConstructorDec((yyvsp[-3].token)->value, (yyvsp[0].ttype), CONSTDECEMPTY);
                      delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].token);
                      }
#line 2327 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 48:
#line 361 "program4.y" /* yacc.c:1646  */
    {
                      (yyval.ttype) = new ErrNode();
                      cerr << "Expected block after " << (yyvsp[-1].token)->line << ":" 
                      << (yyvsp[-1].token)->column << endl << endl;
                      yyerrok;
                      delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-2].ttype); delete (yyvsp[-1].token);
                      }
#line 2339 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 49:
#line 368 "program4.y" /* yacc.c:1646  */
    {
                      (yyval.ttype) = new ErrNode();
                      cerr << "Expected block after " << (yyvsp[-1].token)->line << ":" 
                      << (yyvsp[-1].token)->column << endl << endl;
                      yyerrok;
                      delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].token);
                      }
#line 2351 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 50:
#line 377 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new MethodDec((yyvsp[-5].ttype), (yyvsp[-4].token)->value, (yyvsp[-2].ttype), (yyvsp[0].ttype), METHODDECTYPE);
                delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token);
                }
#line 2360 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 51:
#line 381 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new MethodDec((yyvsp[-4].ttype), (yyvsp[-3].token)->value, (yyvsp[0].ttype), METHODDECTYPEEMPTY);
                delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].token);
                }
#line 2369 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 52:
#line 385 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new MethodDec((yyvsp[-4].token)->value, (yyvsp[-2].ttype), (yyvsp[0].ttype), METHODDECVOID);
                delete (yyvsp[-5].token); delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token);
            
                }
#line 2379 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 53:
#line 390 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new MethodDec((yyvsp[-3].token)->value, (yyvsp[0].ttype), METHODDECVOIDEMPTY);
                delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].token);
                }
#line 2388 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 54:
#line 397 "program4.y" /* yacc.c:1646  */
    { (yyval.ttype) = new ParamList((yyvsp[0].ttype)); }
#line 2394 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 55:
#line 398 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ParamList((yyvsp[-2].ttype), (yyvsp[0].ttype));
                  delete (yyvsp[-1].token);
                  }
#line 2403 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 56:
#line 408 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new Param((yyvsp[-1].ttype), (yyvsp[0].token)->value);
            delete (yyvsp[0].token);
            }
#line 2412 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 57:
#line 413 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new VarDec((yyvsp[-2].ttype), (yyvsp[-1].token)->value);
              delete (yyvsp[-1].token); delete (yyvsp[0].token);
              }
#line 2421 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 58:
#line 417 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new ErrNode();
              cerr << "Expected Semicolon At "<< (yyvsp[-1].token)->line 
              << ":" << (yyvsp[-1].token)->column+(yyvsp[-1].token)->value.length() << endl << endl;
              yyerrok;
              delete (yyvsp[-2].ttype); delete (yyvsp[-1].token);
              }
#line 2433 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 59:
#line 424 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new ErrNode();
              cerr << "Expected Identifier before "<< (yyvsp[0].token)->line 
              << ":" << (yyvsp[0].token)->column << endl << endl;
              yyerrok;
              delete (yyvsp[-2].ttype); delete (yyvsp[0].token);
              }
#line 2445 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 60:
#line 439 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new Expression((yyvsp[0].token)->value, EXPNUM);
                  delete (yyvsp[0].token);
                  }
#line 2454 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 61:
#line 443 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new Expression("null", EXPNULL); 
                  delete (yyvsp[0].token);
                  }
#line 2463 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 62:
#line 447 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new Expression("read", EXPREAD); 
                  delete (yyvsp[-2].token); delete (yyvsp[-1].token); delete (yyvsp[0].token);
                  }
#line 2472 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 63:
#line 451 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ErrNode();
                  cerr << "Expected Right Parenthesis At "<< (yyvsp[-1].token)->line << ":" 
                  << (yyvsp[-1].token)->column + 1  <<endl << endl;
                  yyerrok;
                  delete (yyvsp[-2].token); delete (yyvsp[-1].token);
                  }
#line 2484 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 64:
#line 458 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new Expression((yyvsp[-1].ttype), (yyvsp[0].ttype), EXPUNARY); 
                  }
#line 2492 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 65:
#line 461 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new ErrNode();
                  cerr << "Expected expression at " << yylval.token->line 
                  << ":" << yylval.token->column << endl << endl;
                  delete (yyvsp[-1].ttype);
                  yyclearin;
                  yyerrok;
                  }
#line 2505 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 66:
#line 469 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new Expression((yyvsp[-2].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype), EXPRELATION);  
                  }
#line 2513 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 67:
#line 472 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new ErrNode();
                  cerr << "Expected expression at " << yylval.token->line 
                  << ":" << yylval.token->column << endl << endl;
                  yyclearin;
                  yyerrok;
                  delete (yyvsp[-2].ttype); delete (yyvsp[-1].ttype); 
                  
                  }
#line 2527 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 68:
#line 481 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new Expression((yyvsp[-2].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype), EXPPRODUCT); 
                  }
#line 2535 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 69:
#line 484 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new ErrNode();
                  cerr << "Expected expression at " << yylval.token->line 
                  << ":" << yylval.token->column << endl << endl;
                  yyerrok;
                  yyclearin;
                  delete (yyvsp[-2].ttype); delete (yyvsp[-1].ttype);
                  }
#line 2548 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 70:
#line 492 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Expression((yyvsp[-2].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype), EXPSUMOP); 
                  }
#line 2556 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 71:
#line 495 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new ErrNode();
                  cerr << "Expected expression at " << yylval.token->line 
                  << ":" << yylval.token->column << endl << endl;
                  yyerrok;
                  yyclearin;
                  delete (yyvsp[-2].ttype); delete (yyvsp[-1].ttype);
                  }
#line 2569 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 72:
#line 503 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new Expression((yyvsp[-1].ttype), EXPPAREN);
                  delete (yyvsp[-2].token); delete (yyvsp[0].token);
            }
#line 2578 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 73:
#line 507 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new ErrNode();
                  cerr << "Expected Right Parenthesis at "
                  << yylval.token->line << ":" << yylval.token->column 
                  <<endl << endl;
                  delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
                  yyerrok;
                  }
#line 2591 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 74:
#line 515 "program4.y" /* yacc.c:1646  */
    { (yyval.ttype) = new Expression((yyvsp[0].ttype), EXPNEW); }
#line 2597 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 75:
#line 516 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new Expression((yyvsp[0].ttype), EXPNAME);
                  }
#line 2604 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 76:
#line 518 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Expression((yyvsp[-3].ttype), (yyvsp[-1].ttype), EXPNAMEARG);
                  delete (yyvsp[-2].token); delete (yyvsp[0].token);
                  }
#line 2613 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 77:
#line 522 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ErrNode();
                  cerr << "Expected ArgList before ')' at "
                  << (yyvsp[0].token)->line << ":" << (yyvsp[0].token)->column <<endl << endl;
                  yyclearin;
                  yyerrok;
                  delete (yyvsp[-3].ttype); delete (yyvsp[-2].token); delete (yyvsp[0].token);
                  }
#line 2626 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 78:
#line 530 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ErrNode();
                  cerr << "Expected Right Parenthesis At "
                  << yylval.token->line << ":" << yylval.token->column 
                  <<endl << endl;
                  yyerrok;
                  delete (yyvsp[-3].ttype); delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
                  }
#line 2639 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 79:
#line 545 "program4.y" /* yacc.c:1646  */
    { 
            (yyval.ttype) = new Name("this", NAMETHIS); 
            delete (yyvsp[0].token);
            }
#line 2648 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 80:
#line 549 "program4.y" /* yacc.c:1646  */
    { 
            (yyval.ttype) = new Name((yyvsp[0].token)->value, NAMEID);
            delete (yyvsp[0].token);
            }
#line 2657 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 81:
#line 553 "program4.y" /* yacc.c:1646  */
    { 
            (yyval.ttype) = new Name((yyvsp[-2].ttype), (yyvsp[0].token)->value, NAMEDOTID);
            delete (yyvsp[-1].token); delete (yyvsp[0].token);
            }
#line 2666 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 82:
#line 557 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new ErrNode();
            cerr << "Expected Identifier After '.' at " << (yyvsp[-1].token)->line << ":" 
            << (yyvsp[-1].token)->column + 1<< endl << endl;
            yyclearin;
            yyerrok;
            delete (yyvsp[-2].ttype); delete (yyvsp[-1].token);
            }
#line 2679 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 83:
#line 565 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new ErrNode();
            cerr << "Expected name before '.' at " << (yyvsp[-1].token)->line << ":" 
            << (yyvsp[-1].token)->column << endl << endl;
            yyclearin;
            yyerrok;
            delete (yyvsp[-1].token); delete (yyvsp[0].token);
            }
#line 2692 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 84:
#line 573 "program4.y" /* yacc.c:1646  */
    { 
            (yyval.ttype) = new Name((yyvsp[-3].ttype), (yyvsp[-1].ttype), NAMEEXP);
            delete (yyvsp[-2].token); delete (yyvsp[0].token);
            }
#line 2701 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 85:
#line 577 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new Name((yyvsp[-1].ttype), (yyvsp[-3].token)->value, NAMEIDEXP);
            delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[0].token);
            }
#line 2710 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 86:
#line 581 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new ErrNode();
            cerr << "Expected Right Bracket At " << yylval.token->line << ":" 
            << yylval.token->column << endl << endl;
            yyerrok;
            delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
            }
#line 2722 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 87:
#line 588 "program4.y" /* yacc.c:1646  */
    { 
            (yyval.ttype) = new ErrNode();
            cerr<< "Expected Right Bracket At " << yylval.token->line << ":"
            << yylval.token->column << endl << endl;
            yyerrok;
            delete (yyvsp[-3].ttype); delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
            }
#line 2734 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 88:
#line 596 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new NewExpression((yyvsp[-3].token)->value, (yyvsp[-1].ttype), NEWEXPARG);
                    delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[0].token);
                    }
#line 2743 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 89:
#line 600 "program4.y" /* yacc.c:1646  */
    { 
                    (yyval.ttype) = new NewExpression((yyvsp[-2].token)->value, NEWEXPPAREN);
                    delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].token); delete (yyvsp[0].token);
                    }
#line 2752 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 90:
#line 604 "program4.y" /* yacc.c:1646  */
    { 
                    (yyval.ttype) = new ErrNode();
                    cerr << "Expected Right Parenthesis After '(' at " 
                    << (yyvsp[-1].token)->line << ":" << (yyvsp[-1].token)->column << endl << endl;
                    yyerrok;
                    delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].token);
                    }
#line 2764 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 91:
#line 611 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new ErrNode();
                    cerr << "Expected Right Parenthesis At " << yylval.token->line 
                    << ":" << yylval.token->column << endl << endl;
                    yyerrok;
                    delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
                    }
#line 2776 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 92:
#line 618 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new NewExpression((yyvsp[0].token)->value, NEWEXPEMPTY);
                    delete (yyvsp[-1].token); delete (yyvsp[0].token);
                    }
#line 2785 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 93:
#line 622 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new NewExpression((yyvsp[-1].token)->value, (yyvsp[0].ttype), NEWEXPBRACK);
                    delete (yyvsp[-2].token); delete (yyvsp[-1].token);
              }
#line 2794 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 94:
#line 626 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new NewExpression((yyvsp[-1].token)->value, (yyvsp[0].ttype), NEWEXPMULTI);
                delete (yyvsp[-2].token); delete (yyvsp[-1].token);
              }
#line 2803 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 95:
#line 630 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new NewExpression((yyvsp[-2].token)->value, (yyvsp[-1].ttype), (yyvsp[0].ttype), NEWEXPBRACKMULTI);
                    delete (yyvsp[-3].token); delete (yyvsp[-2].token);
              }
#line 2812 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 96:
#line 634 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new NewExpression(NEWEXPEMPTY);
                delete (yyvsp[-1].token); delete (yyvsp[0].token);
              }
#line 2821 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 97:
#line 638 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) =  new NewExpression((yyvsp[0].ttype),NEWEXPBRACK);
                    delete (yyvsp[-2].token); delete (yyvsp[-1].token);
              }
#line 2830 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 98:
#line 642 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) =  new NewExpression((yyvsp[-1].ttype), (yyvsp[0].ttype), NEWEXPBRACKMULTI);
                delete (yyvsp[-3].token); delete (yyvsp[-2].token);
              }
#line 2839 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 99:
#line 646 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new NewExpression((yyvsp[0].ttype), NEWEXPMULTI);
                delete (yyvsp[-2].token); delete (yyvsp[-1].token);
              }
#line 2848 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 100:
#line 650 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new ErrNode();
                  cerr << "After 'new' at " << (yyvsp[-1].token)->line << ":" 
                  << (yyvsp[-1].token)->column + 3 << endl << endl;
                  yyerrok;
                  delete (yyvsp[-1].token);
}
#line 2860 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 101:
#line 659 "program4.y" /* yacc.c:1646  */
    { 
                        (yyval.ttype) = new BrackExpression((yyvsp[-1].ttype));
                        delete (yyvsp[-2].token); delete (yyvsp[0].token);
                        }
#line 2869 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 102:
#line 663 "program4.y" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new BrackExpression((yyvsp[-3].ttype), (yyvsp[-1].ttype));
                        delete (yyvsp[-2].token); delete (yyvsp[0].token);
                        }
#line 2878 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 103:
#line 667 "program4.y" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new ErrNode();
                        cerr << "Expected right Bracket at " 
                        << yylval.token->line << ":" << yylval.token->column 
                        << endl << endl;
                        yyerrok;
                        delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
                        }
#line 2891 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 104:
#line 675 "program4.y" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new ErrNode();
                        cerr << "Expected right Bracket at " 
                        << yylval.token->line << ":" << yylval.token->column 
                        << endl << endl;
                        yyerrok;
                        delete (yyvsp[-3].ttype); delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
                        }
#line 2904 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 105:
#line 701 "program4.y" /* yacc.c:1646  */
    { 
            (yyval.ttype) = new ArgList((yyvsp[-2].ttype), (yyvsp[0].ttype));
            delete (yyvsp[-1].token);
          }
#line 2913 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 106:
#line 705 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new ArgList((yyvsp[0].ttype));}
#line 2919 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 107:
#line 707 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new UnaryOp("+"); delete (yyvsp[0].token);}
#line 2925 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 108:
#line 708 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new UnaryOp("-"); delete (yyvsp[0].token);}
#line 2931 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 109:
#line 709 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new UnaryOp("!"); delete (yyvsp[0].token);}
#line 2937 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 110:
#line 713 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new RelationOp("=="); delete (yyvsp[0].token);}
#line 2943 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 111:
#line 714 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new RelationOp("!="); delete (yyvsp[0].token);}
#line 2949 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 112:
#line 715 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new RelationOp("<="); delete (yyvsp[0].token);}
#line 2955 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 113:
#line 716 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new RelationOp(">="); delete (yyvsp[0].token);}
#line 2961 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 114:
#line 717 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new RelationOp("<"); delete (yyvsp[0].token);}
#line 2967 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 115:
#line 718 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new RelationOp(">"); delete (yyvsp[0].token);}
#line 2973 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 116:
#line 721 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new ProductOp("*"); delete (yyvsp[0].token);}
#line 2979 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 117:
#line 722 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new ProductOp("/"); delete (yyvsp[0].token);}
#line 2985 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 118:
#line 723 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new ProductOp("%"); delete (yyvsp[0].token);}
#line 2991 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 119:
#line 724 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new ProductOp("&&"); delete (yyvsp[0].token);}
#line 2997 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 120:
#line 726 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new SumOp("-"); delete (yyvsp[0].token);}
#line 3003 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 121:
#line 727 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new SumOp("+"); delete (yyvsp[0].token);}
#line 3009 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 122:
#line 728 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new SumOp("||"); delete (yyvsp[0].token);}
#line 3015 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 123:
#line 731 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new Type("int", TYPE);
            delete (yyvsp[0].token);
            }
#line 3024 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 124:
#line 735 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new Type((yyvsp[0].token)->value, TYPE);
            delete (yyvsp[0].token);
            }
#line 3033 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 125:
#line 739 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new Type("int", (yyvsp[0].ttype), TYPEBRACKS);
            delete (yyvsp[-1].token);
            }
#line 3042 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 126:
#line 743 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new Type((yyvsp[-1].token)->value, (yyvsp[0].ttype), TYPEBRACKS);
            delete (yyvsp[-1].token);
            }
#line 3051 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 127:
#line 749 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new Multibracks(); delete (yyvsp[-1].token); delete (yyvsp[0].token);}
#line 3057 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 128:
#line 750 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new Multibracks((yyvsp[-2].ttype)); delete (yyvsp[0].token);delete (yyvsp[-1].token);}
#line 3063 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 129:
#line 751 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new ErrNode();
                    cerr << "Expected Right Bracket at " << yylval.token->line 
                    << ":" << yylval.token->column <<endl << endl;
                    yyerrok;
                    delete (yyvsp[-1].token);
                    }
#line 3075 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 130:
#line 765 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new ErrNode();
                    cerr << "Expected Right Bracket at " << yylval.token->line 
                    << ":" << yylval.token->column <<endl << endl;
                    yyerrok;
                    delete (yyvsp[-2].ttype); delete (yyvsp[-1].token);
                    }
#line 3087 "program4_bison.c" /* yacc.c:1646  */
    break;


#line 3091 "program4_bison.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 781 "program4.y" /* yacc.c:1906  */

