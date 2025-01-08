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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "src/zimpl/mmlparse2.y" /* yacc.c:339  */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                           */
/*   File....: mmlparse2.y                                                   */
/*   Name....: MML Parser                                                    */
/*   Author..: Thorsten Koch                                                 */
/*   Copyright by Author, All rights reserved                                */
/*                                                                           */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*
 * Copyright (C) 2001-2024 by Thorsten Koch <koch@zib.de>
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wdisabled-macro-expansion"
#pragma clang diagnostic ignored "-Wconversion"
#pragma clang diagnostic ignored "-Wsign-conversion"
#pragma clang diagnostic ignored "-Wunused-macros"
#pragma clang diagnostic ignored "-Wimplicit-function-declaration"
#pragma clang diagnostic ignored "-Wunreachable-code"
#pragma clang diagnostic ignored "-Wdeprecated-non-prototype"
#endif
   
#if defined(__GNUC__) && !defined(__clang__) && !defined(__INTEL_COMPILER)
#pragma GCC   diagnostic ignored "-Wstrict-prototypes"
#endif
   
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <assert.h>
   
#include "zimpl/lint.h"
#include "zimpl/attribute.h"
#include "zimpl/mshell.h"
#include "zimpl/ratlptypes.h"
#include "zimpl/numb.h"
#include "zimpl/elem.h"
#include "zimpl/tuple.h"
#include "zimpl/mme.h"
#include "zimpl/set.h"
#include "zimpl/symbol.h"
#include "zimpl/entry.h"
#include "zimpl/idxset.h"
#include "zimpl/rdefpar.h"
#include "zimpl/bound.h"
#include "zimpl/define.h"
#include "zimpl/mono.h"
#include "zimpl/term.h"
#include "zimpl/list.h"
#include "zimpl/stmt.h"
#include "zimpl/local.h"
#include "zimpl/code.h"
#include "zimpl/inst.h"
        
#define YYERROR_VERBOSE 1

/* the function is actually getting a YYSTYPE* as argument, but the
 * type isn't available here, so it is decalred to accept any number of
 * arguments, i.e. yylex() and not yylex(void).
 */
extern int yylex();

/*lint -sem(yyerror, 1p, r_no) */ 
extern void yyerror(const char* s) is_NORETURN;
 

#line 150 "src/zimpl/mmlparse2.c" /* yacc.c:339  */

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
   by #include "mmlparse2.h".  */
#ifndef YY_YY_SRC_ZIMPL_MMLPARSE2_H_INCLUDED
# define YY_YY_SRC_ZIMPL_MMLPARSE2_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DECLSET = 258,
    DECLPAR = 259,
    DECLVAR = 260,
    DECLMIN = 261,
    DECLMAX = 262,
    DECLSUB = 263,
    DECLSOS = 264,
    DEFNUMB = 265,
    DEFSTRG = 266,
    DEFBOOL = 267,
    DEFSET = 268,
    PRINT = 269,
    CHECK = 270,
    BINARY = 271,
    INTEGER = 272,
    REAL = 273,
    IMPLICIT = 274,
    ASGN = 275,
    DO = 276,
    WITH = 277,
    IN = 278,
    TO = 279,
    UNTIL = 280,
    BY = 281,
    FORALL = 282,
    EXISTS = 283,
    PRIORITY = 284,
    STARTVAL = 285,
    DEFAULT = 286,
    CMP_LE = 287,
    CMP_GE = 288,
    CMP_EQ = 289,
    CMP_LT = 290,
    CMP_GT = 291,
    CMP_NE = 292,
    INFTY = 293,
    AND = 294,
    OR = 295,
    XOR = 296,
    NOT = 297,
    SUM = 298,
    MIN = 299,
    MAX = 300,
    ARGMIN = 301,
    ARGMAX = 302,
    PROD = 303,
    IF = 304,
    THEN = 305,
    ELSE = 306,
    END = 307,
    INTER = 308,
    UNION = 309,
    CROSS = 310,
    SYMDIFF = 311,
    WITHOUT = 312,
    PROJ = 313,
    MOD = 314,
    DIV = 315,
    POW = 316,
    FAC = 317,
    CARD = 318,
    ROUND = 319,
    FLOOR = 320,
    CEIL = 321,
    RANDOM = 322,
    ORD = 323,
    ABS = 324,
    SGN = 325,
    LOG = 326,
    LN = 327,
    EXP = 328,
    SQRT = 329,
    SIN = 330,
    COS = 331,
    TAN = 332,
    ASIN = 333,
    ACOS = 334,
    ATAN = 335,
    POWER = 336,
    SGNPOW = 337,
    READ = 338,
    AS = 339,
    SKIP = 340,
    USE = 341,
    COMMENT = 342,
    MATCH = 343,
    SUBSETS = 344,
    INDEXSET = 345,
    POWERSET = 346,
    VIF = 347,
    VABS = 348,
    TYPE1 = 349,
    TYPE2 = 350,
    LENGTH = 351,
    SUBSTR = 352,
    NUMBSYM = 353,
    STRGSYM = 354,
    VARSYM = 355,
    SETSYM = 356,
    NUMBDEF = 357,
    STRGDEF = 358,
    BOOLDEF = 359,
    SETDEF = 360,
    DEFNAME = 361,
    NAME = 362,
    STRG = 363,
    NUMB = 364,
    SCALE = 365,
    SEPARATE = 366,
    CHECKONLY = 367,
    INDICATOR = 368,
    QUBO = 369,
    PENALTY1 = 370,
    PENALTY2 = 371,
    PENALTY3 = 372,
    PENALTY4 = 373,
    PENALTY5 = 374,
    PENALTY6 = 375,
    PENALTY7 = 376,
    PENALTY8 = 377
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 88 "src/zimpl/mmlparse2.y" /* yacc.c:355  */

   unsigned int bits;
   Numb*        numb;
   const char*  strg;
   const char*  name;
   Symbol*      sym;
   Define*      def;
   CodeNode*    code;

#line 323 "src/zimpl/mmlparse2.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void);

#endif /* !YY_YY_SRC_ZIMPL_MMLPARSE2_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 339 "src/zimpl/mmlparse2.c" /* yacc.c:358  */

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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3407

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  135
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  318
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  934

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   377

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
     130,   131,   125,   123,   129,   124,     2,   132,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   126,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   127,     2,   128,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   133,     2,   134,     2,     2,     2,     2,
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
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   158,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   176,   183,   189,   195,   205,   206,   209,
     212,   215,   221,   230,   239,   248,   257,   266,   269,   279,
     282,   285,   288,   295,   299,   300,   307,   308,   316,   323,
     332,   342,   353,   362,   372,   376,   386,   387,   388,   392,
     395,   396,   397,   402,   410,   411,   412,   413,   418,   426,
     427,   431,   432,   440,   441,   444,   445,   449,   453,   457,
     460,   472,   475,   485,   491,   494,   497,   502,   507,   515,
     518,   523,   528,   535,   539,   544,   548,   554,   557,   562,
     567,   572,   576,   583,   590,   596,   602,   608,   613,   621,
     630,   639,   647,   658,   661,   665,   670,   678,   679,   682,
     685,   686,   689,   692,   693,   696,   699,   700,   703,   706,
     707,   710,   713,   714,   717,   720,   721,   722,   723,   724,
     728,   729,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   749,   750,   751,   755,   756,
     757,   758,   759,   762,   763,   771,   772,   773,   777,   778,
     782,   783,   784,   790,   791,   794,   800,   803,   804,   805,
     806,   807,   808,   809,   810,   811,   812,   813,   816,   819,
     822,   830,   836,   839,   845,   846,   847,   855,   859,   860,
     861,   862,   863,   864,   865,   875,   876,   883,   886,   892,
     893,   894,   897,   898,   901,   902,   905,   906,   910,   911,
     912,   915,   919,   922,   927,   928,   931,   934,   937,   940,
     943,   946,   949,   952,   953,   954,   955,   956,   957,   958,
     961,   964,   970,   971,   975,   976,   977,   978,   982,   985,
     988,   992,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
    1011,  1016,  1022,  1023,  1027,  1030,  1036,  1039,  1045,  1046,
    1047,  1051,  1052,  1053,  1054,  1055,  1056,  1062,  1063,  1064,
    1068,  1069,  1070,  1073,  1076,  1079,  1082,  1088,  1089,  1090,
    1093,  1096,  1099,  1104,  1109,  1110,  1111,  1112,  1113,  1114,
    1115,  1116,  1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,
    1125,  1127,  1128,  1129,  1132,  1135,  1138,  1141,  1144
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DECLSET", "DECLPAR", "DECLVAR",
  "DECLMIN", "DECLMAX", "DECLSUB", "DECLSOS", "DEFNUMB", "DEFSTRG",
  "DEFBOOL", "DEFSET", "PRINT", "CHECK", "BINARY", "INTEGER", "REAL",
  "IMPLICIT", "ASGN", "DO", "WITH", "IN", "TO", "UNTIL", "BY", "FORALL",
  "EXISTS", "PRIORITY", "STARTVAL", "DEFAULT", "CMP_LE", "CMP_GE",
  "CMP_EQ", "CMP_LT", "CMP_GT", "CMP_NE", "INFTY", "AND", "OR", "XOR",
  "NOT", "SUM", "MIN", "MAX", "ARGMIN", "ARGMAX", "PROD", "IF", "THEN",
  "ELSE", "END", "INTER", "UNION", "CROSS", "SYMDIFF", "WITHOUT", "PROJ",
  "MOD", "DIV", "POW", "FAC", "CARD", "ROUND", "FLOOR", "CEIL", "RANDOM",
  "ORD", "ABS", "SGN", "LOG", "LN", "EXP", "SQRT", "SIN", "COS", "TAN",
  "ASIN", "ACOS", "ATAN", "POWER", "SGNPOW", "READ", "AS", "SKIP", "USE",
  "COMMENT", "MATCH", "SUBSETS", "INDEXSET", "POWERSET", "VIF", "VABS",
  "TYPE1", "TYPE2", "LENGTH", "SUBSTR", "NUMBSYM", "STRGSYM", "VARSYM",
  "SETSYM", "NUMBDEF", "STRGDEF", "BOOLDEF", "SETDEF", "DEFNAME", "NAME",
  "STRG", "NUMB", "SCALE", "SEPARATE", "CHECKONLY", "INDICATOR", "QUBO",
  "PENALTY1", "PENALTY2", "PENALTY3", "PENALTY4", "PENALTY5", "PENALTY6",
  "PENALTY7", "PENALTY8", "'+'", "'-'", "'*'", "';'", "'['", "']'", "','",
  "'('", "')'", "'/'", "'{'", "'}'", "$accept", "stmt", "decl_set",
  "set_entry_list", "set_entry", "def_numb", "def_strg", "def_bool",
  "def_set", "name_list", "decl_par", "par_singleton", "par_default",
  "decl_var", "var_type", "lower", "upper", "priority", "startval",
  "cexpr_entry_list", "cexpr_entry", "matrix_head", "matrix_body",
  "decl_obj", "decl_sub", "constraint_list", "constraint", "vbool",
  "con_attr_list", "con_attr", "con_type", "vexpr", "vproduct", "vfactor",
  "vexpo", "vval", "decl_sos", "soset", "sos_type", "exec_do", "command",
  "idxset", "pure_idxset", "sexpr", "sunion", "sproduct", "sval", "read",
  "read_par", "tuple_list", "lexpr", "tuple", "symidx", "cexpr_list",
  "cexpr", "cproduct", "cfactor", "cexpo", "cval", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,    43,    45,    42,    59,    91,    93,    44,
      40,    41,    47,   123,   125
};
# endif

#define YYPACT_NINF -529

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-529)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1058,   -30,    -2,    36,    73,   116,   133,   180,   228,   249,
     270,   322,    88,   124,  -529,  -529,  -529,  -529,  -529,  -529,
    -529,  -529,  -529,  -529,  -529,   -10,    17,    27,    71,   413,
     417,   424,   269,   344,   348,   367,  1564,  1656,   927,   388,
    -529,  1106,   917,   790,   927,   498,   503,  -529,   465,   927,
     503,  2733,  2733,  1729,   209,   452,   452,   452,   452,   410,
    2050,  1656,   927,   -14,    12,  1222,  1242,   927,  1656,   927,
     927,   425,   437,   451,   455,   470,   481,   485,   504,   508,
     512,   531,   539,   545,   553,   572,   594,   598,   628,   651,
     654,   657,   671,   683,   683,  -529,   683,   692,   702,   710,
     741,  -529,  -529,  -529,  3277,  3277,  1656,  1819,   892,  -529,
      -3,  -529,   721,   828,   723,   195,   143,  -529,  -529,   248,
     892,   721,   828,   195,  1656,  1106,   861,  -529,   995,   871,
    -529,   548,   875,   784,  2937,  1656,  2937,  2937,   796,   804,
    -529,   931,  1221,  2937,   448,   830,  2937,   939,  3005,   940,
     851,  -529,   850,   940,   927,  1656,   852,   901,   906,   910,
     924,   944,   948,   958,   962,   968,   972,   992,   683,  2801,
    2801,  2733,   -15,   -12,  -529,  -529,  1022,   472,   478,   570,
     927,  1656,  2597,    33,  -529,   303,   349,   927,  -529,  -529,
     981,   498,  -529,   136,   151,   375,   477,   927,  -529,    22,
     448,  -529,  1082,  1911,  1102,  1911,  1121,  2526,  1130,  2526,
    1137,  1142,   381,  1156,  1158,  1106,  1106,  2937,  2937,  2937,
    2937,  1106,  2937,  2937,  2937,  2937,  2937,  2937,  2937,  2937,
    2937,  2937,  2937,  2937,  1026,  2937,  2937,  2937,  -529,  -529,
    -529,  2937,  2937,  2937,  2937,  -529,  -529,   352,    34,   378,
    1656,  2526,  -529,    -9,  1221,    92,   871,   149,    40,  1106,
    1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,
    1106,  1436,  1436,  1656,  1656,  1656,  1106,  2937,  2937,  2937,
    2937,  2937,  2937,  2937,  2937,  2937,  3209,  3209,  3209,  3209,
    3209,  -529,   427,   376,    88,  1106,  -529,    79,  1163,    26,
     596,   -27,   -40,  -529,  1160,  2937,   931,  2937,  2937,  2937,
    2937,  -529,   448,  1186,   448,  2937,  1074,  1656,  2322,   448,
    2118,   498,  -529,  1561,  1084,  1191,   835,  2733,  2733,  2733,
    2733,  2733,  2733,  2733,  2733,  2733,  2733,  2733,  2733,  -529,
    1307,  1307,  -529,  -529,   293,   468,  2733,  2733,  -529,  2869,
    3209,  3209,  2733,  2733,  2869,  -529,  1192,   973,  2597,  2597,
     994,   529,   622,  2665,  -529,  -529,  -529,  -529,  2733,  2733,
    1200,  -529,  1203,  1116,  1218,  1220,  1245,  1250,  1110,  -529,
    2937,  1129,   586,  3209,  1143,   677,  3209,   490,  2937,   695,
    2937,  3209,  1656,  1436,  1428,   566,   408,   807,   816,   915,
       8,   669,   953,   977,  1042,  1051,  1057,  1085,  1094,  1103,
    1132,  1135,  1170,  1174,  1151,  1180,   406,   499,   748,   786,
     836,   912,  -529,  -529,  -529,  1041,  1982,  -529,  1160,  -529,
    -529,  2937,  2937,   995,   995,   995,   995,   995,   995,  -529,
    -529,  -529,  -529,  -529,  -529,  -529,  -529,  -529,  1248,  1248,
     995,   448,   448,   448,   448,   448,   448,   448,   143,   143,
    -529,  -529,  -529,  -529,  -529,  1106,  -529,     6,  1107,  1154,
      -8,  -529,  1106,   540,  -529,  2937,  2937,  -529,    28,  2937,
     448,   448,   448,   448,   295,   448,  -529,  1056,  -529,  -529,
    1656,   448,   939,   498,   503,   722,   503,  -529,  2733,  2733,
    1198,  1202,  1217,  1234,  1240,  1262,  1272,  1274,  1286,  1288,
    1290,  1301,  1304,  1315,  1356,  1365,  1369,  1396,   613,  1138,
    1399,   927,  1656,  1162,  1169,  1172,  1194,  1204,  1207,  1212,
    1215,  1219,  2733,  -529,   -12,   478,   -12,   478,  -529,  -529,
    -529,  -529,   -12,   478,   -12,   478,  -529,  1729,  1729,  -529,
      54,   423,   516,  2597,  2597,  2597,  2733,  2733,  2733,  2733,
    2733,  2733,  2733,  2733,  2733,  2733,  2733,  2733,  2733,  -529,
     673,   472,   177,   226,   209,  2733,  -529,  2937,  2937,  1656,
    1106,  -529,   143,  -529,  -529,  -529,  -529,  -529,  -529,   927,
     448,   927,   448,  -529,   631,   396,   459,  -529,    -3,  1160,
    -529,  -529,  -529,  -529,  2937,  2937,  -529,  -529,  -529,  -529,
    -529,  -529,  -529,  -529,  -529,  -529,  -529,  -529,  -529,  -529,
    2937,  -529,  -529,  -529,  -529,  -529,  2526,  1196,   191,  -529,
       4,    16,   827,  1656,  1106,  1106,  -529,  1160,   995,   324,
     903,    10,   448,  -529,    29,  2937,    18,   574,  3073,  1104,
    1225,   939,   940,  1236,   940,   -12,   478,    55,   153,  -529,
    -529,  -529,  -529,  -529,  -529,  -529,  -529,  -529,  2937,  2937,
    -529,  1269,  1164,  2733,  2733,  2733,  2733,  2733,  2733,  2733,
    2733,  2733,  1289,    30,    53,   256,  -529,  -529,  1321,  1321,
     303,   349,   673,   472,   673,   472,   673,   472,   673,   472,
     673,   472,   673,   472,   673,   673,   673,   673,   673,   673,
    1237,  1237,  2937,  2937,  1237,  2937,  2937,  1237,  -529,   673,
     795,  1023,    15,  1002,  1352,  1353,  1106,  1656,  2937,  1256,
    1401,  1149,  1230,  -529,  -529,  2937,  -529,  2937,  -529,   721,
     767,   520,  -529,  -529,  -529,  -529,  1063,  2937,  1264,  -529,
    2390,   162,  2186,  -529,  1266,   498,  -529,  1268,  2733,  1411,
    1415,  2733,  2733,  1729,  -529,  2733,  2733,  1350,   448,   448,
     448,   448,  -529,  -529,  -529,  -529,  2937,  2937,  1033,   214,
     182,  -529,  -529,  2937,  2937,   223,   318,  2937,  -529,  -529,
     448,  -529,  1348,  3141,  1355,   356,  -529,   939,  -529,   218,
    -529,  -529,   478,    14,    38,   277,   433,   493,  -529,  -529,
    -529,  -529,  -529,  -529,  -529,  -529,  -529,  -529,  -529,  -529,
    -529,  -529,  1237,  1237,  1237,  1237,   448,   448,  -529,  -529,
    -529,  1421,  1433,  -529,  -529,  1038,  2937,  2458,  2937,  2254,
    1275,  -529,  -529,  2733,  -529,  2733,  -529,  2733,  -529,  2733,
    -529,  -529,  -529,  2937,  -529,   392,  1363,   456,  1371,  -529,
     303,   349,  1237,   303,   349,  1237,   303,   349,  1237,   303,
     349,  1237,  1439,  -529,  -529,  -529,  -529,  2733,  2733,  2733,
    2733,  2733,  2733,  2733,  2733,  -529,   526,   608,   610,   626,
     629,   653,   656,   662,   667,   691,   704,   707,   726,   820,
     864,   885,  -529,  -529,  -529,  -529,  -529,  -529,  -529,  -529,
    -529,  -529,  -529,  -529,  -529,  -529,  -529,  -529,  1237,  1237,
    1237,  1237,  1237,  1237,  1237,  1237,  1237,  1237,  1237,  1237,
    1237,  1237,  1237,  1237
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     8,     9,    10,    11,     3,
       4,     5,     6,     7,    12,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,    59,    49,    47,     0,     0,
      49,     0,     0,     0,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   264,   264,   192,   264,     0,     0,     0,
       0,   289,   288,   287,     0,     0,     0,     0,   190,   199,
     206,   208,   191,   189,   188,   266,   268,   271,   277,   280,
       0,   193,     0,     0,     0,     0,     0,   195,   196,     0,
     187,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      63,     0,    65,     0,    35,     0,     0,    61,     0,    54,
       0,    48,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   264,     0,
       0,     0,     0,   148,   155,   160,   163,     0,   268,     0,
       0,     0,     0,     0,    74,     0,     0,     0,   185,   186,
       0,    59,    27,     0,     0,     0,     0,     0,   262,     0,
     266,   256,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   290,   291,
     212,     0,     0,     0,     0,   278,   279,     0,     0,     0,
       0,     0,   214,     0,   240,     0,   238,     0,   266,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   294,     0,     0,     0,     0,    13,     0,     0,     0,
       0,     0,     0,    32,     0,     0,    66,     0,     0,     0,
       0,   233,    67,     0,    60,     0,     0,     0,     0,    50,
       0,    59,    41,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,   161,   162,     0,     0,     0,     0,    71,     0,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
       0,     0,     0,     0,    73,   145,   146,   147,     0,     0,
       0,   181,     0,     0,     0,     0,     0,     0,     0,   263,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   223,   257,   311,     0,     0,   226,     0,   224,
     225,     0,     0,   252,   250,   247,   251,   249,   248,   205,
     200,   202,   204,   201,   203,   209,   210,   253,   254,   255,
     258,   267,   246,   244,   241,   245,   243,   242,   269,   270,
     274,   275,   272,   273,   281,     0,   194,   198,     0,     0,
       0,    17,     0,     0,    68,     0,     0,    64,     0,     0,
     234,   235,   236,   237,     0,    62,    43,     0,    51,    56,
       0,    55,    61,    59,    49,     0,    49,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   180,   149,   151,   150,   152,   159,   156,
     157,   164,   153,   269,   154,   270,   158,     0,     0,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
     130,   130,   130,   130,   184,     0,    28,     0,     0,     0,
       0,   259,   282,   285,   317,   283,   286,   318,   284,     0,
     219,     0,   221,   276,     0,     0,     0,   211,   207,     0,
     295,   298,   299,   300,     0,     0,   296,   297,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   230,   312,
       0,   265,   292,   293,   260,   213,     0,     0,     0,   239,
       0,     0,     0,     0,     0,     0,    16,     0,    22,     0,
       0,     0,   232,    69,     0,     0,    36,     0,     0,     0,
       0,    61,    54,     0,    54,   165,   282,     0,     0,   175,
     176,   169,   171,   170,   168,   172,   173,   174,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,   129,   125,   126,   127,
       0,     0,   113,   115,   116,   118,   110,   112,   119,   121,
     122,   124,   107,   109,   114,   117,   111,   120,   123,   108,
      79,    80,     0,     0,    81,     0,     0,    82,   183,   182,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   228,   227,     0,   216,     0,   218,   197,
       0,     0,    18,    15,    14,    70,     0,     0,     0,    30,
       0,     0,     0,    45,     0,    59,    40,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,   130,   130,
     130,   130,    23,    24,    25,    26,     0,     0,     0,     0,
       0,   229,   314,     0,     0,     0,     0,     0,    21,    31,
      37,    29,     0,     0,     0,     0,    42,    61,    38,     0,
     177,   178,     0,     0,     0,     0,     0,     0,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   131,    83,    85,    84,    86,   220,   222,   231,   261,
     315,     0,     0,   215,   217,     0,     0,     0,     0,     0,
       0,   179,    78,     0,   130,     0,   130,     0,   130,     0,
     130,   316,   313,     0,    19,     0,     0,     0,     0,    44,
       0,     0,   103,     0,     0,   105,     0,     0,   104,     0,
       0,   106,     0,    53,    52,    58,    57,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,    87,    91,
      90,    97,    89,    96,    95,   101,    88,    94,    93,   100,
      92,    99,    98,   102
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -529,  -529,  -529,   956,   789,  -529,  -529,  -529,  -529,   963,
    -529,  -529,  -529,  -529,  1081,   -45,  -149,  -185,  -476,   949,
    1140,  -108,  -529,  -529,  -529,  -528,  1073,  -336,   599,  -529,
    -157,   573,  -338,  -129,  -529,  -529,  -529,   874,  -529,  -529,
    1179,   -31,   773,   969,  1306,  1064,  -245,  1377,  -529,  -529,
     196,   918,   -16,    19,   -36,   436,   -38,  -102,  -529
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,   470,   471,    15,    16,    17,    18,   193,
      19,   138,   748,    20,    50,   149,   321,   147,   316,   139,
     140,   141,   306,    21,    22,   183,   184,   360,   710,   821,
     368,   361,   173,   174,   175,   176,    23,   190,   191,    24,
      39,   126,   127,   128,   109,   110,   111,   142,   311,   255,
     112,   129,   238,   114,   177,   116,   117,   118,   119
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     115,   123,   245,   246,   324,   153,   372,   144,   534,   536,
      41,   133,   426,   145,   542,   544,   650,   186,   152,   682,
     683,    60,   549,   550,   200,   123,   445,   446,   633,   369,
     735,   202,   123,   305,   208,   210,   211,    43,   213,   214,
     342,   343,   737,    45,    46,    47,    48,    60,   474,   747,
     643,   745,   271,   363,   273,   274,   275,   476,   379,   265,
     266,   728,   267,   268,   431,   432,   842,   245,   246,   363,
     249,   258,   363,   273,   274,   275,   253,    25,   239,   199,
     240,   763,   764,   284,   285,   365,   366,   367,   123,   843,
     844,   424,    51,   553,   554,   555,   284,   285,   200,   123,
     301,   302,    36,    37,   758,    26,   758,   312,   346,   347,
     314,   348,   319,   349,    60,    38,   203,    42,   636,   123,
     350,   637,   272,   325,    40,   427,   257,   284,   285,   269,
     270,   284,   285,   284,   285,   345,   492,   604,   736,   284,
     285,   774,   205,    27,    44,   123,   362,   304,   597,   356,
     738,   277,   339,   299,    49,   277,   370,   277,   277,   364,
     655,   346,   347,   284,   285,   423,   378,   200,   468,   200,
     469,   387,   381,   389,   384,   754,   346,   347,   346,   347,
      28,   397,   398,   399,   400,   686,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   479,   415,
     416,   200,   286,   287,   728,   200,   200,   200,   200,   712,
     713,   342,   343,   793,   123,   302,   246,   687,   688,   689,
     538,   428,   382,    29,   385,   546,   429,   278,   279,   280,
     281,   282,   283,   121,   830,   803,   187,   123,   123,   123,
      30,   451,   452,   453,   454,   455,   456,   457,   460,   461,
     462,   463,   464,   273,   274,   275,   417,   201,   715,   716,
     418,   419,   420,   421,   212,   373,   829,   374,   288,   200,
     841,   480,   481,   482,   483,   289,   352,   353,   277,   485,
     373,   123,   375,   430,   491,   284,   285,    31,   365,   366,
     367,   501,   503,   505,   507,   509,   511,   513,   515,   517,
     346,   347,   248,   188,   189,   284,   285,   728,   651,   290,
     291,   539,   540,   541,   284,   285,   462,   134,   284,   285,
     292,   840,   362,   552,   478,   734,   645,   186,   845,   846,
      60,   300,   571,   573,    32,   365,   366,   367,    62,    63,
      64,   346,   347,    67,   135,   585,   284,   285,   588,   352,
     353,   326,   590,   593,   592,    33,   596,   833,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    34,   357,   136,   352,
     353,   365,   366,   367,   259,   260,   261,   262,   263,   264,
     628,    91,    92,    93,    94,   630,   631,    97,    98,    55,
     352,   353,   101,   102,   103,   265,   266,   839,   267,   268,
     278,   279,   280,   281,   282,   283,   346,   347,   104,   105,
     273,   274,   275,   655,   533,   137,   346,   347,    35,   265,
     266,   392,   267,   268,    52,   273,   274,   275,    53,   641,
     642,   284,   285,   200,   873,    54,   425,   727,   647,   652,
     743,   654,   834,   637,   123,   557,   558,   559,   560,   561,
     562,   265,   266,   658,   267,   268,   273,   274,   275,   447,
     448,   449,   352,   353,    56,   269,   270,   465,    57,   284,
     285,   150,   151,   422,   847,   848,   123,   178,   178,   178,
     671,   278,   279,   280,   281,   282,   283,    58,   644,   269,
     270,   284,   285,   755,   373,   757,   376,   422,   875,   424,
     728,   186,   685,   487,   130,   284,   285,   362,   362,   362,
     691,   693,   695,   697,   699,   701,   703,   146,   369,   284,
     285,   269,   270,   765,   766,   620,   148,   286,   287,   600,
     197,   720,   721,   123,   849,   850,   346,   347,   563,   564,
     565,   566,   567,   568,   533,   215,   346,   347,   724,   192,
     725,   557,   558,   559,   560,   561,   562,   216,   730,   731,
     797,   284,   285,   265,   266,    60,   267,   268,   902,   284,
     285,   217,   284,   285,   732,   218,    65,    66,   595,   124,
     641,   352,   353,    69,    70,   352,   353,   123,    71,   424,
     219,   265,   266,   354,   267,   268,   373,   178,   377,   746,
     289,   220,   751,   284,   285,   221,   352,   353,   178,   265,
     266,   589,   267,   268,   172,   179,   185,   621,   277,   468,
      90,   469,   759,   760,   222,   273,   274,   275,   223,   352,
     353,    96,   224,   269,   270,   100,   475,   424,   246,   346,
     347,   788,   346,   347,   563,   564,   565,   566,   567,   568,
     903,   225,   904,   259,   260,   261,   262,   263,   264,   226,
     125,   269,   270,   107,   296,   227,   768,   769,   905,   770,
     771,   906,   726,   228,   265,   266,   649,   267,   268,   269,
     270,   123,   780,   346,   347,   599,   355,   284,   285,   785,
     749,   786,   229,   877,   878,   907,   879,   880,   908,   881,
     882,   790,   883,   884,   909,   277,   795,   584,   672,   910,
     458,   459,   265,   266,   230,   267,   268,   186,   231,   805,
     807,   352,   353,   346,   347,   246,   346,   347,   653,   151,
     826,   827,   668,   911,   344,   352,   353,   831,   832,   352,
     353,   835,   346,   347,   269,   270,   912,   780,   232,   913,
     273,   274,   275,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   722,   352,   353,   914,   346,
     347,   233,   535,   537,   234,   352,   353,   235,   543,   545,
     346,   347,   269,   270,   178,   178,   346,   347,   605,   178,
     855,   236,   857,   780,   178,   178,   277,   861,   587,   864,
     237,   867,   134,   870,   352,   353,   582,   872,   284,   285,
     265,   266,   241,   267,   268,    60,   591,   346,   347,   739,
     352,   353,   242,    62,    63,    64,   204,   206,    67,   135,
     243,   887,   889,   891,   893,   895,   897,   899,   901,   346,
     347,   276,   277,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,   244,   915,   136,   273,   274,   275,   277,   726,   622,
     265,   266,   294,   267,   268,   499,    91,    92,    93,    94,
     269,   270,    97,    98,   295,   297,   787,   101,   102,   103,
     500,   502,   504,   506,   508,   510,   512,   514,   516,   518,
     519,   520,   298,   104,   105,   277,   916,   623,   284,   285,
     137,   772,   303,   779,   259,   260,   261,   262,   263,   264,
     284,   285,   551,   304,   656,   178,   185,   917,   601,   284,
     285,   570,   572,   352,   353,   265,   266,   602,   267,   268,
     269,   270,    60,   134,   113,   122,   265,   266,   313,   267,
     268,   143,    60,    65,    66,   277,   124,   624,   178,   315,
      69,    70,   320,    65,    66,    71,   124,   322,   323,   122,
      69,    70,   327,   178,   178,    71,   122,   346,   347,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   108,   120,    90,   352,   353,
     131,   178,   273,   274,   275,   269,   270,    90,    96,   194,
     195,   196,   100,   548,   122,   256,   269,   270,    96,   744,
     120,   328,   100,   553,   554,   555,   329,   120,   284,   285,
     330,   277,   122,   625,   556,   132,   603,   125,   265,   266,
     107,   267,   268,   122,   331,   265,   266,   125,   267,   268,
     107,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   657,   122,   332,   247,   284,   285,   333,    12,
     273,   274,   275,   351,   606,   828,   265,   266,   334,   267,
     268,   626,   335,   120,   293,   273,   274,   275,   336,   122,
     284,   285,   337,   380,   120,   344,   648,   371,   607,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   269,   270,
     185,   684,   338,   383,   120,   269,   270,   414,   775,   690,
     692,   694,   696,   698,   700,   702,   704,   705,   706,   707,
     708,   709,   386,   273,   274,   275,   284,   285,   719,   773,
     120,   388,    65,    66,   752,   124,   269,   270,   390,    69,
      70,   284,   285,   391,    71,   284,   285,   853,   122,   854,
     711,   714,   717,   608,   284,   285,   293,   393,   293,   394,
     284,   285,   609,   473,   395,   396,   284,   285,   610,   789,
     401,   122,   122,   122,   178,    60,    90,   802,   178,   178,
     486,   178,   178,   273,   274,   275,   484,    96,   284,   285,
     497,   100,   498,   547,   762,   472,   611,   284,   285,   120,
     293,   574,   143,   576,   575,   612,   284,   285,   433,   434,
     435,   436,   437,   438,   613,   122,   125,   634,   577,   107,
     578,   581,   120,   120,   120,   450,   500,   502,   504,   506,
     508,   510,   512,   514,   516,   284,   285,    60,   284,   285,
     583,   346,   347,   614,   467,   579,   615,   669,    65,    66,
     580,   124,   284,   285,   586,    69,    70,    60,   783,   178,
      71,   178,   618,   178,   635,   178,   120,   273,    65,    66,
     761,   124,   673,   284,   285,    69,    70,   284,   285,   674,
      71,   616,   675,   284,   285,   617,   307,   308,   309,   310,
     122,   619,    90,   178,   178,   178,   178,   178,   178,   178,
     178,   346,   347,    96,   676,   352,   353,   100,   363,   659,
     733,   799,    90,   606,   677,   657,   185,   678,   804,   806,
     346,   347,   679,    96,   627,   680,   629,   100,   660,   681,
     521,   753,   207,   284,   285,   107,   522,   352,   353,   784,
     553,   594,   756,   346,   347,   607,   767,   822,   823,   824,
     825,   661,   209,   776,   777,   107,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   352,   353,   781,   165,   166,
     791,   472,   796,   608,   798,   346,   347,   352,   353,   836,
     167,   859,   143,   662,   496,   609,   838,   168,   122,   346,
     347,   352,   353,   346,   347,   874,   860,   663,   863,   610,
     866,   664,   869,   876,   352,   353,   742,   346,   347,   639,
     340,   341,   611,   646,   632,   665,   569,   532,   352,   353,
     122,   638,   640,   862,   477,   865,   612,   868,   718,   871,
     886,   888,   890,   892,   894,   896,   898,   900,   598,   120,
     808,   809,   810,   811,   812,   813,   814,   815,   816,   817,
     818,   819,   820,   466,    65,    66,     0,   124,     0,   346,
     347,    69,    65,    66,   254,   124,    71,   666,   352,   353,
       0,   120,   346,   347,    71,     0,   613,   122,     0,     0,
     667,   918,   919,   920,   921,   922,   923,   924,   925,   926,
     927,   928,   929,   930,   931,   932,   933,   729,    90,   352,
     353,     0,   346,   347,   284,   285,    90,   614,     0,    96,
     670,     0,   782,   100,   284,   285,     0,    96,   284,   285,
       0,   100,   800,     0,   284,   285,   801,     0,   120,   723,
       0,   122,   851,     0,     0,   472,   284,   285,   125,     0,
       0,   107,   284,   285,   852,     0,   125,     0,     0,   107,
     885,   439,   440,   441,   442,   443,   444,   493,   494,    47,
     495,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,     0,     0,   632,     0,     0,     0,    60,
       0,     0,   120,   740,   741,     0,    61,    62,    63,    64,
      65,    66,    67,    68,     0,     0,     0,    69,    70,     0,
       0,     0,    71,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,   122,     0,     0,     0,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
       0,   101,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,     0,     0,   104,   105,     0,
       0,    60,     0,     0,   106,   778,   120,   107,    61,    62,
      63,    64,    65,    66,    67,    68,     0,     0,     0,    69,
      70,     0,     0,     0,    71,     0,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,     0,    91,    92,    93,    94,   180,    96,    97,    98,
      99,   100,     0,   101,   102,   103,     0,     0,     0,     0,
       0,     0,   154,    63,    64,     0,     0,    67,   181,   104,
     105,     0,     0,     0,     0,     0,   106,     0,     0,   107,
       0,     0,    72,    73,    74,    75,    76,    77,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    87,    88,    89,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   182,   167,     0,     0,    91,    92,    93,    94,   168,
       0,    97,    98,     0,     0,     0,   101,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   169,   170,    60,     0,     0,     0,     0,   171,
       0,     0,    62,    63,    64,    65,    66,    67,   250,     0,
       0,     0,    69,    70,     0,     0,     0,    71,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
       0,     0,   136,     0,     0,     0,     0,     0,     0,    90,
       0,     0,     0,     0,     0,    91,    92,    93,    94,     0,
      96,    97,    98,     0,   100,     0,   101,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,   105,     0,     0,    60,     0,     0,   251,
       0,     0,   107,   252,    62,    63,    64,    65,    66,    67,
     250,     0,     0,     0,    69,    70,     0,     0,     0,    71,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,    91,    92,    93,
      94,     0,    96,    97,    98,     0,   100,    60,   101,   102,
     103,     0,     0,     0,     0,    62,    63,    64,     0,     0,
      67,   135,     0,     0,   104,   105,     0,     0,     0,     0,
       0,   251,     0,     0,   107,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,     0,     0,    97,    98,   198,     0,     0,   101,
     102,   103,     0,    62,    63,    64,     0,     0,    67,   135,
       0,     0,     0,     0,     0,   104,   105,     0,     0,     0,
       0,     0,   137,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
       0,     0,    97,    98,     0,     0,   489,   101,   102,   103,
       0,    62,    63,    64,     0,     0,    67,   490,     0,     0,
       0,     0,     0,   104,   105,     0,     0,     0,     0,     0,
     137,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,     0,     0,
      97,    98,     0,     0,   794,   101,   102,   103,     0,    62,
      63,    64,     0,     0,    67,   135,     0,     0,     0,     0,
       0,   104,   105,     0,     0,     0,     0,     0,   137,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,     0,     0,    97,    98,
       0,     0,   858,   101,   102,   103,     0,    62,    63,    64,
       0,     0,    67,   135,     0,     0,     0,     0,     0,   104,
     105,     0,     0,     0,     0,     0,   137,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,     0,     0,    97,    98,     0,     0,
     488,   101,   102,   103,     0,    62,    63,    64,     0,     0,
       0,   135,     0,     0,     0,     0,     0,   104,   105,     0,
       0,     0,     0,     0,   137,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,     0,     0,    97,    98,     0,     0,   792,   101,
     102,   103,     0,    62,    63,    64,     0,     0,     0,   135,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   137,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
       0,     0,    97,    98,     0,     0,   856,   101,   102,   103,
       0,    62,    63,    64,     0,     0,     0,   135,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     137,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,     0,     0,
      97,    98,     0,     0,     0,   101,   102,   103,     0,    62,
      63,    64,    65,    66,    67,   250,     0,     0,     0,    69,
      70,     0,     0,     0,    71,     0,     0,     0,   137,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,     0,    91,    92,    93,    94,     0,    96,    97,    98,
       0,   100,     0,   101,   102,   103,     0,     0,     0,   358,
     154,    63,    64,     0,     0,    67,   155,     0,     0,   104,
     105,     0,     0,     0,     0,     0,   251,     0,     0,   107,
      72,    73,    74,    75,    76,    77,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    87,    88,    89,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     167,     0,     0,    91,    92,    93,    94,   168,     0,    97,
      98,     0,     0,     0,   101,   102,   103,     0,   154,    63,
      64,     0,     0,    67,   155,     0,     0,     0,     0,     0,
     169,   170,     0,     0,     0,     0,     0,   359,    72,    73,
      74,    75,    76,    77,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    87,    88,    89,   165,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   182,   167,     0,
       0,    91,    92,    93,    94,   168,     0,    97,    98,     0,
       0,     0,   101,   102,   103,     0,   154,    63,    64,     0,
       0,    67,   155,     0,     0,     0,     0,     0,   169,   170,
       0,     0,     0,     0,     0,   171,    72,    73,    74,    75,
      76,    77,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    87,    88,    89,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   167,     0,     0,    91,
      92,    93,    94,   168,     0,    97,    98,     0,     0,     0,
     101,   102,   103,     0,   154,    63,    64,     0,     0,     0,
     155,     0,     0,     0,     0,     0,   169,   170,     0,     0,
       0,     0,     0,   171,    72,    73,    74,    75,    76,    77,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    87,
      88,    89,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,     0,     0,    91,    92,    93,
      94,   168,     0,    97,    98,     0,     0,     0,   101,   102,
     103,     0,   154,    63,    64,     0,     0,     0,   155,     0,
       0,     0,     0,     0,   340,   341,     0,     0,     0,     0,
       0,   171,    72,    73,    74,    75,    76,    77,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    87,    88,    89,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,     0,     0,    91,    92,    93,    94,   168,
       0,    97,    98,     0,     0,     0,   101,   102,   103,     0,
      62,    63,    64,     0,     0,    67,   135,     0,     0,     0,
       0,     0,   169,   170,     0,     0,     0,     0,     0,   171,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,     0,     0,    97,
      98,     0,     0,     0,   101,   102,   103,     0,    62,    63,
      64,     0,     0,    67,   317,     0,     0,     0,     0,     0,
     104,   105,     0,     0,     0,     0,     0,   137,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,     0,     0,    97,    98,     0,
       0,     0,   101,   102,   103,     0,    62,    63,    64,     0,
       0,    67,   135,     0,     0,     0,     0,     0,   104,   318,
       0,     0,     0,     0,     0,   137,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,     0,     0,    97,    98,     0,     0,     0,
     101,   102,   103,     0,    62,    63,    64,     0,     0,    67,
     135,     0,     0,     0,     0,     0,   104,   750,     0,     0,
       0,     0,     0,   137,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,     0,     0,    97,    98,     0,     0,     0,   101,   102,
     103,     0,    62,    63,    64,     0,     0,     0,   135,     0,
       0,     0,     0,     0,   104,   837,     0,     0,     0,     0,
       0,   137,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,    94,     0,
       0,    97,    98,     0,     0,     0,   101,   102,   103,     0,
      62,    63,    64,     0,     0,     0,   135,     0,     0,     0,
       0,     0,   104,   105,     0,     0,     0,     0,     0,   137,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,     0,     0,    97,
      98,     0,     0,     0,   101,   102,   103,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   137
};

static const yytype_int16 yycheck[] =
{
      36,    37,   104,   105,   153,    50,   191,    43,   346,   347,
      20,    42,    21,    44,   352,   353,   492,    53,    49,   547,
     548,    35,   358,   359,    60,    61,   271,   272,    22,   186,
      26,    62,    68,   141,    65,    66,    67,    20,    69,    70,
     169,   170,    26,    16,    17,    18,    19,    35,    22,    31,
      22,    22,    55,    39,    39,    40,    41,    84,    36,    53,
      54,    51,    56,    57,    24,    25,    52,   169,   170,    39,
     106,   107,    39,    39,    40,    41,   107,   107,    94,    60,
      96,    51,    52,   123,   124,    32,    33,    34,   124,    51,
      52,   131,    21,    39,    40,    41,   123,   124,   134,   135,
     136,   137,    14,    15,    51,   107,    51,   143,   123,   124,
     146,   126,   148,   125,    35,    27,   130,   127,   126,   155,
     132,   129,   125,   154,     0,   134,   107,   123,   124,   123,
     124,   123,   124,   123,   124,   171,   321,   129,   134,   123,
     124,   126,   130,   107,   127,   181,   182,   129,   393,   180,
     134,   129,   168,   134,   127,   129,   187,   129,   129,   126,
     498,   123,   124,   123,   124,   131,   197,   203,    89,   205,
      91,   207,   203,   209,   205,   651,   123,   124,   123,   124,
     107,   217,   218,   219,   220,   131,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   306,   235,
     236,   237,    59,    60,    51,   241,   242,   243,   244,    32,
      33,   340,   341,    51,   250,   251,   318,   553,   554,   555,
     349,   129,   203,   107,   205,   354,   134,    32,    33,    34,
      35,    36,    37,    37,    52,   763,    27,   273,   274,   275,
     107,   277,   278,   279,   280,   281,   282,   283,   286,   287,
     288,   289,   290,    39,    40,    41,   237,    61,    32,    33,
     241,   242,   243,   244,    68,   129,    52,   131,   125,   305,
      52,   307,   308,   309,   310,   132,   123,   124,   129,   315,
     129,   317,   131,   134,   320,   123,   124,   107,    32,    33,
      34,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     123,   124,   106,    94,    95,   123,   124,    51,   493,    61,
      62,   349,   350,   351,   123,   124,   354,    22,   123,   124,
     124,   797,   358,   359,   305,   134,    31,   363,    51,    52,
      35,   135,   368,   369,   106,    32,    33,    34,    43,    44,
      45,   123,   124,    48,    49,   383,   123,   124,   386,   123,
     124,   155,   388,   391,   390,   106,   392,   134,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,   106,   181,    83,   123,
     124,    32,    33,    34,    32,    33,    34,    35,    36,    37,
     426,    96,    97,    98,    99,   431,   432,   102,   103,   130,
     123,   124,   107,   108,   109,    53,    54,    51,    56,    57,
      32,    33,    34,    35,    36,    37,   123,   124,   123,   124,
      39,    40,    41,   761,   131,   130,   123,   124,   106,    53,
      54,    50,    56,    57,    21,    39,    40,    41,    21,   475,
     476,   123,   124,   479,    52,    21,   250,    51,   484,   494,
     126,   496,   134,   129,   490,    32,    33,    34,    35,    36,
      37,    53,    54,   499,    56,    57,    39,    40,    41,   273,
     274,   275,   123,   124,   130,   123,   124,    50,   130,   123,
     124,    16,    17,   131,    51,    52,   522,    51,    52,    53,
     521,    32,    33,    34,    35,    36,    37,   130,   479,   123,
     124,   123,   124,   652,   129,   654,   131,   131,    52,   131,
      51,   547,   548,   317,   126,   123,   124,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,    29,   685,   123,
     124,   123,   124,   690,   691,   129,    33,    59,    60,   131,
     130,   577,   578,   579,    51,    52,   123,   124,    32,    33,
      34,    35,    36,    37,   131,   130,   123,   124,   589,   107,
     591,    32,    33,    34,    35,    36,    37,   130,   604,   605,
     755,   123,   124,    53,    54,    35,    56,    57,    52,   123,
     124,   130,   123,   124,   620,   130,    46,    47,   392,    49,
     626,   123,   124,    53,    54,   123,   124,   633,    58,   131,
     130,    53,    54,   125,    56,    57,   129,   171,   131,   645,
     132,   130,   648,   123,   124,   130,   123,   124,   182,    53,
      54,   131,    56,    57,    51,    52,    53,   128,   129,    89,
      90,    91,   668,   669,   130,    39,    40,    41,   130,   123,
     124,   101,   130,   123,   124,   105,    50,   131,   750,   123,
     124,   131,   123,   124,    32,    33,    34,    35,    36,    37,
      52,   130,    52,    32,    33,    34,    35,    36,    37,   130,
     130,   123,   124,   133,   126,   130,   712,   713,    52,   715,
     716,    52,    51,   130,    53,    54,   490,    56,    57,   123,
     124,   727,   728,   123,   124,   129,   126,   123,   124,   735,
     126,   737,   130,   860,   861,    52,   863,   864,    52,   866,
     867,   747,   869,   870,    52,   129,   752,   131,   522,    52,
     284,   285,    53,    54,   130,    56,    57,   763,   130,   765,
     766,   123,   124,   123,   124,   837,   123,   124,    16,    17,
     776,   777,   129,    52,   171,   123,   124,   783,   784,   123,
     124,   787,   123,   124,   123,   124,    52,   793,   130,    52,
      39,    40,    41,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   579,   123,   124,    52,   123,
     124,   130,   346,   347,   130,   123,   124,   130,   352,   353,
     123,   124,   123,   124,   358,   359,   123,   124,   129,   363,
     836,   130,   838,   839,   368,   369,   129,   843,   131,   845,
     127,   847,    22,   849,   123,   124,   380,   853,   123,   124,
      53,    54,   130,    56,    57,    35,   131,   123,   124,   633,
     123,   124,   130,    43,    44,    45,    63,    64,    48,    49,
     130,   877,   878,   879,   880,   881,   882,   883,   884,   123,
     124,    23,   129,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,   130,    52,    83,    39,    40,    41,   129,    51,   131,
      53,    54,    21,    56,    57,    50,    96,    97,    98,    99,
     123,   124,   102,   103,    23,    20,   129,   107,   108,   109,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   128,   123,   124,   129,    52,   131,   123,   124,
     130,   126,   126,   727,    32,    33,    34,    35,    36,    37,
     123,   124,   359,   129,   498,   499,   363,    52,   131,   123,
     124,   368,   369,   123,   124,    53,    54,   131,    56,    57,
     123,   124,    35,    22,    36,    37,    53,    54,   128,    56,
      57,    43,    35,    46,    47,   129,    49,   131,   532,    30,
      53,    54,    32,    46,    47,    58,    49,   126,   128,    61,
      53,    54,   130,   547,   548,    58,    68,   123,   124,   553,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   566,   567,   568,    36,    37,    90,   123,   124,
      41,   575,    39,    40,    41,   123,   124,    90,   101,    56,
      57,    58,   105,    50,   106,   107,   123,   124,   101,   126,
      61,   130,   105,    39,    40,    41,   130,    68,   123,   124,
     130,   129,   124,   131,    50,   128,   131,   130,    53,    54,
     133,    56,    57,   135,   130,    53,    54,   130,    56,    57,
     133,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   499,   155,   130,   106,   123,   124,   130,    21,
      39,    40,    41,    61,   131,    52,    53,    54,   130,    56,
      57,    50,   130,   124,   125,    39,    40,    41,   130,   181,
     123,   124,   130,    21,   135,   532,    50,   126,   131,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   123,   124,
     547,   548,   130,    21,   155,   123,   124,   101,   126,   556,
     557,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,   568,    21,    39,    40,    41,   123,   124,   575,   126,
     181,    21,    46,    47,    50,    49,   123,   124,    21,    53,
      54,   123,   124,    21,    58,   123,   124,   129,   250,   131,
     571,   572,   573,   131,   123,   124,   207,    21,   209,    21,
     123,   124,   131,    20,   215,   216,   123,   124,   131,   126,
     221,   273,   274,   275,   758,    35,    90,   761,   762,   763,
     126,   765,   766,    39,    40,    41,    20,   101,   123,   124,
     126,   105,    21,    21,    50,   297,   131,   123,   124,   250,
     251,    21,   304,   107,    21,   131,   123,   124,   259,   260,
     261,   262,   263,   264,   131,   317,   130,   130,    20,   133,
      20,   131,   273,   274,   275,   276,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   123,   124,    35,   123,   124,
     131,   123,   124,   131,   295,    20,   131,   129,    46,    47,
      20,    49,   123,   124,   131,    53,    54,    35,   129,   843,
      58,   845,   131,   847,   130,   849,   317,    39,    46,    47,
      21,    49,   130,   123,   124,    53,    54,   123,   124,   130,
      58,   131,   130,   123,   124,   131,    85,    86,    87,    88,
     392,   131,    90,   877,   878,   879,   880,   881,   882,   883,
     884,   123,   124,   101,   130,   123,   124,   105,    39,   131,
     134,   758,    90,   131,   130,   762,   763,   130,   765,   766,
     123,   124,   130,   101,   426,   130,   428,   105,   131,   130,
      43,   126,   130,   123,   124,   133,    49,   123,   124,   129,
      39,   392,   126,   123,   124,   131,   129,   768,   769,   770,
     771,   131,   130,    21,    21,   133,    69,    70,    71,    72,
      73,    74,    75,    76,    77,   123,   124,   131,    81,    82,
     126,   473,   126,   131,   126,   123,   124,   123,   124,    51,
      93,   126,   484,   131,   323,   131,    51,   100,   490,   123,
     124,   123,   124,   123,   124,    52,   843,   131,   845,   131,
     847,   131,   849,    52,   123,   124,   637,   123,   124,   473,
     123,   124,   131,   484,   465,   131,   363,   130,   123,   124,
     522,   472,   473,   844,   304,   846,   131,   848,   574,   850,
     877,   878,   879,   880,   881,   882,   883,   884,   394,   490,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   294,    46,    47,    -1,    49,    -1,   123,
     124,    53,    46,    47,   107,    49,    58,   131,   123,   124,
      -1,   522,   123,   124,    58,    -1,   131,   579,    -1,    -1,
     131,   902,   903,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   599,    90,   123,
     124,    -1,   123,   124,   123,   124,    90,   131,    -1,   101,
     131,    -1,   131,   105,   123,   124,    -1,   101,   123,   124,
      -1,   105,   131,    -1,   123,   124,   131,    -1,   579,   580,
      -1,   633,   131,    -1,    -1,   637,   123,   124,   130,    -1,
      -1,   133,   123,   124,   131,    -1,   130,    -1,    -1,   133,
     131,   265,   266,   267,   268,   269,   270,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,   626,    -1,    -1,    -1,    35,
      -1,    -1,   633,   634,   635,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,   727,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,   123,   124,    -1,
      -1,    35,    -1,    -1,   130,   726,   727,   133,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    53,
      54,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,    27,   101,   102,   103,
     104,   105,    -1,   107,   108,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45,    -1,    -1,    48,    49,   123,
     124,    -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,   133,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    96,    97,    98,    99,   100,
      -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,    35,    -1,    -1,    -1,    -1,   130,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,    -1,
     101,   102,   103,    -1,   105,    -1,   107,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,    -1,    -1,    35,    -1,    -1,   130,
      -1,    -1,   133,   134,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,    -1,   101,   102,   103,    -1,   105,    35,   107,   108,
     109,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,
      48,    49,    -1,    -1,   123,   124,    -1,    -1,    -1,    -1,
      -1,   130,    -1,    -1,   133,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,    -1,    -1,   102,   103,    36,    -1,    -1,   107,
     108,   109,    -1,    43,    44,    45,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    -1,   123,   124,    -1,    -1,    -1,
      -1,    -1,   130,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
      -1,    -1,   102,   103,    -1,    -1,    38,   107,   108,   109,
      -1,    43,    44,    45,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    -1,   123,   124,    -1,    -1,    -1,    -1,    -1,
     130,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,    -1,    -1,
     102,   103,    -1,    -1,    38,   107,   108,   109,    -1,    43,
      44,    45,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      -1,   123,   124,    -1,    -1,    -1,    -1,    -1,   130,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,    -1,    -1,   102,   103,
      -1,    -1,    38,   107,   108,   109,    -1,    43,    44,    45,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,   123,
     124,    -1,    -1,    -1,    -1,    -1,   130,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,    -1,    -1,   102,   103,    -1,    -1,
      38,   107,   108,   109,    -1,    43,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,   123,   124,    -1,
      -1,    -1,    -1,    -1,   130,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,    -1,    -1,   102,   103,    -1,    -1,    38,   107,
     108,   109,    -1,    43,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   130,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
      -1,    -1,   102,   103,    -1,    -1,    38,   107,   108,   109,
      -1,    43,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     130,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,    -1,    -1,
     102,   103,    -1,    -1,    -1,   107,   108,   109,    -1,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    53,
      54,    -1,    -1,    -1,    58,    -1,    -1,    -1,   130,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,    -1,   101,   102,   103,
      -1,   105,    -1,   107,   108,   109,    -1,    -1,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    -1,    -1,   123,
     124,    -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,   133,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    96,    97,    98,    99,   100,    -1,   102,
     103,    -1,    -1,    -1,   107,   108,   109,    -1,    43,    44,
      45,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,
     123,   124,    -1,    -1,    -1,    -1,    -1,   130,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    96,    97,    98,    99,   100,    -1,   102,   103,    -1,
      -1,    -1,   107,   108,   109,    -1,    43,    44,    45,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    -1,   123,   124,
      -1,    -1,    -1,    -1,    -1,   130,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    96,
      97,    98,    99,   100,    -1,   102,   103,    -1,    -1,    -1,
     107,   108,   109,    -1,    43,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,   123,   124,    -1,    -1,
      -1,    -1,    -1,   130,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    97,    98,
      99,   100,    -1,   102,   103,    -1,    -1,    -1,   107,   108,
     109,    -1,    43,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,   123,   124,    -1,    -1,    -1,    -1,
      -1,   130,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    96,    97,    98,    99,   100,
      -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,    -1,
      43,    44,    45,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    -1,   123,   124,    -1,    -1,    -1,    -1,    -1,   130,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,    -1,    -1,   102,
     103,    -1,    -1,    -1,   107,   108,   109,    -1,    43,    44,
      45,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,
     123,   124,    -1,    -1,    -1,    -1,    -1,   130,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,    -1,    -1,   102,   103,    -1,
      -1,    -1,   107,   108,   109,    -1,    43,    44,    45,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    -1,   123,   124,
      -1,    -1,    -1,    -1,    -1,   130,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,    -1,    -1,   102,   103,    -1,    -1,    -1,
     107,   108,   109,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    -1,   123,   124,    -1,    -1,
      -1,    -1,    -1,   130,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,   108,
     109,    -1,    43,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,   123,   124,    -1,    -1,    -1,    -1,
      -1,   130,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,    -1,
      -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,    -1,
      43,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,   123,   124,    -1,    -1,    -1,    -1,    -1,   130,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,    -1,    -1,   102,
     103,    -1,    -1,    -1,   107,   108,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   130
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    21,   136,   137,   140,   141,   142,   143,   145,
     148,   158,   159,   171,   174,   107,   107,   107,   107,   107,
     107,   107,   106,   106,   106,   106,    14,    15,    27,   175,
       0,    20,   127,    20,   127,    16,    17,    18,    19,   127,
     149,    21,    21,    21,    21,   130,   130,   130,   130,    28,
      35,    42,    43,    44,    45,    46,    47,    48,    49,    53,
      54,    58,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      90,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   107,   108,   109,   123,   124,   130,   133,   178,   179,
     180,   181,   185,   186,   188,   189,   190,   191,   192,   193,
     178,   185,   186,   189,    49,   130,   176,   177,   178,   186,
     126,   178,   128,   176,    22,    49,    83,   130,   146,   154,
     155,   156,   182,   186,   189,   176,    29,   152,    33,   150,
      16,    17,   176,   150,    43,    49,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    81,    82,    93,   100,   123,
     124,   130,   166,   167,   168,   169,   170,   189,   190,   166,
      27,    49,    92,   160,   161,   166,   189,    27,    94,    95,
     172,   173,   107,   144,   144,   144,   144,   130,    36,   188,
     189,   185,   176,   130,   177,   130,   177,   130,   176,   130,
     176,   176,   185,   176,   176,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   127,   187,   187,
     187,   130,   130,   130,   130,   192,   192,   178,   185,   189,
      49,   130,   134,   176,   182,   184,   186,   188,   189,    32,
      33,    34,    35,    36,    37,    53,    54,    56,    57,   123,
     124,    55,   125,    39,    40,    41,    23,   129,    32,    33,
      34,    35,    36,    37,   123,   124,    59,    60,   125,   132,
      61,    62,   185,   178,    21,    23,   126,    20,   128,   188,
     185,   189,   189,   126,   129,   156,   157,    85,    86,    87,
      88,   183,   189,   128,   189,    30,   153,    49,   124,   189,
      32,   151,   126,   128,   151,   176,   185,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   187,
     123,   124,   168,   168,   166,   189,   123,   124,   126,   125,
     132,    61,   123,   124,   125,   126,   176,   185,    42,   130,
     162,   166,   189,    39,   126,    32,    33,    34,   165,   165,
     176,   126,   152,   129,   131,   131,   131,   131,   176,    36,
      21,   176,   188,    21,   176,   188,    21,   189,    21,   189,
      21,    21,    50,    21,    21,   178,   178,   189,   189,   189,
     189,   178,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   101,   189,   189,   188,   188,   188,
     188,   188,   131,   131,   131,   185,    21,   134,   129,   134,
     134,    24,    25,   178,   178,   178,   178,   178,   178,   179,
     179,   179,   179,   179,   179,   181,   181,   185,   185,   185,
     178,   189,   189,   189,   189,   189,   189,   189,   190,   190,
     191,   191,   191,   191,   191,    50,   175,   178,    89,    91,
     138,   139,   186,    20,    22,    50,    84,   155,   188,   156,
     189,   189,   189,   189,    20,   189,   126,   185,    38,    38,
      49,   189,   152,    16,    17,    19,   149,   126,    21,    50,
     166,   189,   166,   189,   166,   189,   166,   189,   166,   189,
     166,   189,   166,   189,   166,   189,   166,   189,   166,   166,
     166,    43,    49,    69,    70,    71,    72,    73,    74,    75,
      76,    77,   130,   131,   167,   190,   167,   190,   168,   191,
     191,   191,   167,   190,   167,   190,   168,    21,    50,   162,
     162,   166,   189,    39,    40,    41,    50,    32,    33,    34,
      35,    36,    37,    32,    33,    34,    35,    36,    37,   161,
     166,   189,   166,   189,    21,    21,   107,    20,    20,    20,
      20,   131,   190,   131,   131,   191,   131,   131,   191,   131,
     189,   131,   189,   191,   178,   185,   189,   181,   180,   129,
     131,   131,   131,   131,   129,   129,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     129,   128,   131,   131,   131,   131,    50,   186,   189,   186,
     189,   189,   178,    22,   130,   130,   126,   129,   178,   138,
     178,   189,   189,    22,   188,    31,   154,   189,    50,   185,
     153,   152,   150,    16,   150,   167,   190,   166,   189,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   129,   129,
     131,   176,   185,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   160,   160,   166,   189,   131,   162,   162,   162,
     166,   189,   166,   189,   166,   189,   166,   189,   166,   189,
     166,   189,   166,   189,   166,   166,   166,   166,   166,   166,
     163,   163,    32,    33,   163,    32,    33,   163,   172,   166,
     189,   189,   185,   178,   176,   176,    51,    51,    51,   186,
     189,   189,   189,   134,   134,    26,   134,    26,   134,   185,
     178,   178,   139,   126,   126,    22,   189,    31,   147,   126,
     124,   189,    50,   126,   153,   151,   126,   151,    51,   189,
     189,    21,    50,    51,    52,   165,   165,   129,   189,   189,
     189,   189,   126,   126,   126,   126,    21,    21,   178,   185,
     189,   131,   131,   129,   129,   189,   189,   129,   131,   126,
     189,   126,    38,    51,    38,   189,   126,   152,   126,   166,
     131,   131,   190,   160,   166,   189,   166,   189,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   164,   163,   163,   163,   163,   189,   189,    52,    52,
      52,   189,   189,   134,   134,   189,    51,   124,    51,    51,
     153,    52,    52,    51,    52,    51,    52,    51,    52,    51,
      52,   131,   131,   129,   131,   189,    38,   189,    38,   126,
     166,   189,   163,   166,   189,   163,   166,   189,   163,   166,
     189,   163,   189,    52,    52,    52,    52,   165,   165,   165,
     165,   165,   165,   165,   165,   131,   166,   189,   166,   189,
     166,   189,   166,   189,   166,   189,   166,   189,   166,   189,
     166,   189,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   135,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   137,   137,   137,   137,   138,   138,   138,
     138,   138,   139,   140,   141,   142,   143,   144,   144,   145,
     145,   145,   145,   145,   146,   146,   147,   147,   148,   148,
     148,   148,   148,   148,   148,   148,   149,   149,   149,   150,
     150,   150,   150,   150,   151,   151,   151,   151,   151,   152,
     152,   153,   153,   154,   154,   154,   154,   155,   156,   157,
     157,   158,   158,   159,   160,   160,   160,   160,   160,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     163,   163,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   165,   165,   165,   166,   166,
     166,   166,   166,   166,   166,   167,   167,   167,   167,   167,
     168,   168,   168,   169,   169,   169,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   171,   172,   172,   173,   173,   173,   174,   175,   175,
     175,   175,   175,   175,   175,   176,   176,   177,   177,   178,
     178,   178,   178,   178,   178,   178,   179,   179,   180,   180,
     180,   180,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   182,   182,   183,   183,   183,   183,   184,   184,
     184,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   186,   186,   187,   187,   188,   188,   189,   189,
     189,   190,   190,   190,   190,   190,   190,   191,   191,   191,
     192,   192,   192,   192,   192,   192,   192,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     8,     8,     7,     1,     3,     6,
       8,     4,     2,     8,     8,     8,     8,     1,     3,     9,
       8,     9,     5,     1,     1,     1,     0,     2,     9,     6,
       8,     5,     9,     6,    11,     8,     0,     1,     2,     0,
       2,     3,     9,     9,     0,     2,     2,     8,     8,     0,
       2,     0,     2,     1,     3,     1,     2,     2,     3,     3,
       4,     5,     5,     5,     1,     3,     4,     5,     7,     4,
       4,     4,     4,     6,     6,     6,     6,    12,    12,    12,
      12,    12,    12,    12,    12,    12,    12,    12,    12,    12,
      12,    12,    12,     8,     8,     8,     8,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     2,     2,     1,     3,     4,     2,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     6,     6,     7,
       3,     5,     4,     4,     0,     1,     1,     3,     2,     2,
       2,     2,     2,     2,     4,     1,     1,     5,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     4,     1,     3,
       3,     4,     2,     4,     2,     7,     5,     7,     5,     4,
       7,     4,     7,     3,     3,     3,     3,     5,     5,     6,
       4,     7,     4,     2,     2,     2,     2,     2,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     4,
       4,     7,     2,     3,     0,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     4,     1,     2,     2,
       1,     3,     4,     4,     4,     4,     4,     1,     1,     1,
       2,     2,     4,     4,     2,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     3,     4,     8,     6,     7,     8,     4,     4
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
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval);
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
        case 2:
#line 158 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { code_set_root((yyvsp[0].code)); }
#line 2521 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 3:
#line 159 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { code_set_root((yyvsp[0].code)); }
#line 2527 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 4:
#line 160 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { code_set_root((yyvsp[0].code)); }
#line 2533 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 5:
#line 161 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { code_set_root((yyvsp[0].code)); }
#line 2539 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 6:
#line 162 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { code_set_root((yyvsp[0].code)); }
#line 2545 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 7:
#line 163 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { code_set_root((yyvsp[0].code)); }
#line 2551 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 8:
#line 164 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { code_set_root((yyvsp[0].code)); }
#line 2557 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 9:
#line 165 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { code_set_root((yyvsp[0].code)); }
#line 2563 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 10:
#line 166 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { code_set_root((yyvsp[0].code)); }
#line 2569 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 11:
#line 167 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { code_set_root((yyvsp[0].code)); }
#line 2575 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 12:
#line 168 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { code_set_root((yyvsp[0].code)); }
#line 2581 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 13:
#line 176 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_set1, 3,
            code_new_name((yyvsp[-3].name)),                                       /* Name */
            code_new_inst(i_idxset_pseudo_new, 1,               /* index set */
               code_new_inst(i_bool_true, 0)),              
            (yyvsp[-1].code));                                              /* initial set */
      }
#line 2593 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 14:
#line 183 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_set1, 3,
            code_new_name((yyvsp[-6].name)),                                       /* Name */
            (yyvsp[-4].code),                                                 /* index set */
            (yyvsp[-1].code));                                                      /* set */
      }
#line 2604 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 15:
#line 189 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_set2, 3,
            code_new_name((yyvsp[-6].name)),                                       /* Name */
            (yyvsp[-4].code),                                                 /* index set */
            (yyvsp[-1].code));                                   /* initial set_entry_list */
      }
#line 2615 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 16:
#line 195 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_set2, 3,
            code_new_name((yyvsp[-5].name)),                                       /* Name */
            code_new_inst(i_idxset_pseudo_new, 1,               /* index set */
               code_new_inst(i_bool_true, 0)),              
            (yyvsp[-1].code));                                   /* initial set_entry_list */
      }
#line 2627 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 17:
#line 205 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_entry_list_new, 1, (yyvsp[0].code)); }
#line 2633 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 18:
#line 206 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_entry_list_add, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 2641 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 19:
#line 209 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_entry_list_subsets, 3, (yyvsp[-3].code), (yyvsp[-1].code), code_new_numb(numb_new_integer(-1)));
      }
#line 2649 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 20:
#line 212 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_entry_list_subsets, 3, (yyvsp[-5].code), (yyvsp[-3].code), (yyvsp[-1].code));
      }
#line 2657 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 21:
#line 215 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_entry_list_powerset, 1, (yyvsp[-1].code));
      }
#line 2665 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 22:
#line 221 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_entry, 2, (yyvsp[-1].code), (yyvsp[0].code)); }
#line 2671 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 23:
#line 230 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newdef, 3,
            code_new_define((yyvsp[-6].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[-4].code)),
            (yyvsp[-1].code));
      }
#line 2682 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 24:
#line 239 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newdef, 3,
            code_new_define((yyvsp[-6].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[-4].code)),
            (yyvsp[-1].code));
      }
#line 2693 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 25:
#line 248 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newdef, 3,
            code_new_define((yyvsp[-6].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[-4].code)),
            (yyvsp[-1].code));
      }
#line 2704 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 26:
#line 257 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newdef, 3,
            code_new_define((yyvsp[-6].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[-4].code)),
            (yyvsp[-1].code));
      }
#line 2715 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 27:
#line 266 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_elem_list_new, 1, code_new_name((yyvsp[0].name)));
      }
#line 2723 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 28:
#line 269 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_elem_list_add, 2, (yyvsp[-2].code), code_new_name((yyvsp[0].name)));
      }
#line 2731 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 29:
#line 279 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_para1, 4, code_new_name((yyvsp[-7].name)), (yyvsp[-5].code), (yyvsp[-2].code), (yyvsp[-1].code));
      }
#line 2739 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 30:
#line 282 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_para2, 4, code_new_name((yyvsp[-6].name)), (yyvsp[-4].code), (yyvsp[-1].code), code_new_inst(i_nop, 0));
      }
#line 2747 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 31:
#line 285 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_para2, 4, code_new_name((yyvsp[-7].name)), (yyvsp[-5].code), (yyvsp[-1].code), code_new_inst(i_nop, 0));
      }
#line 2755 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 32:
#line 288 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_para1, 4,
            code_new_name((yyvsp[-3].name)),
            code_new_inst(i_idxset_pseudo_new, 1, code_new_inst(i_bool_true, 0)),
            (yyvsp[-1].code),
            code_new_inst(i_nop, 0));
      }
#line 2767 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 33:
#line 295 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_nop, 0); }
#line 2773 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 34:
#line 299 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[0].code); }
#line 2779 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 35:
#line 300 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_entry_list_new, 1,
            code_new_inst(i_entry, 2, code_new_inst(i_tuple_empty, 0), (yyvsp[0].code)));
      }
#line 2788 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 36:
#line 307 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_nop, 0); }
#line 2794 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 37:
#line 308 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_entry, 2, code_new_inst(i_tuple_empty, 0), (yyvsp[0].code)); }
#line 2800 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 38:
#line 316 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[-7].name)),
            (yyvsp[-5].code), (yyvsp[-3].code), (yyvsp[-2].code), (yyvsp[-1].code),
            code_new_numb(numb_copy(numb_unknown())),
            code_new_numb(numb_copy(numb_unknown())));
      }
#line 2812 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 39:
#line 323 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[-4].name)),
            code_new_inst(i_idxset_pseudo_new, 1,
               code_new_inst(i_bool_true, 0)),              
            (yyvsp[-3].code), (yyvsp[-2].code), (yyvsp[-1].code),
            code_new_numb(numb_copy(numb_unknown())),
            code_new_numb(numb_copy(numb_unknown())));
      }
#line 2826 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 40:
#line 332 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[-6].name)),
            (yyvsp[-4].code),
            code_new_varclass(VAR_IMP),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(0))),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(1))),
            code_new_numb(numb_copy(numb_unknown())),
            code_new_numb(numb_copy(numb_unknown())));
      }
#line 2841 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 41:
#line 342 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[-3].name)),
            code_new_inst(i_idxset_pseudo_new, 1,
               code_new_inst(i_bool_true, 0)),              
            code_new_varclass(VAR_IMP),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(0))),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(1))),
            code_new_numb(numb_copy(numb_unknown())),
            code_new_numb(numb_copy(numb_unknown())));
      }
#line 2857 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 42:
#line 353 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[-7].name)),
            (yyvsp[-5].code),
            code_new_varclass(VAR_INT),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(0))),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(1))),
            (yyvsp[-2].code), (yyvsp[-1].code));
      }
#line 2871 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 43:
#line 362 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[-4].name)),
            code_new_inst(i_idxset_pseudo_new, 1,
               code_new_inst(i_bool_true, 0)),              
            code_new_varclass(VAR_INT),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(0))),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(1))),
            (yyvsp[-2].code), (yyvsp[-1].code));
      }
#line 2886 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 44:
#line 372 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[-9].name)), (yyvsp[-7].code), code_new_varclass(VAR_INT), (yyvsp[-4].code), (yyvsp[-3].code), (yyvsp[-2].code), (yyvsp[-1].code));
      }
#line 2895 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 45:
#line 376 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[-6].name)),
            code_new_inst(i_idxset_pseudo_new, 1,
               code_new_inst(i_bool_true, 0)),              
            code_new_varclass(VAR_INT), (yyvsp[-4].code), (yyvsp[-3].code), (yyvsp[-2].code), (yyvsp[-1].code));
      }
#line 2907 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 46:
#line 386 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_varclass(VAR_CON); }
#line 2913 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 47:
#line 387 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_varclass(VAR_CON); }
#line 2919 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 48:
#line 388 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_varclass(VAR_IMP); }
#line 2925 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 49:
#line 392 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(0)));
      }
#line 2933 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 50:
#line 395 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bound_new, 1, (yyvsp[0].code)); }
#line 2939 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 51:
#line 396 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_bound(BOUND_MINUS_INFTY); }
#line 2945 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 52:
#line 397 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[-6].code),
            code_new_inst(i_bound_new, 1, (yyvsp[-4].code)),
            code_new_bound(BOUND_MINUS_INFTY));
      }
#line 2955 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 53:
#line 402 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[-6].code),
            code_new_bound(BOUND_MINUS_INFTY),
            code_new_inst(i_bound_new, 1, (yyvsp[-1].code)));
      }
#line 2965 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 54:
#line 410 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_bound(BOUND_INFTY); }
#line 2971 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 55:
#line 411 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bound_new, 1, (yyvsp[0].code)); }
#line 2977 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 56:
#line 412 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_bound(BOUND_INFTY); }
#line 2983 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 57:
#line 413 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[-5].code),
            code_new_inst(i_bound_new, 1, (yyvsp[-3].code)),
            code_new_bound(BOUND_INFTY));
      }
#line 2993 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 58:
#line 418 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[-5].code),
            code_new_bound(BOUND_INFTY),
            code_new_inst(i_bound_new, 1, (yyvsp[-1].code)));
      }
#line 3003 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 59:
#line 426 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_numb(numb_new_integer(0)); }
#line 3009 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 60:
#line 427 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[0].code); }
#line 3015 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 61:
#line 431 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_numb(numb_copy(numb_unknown())); }
#line 3021 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 62:
#line 432 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[0].code); }
#line 3027 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 63:
#line 440 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_entry_list_new, 1, (yyvsp[0].code)); }
#line 3033 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 64:
#line 441 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_entry_list_add, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 3041 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 65:
#line 444 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_read, 1, (yyvsp[0].code)); }
#line 3047 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 66:
#line 445 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_list_matrix, 2, (yyvsp[-1].code), (yyvsp[0].code)); }
#line 3053 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 67:
#line 449 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_entry, 2, (yyvsp[-1].code), (yyvsp[0].code)); }
#line 3059 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 68:
#line 453 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[-1].code); }
#line 3065 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 69:
#line 457 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_matrix_list_new, 2, (yyvsp[-2].code), (yyvsp[-1].code));
      }
#line 3073 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 70:
#line 460 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_matrix_list_add, 3, (yyvsp[-3].code), (yyvsp[-2].code), (yyvsp[-1].code));
      }
#line 3081 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 71:
#line 472 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_object_min, 2, code_new_name((yyvsp[-3].name)), (yyvsp[-1].code));
      }
#line 3089 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 72:
#line 475 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_object_max, 2, code_new_name((yyvsp[-3].name)), (yyvsp[-1].code));
      }
#line 3097 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 73:
#line 485 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_subto, 2, code_new_name((yyvsp[-3].name)), (yyvsp[-1].code));
     }
#line 3105 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 74:
#line 491 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_constraint_list, 2, (yyvsp[0].code), code_new_inst(i_nop, 0));
     }
#line 3113 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 75:
#line 494 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_constraint_list, 2, (yyvsp[-2].code), (yyvsp[0].code));
     }
#line 3121 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 76:
#line 497 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_constraint_list, 2, 
           code_new_inst(i_forall, 2, (yyvsp[-2].code), (yyvsp[0].code)),
           code_new_inst(i_nop, 0));
     }
#line 3131 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 77:
#line 502 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_constraint_list, 2, 
           code_new_inst(i_expr_if_else, 3, (yyvsp[-3].code), (yyvsp[-1].code), code_new_inst(i_nop, 0)),
           code_new_inst(i_nop, 0));
      }
#line 3141 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 78:
#line 507 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_constraint_list, 2, 
           code_new_inst(i_expr_if_else, 3, (yyvsp[-5].code), (yyvsp[-3].code), (yyvsp[-1].code)),
           code_new_inst(i_nop, 0));
      }
#line 3151 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 79:
#line 515 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_constraint, 4, (yyvsp[-3].code), (yyvsp[-2].code), (yyvsp[-1].code), code_new_bits((yyvsp[0].bits)));
     }
#line 3159 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 80:
#line 518 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_constraint, 4, (yyvsp[-3].code), (yyvsp[-2].code),
           code_new_inst(i_term_expr, 1, (yyvsp[-1].code)),
           code_new_bits((yyvsp[0].bits)));
     }
#line 3169 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 81:
#line 523 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_constraint, 4,
           code_new_inst(i_term_expr, 1, (yyvsp[-3].code)),
           (yyvsp[-2].code), (yyvsp[-1].code), code_new_bits((yyvsp[0].bits)));
     }
#line 3179 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 82:
#line 528 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { 
        (yyval.code) = code_new_inst(i_constraint, 4,
           code_new_inst(i_term_expr, 1, (yyvsp[-3].code)),
           (yyvsp[-2].code),
           code_new_inst(i_term_expr, 1, (yyvsp[-1].code)),
           code_new_bits((yyvsp[0].bits)));
     }
#line 3191 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 83:
#line 535 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_rangeconst, 6, (yyvsp[-5].code), (yyvsp[-3].code), (yyvsp[-1].code), (yyvsp[-4].code),
           code_new_contype(CON_RHS), code_new_bits((yyvsp[0].bits))); 
     }
#line 3200 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 84:
#line 539 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_rangeconst, 6, (yyvsp[-5].code),
           code_new_inst(i_term_expr, 1, (yyvsp[-3].code)), (yyvsp[-1].code), (yyvsp[-4].code),
           code_new_contype(CON_RHS), code_new_bits((yyvsp[0].bits))); 
     }
#line 3210 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 85:
#line 544 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_rangeconst, 6, (yyvsp[-1].code), (yyvsp[-3].code), (yyvsp[-5].code), (yyvsp[-4].code),
           code_new_contype(CON_LHS), code_new_bits((yyvsp[0].bits))); 
     }
#line 3219 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 86:
#line 548 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_rangeconst, 6, (yyvsp[-1].code),
           code_new_inst(i_term_expr, 1, (yyvsp[-3].code)),
           (yyvsp[-5].code), (yyvsp[-4].code),
           code_new_contype(CON_LHS), code_new_bits((yyvsp[0].bits))); 
     }
#line 3230 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 87:
#line 554 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code), (yyvsp[-8].code), (yyvsp[-7].code), (yyvsp[-6].code), (yyvsp[-4].code), (yyvsp[-3].code), (yyvsp[-2].code), code_new_bits((yyvsp[0].bits)));
      }
#line 3238 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 88:
#line 557 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-8].code)),
            (yyvsp[-7].code), (yyvsp[-6].code), (yyvsp[-4].code), (yyvsp[-3].code), (yyvsp[-2].code), code_new_bits((yyvsp[0].bits)));
      }
#line 3248 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 89:
#line 562 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code), (yyvsp[-8].code), (yyvsp[-7].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-6].code)),
            (yyvsp[-4].code), (yyvsp[-3].code), (yyvsp[-2].code), code_new_bits((yyvsp[0].bits)));
      }
#line 3258 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 90:
#line 567 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code), (yyvsp[-8].code), (yyvsp[-7].code), (yyvsp[-6].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-4].code)),
            (yyvsp[-3].code), (yyvsp[-2].code), code_new_bits((yyvsp[0].bits)));
      }
#line 3268 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 91:
#line 572 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code), (yyvsp[-8].code), (yyvsp[-7].code), (yyvsp[-6].code), (yyvsp[-4].code), (yyvsp[-3].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), code_new_bits((yyvsp[0].bits)));
      }
#line 3277 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 92:
#line 576 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-8].code)),
            (yyvsp[-7].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-6].code)),
            (yyvsp[-4].code), (yyvsp[-3].code), (yyvsp[-2].code), code_new_bits((yyvsp[0].bits)));
      }
#line 3289 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 93:
#line 583 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-8].code)),
            (yyvsp[-7].code), (yyvsp[-6].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-4].code)),
            (yyvsp[-3].code), (yyvsp[-2].code), code_new_bits((yyvsp[0].bits)));
      }
#line 3301 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 94:
#line 590 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-8].code)),
            (yyvsp[-7].code), (yyvsp[-6].code), (yyvsp[-4].code), (yyvsp[-3].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), code_new_bits((yyvsp[0].bits)));
      }
#line 3312 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 95:
#line 596 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code), (yyvsp[-8].code), (yyvsp[-7].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-6].code)),
            code_new_inst(i_term_expr, 1, (yyvsp[-4].code)),
            (yyvsp[-3].code), (yyvsp[-2].code), code_new_bits((yyvsp[0].bits)));
      }
#line 3323 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 96:
#line 602 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code), (yyvsp[-8].code), (yyvsp[-7].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-6].code)),
            (yyvsp[-4].code), (yyvsp[-3].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), code_new_bits((yyvsp[0].bits)));
      }
#line 3334 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 97:
#line 608 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code), (yyvsp[-8].code), (yyvsp[-7].code), (yyvsp[-6].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-4].code)), (yyvsp[-3].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), code_new_bits((yyvsp[0].bits)));
      }
#line 3344 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 98:
#line 613 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-8].code)),
            (yyvsp[-7].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-6].code)),
            code_new_inst(i_term_expr, 1, (yyvsp[-4].code)),
            (yyvsp[-3].code), (yyvsp[-2].code), code_new_bits((yyvsp[0].bits)));
      }
#line 3357 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 99:
#line 621 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-8].code)),
            (yyvsp[-7].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-6].code)),
            (yyvsp[-4].code), (yyvsp[-3].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), 
            code_new_bits((yyvsp[0].bits)));
      }
#line 3371 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 100:
#line 630 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-8].code)),
            (yyvsp[-7].code), (yyvsp[-6].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-4].code)),
            (yyvsp[-3].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), 
            code_new_bits((yyvsp[0].bits)));
      }
#line 3385 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 101:
#line 639 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code), (yyvsp[-8].code), (yyvsp[-7].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-6].code)),
            code_new_inst(i_term_expr, 1, (yyvsp[-4].code)),
            (yyvsp[-3].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), 
            code_new_bits((yyvsp[0].bits)));
      }
#line 3398 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 102:
#line 647 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[-10].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-8].code)),
            (yyvsp[-7].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-6].code)),
            code_new_inst(i_term_expr, 1, (yyvsp[-4].code)),
            (yyvsp[-3].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), 
            code_new_bits((yyvsp[0].bits)));
      }
#line 3413 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 103:
#line 658 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vif, 5, (yyvsp[-6].code), (yyvsp[-4].code), (yyvsp[-3].code), (yyvsp[-2].code), code_new_bits((yyvsp[0].bits)));
      }
#line 3421 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 104:
#line 661 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vif, 5, (yyvsp[-6].code), 
            code_new_inst(i_term_expr, 1, (yyvsp[-4].code)), (yyvsp[-3].code), (yyvsp[-2].code), code_new_bits((yyvsp[0].bits)));
      }
#line 3430 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 105:
#line 665 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vif, 5, (yyvsp[-6].code), 
            (yyvsp[-4].code), (yyvsp[-3].code), code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), 
            code_new_bits((yyvsp[0].bits)));
      }
#line 3440 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 106:
#line 670 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif, 5, (yyvsp[-6].code),
            code_new_inst(i_term_expr, 1, (yyvsp[-4].code)), (yyvsp[-3].code), 
            code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), code_new_bits((yyvsp[0].bits)));
      }
#line 3450 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 107:
#line 678 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vbool_ne, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 3456 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 108:
#line 679 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vbool_ne, 2, code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), (yyvsp[0].code));
      }
#line 3464 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 109:
#line 682 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vbool_ne, 2, (yyvsp[-2].code), code_new_inst(i_term_expr, 1, (yyvsp[0].code)));
      }
#line 3472 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 110:
#line 685 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vbool_eq, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 3478 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 111:
#line 686 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vbool_eq, 2, code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), (yyvsp[0].code));
      }
#line 3486 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 112:
#line 689 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vbool_eq, 2, (yyvsp[-2].code), code_new_inst(i_term_expr, 1, (yyvsp[0].code)));
      }
#line 3494 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 113:
#line 692 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vbool_le, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 3500 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 114:
#line 693 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vbool_le, 2, code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), (yyvsp[0].code));
      }
#line 3508 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 115:
#line 696 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vbool_le, 2, (yyvsp[-2].code), code_new_inst(i_term_expr, 1, (yyvsp[0].code)));
      }
#line 3516 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 116:
#line 699 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vbool_ge, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 3522 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 117:
#line 700 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vbool_ge, 2, code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), (yyvsp[0].code));
      }
#line 3530 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 118:
#line 703 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vbool_ge, 2, (yyvsp[-2].code), code_new_inst(i_term_expr, 1, (yyvsp[0].code)));
      }
#line 3538 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 119:
#line 706 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vbool_lt, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 3544 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 120:
#line 707 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vbool_lt, 2, code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), (yyvsp[0].code));
      }
#line 3552 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 121:
#line 710 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vbool_lt, 2, (yyvsp[-2].code), code_new_inst(i_term_expr, 1, (yyvsp[0].code)));
      }
#line 3560 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 122:
#line 713 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vbool_gt, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 3566 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 123:
#line 714 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vbool_gt, 2, code_new_inst(i_term_expr, 1, (yyvsp[-2].code)), (yyvsp[0].code));
      }
#line 3574 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 124:
#line 717 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vbool_gt, 2, (yyvsp[-2].code), code_new_inst(i_term_expr, 1, (yyvsp[0].code)));
      }
#line 3582 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 125:
#line 720 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vbool_and, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 3588 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 126:
#line 721 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vbool_or,  2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 3594 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 127:
#line 722 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vbool_xor, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 3600 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 128:
#line 723 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vbool_not, 1, (yyvsp[0].code)); }
#line 3606 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 129:
#line 724 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[-1].code); }
#line 3612 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 130:
#line 728 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = 0; }
#line 3618 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 131:
#line 729 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = (yyvsp[-2].bits) | (yyvsp[0].bits); }
#line 3624 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 132:
#line 733 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = LP_FLAG_CON_SCALE; }
#line 3630 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 133:
#line 734 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = LP_FLAG_CON_SEPAR; }
#line 3636 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 134:
#line 735 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = LP_FLAG_CON_CHECK; }
#line 3642 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 135:
#line 736 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = LP_FLAG_CON_INDIC; }
#line 3648 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 136:
#line 737 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = LP_FLAG_CON_QUBO;  }
#line 3654 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 137:
#line 738 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = LP_FLAG_CON_PENALTY1; }
#line 3660 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 138:
#line 739 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = LP_FLAG_CON_PENALTY2; }
#line 3666 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 139:
#line 740 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = LP_FLAG_CON_PENALTY3; }
#line 3672 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 140:
#line 741 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = LP_FLAG_CON_PENALTY4; }
#line 3678 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 141:
#line 742 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = LP_FLAG_CON_PENALTY5; }
#line 3684 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 142:
#line 743 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = LP_FLAG_CON_PENALTY6; }
#line 3690 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 143:
#line 744 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = LP_FLAG_CON_PENALTY7; }
#line 3696 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 144:
#line 745 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.bits) = LP_FLAG_CON_PENALTY8; }
#line 3702 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 145:
#line 749 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_contype(CON_RHS); }
#line 3708 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 146:
#line 750 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_contype(CON_LHS); }
#line 3714 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 147:
#line 751 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_contype(CON_EQUAL); }
#line 3720 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 148:
#line 755 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[0].code); }
#line 3726 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 149:
#line 756 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_term_add, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 3732 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 150:
#line 757 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_term_sub, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 3738 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 151:
#line 758 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_term_const, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 3744 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 152:
#line 759 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_term_sub, 2, (yyvsp[-2].code), code_new_inst(i_term_expr, 1, (yyvsp[0].code)));
      }
#line 3752 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 153:
#line 762 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_term_const, 2, (yyvsp[0].code), (yyvsp[-2].code)); }
#line 3758 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 154:
#line 763 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_term_sub, 2,
            code_new_inst(i_term_expr, 1, (yyvsp[-2].code)),
            (yyvsp[0].code));
      }
#line 3768 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 155:
#line 771 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[0].code); }
#line 3774 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 156:
#line 772 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_term_coeff, 2, (yyvsp[-2].code), (yyvsp[0].code));  }
#line 3780 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 157:
#line 773 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_term_coeff, 2, (yyvsp[-2].code),
            code_new_inst(i_expr_div, 2, code_new_numb(numb_new_integer(1)), (yyvsp[0].code)));
      }
#line 3789 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 158:
#line 777 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_term_coeff, 2, (yyvsp[0].code), (yyvsp[-2].code)); }
#line 3795 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 159:
#line 778 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_term_mul, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 3801 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 161:
#line 783 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[0].code); }
#line 3807 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 162:
#line 784 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { 
         (yyval.code) = code_new_inst(i_term_coeff, 2, (yyvsp[0].code), code_new_numb(numb_new_integer(-1)));
      }
#line 3815 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 163:
#line 790 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[0].code); }
#line 3821 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 164:
#line 791 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { 
         (yyval.code) = code_new_inst(i_term_power, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 3829 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 165:
#line 794 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_term_sum, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 3837 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 166:
#line 800 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_symbol_deref, 2, code_new_symbol((yyvsp[-1].sym)), (yyvsp[0].code));
      }
#line 3845 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 167:
#line 803 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vabs, 1, (yyvsp[-1].code)); }
#line 3851 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 168:
#line 804 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vexpr_fun, 2, code_new_numb(numb_new_integer(-2)), (yyvsp[-1].code)); }
#line 3857 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 169:
#line 805 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vexpr_fun, 2, code_new_numb(numb_new_integer(3)), (yyvsp[-1].code)); }
#line 3863 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 170:
#line 806 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vexpr_fun, 2, code_new_numb(numb_new_integer(4)), (yyvsp[-1].code)); }
#line 3869 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 171:
#line 807 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vexpr_fun, 2, code_new_numb(numb_new_integer(5)), (yyvsp[-1].code)); }
#line 3875 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 172:
#line 808 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vexpr_fun, 2, code_new_numb(numb_new_integer(6)), (yyvsp[-1].code)); }
#line 3881 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 173:
#line 809 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vexpr_fun, 2, code_new_numb(numb_new_integer(7)), (yyvsp[-1].code)); }
#line 3887 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 174:
#line 810 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vexpr_fun, 2, code_new_numb(numb_new_integer(8)), (yyvsp[-1].code)); }
#line 3893 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 175:
#line 811 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vexpr_fun, 2, code_new_numb(numb_new_integer(9)), (yyvsp[-1].code)); }
#line 3899 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 176:
#line 812 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_vexpr_fun, 2, code_new_numb(numb_new_integer(10)), (yyvsp[-1].code)); }
#line 3905 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 177:
#line 813 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vexpr_fun, 3, code_new_numb(numb_new_integer(11)), (yyvsp[-3].code), (yyvsp[-1].code));
      }
#line 3913 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 178:
#line 816 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_vexpr_fun, 3, code_new_numb(numb_new_integer(12)), (yyvsp[-3].code), (yyvsp[-1].code));
      }
#line 3921 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 179:
#line 819 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[-5].code), (yyvsp[-3].code), (yyvsp[-1].code));
      }
#line 3929 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 180:
#line 822 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[-1].code); }
#line 3935 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 181:
#line 830 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_sos, 2, code_new_name((yyvsp[-3].name)), (yyvsp[-1].code));
     }
#line 3943 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 182:
#line 836 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_soset, 3, (yyvsp[0].code), (yyvsp[-3].code), (yyvsp[-2].code));
     }
#line 3951 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 183:
#line 839 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_forall, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 3959 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 184:
#line 845 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_numb(numb_new_integer(1)); }
#line 3965 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 185:
#line 846 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_numb(numb_new_integer(1)); }
#line 3971 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 186:
#line 847 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_numb(numb_new_integer(2)); }
#line 3977 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 187:
#line 855 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[-1].code); }
#line 3983 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 188:
#line 859 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_print, 1, (yyvsp[0].code)); }
#line 3989 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 189:
#line 860 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_print, 1, (yyvsp[0].code)); }
#line 3995 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 190:
#line 861 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_print, 1, (yyvsp[0].code)); }
#line 4001 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 191:
#line 862 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_print, 1, (yyvsp[0].code)); }
#line 4007 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 192:
#line 863 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_print, 1, code_new_symbol((yyvsp[0].sym))); }
#line 4013 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 193:
#line 864 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_check, 1, (yyvsp[0].code)); }
#line 4019 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 194:
#line 865 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_forall, 2, (yyvsp[-2].code), (yyvsp[0].code));
     }
#line 4027 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 195:
#line 875 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[0].code); }
#line 4033 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 196:
#line 876 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_idxset_new, 3,
            code_new_inst(i_tuple_empty, 0), (yyvsp[0].code), code_new_inst(i_bool_true, 0));
      }
#line 4042 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 197:
#line 883 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_idxset_new, 3, (yyvsp[-4].code), (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4050 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 198:
#line 886 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_idxset_new, 3, (yyvsp[-2].code), (yyvsp[0].code), code_new_inst(i_bool_true, 0));
      }
#line 4058 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 200:
#line 893 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_set_union, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4064 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 201:
#line 894 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_set_union, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4072 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 202:
#line 897 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_set_sdiff, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4078 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 203:
#line 898 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_set_minus, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4086 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 204:
#line 901 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_set_minus, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4092 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 205:
#line 902 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_set_inter, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4098 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 207:
#line 906 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_set_union2, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4104 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 209:
#line 911 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_set_cross, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4110 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 210:
#line 912 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_set_cross, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4118 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 211:
#line 915 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_set_inter2, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4124 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 212:
#line 919 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_symbol_deref, 2, code_new_symbol((yyvsp[-1].sym)), (yyvsp[0].code));
      }
#line 4132 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 213:
#line 922 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_define_deref, 2,
            code_new_define((yyvsp[-3].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[-1].code)));
      }
#line 4142 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 214:
#line 927 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_set_empty, 1, code_new_size(0)); }
#line 4148 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 215:
#line 928 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_set_range2, 3, (yyvsp[-5].code), (yyvsp[-3].code), (yyvsp[-1].code));
      }
#line 4156 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 216:
#line 931 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_set_range2, 3, (yyvsp[-3].code), (yyvsp[-1].code), code_new_numb(numb_new_integer(1)));
      }
#line 4164 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 217:
#line 934 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_set_range, 3, (yyvsp[-5].code), (yyvsp[-3].code), (yyvsp[-1].code));
      }
#line 4172 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 218:
#line 937 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_set_range, 3, (yyvsp[-3].code), (yyvsp[-1].code), code_new_numb(numb_new_integer(1)));
      }
#line 4180 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 219:
#line 940 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_set_argmin, 3, code_new_numb(numb_new_integer(1)), (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4188 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 220:
#line 943 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_set_argmin, 3, (yyvsp[-4].code), (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4196 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 221:
#line 946 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_set_argmax, 3, code_new_numb(numb_new_integer(1)), (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4204 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 222:
#line 949 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_set_argmax, 3, (yyvsp[-4].code), (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4212 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 223:
#line 952 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[-1].code); }
#line 4218 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 224:
#line 953 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_set_new_tuple, 1, (yyvsp[-1].code)); }
#line 4224 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 225:
#line 954 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_set_new_elem, 1, (yyvsp[-1].code)); }
#line 4230 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 226:
#line 955 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_set_idxset, 1, (yyvsp[-1].code)); }
#line 4236 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 227:
#line 956 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_set_expr, 2, (yyvsp[-3].code), (yyvsp[-1].code)); }
#line 4242 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 228:
#line 957 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_set_expr, 2, (yyvsp[-3].code), (yyvsp[-1].code)); }
#line 4248 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 229:
#line 958 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_set_proj, 2, (yyvsp[-3].code), (yyvsp[-1].code));
       }
#line 4256 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 230:
#line 961 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
          (yyval.code) = code_new_inst(i_set_indexset, 1, code_new_symbol((yyvsp[-1].sym)));
       }
#line 4264 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 231:
#line 964 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[-5].code), (yyvsp[-3].code), (yyvsp[-1].code));
      }
#line 4272 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 232:
#line 970 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_read_new, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4278 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 233:
#line 971 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_read_param, 2, (yyvsp[-1].code), (yyvsp[0].code)); }
#line 4284 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 234:
#line 975 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_read_skip, 1, (yyvsp[0].code)); }
#line 4290 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 235:
#line 976 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_read_use, 1, (yyvsp[0].code)); }
#line 4296 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 236:
#line 977 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_read_comment, 1, (yyvsp[0].code)); }
#line 4302 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 237:
#line 978 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_read_match, 1, (yyvsp[0].code)); }
#line 4308 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 238:
#line 982 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_tuple_list_new, 1, (yyvsp[0].code));
      }
#line 4316 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 239:
#line 985 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_tuple_list_add, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4324 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 240:
#line 988 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_read, 1, (yyvsp[0].code)); }
#line 4330 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 241:
#line 992 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_eq, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4336 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 242:
#line 993 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_ne, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4342 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 243:
#line 994 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_gt, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4348 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 244:
#line 995 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_ge, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4354 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 245:
#line 996 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_lt, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4360 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 246:
#line 997 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_le, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4366 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 247:
#line 998 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_seq, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4372 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 248:
#line 999 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_sneq, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4378 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1000 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_subs, 2, (yyvsp[0].code), (yyvsp[-2].code)); }
#line 4384 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1001 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_sseq, 2, (yyvsp[0].code), (yyvsp[-2].code)); }
#line 4390 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1002 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_subs, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4396 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1003 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_sseq, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4402 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1004 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_and, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4408 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1005 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_or,  2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4414 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1006 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_xor, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4420 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1007 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_not, 1, (yyvsp[0].code)); }
#line 4426 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1008 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[-1].code); }
#line 4432 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1009 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_is_elem, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4438 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1010 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_bool_exists, 1, (yyvsp[-1].code)); }
#line 4444 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1011 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_define_deref, 2,
            code_new_define((yyvsp[-3].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[-1].code)));
      }
#line 4454 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1016 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
        (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[-5].code), (yyvsp[-3].code), (yyvsp[-1].code));
     }
#line 4462 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1022 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_tuple_empty, 0); }
#line 4468 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1023 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_tuple_new, 1, (yyvsp[-1].code));  }
#line 4474 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1027 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_tuple_empty, 0);
      }
#line 4482 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1030 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_tuple_new, 1, (yyvsp[-1].code));
      }
#line 4490 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1036 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_elem_list_new, 1, (yyvsp[0].code));
      }
#line 4498 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1039 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_elem_list_add, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4506 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1045 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[0].code); }
#line 4512 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1046 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_add, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4518 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1047 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_sub, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4524 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1051 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[0].code); }
#line 4530 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1052 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_mul, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4536 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1053 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_div, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4542 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1054 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_mod, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4548 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1055 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_intdiv, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4554 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1056 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_prod, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4562 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1063 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[0].code); }
#line 4568 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1064 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_neg, 1, (yyvsp[0].code)); }
#line 4574 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1069 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_pow, 2, (yyvsp[-2].code), (yyvsp[0].code)); }
#line 4580 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1070 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_sum, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4588 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1073 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_min, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4596 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1076 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_max, 2, (yyvsp[-2].code), (yyvsp[0].code));
      }
#line 4604 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1079 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_sglmin, 1, (yyvsp[-1].code));
         }
#line 4612 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1082 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_sglmax, 1, (yyvsp[-1].code));
      }
#line 4620 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1088 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_numb((yyvsp[0].numb)); }
#line 4626 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1089 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_strg((yyvsp[0].strg));  }
#line 4632 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1090 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_local_deref, 1, code_new_name((yyvsp[0].name)));
      }
#line 4640 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1093 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { 
         (yyval.code) = code_new_inst(i_symbol_deref, 2, code_new_symbol((yyvsp[-1].sym)), (yyvsp[0].code));
      }
#line 4648 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1096 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { 
         (yyval.code) = code_new_inst(i_symbol_deref, 2, code_new_symbol((yyvsp[-1].sym)), (yyvsp[0].code));
      }
#line 4656 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1099 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_define_deref, 2,
            code_new_define((yyvsp[-3].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[-1].code)));
      }
#line 4666 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1104 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_define_deref, 2,
            code_new_define((yyvsp[-3].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[-1].code)));
      }
#line 4676 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1109 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_fac, 1, (yyvsp[-1].code)); }
#line 4682 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1110 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_card, 1, (yyvsp[-1].code)); }
#line 4688 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1111 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_abs, 1, (yyvsp[-1].code)); }
#line 4694 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1112 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_sgn, 1, (yyvsp[-1].code)); }
#line 4700 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1113 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_round, 1, (yyvsp[-1].code)); }
#line 4706 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1114 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_floor, 1, (yyvsp[-1].code)); }
#line 4712 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1115 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_ceil, 1, (yyvsp[-1].code)); }
#line 4718 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1116 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_log, 1, (yyvsp[-1].code)); }
#line 4724 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1117 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_ln, 1, (yyvsp[-1].code)); }
#line 4730 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1118 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_exp, 1, (yyvsp[-1].code)); }
#line 4736 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1119 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_sqrt, 1, (yyvsp[-1].code)); }
#line 4742 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1120 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_sin, 1, (yyvsp[-1].code)); }
#line 4748 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1121 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_cos, 1, (yyvsp[-1].code)); }
#line 4754 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1122 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_tan, 1, (yyvsp[-1].code)); }
#line 4760 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1123 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_asin, 1, (yyvsp[-1].code)); }
#line 4766 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1124 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_acos, 1, (yyvsp[-1].code)); }
#line 4772 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1125 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_atan, 1, (yyvsp[-1].code)); }
#line 4778 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1127 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = (yyvsp[-1].code); }
#line 4784 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1128 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    { (yyval.code) = code_new_inst(i_expr_length, 1, (yyvsp[-1].code)); }
#line 4790 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1129 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_substr, 3, (yyvsp[-5].code), (yyvsp[-3].code), (yyvsp[-1].code));
      }
#line 4798 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1132 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_rand, 2, (yyvsp[-3].code), (yyvsp[-1].code));
      }
#line 4806 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1135 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[-5].code), (yyvsp[-3].code), (yyvsp[-1].code));
      }
#line 4814 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1138 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_ord, 3, (yyvsp[-5].code), (yyvsp[-3].code), (yyvsp[-1].code));
      }
#line 4822 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1141 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_min2, 1, (yyvsp[-1].code));
      }
#line 4830 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1144 "src/zimpl/mmlparse2.y" /* yacc.c:1646  */
    {
         (yyval.code) = code_new_inst(i_expr_max2, 1, (yyvsp[-1].code));
      }
#line 4838 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
    break;


#line 4842 "src/zimpl/mmlparse2.c" /* yacc.c:1646  */
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
