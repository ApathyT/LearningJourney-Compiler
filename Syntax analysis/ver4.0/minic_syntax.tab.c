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
#line 2 "minic_syntax.y" /* yacc.c:339  */

	#include <stdio.h>
	#include "treenode.h"
	#include <stdarg.h>
	#include <stdlib.h>

	// Syntax mistake number
	int errorNum = 0;

#line 76 "minic_syntax.tab.c" /* yacc.c:339  */

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
   by #include "minic_syntax.tab.h".  */
#ifndef YY_YY_MINIC_SYNTAX_TAB_H_INCLUDED
# define YY_YY_MINIC_SYNTAX_TAB_H_INCLUDED
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
    TYPE = 258,
    ID = 259,
    INTEGER = 260,
    FLOATING = 261,
    STRING = 262,
    CHAR = 263,
    IF = 264,
    ELSE = 265,
    DO = 266,
    WHILE = 267,
    FOR = 268,
    BREAK = 269,
    CONTINUE = 270,
    RETURN = 271,
    QUALIFIER = 272,
    ADD = 273,
    SUB = 274,
    MULT = 275,
    DIV = 276,
    AND = 277,
    OR = 278,
    NOT = 279,
    ASSIGNOP = 280,
    COMPARE = 281,
    LOGICAND = 282,
    LOGICOR = 283,
    LOGICNOT = 284,
    LP = 285,
    RP = 286,
    LB = 287,
    RB = 288,
    LC = 289,
    RC = 290,
    SEMI = 291,
    COMMA = 292,
    DOT = 293,
    EOL = 294,
    SPACE = 295,
    COMMENT = 296,
    AERROR = 297,
    LOWER_THAN_ELSE = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "minic_syntax.y" /* yacc.c:355  */

	struct treeNode* node;

#line 164 "minic_syntax.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_MINIC_SYNTAX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 195 "minic_syntax.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   478

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    76,    83,    87,    94,   101,   109,   115,
     120,   129,   134,   143,   149,   157,   165,   170,   176,   181,
     187,   192,   198,   205,   211,   219,   228,   235,   239,   245,
     250,   257,   263,   269,   278,   289,   298,   308,   322,   327,
     332,   337,   347,   354,   358,   366,   372,   378,   383,   391,
     396,   405,   413,   420,   427,   434,   440,   447,   454,   461,
     468,   475,   482,   488,   495,   502,   508,   516,   523,   531,
     538,   543,   548,   553,   558,   564,   570,   577
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPE", "ID", "INTEGER", "FLOATING",
  "STRING", "CHAR", "IF", "ELSE", "DO", "WHILE", "FOR", "BREAK",
  "CONTINUE", "RETURN", "QUALIFIER", "ADD", "SUB", "MULT", "DIV", "AND",
  "OR", "NOT", "ASSIGNOP", "COMPARE", "LOGICAND", "LOGICOR", "LOGICNOT",
  "LP", "RP", "LB", "RB", "LC", "RC", "SEMI", "COMMA", "DOT", "EOL",
  "SPACE", "COMMENT", "AERROR", "LOWER_THAN_ELSE", "$accept", "Program",
  "CodeDefList", "CodeDef", "CodeDecList", "VarDec", "FunDec", "VarList",
  "ParamDec", "Compst", "StmtList", "Stmt", "DefList", "Def", "DecList",
  "Dec", "Exp", "Args", YY_NULLPTR
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
     295,   296,   297,   298
};
# endif

#define YYPACT_NINF -62

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-62)))

#define YYTABLE_NINF -50

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,    16,     9,   -62,    20,    -3,    32,    -2,    38,    24,
     -62,   -62,    73,   108,    83,   -62,     6,    67,   -62,   116,
     -62,   -62,    67,   -62,    41,    36,   -62,    47,   -62,   -62,
      84,    54,    59,   -62,   -62,    67,    67,   148,   116,    61,
     -62,    94,   -62,   -62,   -62,   -62,   -62,    58,    77,    89,
      27,   103,   -62,   -62,   -62,   -62,   104,   148,   106,   111,
      30,    52,   214,   214,   214,   214,   214,   -62,   107,   148,
      29,   -62,   -62,   214,   214,   -62,    67,   -62,   -62,   186,
     214,   126,   214,   214,   -62,   -62,   -62,   -62,    80,    -6,
     -22,   -22,   209,   -62,   -62,   -62,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   179,   -62,   139,   398,
     398,   -62,   -62,   230,   113,   251,   117,   272,   293,   -62,
     -62,   -62,    -6,    -6,   -22,   -22,   414,   414,   398,   440,
     419,   419,   115,   314,   -62,   214,   -62,   148,   214,   148,
     214,   -62,   -62,   -62,   155,   335,   -62,   356,   148,   -62,
     214,   -62,   377,   148,   -62
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     2,     4,     0,     0,     0,     9,     0,
       1,     3,     0,     0,     0,     5,     0,     0,     8,     0,
       7,     6,     0,    21,     0,    23,    17,     0,    19,    15,
       0,     0,     0,    11,    10,     0,     0,    27,     0,    24,
      20,     0,    16,    18,    14,    13,    12,     0,     0,    47,
       0,    70,    71,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,    27,
       0,    42,    22,     0,     0,    45,     0,    46,    44,     0,
       0,     0,     0,     0,    41,    32,    40,    31,     0,    62,
      55,    65,     0,    25,    26,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,    51,
      50,    48,    67,    77,     0,     0,     0,     0,     0,    39,
      30,    61,    57,    58,    59,    60,    53,    54,    52,    56,
      63,    64,     0,     0,    69,     0,    66,     0,     0,     0,
       0,    75,    68,    76,    33,     0,    35,     0,     0,    36,
       0,    34,     0,     0,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -62,   -62,   145,   -62,   141,     7,   -62,    96,   -62,   157,
      99,   -57,   131,   -62,   -30,   -62,   -61,    35
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,     7,    47,     9,    24,    25,    67,
      68,    69,    37,    38,    48,    49,    70,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,    88,    89,    90,    91,    92,    50,    31,     8,    10,
     106,    32,   109,   110,    98,    99,   108,     5,   113,   115,
       6,   117,   118,     1,     8,    18,   106,    12,    77,    39,
      95,    84,   108,    13,    15,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   133,   111,    96,    97,    98,
      99,   100,   101,    86,   102,   103,   104,   105,    19,    73,
      20,   106,    14,    78,   -11,   107,    85,   108,   -11,   -11,
      16,    33,    40,    41,   113,    17,    22,   145,    42,   147,
     144,   119,   146,    74,    28,    43,    22,    45,    87,   152,
      16,   151,    46,    16,   -49,   -49,   154,    22,    96,    97,
      98,    99,   100,   101,    23,   102,   103,   104,   105,    27,
      30,    22,   106,    75,    29,    44,   120,    35,   108,    36,
     -43,   -43,   -43,   -43,   -43,   -43,    76,   -43,   -43,   -43,
     -43,   -43,   -43,    79,    80,   -43,    82,    72,   116,    26,
     -43,    83,    93,   134,   136,   -43,   -43,   138,   141,    11,
     -43,   -43,    51,    52,    53,    54,    55,    56,    34,    57,
      58,    59,    60,    61,    62,   148,    21,    63,    94,    71,
     143,     0,    64,     0,     0,     0,     0,    65,    66,     0,
     132,     0,    19,    51,    52,    53,    54,    55,     0,     0,
      51,    52,    53,    54,    55,     0,     0,     0,    63,     0,
       0,     0,     0,    64,     0,    63,     0,     0,    65,    66,
      64,     0,     0,     0,     0,    65,    66,   112,    51,    52,
      53,    54,    55,     0,     0,     0,     0,    96,    97,    98,
      99,   100,   101,    63,   102,   103,   104,   105,    64,     0,
     121,   106,     0,    65,    66,     0,     0,   108,    96,    97,
      98,    99,   100,   101,     0,   102,   103,   104,   105,     0,
       0,     0,   106,     0,     0,     0,     0,   135,   108,    96,
      97,    98,    99,   100,   101,     0,   102,   103,   104,   105,
       0,     0,   137,   106,     0,     0,     0,     0,     0,   108,
      96,    97,    98,    99,   100,   101,     0,   102,   103,   104,
     105,     0,     0,   139,   106,     0,     0,     0,     0,     0,
     108,    96,    97,    98,    99,   100,   101,     0,   102,   103,
     104,   105,     0,     0,     0,   106,     0,     0,     0,   140,
       0,   108,    96,    97,    98,    99,   100,   101,     0,   102,
     103,   104,   105,     0,     0,     0,   106,   142,     0,     0,
       0,     0,   108,    96,    97,    98,    99,   100,   101,     0,
     102,   103,   104,   105,     0,     0,   149,   106,     0,     0,
       0,     0,     0,   108,    96,    97,    98,    99,   100,   101,
       0,   102,   103,   104,   105,     0,     0,     0,   106,     0,
       0,     0,   150,     0,   108,    96,    97,    98,    99,   100,
     101,     0,   102,   103,   104,   105,     0,     0,   153,   106,
       0,     0,     0,     0,     0,   108,    96,    97,    98,    99,
     100,   101,     0,   102,   103,   104,   105,     0,     0,     0,
     106,     0,    96,    97,    98,    99,   108,    96,    97,    98,
      99,   100,   101,     0,     0,   103,   106,     0,     0,     0,
       0,   106,   108,     0,     0,     0,     0,   108,    96,    97,
      98,    99,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,   106,     0,     0,     0,     0,     0,   108
};

static const yytype_int16 yycheck[] =
{
      57,    62,    63,    64,    65,    66,    36,     1,     1,     0,
      32,     5,    73,    74,    20,    21,    38,     1,    79,    80,
       4,    82,    83,     3,    17,     1,    32,    30,     1,    22,
       1,     1,    38,     1,    36,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    76,    18,    19,    20,
      21,    22,    23,     1,    25,    26,    27,    28,    34,     1,
      36,    32,    30,    36,    32,    36,    36,    38,    36,    37,
      32,     4,    31,    37,   135,    37,     3,   138,    31,   140,
     137,     1,   139,    25,     1,     1,     3,    33,    36,   150,
      32,   148,    33,    32,    36,    37,   153,     3,    18,    19,
      20,    21,    22,    23,    31,    25,    26,    27,    28,    13,
      14,     3,    32,    36,    31,    31,    36,     1,    38,     3,
       4,     5,     6,     7,     8,     9,    37,    11,    12,    13,
      14,    15,    16,    30,    30,    19,    30,    41,    12,    31,
      24,    30,    35,     4,    31,    29,    30,    30,    33,     4,
      34,    35,     4,     5,     6,     7,     8,     9,    17,    11,
      12,    13,    14,    15,    16,    10,     9,    19,    69,    38,
     135,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    -1,
       1,    -1,    34,     4,     5,     6,     7,     8,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    24,    -1,    19,    -1,    -1,    29,    30,
      24,    -1,    -1,    -1,    -1,    29,    30,    31,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    19,    25,    26,    27,    28,    24,    -1,
      31,    32,    -1,    29,    30,    -1,    -1,    38,    18,    19,
      20,    21,    22,    23,    -1,    25,    26,    27,    28,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,    18,
      19,    20,    21,    22,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    38,
      18,    19,    20,    21,    22,    23,    -1,    25,    26,    27,
      28,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      38,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      27,    28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    36,
      -1,    38,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    38,    18,    19,    20,    21,    22,    23,    -1,
      25,    26,    27,    28,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    38,    18,    19,    20,    21,    22,    23,
      -1,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    36,    -1,    38,    18,    19,    20,    21,    22,
      23,    -1,    25,    26,    27,    28,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    38,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    27,    28,    -1,    -1,    -1,
      32,    -1,    18,    19,    20,    21,    38,    18,    19,    20,
      21,    22,    23,    -1,    -1,    26,    32,    -1,    -1,    -1,
      -1,    32,    38,    -1,    -1,    -1,    -1,    38,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    45,    46,    47,     1,     4,    48,    49,    50,
       0,    46,    30,     1,    30,    36,    32,    37,     1,    34,
      36,    53,     3,    31,    51,    52,    31,    51,     1,    31,
      51,     1,     5,     4,    48,     1,     3,    56,    57,    49,
      31,    37,    31,     1,    31,    33,    33,    49,    58,    59,
      58,     4,     5,     6,     7,     8,     9,    11,    12,    13,
      14,    15,    16,    19,    24,    29,    30,    53,    54,    55,
      60,    56,    51,     1,    25,    36,    37,     1,    36,    30,
      30,    55,    30,    30,     1,    36,     1,    36,    60,    60,
      60,    60,    60,    35,    54,     1,    18,    19,    20,    21,
      22,    23,    25,    26,    27,    28,    32,    36,    38,    60,
      60,    58,    31,    60,    61,    60,    12,    60,    60,     1,
      36,    31,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,     1,    60,     4,    37,    31,    31,    30,    31,
      36,    33,    33,    61,    55,    60,    55,    60,    10,    31,
      36,    55,    60,    31,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    47,    47,    48,
      48,    49,    49,    49,    50,    50,    50,    50,    50,    50,
      50,    50,    51,    51,    52,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    56,    56,    57,    57,    57,    58,    58,    59,
      59,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    61,    61
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     3,     3,     3,     1,
       3,     1,     4,     4,     4,     3,     4,     3,     4,     3,
       4,     3,     3,     1,     2,     4,     2,     0,     2,     1,
       3,     2,     2,     5,     7,     5,     6,     9,     2,     3,
       2,     2,     2,     0,     3,     3,     3,     1,     3,     1,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     2,     4,     3,     4,     3,
       1,     1,     1,     1,     1,     4,     3,     1
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 52 "minic_syntax.y" /* yacc.c:1646  */
    {
		  	if((yyvsp[0].node) == NULL)
		  	{
		  		(yyval.node) = NULL;
		  	}
		  	else
		  	{
		  		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Program", NULL);
		  		(yyval.node)->children[0] = (yyvsp[0].node);
		  	}
		  	root = (yyval.node);
		  	if(errorNum == 0)
		  	{
		  		printf("print syntax tree\n");
			  	PrintTreeNode((yyval.node), 0);
			  	printf("syntax print finish!\n");
		  	}
		  	else
		  	{
		  		printf("Total Mistake Numbers : %d .\n", errorNum);
		  		printf("please correct the mistake.\n");
		  	}
		}
#line 1554 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 77 "minic_syntax.y" /* yacc.c:1646  */
    {
			  	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "CodeDefList", NULL);
			  	(yyval.node)->children[0] = (yyvsp[-1].node);
			  	(yyval.node)->children[1] = (yyvsp[0].node);
			}
#line 1564 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 83 "minic_syntax.y" /* yacc.c:1646  */
    {
				(yyval.node) = NULL;
			}
#line 1572 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 88 "minic_syntax.y" /* yacc.c:1646  */
    {
			CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "CodeDef", NULL);
			(yyval.node)->children[0] = (yyvsp[-2].node);
			(yyval.node)->children[1] = (yyvsp[-1].node);
			(yyval.node)->children[2] = (yyvsp[0].node);
		}
#line 1583 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 95 "minic_syntax.y" /* yacc.c:1646  */
    {
	    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "CodeDef", NULL);
			(yyval.node)->children[0] = (yyvsp[-2].node);
			(yyval.node)->children[1] = (yyvsp[-1].node);
			(yyval.node)->children[2] = (yyvsp[0].node);
	    }
#line 1594 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 102 "minic_syntax.y" /* yacc.c:1646  */
    {
	    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "CodeDef", NULL);
			(yyval.node)->children[0] = (yyvsp[-2].node);
			(yyval.node)->children[1] = (yyvsp[-1].node);
			(yyval.node)->children[2] = (yyvsp[0].node);
	    }
#line 1605 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 110 "minic_syntax.y" /* yacc.c:1646  */
    {
	    	errorNum = errorNum + 1;
		    printf("Line %d:(Error) Missing \" ; \"\n",(yyloc).first_line);
	    }
#line 1614 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 116 "minic_syntax.y" /* yacc.c:1646  */
    {
				CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "CodeDecList", NULL);
				(yyval.node)->children[0] = (yyvsp[0].node);
			}
#line 1623 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 121 "minic_syntax.y" /* yacc.c:1646  */
    {
	   			CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "CodeDecList", NULL);
				(yyval.node)->children[0] = (yyvsp[-2].node);
				(yyval.node)->children[1] = (yyvsp[-1].node);
				(yyval.node)->children[2] = (yyvsp[0].node);
	   		}
#line 1634 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 130 "minic_syntax.y" /* yacc.c:1646  */
    {
	   		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "VarDec", NULL);
			(yyval.node)->children[0] = (yyvsp[0].node);
	   }
#line 1643 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 135 "minic_syntax.y" /* yacc.c:1646  */
    {
	   		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "VarDec", NULL);
			(yyval.node)->children[0] = (yyvsp[-3].node);
			(yyval.node)->children[1] = (yyvsp[-2].node);
			(yyval.node)->children[2] = (yyvsp[-1].node);
			(yyval.node)->children[3] = (yyvsp[0].node);
	   }
#line 1655 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 144 "minic_syntax.y" /* yacc.c:1646  */
    {
		    errorNum = errorNum + 1;
		    printf("Line %d:(Error) Expected type 'int'\n",(yyloc).first_line);
	   }
#line 1664 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 150 "minic_syntax.y" /* yacc.c:1646  */
    {
	   		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "FunDec", NULL);
			(yyval.node)->children[0] = (yyvsp[-3].node);
			(yyval.node)->children[1] = (yyvsp[-2].node);
			(yyval.node)->children[2] = (yyvsp[-1].node);
			(yyval.node)->children[3] = (yyvsp[0].node);
	   }
#line 1676 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 158 "minic_syntax.y" /* yacc.c:1646  */
    {
	   		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "FunDec", NULL);
			(yyval.node)->children[0] = (yyvsp[-2].node);
			(yyval.node)->children[1] = (yyvsp[-1].node);
			(yyval.node)->children[2] = (yyvsp[0].node);
	   }
#line 1687 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 166 "minic_syntax.y" /* yacc.c:1646  */
    {
		    errorNum = errorNum + 1;
		    printf("Line %d:(Error) Missing \" ( \"\n",(yyloc).first_line);
	   }
#line 1696 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 171 "minic_syntax.y" /* yacc.c:1646  */
    {
		    errorNum = errorNum + 1;
		    printf("Line %d:(Error) Missing \" ( \"\n",(yyloc).first_line);
	   }
#line 1705 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 177 "minic_syntax.y" /* yacc.c:1646  */
    {
		    errorNum = errorNum + 1;
		    printf("Line %d:(Error) Missing \" ) \"\n",(yyloc).first_line);
	   }
#line 1714 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 182 "minic_syntax.y" /* yacc.c:1646  */
    {
		    errorNum = errorNum + 1;
		    printf("Line %d:(Error) Missing \" ) \"\n",(yyloc).first_line);
	   }
#line 1723 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 188 "minic_syntax.y" /* yacc.c:1646  */
    {
		    errorNum = errorNum + 1;
		    printf("Line %d:(Error) Wrong Function Name\n",(yyloc).first_line);
	   }
#line 1732 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 193 "minic_syntax.y" /* yacc.c:1646  */
    {
		    errorNum = errorNum + 1;
		    printf("Line %d:(Error) Wrong Function Name\n",(yyloc).first_line);
	   }
#line 1741 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 199 "minic_syntax.y" /* yacc.c:1646  */
    {
			CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "VarList", NULL);
			(yyval.node)->children[0] = (yyvsp[-2].node);
			(yyval.node)->children[1] = (yyvsp[-1].node);
			(yyval.node)->children[2] = (yyvsp[0].node);
		}
#line 1752 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 206 "minic_syntax.y" /* yacc.c:1646  */
    {
	   		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "VarList", NULL);
			(yyval.node)->children[0] = (yyvsp[0].node);
	   	}
#line 1761 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 212 "minic_syntax.y" /* yacc.c:1646  */
    {
		    CreateTreeNode(&(yyval.node),1,(yyloc).first_line,"ParamDec",NULL);
		    (yyval.node)->children[0] = (yyvsp[-1].node);
		    (yyval.node)->children[1] = (yyvsp[0].node);
  	     }
#line 1771 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 220 "minic_syntax.y" /* yacc.c:1646  */
    {
	   		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Compst", NULL);
			(yyval.node)->children[0] = (yyvsp[-3].node);
			(yyval.node)->children[1] = (yyvsp[-2].node);
			(yyval.node)->children[2] = (yyvsp[-1].node);
			(yyval.node)->children[3] = (yyvsp[0].node);
	   }
#line 1783 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 229 "minic_syntax.y" /* yacc.c:1646  */
    {
		 	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "StmtList", NULL);
			(yyval.node)->children[0] = (yyvsp[-1].node);
			(yyval.node)->children[1] = (yyvsp[0].node);
		 }
#line 1793 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 235 "minic_syntax.y" /* yacc.c:1646  */
    {
	     	(yyval.node) = NULL;
	     }
#line 1801 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 240 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Stmt", NULL);
			(yyval.node)->children[0] = (yyvsp[-1].node);
			(yyval.node)->children[1] = (yyvsp[0].node);
	 }
#line 1811 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 246 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Stmt", NULL);
			(yyval.node)->children[0] = (yyvsp[0].node);
	 }
#line 1820 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 251 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Stmt", NULL);
			(yyval.node)->children[0] = (yyvsp[-2].node);
			(yyval.node)->children[1] = (yyvsp[-1].node);
			(yyval.node)->children[2] = (yyvsp[0].node);
	 }
#line 1831 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 258 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Stmt", NULL);
			(yyval.node)->children[0] = (yyvsp[-1].node);
			(yyval.node)->children[1] = (yyvsp[0].node);
	 }
#line 1841 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 264 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Stmt", NULL);
			(yyval.node)->children[0] = (yyvsp[-1].node);
			(yyval.node)->children[1] = (yyvsp[0].node);
	 }
#line 1851 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 270 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Stmt", NULL);
			(yyval.node)->children[0] = (yyvsp[-4].node);
			(yyval.node)->children[1] = (yyvsp[-3].node);
			(yyval.node)->children[2] = (yyvsp[-2].node);
			(yyval.node)->children[3] = (yyvsp[-1].node);
			(yyval.node)->children[4] = (yyvsp[0].node);
	 }
#line 1864 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 279 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Stmt", NULL);
			(yyval.node)->children[0] = (yyvsp[-6].node);
			(yyval.node)->children[1] = (yyvsp[-5].node);
			(yyval.node)->children[2] = (yyvsp[-4].node);
			(yyval.node)->children[3] = (yyvsp[-3].node);
			(yyval.node)->children[4] = (yyvsp[-2].node);
			(yyval.node)->children[5] = (yyvsp[-1].node);
			(yyval.node)->children[6] = (yyvsp[0].node);
	 }
#line 1879 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 290 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Stmt", NULL);
			(yyval.node)->children[0] = (yyvsp[-4].node);
			(yyval.node)->children[1] = (yyvsp[-3].node);
			(yyval.node)->children[2] = (yyvsp[-2].node);
			(yyval.node)->children[3] = (yyvsp[-1].node);
			(yyval.node)->children[4] = (yyvsp[0].node);
	 }
#line 1892 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 299 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Stmt", NULL);
			(yyval.node)->children[0] = (yyvsp[-5].node);
			(yyval.node)->children[1] = (yyvsp[-4].node);
			(yyval.node)->children[2] = (yyvsp[-3].node);
			(yyval.node)->children[3] = (yyvsp[-2].node);
			(yyval.node)->children[4] = (yyvsp[-1].node);
			(yyval.node)->children[5] = (yyvsp[0].node);
	 }
#line 1906 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 309 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Stmt", NULL);
			(yyval.node)->children[0] = (yyvsp[-8].node);
			(yyval.node)->children[1] = (yyvsp[-7].node);
			(yyval.node)->children[2] = (yyvsp[-6].node);
			(yyval.node)->children[3] = (yyvsp[-5].node);
			(yyval.node)->children[4] = (yyvsp[-4].node);
			(yyval.node)->children[5] = (yyvsp[-3].node);
			(yyval.node)->children[6] = (yyvsp[-2].node);
			(yyval.node)->children[7] = (yyvsp[-1].node);
			(yyval.node)->children[8] = (yyvsp[0].node);
	 }
#line 1923 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 323 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		errorNum = errorNum + 1;
		    printf("Line %d:(Error) Missing \" ; \"\n",(yyloc).first_line);
	 }
#line 1932 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 328 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		errorNum = errorNum + 1;
		    printf("Line %d:(Error) Missing \" ; \"\n",(yyloc).first_line);
	 }
#line 1941 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 333 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		errorNum = errorNum + 1;
		    printf("Line %d:(Error) Missing \" ; \"\n",(yyloc).first_line);
	 }
#line 1950 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 338 "minic_syntax.y" /* yacc.c:1646  */
    {
	 		errorNum = errorNum + 1;
		    printf("Line %d:(Error) Missing \" ; \"\n",(yyloc).first_line);
	 }
#line 1959 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 348 "minic_syntax.y" /* yacc.c:1646  */
    {
			CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "DefList", NULL);
			(yyval.node)->children[0] = (yyvsp[-1].node);
			(yyval.node)->children[1] = (yyvsp[0].node);
		}
#line 1969 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 354 "minic_syntax.y" /* yacc.c:1646  */
    {
	    	(yyval.node) = NULL;
	    }
#line 1977 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 359 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Def", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
    }
#line 1988 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 367 "minic_syntax.y" /* yacc.c:1646  */
    {
    	errorNum = errorNum + 1;
		printf("Line %d:(Error) Not Defination Type\n",(yyloc).first_line);
    }
#line 1997 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 373 "minic_syntax.y" /* yacc.c:1646  */
    {
    	errorNum = errorNum + 1;
		printf("Line %d:(Error) Missing \" ; \"\n",(yyloc).first_line);
    }
#line 2006 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 379 "minic_syntax.y" /* yacc.c:1646  */
    {
			CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "DecList", NULL);
			(yyval.node)->children[0] = (yyvsp[0].node);
		}
#line 2015 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 384 "minic_syntax.y" /* yacc.c:1646  */
    {
	    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "DecList", NULL);
			(yyval.node)->children[0] = (yyvsp[-2].node);
			(yyval.node)->children[1] = (yyvsp[-1].node);
			(yyval.node)->children[2] = (yyvsp[0].node);
	    }
#line 2026 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 392 "minic_syntax.y" /* yacc.c:1646  */
    {
		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Dec", NULL);
		(yyval.node)->children[0] = (yyvsp[0].node);
	}
#line 2035 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 397 "minic_syntax.y" /* yacc.c:1646  */
    {
		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Dec", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
	}
#line 2046 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 406 "minic_syntax.y" /* yacc.c:1646  */
    {
		errorNum = errorNum + 1;
		printf("Line %d:(Error) Illegal Symbol\n",(yyloc).first_line);
	}
#line 2055 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 414 "minic_syntax.y" /* yacc.c:1646  */
    {
		CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
	}
#line 2066 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 421 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
    }
#line 2077 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 428 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
    }
#line 2088 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 435 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-1].node);
		(yyval.node)->children[1] = (yyvsp[0].node);
    }
#line 2098 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 441 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
    }
#line 2109 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 448 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
    }
#line 2120 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 455 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
    }
#line 2131 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 462 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
    }
#line 2142 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 469 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
    }
#line 2153 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 476 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
    }
#line 2164 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 483 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-1].node);
		(yyval.node)->children[1] = (yyvsp[0].node);
    }
#line 2174 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 489 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
    }
#line 2185 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 496 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
    }
#line 2196 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 503 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-1].node);
		(yyval.node)->children[1] = (yyvsp[0].node);
    }
#line 2206 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 509 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-3].node);
		(yyval.node)->children[1] = (yyvsp[-2].node);
		(yyval.node)->children[2] = (yyvsp[-1].node);
		(yyval.node)->children[3] = (yyvsp[0].node);
    }
#line 2218 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 517 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
    }
#line 2229 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 524 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-3].node);
		(yyval.node)->children[1] = (yyvsp[-2].node);
		(yyval.node)->children[2] = (yyvsp[-1].node);
		(yyval.node)->children[3] = (yyvsp[0].node);
    }
#line 2241 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 532 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
    }
#line 2252 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 539 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 2261 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 544 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 2270 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 549 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 2279 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 554 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 2288 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 559 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Exp", NULL);
		(yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 2297 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 565 "minic_syntax.y" /* yacc.c:1646  */
    {
    	 errorNum = errorNum + 1;
		 printf("Line %d:(Error) Expected type 'int'\n",(yyloc).first_line);
    }
#line 2306 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 571 "minic_syntax.y" /* yacc.c:1646  */
    {
    	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Args", NULL);
		(yyval.node)->children[0] = (yyvsp[-2].node);
		(yyval.node)->children[1] = (yyvsp[-1].node);
		(yyval.node)->children[2] = (yyvsp[0].node);
     }
#line 2317 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 578 "minic_syntax.y" /* yacc.c:1646  */
    {
     	CreateTreeNode(&(yyval.node), 1, (yyloc).first_line, "Args", NULL);
		(yyval.node)->children[0] = (yyvsp[0].node);
     }
#line 2326 "minic_syntax.tab.c" /* yacc.c:1646  */
    break;


#line 2330 "minic_syntax.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 583 "minic_syntax.y" /* yacc.c:1906  */


int yyerror(char* msg) 
{
   // printf("%s\n", msg);
    return 0;
}

int main()
{

    yyparse();
    return 0;
}
