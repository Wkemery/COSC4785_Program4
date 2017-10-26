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
#define YYLAST   506

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

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
       0,    93,    93,    94,   101,   109,   115,   119,   123,   127,
     131,   135,   141,   142,   147,   148,   153,   154,   159,   163,
     167,   171,   175,   179,   183,   186,   191,   195,   199,   203,
     210,   211,   216,   220,   225,   229,   235,   239,   243,   248,
     255,   256,   262,   267,   318,   322,   326,   330,   337,   340,
     347,   350,   357,   360,   367,   370,   377,   381,   389,   390,
     392,   396,   406,   410,   414,   418,   422,   426,   432,   440,
     444,   448,   455,   459,   463,   467,   471,   475,   479,   486,
     490,   494,   498,   502,   511,   515,   521,   525,   527,   528,
     529,   533,   534,   535,   536,   537,   538,   541,   542,   543,
     544,   546,   547,   548,   551,   555,   559,   563,   569,   570
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

#define YYPACT_NINF -89

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-89)))

#define YYTABLE_NINF -106

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,   -89,     3,   -89,   -31,   -89,    -6,    19,   -89,   -12,
      26,   -89,   134,    33,    29,    52,   -89,   -89,   -89,     1,
      68,    73,    75,    40,    75,   -89,    96,   -89,    84,   296,
     -89,    98,   -89,    26,   -89,    78,    63,   -89,   116,   144,
     140,   156,   146,   -89,   353,   148,   -89,   170,    90,   -89,
     144,   175,   -89,   317,   -89,   144,    51,   -89,   -89,   144,
     187,   -89,   144,   -89,   190,   193,   157,   207,   -89,    11,
     328,   -89,   -89,   339,   -89,   225,   -89,   -89,   -89,   144,
     -89,   280,   280,   210,    13,   -89,   280,   -89,   -89,   -89,
     222,   -89,   -89,   451,   246,   -89,    87,   280,   257,   -89,
     349,   -89,   -89,   280,   208,   280,   280,   -89,   384,   403,
      60,   -89,   137,   154,   185,   280,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     120,   138,   167,   280,   -89,   -89,   365,   230,   202,   -89,
     467,   -89,   244,   223,    76,    76,   -89,   -89,   261,   257,
     248,    75,   290,   248,    75,   -89,   -89,   -89,   165,   -89,
     -89,   -89,   345,   122,   280,   233,   -89,   -89,   -89,   237,
     -89,   -89,   271,   -89,   -89,   128,   420,   257,    75,   -89,
     130,    75,   -89,   -89,   -89,   -89,   -89,    76,   -89,   -89,
     -89,   437,   -89,   -89,   -89,   -89
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     1,     0,     3,     0,     0,     5,     0,
     104,     6,   105,     0,     0,     0,    14,    16,    12,     0,
       0,     0,   106,     0,   107,     7,     0,    13,     0,     0,
      15,     0,    11,   105,    17,     0,     0,   108,     0,     0,
       0,    40,     0,     8,     0,     0,    10,     0,     0,    43,
       0,     0,   109,     0,    35,     0,     0,    42,     9,     0,
       0,    39,     0,    62,     0,     0,     0,     0,    26,    63,
       0,    30,    25,     0,    24,     0,    34,    41,    37,     0,
      38,     0,     0,     0,     0,    45,     0,    88,    89,    90,
      63,    23,    44,     0,    59,    58,     0,     0,     0,    27,
       0,    29,    31,     0,     0,     0,     0,    36,     0,     0,
       0,    83,    79,    72,     0,     0,   102,   101,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   103,    22,
       0,     0,     0,     0,    49,    48,    87,     0,     0,    28,
       0,    64,     0,     0,     0,     0,    47,    46,     0,     0,
      80,    82,     0,    73,    74,    57,    56,    51,    50,    53,
      52,    55,    54,     0,     0,     0,    67,    66,    18,     0,
      68,    65,    32,    21,    77,     0,     0,     0,    81,    70,
       0,    75,    61,    60,    86,    20,    19,     0,    78,    76,
      84,     0,    71,    69,    33,    85
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   -89,   -89,   235,   276,    94,   -71,   -27,   221,
     -89,   139,    -7,    70,   -89,    -8,   -62,   -52,   -89,   183,
     -88,   -89,   -89,   -89,   -89,     2,   -10
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     8,    13,    14,    15,    71,    72,    73,
      74,    16,    17,    40,    41,    18,   136,    94,    95,   150,
     137,    96,   130,   131,   132,    31,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    75,   102,     3,    93,    27,     4,     6,    34,    19,
      -2,     1,    54,    -2,   111,    28,     7,   142,    75,   108,
     109,    75,    34,    61,   114,    42,    20,   112,    76,   102,
       9,    98,    78,    10,   135,    80,   138,    34,    42,    35,
       9,   140,    11,    10,   143,   163,    21,    10,    75,  -105,
      42,   113,   107,   138,    10,    28,    25,    12,    42,    39,
     175,   146,    27,     9,   180,    10,    10,    12,   158,   160,
     162,    12,    28,   172,   173,    32,   184,    10,    33,   147,
      63,    64,    50,    65,    66,    67,    36,   176,   134,    33,
      33,    63,    75,    75,    37,    38,    48,    83,    53,    84,
      85,    33,   151,   154,    10,    86,    51,     9,    29,    59,
      10,    87,    88,    89,    90,   191,   194,    49,    60,    43,
      44,   157,    45,   182,    63,    90,    77,    92,    33,   188,
      83,   192,    84,    85,    12,    75,    47,    52,    86,   159,
     178,   183,    63,   181,    87,    88,    89,   189,    83,   193,
      84,    85,    23,    30,    21,   148,    86,   149,    90,    55,
      92,    63,    87,    88,    89,    30,    53,    83,   161,    84,
      85,    63,   152,    56,   149,    86,    90,    83,    92,    84,
      85,    87,    88,    89,    57,    86,   155,    49,    48,   116,
     117,    87,    88,    89,    62,    90,    91,    92,   124,   125,
     126,   127,   128,   166,   156,    90,    79,    92,    81,   116,
     117,    82,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   167,   170,    97,   116,   117,   110,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     103,   104,   115,   105,   171,   106,   141,   116,   117,   165,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    63,   104,   169,   133,    63,   106,    83,   177,    84,
      85,    83,   185,    84,    85,    86,   186,   187,    37,    86,
     174,    87,    88,    89,    63,    87,    88,    89,    70,    26,
      83,   100,    84,    85,    63,    90,   153,    92,    86,    90,
      83,    92,    84,    85,    87,    88,    89,     9,    86,   179,
      10,     0,     0,     0,    87,    88,    89,     0,    90,    46,
      92,    63,    64,     0,    65,    66,    67,     0,    90,     0,
      92,    10,    63,    64,    33,    65,    66,    67,     0,    53,
      68,     0,    10,    63,    64,     0,    65,    66,    67,     0,
      53,    99,     0,    63,    64,    69,    65,    66,    67,     0,
       0,    53,   101,     0,     9,     0,    69,    10,     0,     0,
       0,    53,   139,     0,     0,     0,    58,    90,   124,   125,
     126,   127,   164,     0,     0,     0,     0,    90,     0,   116,
     117,    33,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   144,     0,     0,     0,     0,   116,   117,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   145,     0,     0,     0,     0,   116,   117,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   190,     0,     0,   116,   117,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   195,     0,
       0,   116,   117,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   116,   117,     0,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,     0,
     129,   116,   117,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,     0,   168
};

static const yytype_int16 yycheck[] =
{
      10,    53,    73,     0,    66,    13,     3,    38,    15,     7,
       0,     1,    39,     3,     1,    13,    22,   105,    70,    81,
      82,    73,    29,    50,    86,    23,    38,    14,    55,   100,
      11,    20,    59,    14,    96,    62,    98,    44,    36,    38,
      11,   103,    23,    14,   106,   133,    20,    14,   100,    38,
      48,    38,    79,   115,    14,    53,    23,    38,    56,    19,
     148,     1,    70,    11,   152,    14,    14,    38,   130,   131,
     132,    38,    70,   144,   145,    23,   164,    14,    38,    19,
       4,     5,    19,     7,     8,     9,    18,   149,     1,    38,
      38,     4,   144,   145,    21,    20,    18,    10,    22,    12,
      13,    38,   112,   113,    14,    18,    36,    11,    14,    19,
      14,    24,    25,    26,    38,   177,   187,    39,    48,    23,
      26,     1,    38,     1,     4,    38,    56,    40,    38,     1,
      10,     1,    12,    13,    38,   187,    38,    21,    18,     1,
     150,    19,     4,   153,    24,    25,    26,    19,    10,    19,
      12,    13,    18,    14,    20,    18,    18,    20,    38,    19,
      40,     4,    24,    25,    26,    26,    22,    10,     1,    12,
      13,     4,    18,    17,    20,    18,    38,    10,    40,    12,
      13,    24,    25,    26,    38,    18,     1,    39,    18,    24,
      25,    24,    25,    26,    19,    38,    39,    40,    33,    34,
      35,    36,    37,     1,    19,    38,    19,    40,    18,    24,
      25,    18,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    21,     1,    18,    24,    25,    18,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      15,    16,    20,    18,    21,    20,    38,    24,    25,    19,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,     4,    16,    19,    18,     4,    20,    10,    20,    12,
      13,    10,    39,    12,    13,    18,    39,     6,    21,    18,
      19,    24,    25,    26,     4,    24,    25,    26,    53,    13,
      10,    70,    12,    13,     4,    38,   113,    40,    18,    38,
      10,    40,    12,    13,    24,    25,    26,    11,    18,    19,
      14,    -1,    -1,    -1,    24,    25,    26,    -1,    38,    23,
      40,     4,     5,    -1,     7,     8,     9,    -1,    38,    -1,
      40,    14,     4,     5,    38,     7,     8,     9,    -1,    22,
      23,    -1,    14,     4,     5,    -1,     7,     8,     9,    -1,
      22,    23,    -1,     4,     5,    38,     7,     8,     9,    -1,
      -1,    22,    23,    -1,    11,    -1,    38,    14,    -1,    -1,
      -1,    22,    23,    -1,    -1,    -1,    23,    38,    33,    34,
      35,    36,    17,    -1,    -1,    -1,    -1,    38,    -1,    24,
      25,    38,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    19,    -1,    -1,    -1,    -1,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    21,    -1,    -1,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      39,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    48,     0,     3,    49,    38,    22,    50,    11,
      14,    23,    38,    51,    52,    53,    58,    59,    62,    72,
      38,    20,    73,    18,    73,    23,    52,    62,    72,    53,
      58,    72,    23,    38,    59,    38,    18,    21,    20,    19,
      60,    61,    72,    23,    53,    38,    23,    38,    18,    39,
      19,    60,    21,    22,    55,    19,    17,    38,    23,    19,
      60,    55,    19,     4,     5,     7,     8,     9,    23,    38,
      51,    54,    55,    56,    57,    64,    55,    60,    55,    19,
      55,    18,    18,    10,    12,    13,    18,    24,    25,    26,
      38,    39,    40,    63,    64,    65,    68,    18,    20,    23,
      56,    23,    54,    15,    16,    18,    20,    55,    63,    63,
      18,     1,    14,    38,    63,    20,    24,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    39,
      69,    70,    71,    18,     1,    63,    63,    67,    63,    23,
      63,    38,    67,    63,    19,    19,     1,    19,    18,    20,
      66,    73,    18,    66,    73,     1,    19,     1,    63,     1,
      63,     1,    63,    67,    17,    19,     1,    21,    39,    19,
       1,    21,    54,    54,    19,    67,    63,    20,    73,    19,
      67,    73,     1,    19,    67,    39,    39,     6,     1,    19,
      21,    63,     1,    19,    54,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    48,    49,    50,    50,    50,    50,
      50,    50,    51,    51,    52,    52,    53,    53,    54,    54,
      54,    54,    54,    54,    54,    54,    55,    55,    55,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    59,    59,
      60,    60,    61,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    67,    67,    68,    68,
      68,    69,    69,    69,    69,    69,    69,    70,    70,    70,
      70,    71,    71,    71,    72,    72,    72,    72,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     3,     2,     3,     4,     5,
       4,     3,     1,     2,     1,     2,     1,     2,     4,     5,
       5,     5,     3,     2,     1,     1,     2,     3,     4,     3,
       1,     2,     5,     7,     5,     4,     6,     5,     6,     5,
       1,     3,     2,     3,     1,     1,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       4,     4,     1,     1,     3,     4,     4,     4,     4,     5,
       4,     5,     2,     3,     3,     4,     5,     4,     5,     2,
       3,     4,     3,     2,     3,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     3
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
#line 61 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1219 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 4: /* THIS  */
#line 61 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1225 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 5: /* IF  */
#line 61 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1231 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 6: /* ELSE  */
#line 61 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1237 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 7: /* WHILE  */
#line 61 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1243 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 8: /* RETURN  */
#line 61 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1249 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 9: /* PRINT  */
#line 61 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1255 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 10: /* READ  */
#line 61 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1261 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 11: /* VOID  */
#line 61 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1267 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 12: /* NEW  */
#line 61 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1273 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 13: /* NULLKEYWORD  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1279 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 14: /* INT  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1285 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 15: /* ASSIGNOP  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1291 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 16: /* DOTOP  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1297 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 17: /* COMMA  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1303 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 18: /* LPAREN  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1309 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 19: /* RPAREN  */
#line 62 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1315 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 20: /* LBRACK  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1321 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 21: /* RBRACK  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1327 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 22: /* LBRACE  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1333 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 23: /* RBRACE  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1339 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 24: /* PLUS  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1345 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 25: /* MINUS  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1351 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 26: /* NOT  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1357 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 27: /* DOUBEQ  */
#line 63 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1363 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 28: /* NOTEQ  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1369 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 29: /* LESSEQ  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1375 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 30: /* GREATEQ  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1381 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 31: /* LESS  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1387 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 32: /* GREAT  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1393 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 33: /* TIMES  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1399 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 34: /* DIVIDE  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1405 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 35: /* MOD  */
#line 64 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1411 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 36: /* DOUBAND  */
#line 65 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1417 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 37: /* DOUBBAR  */
#line 65 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1423 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 38: /* IDENTIFIER  */
#line 65 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1429 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 39: /* SEMICO  */
#line 65 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1435 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 40: /* NUM  */
#line 65 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).token));}
#line 1441 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 49: /* classdec  */
#line 69 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1447 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 50: /* classbody  */
#line 70 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1453 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 51: /* vardecr  */
#line 70 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1459 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 52: /* constructordecr  */
#line 71 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1465 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 53: /* methoddecr  */
#line 72 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1471 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 54: /* statement  */
#line 69 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1477 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 55: /* block  */
#line 70 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1483 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 56: /* statementr  */
#line 70 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1489 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 57: /* conditionalstatement  */
#line 69 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1495 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 58: /* constructordec  */
#line 71 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1501 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 59: /* methoddec  */
#line 71 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1507 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 60: /* paramlist  */
#line 71 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1513 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 61: /* param  */
#line 70 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1519 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 63: /* expression  */
#line 67 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1525 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 64: /* name  */
#line 67 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1531 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 65: /* newexpression  */
#line 69 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1537 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 66: /* brackexpression  */
#line 68 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1543 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 67: /* arglist  */
#line 68 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1549 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 68: /* unaryop  */
#line 67 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1555 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 69: /* relationop  */
#line 68 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1561 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 70: /* productop  */
#line 68 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1567 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 71: /* sumop  */
#line 68 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1573 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 72: /* type  */
#line 70 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1579 "program4_bison.c" /* yacc.c:1257  */
        break;

    case 73: /* multibracks  */
#line 67 "program4.y" /* yacc.c:1257  */
      {delete(((*yyvaluep).ttype));}
#line 1585 "program4_bison.c" /* yacc.c:1257  */
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
#line 94 "program4.y" /* yacc.c:1646  */
    { 
          if((yyvsp[0].ttype)!=0) 
          {
            if(!(yyvsp[0].ttype)->getErr()) forest.push_back((yyvsp[0].ttype));
            else delete (yyvsp[0].ttype);
          }
        }
#line 1855 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 4:
#line 101 "program4.y" /* yacc.c:1646  */
    {
          cerr << "Got no idea Around " << yylval.token->line << ":" 
          << yylval.token->column <<endl << endl; 
          yyclearin;
          yyerrok;
        }
#line 1866 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 5:
#line 109 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new ClassDec((yyvsp[-1].token)->value, (yyvsp[0].ttype));
                delete (yyvsp[-2].token); delete (yyvsp[-1].token);
                }
#line 1875 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 6:
#line 115 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ClassBody(CLASSBODYEMPTY);
                  delete (yyvsp[-1].token); delete (yyvsp[0].token);
                  }
#line 1884 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 7:
#line 119 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ClassBody((yyvsp[-1].ttype), CLASSBODYVAR);
                  delete (yyvsp[-2].token); delete (yyvsp[0].token);
                  }
#line 1893 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 8:
#line 123 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ClassBody((yyvsp[-2].ttype), (yyvsp[-1].ttype), CLASSBODYVARCON);
                  delete (yyvsp[-3].token); delete (yyvsp[0].token);
                  }
#line 1902 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 9:
#line 127 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new ClassBody((yyvsp[-3].ttype), (yyvsp[-2].ttype), (yyvsp[-1].ttype), CLASSBODYVARCONMET);
                  delete (yyvsp[-4].token); delete (yyvsp[0].token);
                  }
#line 1911 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 10:
#line 131 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ClassBody((yyvsp[-2].ttype), (yyvsp[-1].ttype), CLASSBODYCONMET);
                  delete (yyvsp[-3].token); delete (yyvsp[0].token);
                  }
#line 1920 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 11:
#line 135 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ClassBody((yyvsp[-1].ttype), CLASSBODYMET);
                  delete (yyvsp[-2].token); delete (yyvsp[0].token);
                  }
#line 1929 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 12:
#line 141 "program4.y" /* yacc.c:1646  */
    { (yyval.ttype) = (yyvsp[0].ttype); }
#line 1935 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 13:
#line 142 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new RecursiveNode((yyvsp[-1].ttype), (yyvsp[0].ttype), RECVARDEC);  
                }
#line 1943 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 14:
#line 147 "program4.y" /* yacc.c:1646  */
    { (yyval.ttype) = (yyvsp[0].ttype); }
#line 1949 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 15:
#line 148 "program4.y" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new RecursiveNode((yyvsp[-1].ttype), (yyvsp[0].ttype), RECCONDEC);  
                        }
#line 1957 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 16:
#line 153 "program4.y" /* yacc.c:1646  */
    { (yyval.ttype) = (yyvsp[0].ttype); }
#line 1963 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 17:
#line 154 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new RecursiveNode((yyvsp[-1].ttype), (yyvsp[0].ttype), RECMETDEC);  
                  }
#line 1971 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 18:
#line 159 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new Statement((yyvsp[-3].ttype), (yyvsp[-1].ttype), STMNTNAMEEXP);
                delete (yyvsp[-2].token); delete (yyvsp[0].token);
                }
#line 1980 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 19:
#line 163 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement((yyvsp[-4].ttype), (yyvsp[-2].ttype), STMNTNAMEARGL);
                  delete (yyvsp[-3].token); delete (yyvsp[-1].token); delete (yyvsp[0].token);
                  }
#line 1989 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 20:
#line 167 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement((yyvsp[-2].ttype), STMNTPRNTARGL);
                  delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token); delete (yyvsp[0].token);
                  }
#line 1998 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 21:
#line 171 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement((yyvsp[-2].ttype), (yyvsp[0].ttype), STMNTWHILE);
                  delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token);
                  }
#line 2007 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 22:
#line 175 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement((yyvsp[-1].ttype), SMTNTRETURN);
                  delete (yyvsp[-2].token); delete (yyvsp[0].token);
                  }
#line 2016 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 23:
#line 179 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement(SMTNTRETURN);
                  delete (yyvsp[-1].token); delete (yyvsp[0].token);
                  }
#line 2025 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 24:
#line 183 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement((yyvsp[0].ttype), STMNTCOND);
                  }
#line 2033 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 25:
#line 186 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Statement((yyvsp[0].ttype), STMNTBLOCK);
                  }
#line 2041 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 26:
#line 191 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new Block(BLOCKEMPTY);
              delete (yyvsp[-1].token); delete (yyvsp[0].token);
              }
#line 2050 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 27:
#line 195 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new Block((yyvsp[-1].ttype), BLOCKVARDEC);
              delete (yyvsp[-2].token); delete (yyvsp[0].token);
              }
#line 2059 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 28:
#line 199 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new Block((yyvsp[-2].ttype), (yyvsp[-1].ttype), BLOCKVARSTMNT);
              delete (yyvsp[-3].token); delete (yyvsp[0].token);
              }
#line 2068 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 29:
#line 203 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new Block((yyvsp[-1].ttype), BLOCKSTMNT);
              delete (yyvsp[-2].token); delete (yyvsp[0].token);
              }
#line 2077 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 30:
#line 210 "program4.y" /* yacc.c:1646  */
    { (yyval.ttype) = (yyvsp[0].ttype); }
#line 2083 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 31:
#line 211 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new RecursiveNode((yyvsp[-1].ttype), (yyvsp[0].ttype), RECSTMNT);
                  }
#line 2091 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 32:
#line 216 "program4.y" /* yacc.c:1646  */
    {
                            (yyval.ttype) = new CondStatement((yyvsp[-2].ttype), (yyvsp[0].ttype), CONDSTMNT);
                            delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token);
                            }
#line 2100 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 33:
#line 220 "program4.y" /* yacc.c:1646  */
    {
                            (yyval.ttype) = new CondStatement((yyvsp[-4].ttype), (yyvsp[-2].ttype), (yyvsp[0].ttype), CONDSTMNTELSE);
                            delete (yyvsp[-6].token); delete (yyvsp[-5].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token);
                            }
#line 2109 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 34:
#line 225 "program4.y" /* yacc.c:1646  */
    {
                      (yyval.ttype) = new ConstructorDec((yyvsp[-4].token)->value, (yyvsp[-2].ttype), (yyvsp[0].ttype), CONSTDEC);
                      delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token);
                      }
#line 2118 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 35:
#line 229 "program4.y" /* yacc.c:1646  */
    {
                      (yyval.ttype) = new ConstructorDec((yyvsp[-3].token)->value, (yyvsp[0].ttype), CONSTDECEMPTY);
                      delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].token);
                      }
#line 2127 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 36:
#line 235 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new MethodDec((yyvsp[-5].ttype), (yyvsp[-4].token)->value, (yyvsp[-2].ttype), (yyvsp[0].ttype), METHODDECTYPE);
                delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token);
                }
#line 2136 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 37:
#line 239 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new MethodDec((yyvsp[-4].ttype), (yyvsp[-3].token)->value, (yyvsp[0].ttype), METHODDECTYPEEMPTY);
                delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].token);
                }
#line 2145 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 38:
#line 243 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new MethodDec((yyvsp[-4].token)->value, (yyvsp[-2].ttype), (yyvsp[0].ttype), METHODDECVOID);
                delete (yyvsp[-5].token); delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-1].token);
            
                }
#line 2155 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 39:
#line 248 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new MethodDec((yyvsp[-3].token)->value, (yyvsp[0].ttype), METHODDECVOIDEMPTY);
                delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].token);
                }
#line 2164 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 40:
#line 255 "program4.y" /* yacc.c:1646  */
    { (yyval.ttype) = new ParamList((yyvsp[0].ttype)); }
#line 2170 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 41:
#line 256 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new ParamList((yyvsp[-2].ttype), (yyvsp[0].ttype));
                  delete (yyvsp[-1].token);
                  }
#line 2179 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 42:
#line 262 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new Param((yyvsp[-1].ttype), (yyvsp[0].token)->value);
            delete (yyvsp[0].token);
            }
#line 2188 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 43:
#line 267 "program4.y" /* yacc.c:1646  */
    {
              (yyval.ttype) = new VarDec((yyvsp[-2].ttype), (yyvsp[-1].token)->value);
              delete (yyvsp[-1].token); delete (yyvsp[0].token);
              }
#line 2197 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 44:
#line 318 "program4.y" /* yacc.c:1646  */
    { 
                (yyval.ttype) = new Expression((yyvsp[0].token)->value, EXPNUM);
                delete (yyvsp[0].token);
}
#line 2206 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 45:
#line 322 "program4.y" /* yacc.c:1646  */
    { 
                (yyval.ttype) = new Expression("null", EXPNULL); 
                delete (yyvsp[0].token);
            }
#line 2215 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 46:
#line 326 "program4.y" /* yacc.c:1646  */
    { 
                (yyval.ttype) = new Expression("read", EXPREAD); 
                delete (yyvsp[-2].token); delete (yyvsp[-1].token); delete (yyvsp[0].token);
            }
#line 2224 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 47:
#line 330 "program4.y" /* yacc.c:1646  */
    {
                      (yyval.ttype) = new ErrNode();
                      cerr << "Expected Right Parenthesis At "<< (yyvsp[-1].token)->line << ":" 
                      << (yyvsp[-1].token)->column <<endl << endl;
                      yyerrok;
                      delete (yyvsp[-2].token); delete (yyvsp[-1].token);
                     }
#line 2236 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 48:
#line 337 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new Expression((yyvsp[-1].ttype), (yyvsp[0].ttype), EXPUNARY); 
                  }
#line 2244 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 49:
#line 340 "program4.y" /* yacc.c:1646  */
    { 
                      (yyval.ttype) = new ErrNode();
                      cerr << "Expected expression after " << yylval.token->line 
                      << ":" << yylval.token->column << endl << endl;
                      delete (yyvsp[-1].ttype);
                      yyerrok;
            }
#line 2256 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 50:
#line 347 "program4.y" /* yacc.c:1646  */
    { 
                    (yyval.ttype) = new Expression((yyvsp[-2].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype), EXPRELATION);  
                    }
#line 2264 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 51:
#line 350 "program4.y" /* yacc.c:1646  */
    { 
                      (yyval.ttype) = new ErrNode();
                      cerr << "Expected expression after " << yylval.token->line 
                      << ":" << yylval.token->column << endl << endl;
                      delete (yyvsp[-2].ttype); delete (yyvsp[-1].ttype); 
                      yyerrok;
            }
#line 2276 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 52:
#line 357 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new Expression((yyvsp[-2].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype), EXPPRODUCT); 
            }
#line 2284 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 53:
#line 360 "program4.y" /* yacc.c:1646  */
    { 
              (yyval.ttype) = new ErrNode();
              cerr << "Expected expression after " << yylval.token->line 
              << ":" << yylval.token->column << endl << endl;
              delete (yyvsp[-2].ttype); delete (yyvsp[-1].ttype);
              yyerrok;
            }
#line 2296 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 54:
#line 367 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new Expression((yyvsp[-2].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype), EXPSUMOP); 
            }
#line 2304 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 55:
#line 370 "program4.y" /* yacc.c:1646  */
    { 
              (yyval.ttype) = new ErrNode();
              cerr << "Expected expression after " << yylval.token->line 
              << ":" << yylval.token->column << endl << endl;
              delete (yyvsp[-2].ttype); delete (yyvsp[-1].ttype);
              yyerrok;
            }
#line 2316 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 56:
#line 377 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new Expression((yyvsp[-1].ttype), EXPPAREN);
                  delete (yyvsp[-2].token); delete (yyvsp[0].token);
            }
#line 2325 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 57:
#line 381 "program4.y" /* yacc.c:1646  */
    { 
                    (yyval.ttype) = new ErrNode();
                    cerr << "Expected Right Parenthesis At "
                    << yylval.token->line << ":" << yylval.token->column 
                    <<endl << endl;
                    delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
                    yyerrok;
            }
#line 2338 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 58:
#line 389 "program4.y" /* yacc.c:1646  */
    { (yyval.ttype) = new Expression((yyvsp[0].ttype), EXPNEW); }
#line 2344 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 59:
#line 390 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new Expression((yyvsp[0].ttype), EXPNAME);
                  }
#line 2351 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 60:
#line 392 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new Expression((yyvsp[-3].ttype), (yyvsp[-1].ttype), EXPNAMEARG);
                  delete (yyvsp[-2].token); delete (yyvsp[0].token);
            }
#line 2360 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 61:
#line 396 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new ErrNode();
                    cerr << "Expected Right Parenthesis At "
                    << yylval.token->line << ":" << yylval.token->column 
                    <<endl << endl;
                    yyerrok;
                    delete (yyvsp[-3].ttype); delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
            }
#line 2373 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 62:
#line 406 "program4.y" /* yacc.c:1646  */
    { 
            (yyval.ttype) = new Name("this", NAMETHIS); 
            delete (yyvsp[0].token);
}
#line 2382 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 63:
#line 410 "program4.y" /* yacc.c:1646  */
    { 
            (yyval.ttype) = new Name((yyvsp[0].token)->value, NAMEID);
            delete (yyvsp[0].token);
      }
#line 2391 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 64:
#line 414 "program4.y" /* yacc.c:1646  */
    { 
            (yyval.ttype) = new Name((yyvsp[-2].ttype), (yyvsp[0].token)->value, NAMEDOTID);
            delete (yyvsp[-1].token); delete (yyvsp[0].token);
      }
#line 2400 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 65:
#line 418 "program4.y" /* yacc.c:1646  */
    { 
            (yyval.ttype) = new Name((yyvsp[-3].ttype), (yyvsp[-1].ttype), NAMEEXP);
            delete (yyvsp[-2].token); delete (yyvsp[0].token);
      }
#line 2409 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 66:
#line 422 "program4.y" /* yacc.c:1646  */
    {
        (yyval.ttype) = new Name((yyvsp[-1].ttype), (yyvsp[-3].token)->value, NAMEIDEXP);
        delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[0].token);
      }
#line 2418 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 67:
#line 426 "program4.y" /* yacc.c:1646  */
    {
        (yyval.ttype) = new ErrNode();
        cerr << "Expected Right Bracket At " << yylval.token->line << ":" 
        << yylval.token->column << endl << endl;
        delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
      }
#line 2429 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 68:
#line 432 "program4.y" /* yacc.c:1646  */
    { 
            (yyval.ttype) = new ErrNode();
            cerr<< "Expected Right Bracket At " << yylval.token->line << ":"
            << yylval.token->column << endl << endl;
            yyerrok;
            delete (yyvsp[-3].ttype); delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
      }
#line 2441 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 69:
#line 440 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new NewExpression((yyvsp[-3].token)->value, (yyvsp[-1].ttype), NEWEXPARG);
                    delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[0].token);
                    }
#line 2450 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 70:
#line 444 "program4.y" /* yacc.c:1646  */
    { 
                    (yyval.ttype) = new NewExpression((yyvsp[-2].token)->value, NEWEXPPAREN);
                    delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].token); delete (yyvsp[0].token);
                    }
#line 2459 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 71:
#line 448 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new ErrNode();
                    cerr << "Expected Right Parenthesis At " << yylval.token->line 
                    << ":" << yylval.token->column << endl << endl;
                    yyerrok;
                    delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].ttype);
                    }
#line 2471 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 72:
#line 455 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new NewExpression((yyvsp[0].token)->value, NEWEXPEMPTY);
                    delete (yyvsp[-1].token); delete (yyvsp[0].token);
                    }
#line 2480 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 73:
#line 459 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new NewExpression((yyvsp[-1].token)->value, (yyvsp[0].ttype), NEWEXPBRACK);
                    delete (yyvsp[-2].token); delete (yyvsp[-1].token);
              }
#line 2489 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 74:
#line 463 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new NewExpression((yyvsp[-1].token)->value, (yyvsp[0].ttype), NEWEXPMULTI);
                delete (yyvsp[-2].token); delete (yyvsp[-1].token);
              }
#line 2498 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 75:
#line 467 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new NewExpression((yyvsp[-2].token)->value, (yyvsp[-1].ttype), (yyvsp[0].ttype), NEWEXPBRACKMULTI);
                    delete (yyvsp[-3].token); delete (yyvsp[-2].token);
              }
#line 2507 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 76:
#line 471 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new NewExpression((yyvsp[-1].ttype), NEWEXPARG);
                    delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[0].token);
              }
#line 2516 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 77:
#line 475 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new NewExpression(NEWEXPPAREN);
                delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].token); delete (yyvsp[0].token);
              }
#line 2525 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 78:
#line 479 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) = new ErrNode();
                    cerr << "Expected Right Parenthesis At " << yylval.token->line 
                    << ":" << yylval.token->column <<endl << endl;
                    yyerrok;
                    delete (yyvsp[-4].token); delete (yyvsp[-3].token); delete (yyvsp[-2].token); delete (yyvsp[-1].ttype); 
              }
#line 2537 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 79:
#line 486 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new NewExpression(NEWEXPEMPTY);
                delete (yyvsp[-1].token); delete (yyvsp[0].token);
              }
#line 2546 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 80:
#line 490 "program4.y" /* yacc.c:1646  */
    {
                    (yyval.ttype) =  new NewExpression((yyvsp[0].ttype),NEWEXPBRACK);
                    delete (yyvsp[-2].token); delete (yyvsp[-1].token);
              }
#line 2555 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 81:
#line 494 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) =  new NewExpression((yyvsp[-1].ttype), (yyvsp[0].ttype), NEWEXPBRACKMULTI);
                delete (yyvsp[-3].token); delete (yyvsp[-2].token);
              }
#line 2564 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 82:
#line 498 "program4.y" /* yacc.c:1646  */
    {
                (yyval.ttype) = new NewExpression((yyvsp[0].ttype), NEWEXPMULTI);
                delete (yyvsp[-2].token); delete (yyvsp[-1].token);
              }
#line 2573 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 83:
#line 502 "program4.y" /* yacc.c:1646  */
    { 
                  (yyval.ttype) = new ErrNode();
                  cerr << " -> after new at " << (yyvsp[-1].token)->line << ":" << (yyvsp[-1].token)->column 
                  << endl << endl; 
                  yyerrok;
                  delete (yyvsp[-1].token);
}
#line 2585 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 84:
#line 511 "program4.y" /* yacc.c:1646  */
    { 
                      (yyval.ttype) = new BrackExpression((yyvsp[-1].ttype));
                      delete (yyvsp[-2].token); delete (yyvsp[0].token);
                      }
#line 2594 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 85:
#line 515 "program4.y" /* yacc.c:1646  */
    {
                  (yyval.ttype) = new BrackExpression((yyvsp[-3].ttype), (yyvsp[-1].ttype));
                  delete (yyvsp[-2].token); delete (yyvsp[0].token);
              }
#line 2603 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 86:
#line 521 "program4.y" /* yacc.c:1646  */
    { 
            (yyval.ttype) = new ArgList((yyvsp[-2].ttype), (yyvsp[0].ttype));
            delete (yyvsp[-1].token);
          }
#line 2612 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 87:
#line 525 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new ArgList((yyvsp[0].ttype));}
#line 2618 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 88:
#line 527 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new UnaryOp("+"); delete (yyvsp[0].token);}
#line 2624 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 89:
#line 528 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new UnaryOp("-"); delete (yyvsp[0].token);}
#line 2630 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 90:
#line 529 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new UnaryOp("!"); delete (yyvsp[0].token);}
#line 2636 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 91:
#line 533 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new RelationOp("=="); delete (yyvsp[0].token);}
#line 2642 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 92:
#line 534 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new RelationOp("!="); delete (yyvsp[0].token);}
#line 2648 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 93:
#line 535 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new RelationOp("<="); delete (yyvsp[0].token);}
#line 2654 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 94:
#line 536 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new RelationOp(">="); delete (yyvsp[0].token);}
#line 2660 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 95:
#line 537 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new RelationOp("<"); delete (yyvsp[0].token);}
#line 2666 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 96:
#line 538 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new RelationOp(">"); delete (yyvsp[0].token);}
#line 2672 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 97:
#line 541 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new ProductOp("*"); delete (yyvsp[0].token);}
#line 2678 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 98:
#line 542 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new ProductOp("/"); delete (yyvsp[0].token);}
#line 2684 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 99:
#line 543 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new ProductOp("%"); delete (yyvsp[0].token);}
#line 2690 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 100:
#line 544 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new ProductOp("&&"); delete (yyvsp[0].token);}
#line 2696 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 101:
#line 546 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new SumOp("-"); delete (yyvsp[0].token);}
#line 2702 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 102:
#line 547 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new SumOp("+"); delete (yyvsp[0].token);}
#line 2708 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 103:
#line 548 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new SumOp("||"); delete (yyvsp[0].token);}
#line 2714 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 104:
#line 551 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new Type("int", TYPE);
            delete (yyvsp[0].token);
            }
#line 2723 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 105:
#line 555 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new Type((yyvsp[0].token)->value, TYPE);
            delete (yyvsp[0].token);
            }
#line 2732 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 106:
#line 559 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new Type("int", (yyvsp[0].ttype), TYPEBRACKS);
            delete (yyvsp[-1].token);
            }
#line 2741 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 107:
#line 563 "program4.y" /* yacc.c:1646  */
    {
            (yyval.ttype) = new Type((yyvsp[-1].token)->value, (yyvsp[0].ttype), TYPEBRACKS);
            delete (yyvsp[-1].token);
            }
#line 2750 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 108:
#line 569 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new Multibracks(); delete (yyvsp[-1].token); delete (yyvsp[0].token);}
#line 2756 "program4_bison.c" /* yacc.c:1646  */
    break;

  case 109:
#line 570 "program4.y" /* yacc.c:1646  */
    {(yyval.ttype) = new Multibracks((yyvsp[-2].ttype)); delete (yyvsp[0].token);delete (yyvsp[-1].token);}
#line 2762 "program4_bison.c" /* yacc.c:1646  */
    break;


#line 2766 "program4_bison.c" /* yacc.c:1646  */
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
#line 573 "program4.y" /* yacc.c:1906  */

