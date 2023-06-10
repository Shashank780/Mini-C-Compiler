/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntaxChecker.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
#include "semantic.h"



extern FILE *yyin;
extern int lineCount;
extern char *tablePtr;
extern char *tablePtr;
extern int nestedCommentCount;
extern int commentFlag;
extern int arrayIndexErr;




char *sourceCode=NULL;
int errorFlag=0;
void makeList(char *,char,int);

#line 95 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INT = 274,
    LONG = 275,
    REGISTER = 276,
    RETURN = 277,
    SHORT = 278,
    SIGNED = 279,
    SIZEOF = 280,
    STATIC = 281,
    STRUCT = 282,
    SWITCH = 283,
    TYPEDEF = 284,
    UNION = 285,
    UNSIGNED = 286,
    VOID = 287,
    VOLATILE = 288,
    WHILE = 289,
    IDENTIFIER = 290,
    CONSTANT = 291,
    FLCONSTANT = 292,
    STRING_LITERAL = 293,
    ELLIPSIS = 294,
    PTR_OP = 295,
    INC_OP = 296,
    DEC_OP = 297,
    LEFT_OP = 298,
    RIGHT_OP = 299,
    LE_OP = 300,
    GE_OP = 301,
    EQ_OP = 302,
    NE_OP = 303,
    AND_OP = 304,
    OR_OP = 305,
    MUL_ASSIGN = 306,
    DIV_ASSIGN = 307,
    MOD_ASSIGN = 308,
    ADD_ASSIGN = 309,
    SUB_ASSIGN = 310,
    LEFT_ASSIGN = 311,
    RIGHT_ASSIGN = 312,
    AND_ASSIGN = 313,
    XOR_ASSIGN = 314,
    OR_ASSIGN = 315,
    TYPE_NAME = 316,
    LOWER_THAN_ELSE = 317
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INT 274
#define LONG 275
#define REGISTER 276
#define RETURN 277
#define SHORT 278
#define SIGNED 279
#define SIZEOF 280
#define STATIC 281
#define STRUCT 282
#define SWITCH 283
#define TYPEDEF 284
#define UNION 285
#define UNSIGNED 286
#define VOID 287
#define VOLATILE 288
#define WHILE 289
#define IDENTIFIER 290
#define CONSTANT 291
#define FLCONSTANT 292
#define STRING_LITERAL 293
#define ELLIPSIS 294
#define PTR_OP 295
#define INC_OP 296
#define DEC_OP 297
#define LEFT_OP 298
#define RIGHT_OP 299
#define LE_OP 300
#define GE_OP 301
#define EQ_OP 302
#define NE_OP 303
#define AND_OP 304
#define OR_OP 305
#define MUL_ASSIGN 306
#define DIV_ASSIGN 307
#define MOD_ASSIGN 308
#define ADD_ASSIGN 309
#define SUB_ASSIGN 310
#define LEFT_ASSIGN 311
#define RIGHT_ASSIGN 312
#define AND_ASSIGN 313
#define XOR_ASSIGN 314
#define OR_ASSIGN 315
#define TYPE_NAME 316
#define LOWER_THAN_ELSE 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1578

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  352

#define YYUNDEFTOK  2
#define YYMAXUTOK   317


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,     2,     2,    76,    69,     2,
      63,    64,    70,    71,    68,    72,    67,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    84,
      77,    83,    78,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    80,    86,    73,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    52,    52,    53,    54,    55,    56,    60,    61,    62,
      63,    64,    65,    66,    67,    71,    72,    76,    77,    78,
      79,    80,    81,    81,    86,    87,    88,    89,    90,    91,
      95,    96,   100,   101,   102,   103,   107,   108,   109,   113,
     114,   115,   119,   120,   121,   122,   123,   127,   128,   129,
     133,   134,   138,   139,   143,   144,   148,   149,   153,   154,
     158,   159,   163,   164,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   182,   183,   187,   191,   192,
     196,   197,   198,   199,   200,   201,   205,   206,   210,   211,
     215,   216,   217,   218,   219,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   238,   239,   240,
     244,   245,   249,   250,   254,   258,   259,   260,   261,   265,
     266,   270,   271,   272,   276,   277,   278,   282,   283,   287,
     288,   292,   293,   297,   298,   302,   303,   304,   305,   306,
     307,   308,   312,   313,   314,   315,   319,   320,   325,   326,
     330,   331,   335,   336,   337,   341,   342,   346,   347,   351,
     352,   353,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   369,   370,   371,   375,   376,   380,   381,   382,   383,
     384,   385,   389,   390,   391,   395,   396,   397,   398,   402,
     403,   407,   408,   412,   413,   417,   419,   422,   427,   429,
     432,   434,   439,   440,   441,   442,   443,   447,   448,   452,
     453,   457,   458,   459,   460
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INT", "LONG", "REGISTER", "RETURN", "SHORT",
  "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION",
  "UNSIGNED", "VOID", "VOLATILE", "WHILE", "IDENTIFIER", "CONSTANT",
  "FLCONSTANT", "STRING_LITERAL", "ELLIPSIS", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPE_NAME", "LOWER_THAN_ELSE", "'('", "')'", "'['", "']'",
  "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'",
  "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "$@1", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,    40,    41,    91,    93,    46,    44,    38,
      42,    43,    45,   126,    33,    47,    37,    60,    62,    94,
     124,    63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF (-205)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1043,  -205,  -205,  -205,  -205,   -23,  -205,  -205,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,
    -205,  -205,    77,     3,  -205,    14,  1309,  1309,  -205,   -20,
    -205,  1309,   650,    -6,    36,   792,  -205,  -205,   -67,     2,
     -17,  -205,  -205,     3,  -205,   -45,  -205,   617,  -205,  -205,
       6,  1341,  -205,   315,  -205,    14,  -205,   650,  1088,   240,
      -6,  -205,  -205,     2,    -7,   -30,  -205,  -205,  -205,  -205,
      77,  -205,  1157,  -205,   650,  1341,  1341,   198,  -205,    37,
    1341,    -5,  1450,    19,    97,   681,    67,   160,   147,  1175,
    1464,   153,   157,   141,  -205,  -205,  -205,  1504,  1504,   841,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,   197,
     307,  1450,  -205,   108,    73,   171,   104,   187,   163,   177,
     156,   201,   -29,  -205,  -205,    -2,  -205,  -205,  -205,   399,
     470,  -205,  -205,  -205,  -205,   180,  -205,  -205,  -205,  -205,
      48,   204,   205,  -205,    61,  -205,  -205,  -205,  -205,   213,
      18,  1450,     2,  -205,  -205,  1157,  -205,  -205,  -205,   756,
    -205,  -205,  -205,  1450,    40,  -205,   203,  -205,  -205,   209,
    -205,   681,   246,  1198,   199,  1450,  -205,    55,   841,  -205,
    1450,  1450,   681,  1450,  -205,  -205,    69,    78,   228,   261,
    -205,  -205,  1342,  1450,   262,  -205,  -205,  -205,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  1450,  -205,  1450,  1450,
    1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,
    1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,  -205,  -205,
     541,  -205,  -205,   913,  1356,  -205,    15,  -205,    57,  -205,
    1270,  -205,   264,  -205,  -205,  -205,  -205,  -205,    49,  -205,
    -205,    37,  -205,  1450,   681,  -205,   237,  1198,  -205,   106,
    -205,   238,   122,   124,  -205,  -205,   978,   137,  -205,  1450,
    -205,  -205,   130,  -205,   121,  -205,  -205,  -205,  -205,  -205,
     108,   108,    73,    73,   171,   171,   171,   171,   104,   104,
     187,   163,   177,   156,   201,    60,  -205,  -205,  -205,   241,
     243,  -205,   242,    57,  1124,  1396,  -205,  -205,  -205,  1133,
    -205,  -205,  -205,  -205,  1450,  1410,   681,  -205,   681,   681,
    -205,  -205,  1450,  -205,  1450,  -205,  -205,  -205,  -205,   251,
    -205,   250,  -205,  -205,   133,   681,   139,   342,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,   271,  -205,   681,   681,  -205,
    -205,  -205
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    93,    96,   131,   101,     0,    91,   100,    98,    99,
      94,    97,   102,    92,   110,    90,   111,   103,    95,   132,
     135,   106,     0,   142,   210,     0,    80,    82,   104,     0,
     105,    84,     0,   134,     0,     0,   207,   209,   126,     0,
       0,   146,   144,   143,    78,     0,    86,    88,    81,    83,
     109,     0,    85,     0,   189,     0,   214,     0,     0,     0,
     133,     1,   208,     0,   129,     0,   127,   136,   147,   145,
       0,    79,     0,   212,     0,     0,   116,     0,   112,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     4,     3,     5,     0,     0,     0,
      24,    25,    26,    27,    28,    29,   193,   185,     7,    17,
      30,     0,    32,    36,    39,    42,    47,    50,    52,    54,
      56,    58,    60,    62,    75,     0,   191,   176,   177,     0,
       0,   178,   179,   180,   181,    88,   190,   213,   155,   141,
     154,     0,   148,   150,     0,     2,   138,    30,    77,     0,
       0,     0,     0,   124,    87,     0,   171,    89,   211,     0,
     115,   108,   113,     0,     0,   119,   121,   117,   204,     0,
     203,     0,     0,     0,     0,     0,   205,     0,     0,    21,
       0,     0,     0,     0,    18,    19,     0,   157,     0,     0,
      13,    14,     0,     0,     0,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    64,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   194,   187,
       0,   186,   192,     0,     0,   152,   159,   153,   160,   139,
       0,   140,     0,   137,   125,   130,   128,   174,     0,   107,
     122,     0,   114,     0,     0,   184,     0,     0,   202,     0,
     206,     0,     0,     0,   182,     6,     0,   159,   158,     0,
      12,     9,     0,    15,     0,    11,    63,    33,    34,    35,
      37,    38,    40,    41,    45,    46,    43,    44,    48,    49,
      51,    53,    55,    57,    59,     0,    76,   188,   167,     0,
       0,   163,     0,   161,     0,     0,   149,   151,   156,     0,
     172,   120,   123,   183,     0,     0,     0,    22,     0,     0,
      31,    10,     0,     8,     0,   168,   162,   164,   169,     0,
     165,     0,   173,   175,     0,     0,     0,   195,    23,   197,
     198,    16,    61,   170,   166,     0,   200,     0,     0,   199,
     201,   196
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -205,  -205,  -205,  -205,   -57,  -205,  -205,   -94,    42,    58,
      29,    70,   148,   105,   145,   146,   149,  -205,   -54,   -21,
    -205,   -88,   -62,     7,     0,  -205,   301,  -205,   -32,  -205,
    -205,   297,   -63,   -46,  -205,   128,  -205,   310,   223,   218,
      -9,   -28,   -14,  -205,   -55,  -205,   140,  -205,   214,  -132,
    -204,  -133,  -205,   -61,  -205,    28,    21,   252,  -169,  -205,
    -205,  -205,  -205,   347,  -205
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   108,   109,   272,   110,   338,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     206,   125,   149,    54,    55,    45,    46,    26,    27,    28,
      29,    77,    78,    79,   164,   165,    30,    65,    66,    31,
      32,    33,    34,    43,   299,   142,   143,   144,   188,   300,
     238,   157,   248,   126,   127,   128,    57,   130,   131,   132,
     133,   134,    35,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   177,   147,   141,   257,   148,    60,    24,   237,    42,
       3,   186,    38,    40,   162,    50,    47,   207,    63,    76,
     169,   225,   247,    70,   172,   147,    48,    49,   148,    69,
     160,    52,   303,   179,   167,    25,    19,    64,   152,    71,
     184,   185,    24,    76,    76,    76,   135,    67,    76,    20,
      20,   156,   226,   187,   147,   268,   153,    58,   140,    59,
      56,   135,    39,   303,   136,    51,   227,    76,    74,   232,
     166,    20,    20,    23,   129,    73,   151,    22,   233,   168,
     234,   136,   228,    20,    23,   137,   152,   259,   315,   245,
     186,    75,   262,   263,   147,   186,   162,   148,    44,    22,
      22,   250,   158,   170,   244,   274,   147,    23,   251,   148,
     255,   233,    20,   234,   277,   278,   279,   309,    23,   163,
     304,   264,   305,   227,   252,   241,   236,    76,   227,   242,
     173,   235,   187,   265,   156,   310,   136,   227,   295,   260,
      22,   266,   324,   234,   211,   212,    76,    23,    23,   215,
     216,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   232,
     316,   273,   302,   267,   227,   320,   333,   147,   208,   171,
     148,   217,   218,   209,   210,   276,   318,   323,   319,   227,
     227,   312,   227,   313,   321,   174,   147,   345,   322,   148,
     266,   227,   234,   347,     2,     3,   296,   227,    60,     4,
     175,     5,   147,     7,   213,   214,   180,     8,     9,   236,
     181,    11,    12,   182,    40,    14,   334,   336,    16,    17,
      18,    19,   221,   140,   219,   220,   223,   189,   190,   191,
     140,    41,   166,   331,   284,   285,   286,   287,   147,   329,
     224,   148,   267,   280,   281,   337,   222,   339,   340,    21,
     192,    68,   193,    72,   194,    90,   140,   147,   239,    80,
     342,   282,   283,   240,   346,   145,    94,    95,    96,   243,
     256,    97,    98,   258,   161,   253,   350,   351,   156,   288,
     289,   254,   269,    80,    80,    80,   270,   275,    80,   308,
     314,   341,   317,    99,   140,   325,   146,   326,   327,   100,
     101,   102,   103,   104,   105,   343,   344,    80,     1,    81,
      82,     2,     3,    83,    84,    85,     4,   291,     5,     6,
       7,    86,    87,    88,     8,     9,    10,    89,    11,    12,
      90,    13,    14,    91,    15,    16,    17,    18,    19,    92,
      93,    94,    95,    96,   348,   349,    97,    98,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   292,   290,
     293,   154,   159,   150,   294,   246,    21,    80,    99,   311,
     307,   230,    62,     0,   100,   101,   102,   103,   104,   105,
     205,     0,   261,     0,     0,     0,    80,     0,     0,   106,
      53,   107,     1,    81,    82,     2,     3,    83,    84,    85,
       4,     0,     5,     6,     7,    86,    87,    88,     8,     9,
      10,    89,    11,    12,    90,    13,    14,    91,    15,    16,
      17,    18,    19,    92,    93,    94,    95,    96,     0,     0,
      97,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,    99,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,    81,    82,     0,     0,    83,    84,
      85,     0,     0,   106,    53,   229,    86,    87,    88,     0,
       0,     0,    89,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,    81,    82,     0,     0,    83,
      84,    85,     0,     0,   106,    53,   231,    86,    87,    88,
       0,     0,     0,    89,     0,     0,    90,     0,     0,    91,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,     0,     0,
       1,     0,     0,     2,     3,   106,    53,   297,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,     0,
      11,    12,     0,    13,    14,     0,    15,    16,    17,    18,
      19,     0,     0,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,     0,    11,    12,     0,    13,    14,    21,    15,
      16,    17,    18,    19,     0,    81,    82,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,    87,    88,
      72,     0,    53,    89,     0,     0,    90,     0,     0,    91,
       0,    21,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,     0,     0,
       0,     0,     2,     3,     0,   106,    53,     4,     0,     5,
       0,     7,     0,     0,     0,     8,     9,     0,     0,    11,
      12,     0,     0,    14,     0,     0,    16,    17,    18,    19,
       0,     0,    61,     0,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,     0,    11,    12,    21,    13,    14,
       0,    15,    16,    17,    18,    19,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,     0,     0,     0,     0,     2,     3,     0,
       0,     0,     4,    21,     5,    22,     7,     0,     0,     0,
       8,     9,    23,     0,    11,    12,    90,     0,    14,     0,
       0,    16,    17,    18,    19,     0,   145,    94,    95,    96,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,   233,   298,   234,     0,
       0,     1,     0,    23,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,   266,   298,   234,     0,     0,     1,     0,    23,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,    21,     0,    22,     8,     9,    10,
       0,    11,    12,    23,    13,    14,     0,    15,    16,    17,
      18,    19,     0,   138,     0,     0,     0,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,     0,    11,    12,    21,
      13,    14,   139,    15,    16,    17,    18,    19,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,    94,
      95,    96,     0,     0,    97,    98,     0,     0,     0,     0,
       0,     0,    90,     0,     0,    21,     0,     0,   328,     0,
       0,     0,   145,    94,    95,    96,    99,     0,    97,    98,
      90,     0,   100,   101,   102,   103,   104,   105,     0,     0,
     145,    94,    95,    96,     0,     0,    97,    98,   155,   332,
      99,     0,     0,    90,     0,     0,   100,   101,   102,   103,
     104,   105,     0,   145,    94,    95,    96,     0,    99,    97,
      98,     0,   155,     0,   100,   101,   102,   103,   104,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,     1,     0,     0,     2,     3,     0,     0,
       0,     4,   106,     5,     6,     7,     0,     0,     0,     8,
       9,    10,     0,    11,    12,     0,    13,    14,     0,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,   306,
       0,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    21,    11,    12,     0,    13,    14,     0,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     0,     7,     0,     0,     0,
       8,     9,     0,     0,    11,    12,     0,    90,    14,     0,
      21,    16,    17,    18,    19,     0,     0,   145,    94,    95,
      96,    90,     0,    97,    98,     0,     0,     0,     0,     0,
       0,   145,    94,    95,    96,     0,     0,    97,    98,     0,
       0,     0,    21,     0,     0,    99,   271,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,     0,     0,    99,
       0,    90,   301,     0,     0,   100,   101,   102,   103,   104,
     105,   145,    94,    95,    96,    90,     0,    97,    98,     0,
       0,     0,     0,     0,     0,   145,    94,    95,    96,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   330,     0,     0,   100,   101,   102,   103,   104,
     105,     0,     0,    99,   335,    90,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   145,    94,    95,    96,    90,
       0,    97,    98,     0,     0,     0,     0,     0,     0,   145,
      94,    95,    96,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,     0,     0,   178,     0,    90,
       0,     0,     0,   100,   101,   102,   103,   104,   105,   145,
      94,    95,    96,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   183,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105
};

static const yytype_int16 yycheck[] =
{
       0,    89,    59,    58,   173,    59,    34,     0,   140,    23,
       7,    99,    35,    22,    77,    35,    25,   111,    85,    51,
      82,    50,   155,    68,    85,    82,    26,    27,    82,    43,
      76,    31,   236,    90,    80,    35,    33,    35,    68,    84,
      97,    98,    35,    75,    76,    77,    55,    64,    80,    35,
      35,    72,    81,    99,   111,   187,    86,    63,    58,    65,
      32,    70,    85,   267,    57,    85,    68,    99,    47,   130,
      79,    35,    35,    70,    53,    47,    83,    63,    63,    84,
      65,    74,    84,    35,    70,    57,    68,   175,   257,   151,
     178,    85,   180,   181,   151,   183,   159,   151,    84,    63,
      63,   163,    74,    84,    86,   193,   163,    70,    68,   163,
     171,    63,    35,    65,   208,   209,   210,    68,    70,    82,
      63,   182,    65,    68,    84,    64,   140,   159,    68,    68,
      63,   140,   178,    64,   155,    86,   129,    68,   226,    84,
      63,    63,    82,    65,    71,    72,   178,    70,    70,    45,
      46,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   230,
      64,   192,   234,   187,    68,   269,   309,   234,    70,    82,
     234,    77,    78,    75,    76,   206,    64,    66,    64,    68,
      68,   253,    68,   254,    64,    35,   253,    64,    68,   253,
      63,    68,    65,    64,     6,     7,   227,    68,   236,    11,
      63,    13,   269,    15,    43,    44,    63,    19,    20,   233,
      63,    23,    24,    82,   233,    27,   314,   315,    30,    31,
      32,    33,    69,   233,    47,    48,    80,    40,    41,    42,
     240,    23,   251,   305,   215,   216,   217,   218,   305,   304,
      49,   305,   266,   211,   212,   316,    79,   318,   319,    61,
      63,    43,    65,    83,    67,    25,   266,   324,    64,    51,
     324,   213,   214,    68,   335,    35,    36,    37,    38,    66,
      34,    41,    42,    84,    86,    82,   347,   348,   309,   219,
     220,    82,    64,    75,    76,    77,    35,    35,    80,    35,
      63,   322,    64,    63,   304,    64,    66,    64,    66,    69,
      70,    71,    72,    73,    74,    64,    66,    99,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   222,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    12,    84,    41,    42,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,   223,   221,
     224,    70,    75,    63,   225,   152,    61,   159,    63,   251,
     240,   129,    35,    -1,    69,    70,    71,    72,    73,    74,
      83,    -1,   178,    -1,    -1,    -1,   178,    -1,    -1,    84,
      85,    86,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,     4,     5,    -1,    -1,     8,     9,
      10,    -1,    -1,    84,    85,    86,    16,    17,    18,    -1,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,     4,     5,    -1,    -1,     8,
       9,    10,    -1,    -1,    84,    85,    86,    16,    17,    18,
      -1,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,     7,    84,    85,    86,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    30,    31,    32,
      33,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    -1,    23,    24,    -1,    26,    27,    61,    29,
      30,    31,    32,    33,    -1,     4,     5,    -1,    -1,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      83,    -1,    85,    22,    -1,    -1,    25,    -1,    -1,    28,
      -1,    61,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,     6,     7,    -1,    84,    85,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    19,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    30,    31,    32,    33,
      -1,    -1,     0,    -1,    -1,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    -1,    23,    24,    61,    26,    27,
      -1,    29,    30,    31,    32,    33,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    61,    13,    63,    15,    -1,    -1,    -1,
      19,    20,    70,    -1,    23,    24,    25,    -1,    27,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    63,    64,    65,    -1,
      -1,     3,    -1,    70,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    63,    64,    65,    -1,    -1,     3,    -1,    70,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    61,    -1,    63,    19,    20,    21,
      -1,    23,    24,    70,    26,    27,    -1,    29,    30,    31,
      32,    33,    -1,    35,    -1,    -1,    -1,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    -1,    23,    24,    61,
      26,    27,    64,    29,    30,    31,    32,    33,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    61,    -1,    -1,    64,    -1,
      -1,    -1,    35,    36,    37,    38,    63,    -1,    41,    42,
      25,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      35,    36,    37,    38,    -1,    -1,    41,    42,    85,    86,
      63,    -1,    -1,    25,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    35,    36,    37,    38,    -1,    63,    41,
      42,    -1,    85,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    84,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    -1,    23,    24,    -1,    26,    27,    -1,    29,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    61,    23,    24,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    25,    27,    -1,
      61,    30,    31,    32,    33,    -1,    -1,    35,    36,    37,
      38,    25,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    -1,
      -1,    -1,    61,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    63,
      -1,    25,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    35,    36,    37,    38,    25,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    -1,    63,    64,    25,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    35,    36,    37,    38,    25,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    63,    -1,    25,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    35,
      36,    37,    38,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    27,    29,    30,    31,    32,    33,
      35,    61,    63,    70,   110,   111,   114,   115,   116,   117,
     123,   126,   127,   128,   129,   149,   150,   151,    35,    85,
     127,   126,   129,   130,    84,   112,   113,   127,   111,   111,
      35,    85,   111,    85,   110,   111,   142,   143,    63,    65,
     128,     0,   150,    85,    35,   124,   125,    64,   126,   129,
      68,    84,    83,   142,   143,    85,   115,   118,   119,   120,
     126,     4,     5,     8,     9,    10,    16,    17,    18,    22,
      25,    28,    34,    35,    36,    37,    38,    41,    42,    63,
      69,    70,    71,    72,    73,    74,    84,    86,    88,    89,
      91,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   108,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   127,   110,   142,    35,    64,
     111,   131,   132,   133,   134,    35,    66,    91,   105,   109,
     124,    83,    68,    86,   113,    85,   106,   138,   142,   118,
     120,    86,   119,    82,   121,   122,   127,   120,    84,   109,
      84,    82,   140,    63,    35,    63,    84,   108,    63,    91,
      63,    63,    82,    63,    91,    91,   108,   120,   135,    40,
      41,    42,    63,    65,    67,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    83,   107,    94,    70,    75,
      76,    71,    72,    43,    44,    45,    46,    77,    78,    47,
      48,    69,    79,    80,    49,    50,    81,    68,    84,    86,
     144,    86,   140,    63,    65,   127,   129,   136,   137,    64,
      68,    64,    68,    66,    86,   109,   125,   138,   139,    86,
     109,    68,    84,    82,    82,   140,    34,   145,    84,   108,
      84,   135,   108,   108,   140,    64,    63,   129,   136,    64,
      35,    64,    90,   106,   108,    35,   106,    94,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    98,    98,
      99,   100,   101,   102,   103,   108,   106,    86,    64,   131,
     136,    66,   109,   137,    63,    65,    39,   133,    35,    68,
      86,   122,   109,   140,    63,   145,    64,    64,    64,    64,
      94,    64,    68,    66,    82,    64,    64,    66,    64,   131,
      66,   109,    86,   138,   108,    64,   108,   140,    92,   140,
     140,   106,   105,    64,    66,    64,   140,    64,    12,    84,
     140,   140
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    92,    91,    93,    93,    93,    93,    93,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    96,    97,
      97,    97,    98,    98,    98,    98,    98,    99,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   108,   108,   109,   110,   110,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   113,
     114,   114,   114,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   116,
     117,   117,   118,   118,   119,   120,   120,   120,   120,   121,
     121,   122,   122,   122,   123,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   128,   128,   128,   128,   128,
     128,   128,   129,   129,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   133,   134,   134,   135,   135,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   138,   138,   138,   139,   139,   140,   140,   140,   140,
     140,   140,   141,   141,   141,   142,   142,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   146,   147,   147,
     147,   147,   148,   148,   148,   148,   148,   149,   149,   150,
     150,   151,   151,   151,   151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     0,     5,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     2,
       1,     1,     1,     2,     3,     2,     1,     2,     1,     1,
       3,     1,     2,     3,     4,     5,     2,     1,     3,     1,
       3,     1,     1,     2,     1,     1,     3,     4,     3,     4,
       4,     3,     1,     2,     2,     3,     1,     2,     1,     3,
       1,     3,     2,     2,     1,     1,     3,     1,     2,     1,
       1,     2,     3,     2,     3,     3,     4,     2,     3,     3,
       4,     1,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     3,     3,     4,     1,
       2,     1,     2,     1,     2,     5,     7,     5,     5,     7,
       6,     7,     3,     2,     2,     2,     3,     1,     2,     1,
       1,     4,     3,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 52 "syntaxChecker.y"
                                { yyval=checkScope(tablePtr,lineCount); }
#line 1968 "y.tab.c"
    break;

  case 3:
#line 53 "syntaxChecker.y"
                                {tempCheckType=4;}
#line 1974 "y.tab.c"
    break;

  case 4:
#line 54 "syntaxChecker.y"
                                { addConstant(tablePtr, lineCount);}
#line 1980 "y.tab.c"
    break;

  case 5:
#line 55 "syntaxChecker.y"
                                { makeList(tablePtr, 's', lineCount);}
#line 1986 "y.tab.c"
    break;

  case 6:
#line 56 "syntaxChecker.y"
                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); yyval=yyvsp[-1]; }
#line 1992 "y.tab.c"
    break;

  case 7:
#line 60 "syntaxChecker.y"
                               {yyval=yyvsp[0];}
#line 1998 "y.tab.c"
    break;

  case 8:
#line 61 "syntaxChecker.y"
                                                                { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2004 "y.tab.c"
    break;

  case 9:
#line 62 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2010 "y.tab.c"
    break;

  case 10:
#line 63 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2016 "y.tab.c"
    break;

  case 11:
#line 64 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'v', lineCount);}
#line 2022 "y.tab.c"
    break;

  case 12:
#line 65 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'v', lineCount);}
#line 2028 "y.tab.c"
    break;

  case 13:
#line 66 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'o', lineCount);}
#line 2034 "y.tab.c"
    break;

  case 14:
#line 67 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'o', lineCount);}
#line 2040 "y.tab.c"
    break;

  case 15:
#line 71 "syntaxChecker.y"
                                {yyval=yyvsp[0];}
#line 2046 "y.tab.c"
    break;

  case 16:
#line 72 "syntaxChecker.y"
                                                             { makeList(",",'p', lineCount); }
#line 2052 "y.tab.c"
    break;

  case 17:
#line 76 "syntaxChecker.y"
                             {yyval=yyvsp[0];}
#line 2058 "y.tab.c"
    break;

  case 18:
#line 77 "syntaxChecker.y"
                                        { makeList("++",'o', lineCount); }
#line 2064 "y.tab.c"
    break;

  case 19:
#line 78 "syntaxChecker.y"
                                        { makeList("--",'o', lineCount); }
#line 2070 "y.tab.c"
    break;

  case 21:
#line 80 "syntaxChecker.y"
                                        { makeList("sizeof",'o', lineCount); }
#line 2076 "y.tab.c"
    break;

  case 22:
#line 81 "syntaxChecker.y"
                                        { makeList("sizeof",'o', lineCount); }
#line 2082 "y.tab.c"
    break;

  case 23:
#line 82 "syntaxChecker.y"
                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2088 "y.tab.c"
    break;

  case 24:
#line 86 "syntaxChecker.y"
              { makeList("&",'o', lineCount); }
#line 2094 "y.tab.c"
    break;

  case 25:
#line 87 "syntaxChecker.y"
              { makeList("*",'o', lineCount); }
#line 2100 "y.tab.c"
    break;

  case 26:
#line 88 "syntaxChecker.y"
              { makeList("+",'o', lineCount); }
#line 2106 "y.tab.c"
    break;

  case 27:
#line 89 "syntaxChecker.y"
              { makeList("-",'o', lineCount); }
#line 2112 "y.tab.c"
    break;

  case 28:
#line 90 "syntaxChecker.y"
              { makeList("~",'o', lineCount); }
#line 2118 "y.tab.c"
    break;

  case 29:
#line 91 "syntaxChecker.y"
              { makeList("!",'o', lineCount); }
#line 2124 "y.tab.c"
    break;

  case 30:
#line 95 "syntaxChecker.y"
                             {yyval=yyvsp[0];}
#line 2130 "y.tab.c"
    break;

  case 31:
#line 96 "syntaxChecker.y"
                                            { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2136 "y.tab.c"
    break;

  case 32:
#line 100 "syntaxChecker.y"
                          {yyval=yyvsp[0];}
#line 2142 "y.tab.c"
    break;

  case 33:
#line 101 "syntaxChecker.y"
                                                        { makeList("*",'o', lineCount); }
#line 2148 "y.tab.c"
    break;

  case 34:
#line 102 "syntaxChecker.y"
                                                        { makeList("/",'o', lineCount); }
#line 2154 "y.tab.c"
    break;

  case 35:
#line 103 "syntaxChecker.y"
                                                        { makeList("%",'o', lineCount); }
#line 2160 "y.tab.c"
    break;

  case 36:
#line 107 "syntaxChecker.y"
                                    {yyval=yyvsp[0];}
#line 2166 "y.tab.c"
    break;

  case 37:
#line 108 "syntaxChecker.y"
                                                            { makeList("+",'o', lineCount); }
#line 2172 "y.tab.c"
    break;

  case 38:
#line 109 "syntaxChecker.y"
                                                            { makeList("-",'o', lineCount); }
#line 2178 "y.tab.c"
    break;

  case 39:
#line 113 "syntaxChecker.y"
                              {yyval=yyvsp[0];}
#line 2184 "y.tab.c"
    break;

  case 40:
#line 114 "syntaxChecker.y"
                                                        { makeList("<<",'o', lineCount); }
#line 2190 "y.tab.c"
    break;

  case 41:
#line 115 "syntaxChecker.y"
                                                        { makeList(">>",'o', lineCount); }
#line 2196 "y.tab.c"
    break;

  case 42:
#line 119 "syntaxChecker.y"
                           {yyval=yyvsp[0];}
#line 2202 "y.tab.c"
    break;

  case 45:
#line 122 "syntaxChecker.y"
                                                       { makeList("<=",'o', lineCount); }
#line 2208 "y.tab.c"
    break;

  case 46:
#line 123 "syntaxChecker.y"
                                                       { makeList(">=",'o', lineCount); }
#line 2214 "y.tab.c"
    break;

  case 47:
#line 127 "syntaxChecker.y"
                                {yyval=yyvsp[0];}
#line 2220 "y.tab.c"
    break;

  case 48:
#line 128 "syntaxChecker.y"
                                                          { makeList("==",'o', lineCount); }
#line 2226 "y.tab.c"
    break;

  case 49:
#line 129 "syntaxChecker.y"
                                                          { makeList("!=",'o', lineCount); }
#line 2232 "y.tab.c"
    break;

  case 50:
#line 133 "syntaxChecker.y"
                              {yyval=yyvsp[0];}
#line 2238 "y.tab.c"
    break;

  case 51:
#line 134 "syntaxChecker.y"
                                                        { makeList("&", 'o', lineCount);}
#line 2244 "y.tab.c"
    break;

  case 52:
#line 138 "syntaxChecker.y"
                         {yyval=yyvsp[0];}
#line 2250 "y.tab.c"
    break;

  case 53:
#line 139 "syntaxChecker.y"
                                                        { makeList("^", 'o', lineCount); }
#line 2256 "y.tab.c"
    break;

  case 54:
#line 143 "syntaxChecker.y"
                                  {yyval=yyvsp[0];}
#line 2262 "y.tab.c"
    break;

  case 55:
#line 144 "syntaxChecker.y"
                                                              { makeList("|", 'o', lineCount); }
#line 2268 "y.tab.c"
    break;

  case 56:
#line 148 "syntaxChecker.y"
                                  {yyval=yyvsp[0];}
#line 2274 "y.tab.c"
    break;

  case 57:
#line 149 "syntaxChecker.y"
                                                                { makeList("&&", 'o', lineCount); }
#line 2280 "y.tab.c"
    break;

  case 58:
#line 153 "syntaxChecker.y"
                                 {yyval=yyvsp[0];}
#line 2286 "y.tab.c"
    break;

  case 59:
#line 154 "syntaxChecker.y"
                                                             { makeList("||", 'o', lineCount); }
#line 2292 "y.tab.c"
    break;

  case 60:
#line 158 "syntaxChecker.y"
                                {yyval=yyvsp[0];}
#line 2298 "y.tab.c"
    break;

  case 61:
#line 159 "syntaxChecker.y"
                                                                          { makeList("?:",'o', lineCount); }
#line 2304 "y.tab.c"
    break;

  case 62:
#line 163 "syntaxChecker.y"
                                 {yyval=yyvsp[0];}
#line 2310 "y.tab.c"
    break;

  case 63:
#line 164 "syntaxChecker.y"
                                                                     {yyval=yyvsp[0]; checkType(yyvsp[-2],yyvsp[0],lineCount);}
#line 2316 "y.tab.c"
    break;

  case 64:
#line 168 "syntaxChecker.y"
                        { makeList("=",'o', lineCount); }
#line 2322 "y.tab.c"
    break;

  case 65:
#line 169 "syntaxChecker.y"
                        { makeList("*=",'o', lineCount); }
#line 2328 "y.tab.c"
    break;

  case 66:
#line 170 "syntaxChecker.y"
                        { makeList("/=",'o', lineCount); }
#line 2334 "y.tab.c"
    break;

  case 67:
#line 171 "syntaxChecker.y"
                        { makeList("%=",'o', lineCount); }
#line 2340 "y.tab.c"
    break;

  case 68:
#line 172 "syntaxChecker.y"
                        { makeList("+=",'o', lineCount); }
#line 2346 "y.tab.c"
    break;

  case 69:
#line 173 "syntaxChecker.y"
                        { makeList("-=",'o', lineCount); }
#line 2352 "y.tab.c"
    break;

  case 70:
#line 174 "syntaxChecker.y"
                        { makeList("<<=",'o', lineCount); }
#line 2358 "y.tab.c"
    break;

  case 71:
#line 175 "syntaxChecker.y"
                        { makeList(">==",'o', lineCount); }
#line 2364 "y.tab.c"
    break;

  case 72:
#line 176 "syntaxChecker.y"
                        { makeList("&=",'o', lineCount); }
#line 2370 "y.tab.c"
    break;

  case 73:
#line 177 "syntaxChecker.y"
                        { makeList("^=",'o', lineCount); }
#line 2376 "y.tab.c"
    break;

  case 74:
#line 178 "syntaxChecker.y"
                        { makeList("|=",'o', lineCount); }
#line 2382 "y.tab.c"
    break;

  case 75:
#line 182 "syntaxChecker.y"
                                {yyval=yyvsp[0];}
#line 2388 "y.tab.c"
    break;

  case 76:
#line 183 "syntaxChecker.y"
                                               { makeList(",", 'p', lineCount); }
#line 2394 "y.tab.c"
    break;

  case 78:
#line 191 "syntaxChecker.y"
                                                          { makeList(";", 'p', lineCount);typeBuffer=' '; }
#line 2400 "y.tab.c"
    break;

  case 79:
#line 192 "syntaxChecker.y"
                                                          { makeList(";", 'p', lineCount); typeBuffer=' ';}
#line 2406 "y.tab.c"
    break;

  case 87:
#line 206 "syntaxChecker.y"
                                                   { makeList(",", 'p', lineCount); }
#line 2412 "y.tab.c"
    break;

  case 89:
#line 211 "syntaxChecker.y"
                                     { makeList("=", 'o', lineCount); }
#line 2418 "y.tab.c"
    break;

  case 90:
#line 215 "syntaxChecker.y"
                        { makeList("typedef", 'k', lineCount);}
#line 2424 "y.tab.c"
    break;

  case 91:
#line 216 "syntaxChecker.y"
                        { makeList("extern", 'k', lineCount);}
#line 2430 "y.tab.c"
    break;

  case 92:
#line 217 "syntaxChecker.y"
                        { makeList("static", 'k', lineCount);}
#line 2436 "y.tab.c"
    break;

  case 93:
#line 218 "syntaxChecker.y"
                        { makeList("auto", 'k', lineCount);}
#line 2442 "y.tab.c"
    break;

  case 94:
#line 219 "syntaxChecker.y"
                        { makeList("register", 'k', lineCount);}
#line 2448 "y.tab.c"
    break;

  case 95:
#line 223 "syntaxChecker.y"
                        { makeList("void", 'k', lineCount);typeBuffer='v';}
#line 2454 "y.tab.c"
    break;

  case 96:
#line 224 "syntaxChecker.y"
                        { makeList("char", 'k', lineCount); typeBuffer='c';}
#line 2460 "y.tab.c"
    break;

  case 97:
#line 225 "syntaxChecker.y"
                        { makeList("short", 'k', lineCount);}
#line 2466 "y.tab.c"
    break;

  case 98:
#line 226 "syntaxChecker.y"
                        { makeList("int", 'k', lineCount); typeBuffer='i';}
#line 2472 "y.tab.c"
    break;

  case 99:
#line 227 "syntaxChecker.y"
                        { makeList("long", 'k', lineCount);}
#line 2478 "y.tab.c"
    break;

  case 100:
#line 228 "syntaxChecker.y"
                        { makeList("float", 'k', lineCount);	typeBuffer='f';}
#line 2484 "y.tab.c"
    break;

  case 101:
#line 229 "syntaxChecker.y"
                        { makeList("double", 'k', lineCount);}
#line 2490 "y.tab.c"
    break;

  case 102:
#line 230 "syntaxChecker.y"
                        { makeList("signed", 'k', lineCount);}
#line 2496 "y.tab.c"
    break;

  case 103:
#line 231 "syntaxChecker.y"
                        { makeList("unsigned", 'k', lineCount);}
#line 2502 "y.tab.c"
    break;

  case 110:
#line 244 "syntaxChecker.y"
                        { makeList("struct", 'k', lineCount);}
#line 2508 "y.tab.c"
    break;

  case 111:
#line 245 "syntaxChecker.y"
                        { makeList("union", 'k', lineCount);}
#line 2514 "y.tab.c"
    break;

  case 114:
#line 254 "syntaxChecker.y"
                                                              { makeList(";", 'p', lineCount); }
#line 2520 "y.tab.c"
    break;

  case 120:
#line 266 "syntaxChecker.y"
                                                       { makeList(",", 'p', lineCount); }
#line 2526 "y.tab.c"
    break;

  case 122:
#line 271 "syntaxChecker.y"
                                                { makeList(":", 'p', lineCount); }
#line 2532 "y.tab.c"
    break;

  case 123:
#line 272 "syntaxChecker.y"
                                                { makeList(":", 'p', lineCount); }
#line 2538 "y.tab.c"
    break;

  case 124:
#line 276 "syntaxChecker.y"
                                                        { makeList("enum", 'k', lineCount);}
#line 2544 "y.tab.c"
    break;

  case 125:
#line 277 "syntaxChecker.y"
                                                        { makeList("enum", 'k', lineCount); makeList(tablePtr, 'v', lineCount); }
#line 2550 "y.tab.c"
    break;

  case 126:
#line 278 "syntaxChecker.y"
                                                        { makeList("enum", 'k', lineCount); makeList(tablePtr, 'v', lineCount); }
#line 2556 "y.tab.c"
    break;

  case 128:
#line 283 "syntaxChecker.y"
                                         { makeList(",", 'p', lineCount); }
#line 2562 "y.tab.c"
    break;

  case 129:
#line 287 "syntaxChecker.y"
                                                { makeList(tablePtr, 'v', lineCount); }
#line 2568 "y.tab.c"
    break;

  case 130:
#line 288 "syntaxChecker.y"
                                                { makeList("=", 'o', lineCount); makeList("tablePtr", 'v', lineCount); }
#line 2574 "y.tab.c"
    break;

  case 131:
#line 292 "syntaxChecker.y"
                        { makeList("const", 'k', lineCount); }
#line 2580 "y.tab.c"
    break;

  case 132:
#line 293 "syntaxChecker.y"
                        { makeList("volatile", 'k', lineCount); }
#line 2586 "y.tab.c"
    break;

  case 135:
#line 302 "syntaxChecker.y"
                                                                {  checkDeclaration(tablePtr,lineCount,scopeCount);}
#line 2592 "y.tab.c"
    break;

  case 136:
#line 303 "syntaxChecker.y"
                                                                {  makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2598 "y.tab.c"
    break;

  case 137:
#line 304 "syntaxChecker.y"
                                                                { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2604 "y.tab.c"
    break;

  case 138:
#line 305 "syntaxChecker.y"
                                                                { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2610 "y.tab.c"
    break;

  case 139:
#line 306 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2616 "y.tab.c"
    break;

  case 140:
#line 307 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2622 "y.tab.c"
    break;

  case 141:
#line 308 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2628 "y.tab.c"
    break;

  case 142:
#line 312 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2634 "y.tab.c"
    break;

  case 143:
#line 313 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2640 "y.tab.c"
    break;

  case 144:
#line 314 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2646 "y.tab.c"
    break;

  case 145:
#line 315 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2652 "y.tab.c"
    break;

  case 149:
#line 326 "syntaxChecker.y"
                                                { makeList(",", 'p', lineCount); makeList("::", 'o', lineCount); }
#line 2658 "y.tab.c"
    break;

  case 151:
#line 331 "syntaxChecker.y"
                                                   { makeList(",", 'p', lineCount); }
#line 2664 "y.tab.c"
    break;

  case 155:
#line 341 "syntaxChecker.y"
                                                { checkDeclaration(tablePtr,lineCount,scopeCount);}
#line 2670 "y.tab.c"
    break;

  case 156:
#line 342 "syntaxChecker.y"
                                                { checkDeclaration(tablePtr,lineCount,scopeCount);makeList(",", 'p', lineCount); }
#line 2676 "y.tab.c"
    break;

  case 162:
#line 357 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2682 "y.tab.c"
    break;

  case 163:
#line 358 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2688 "y.tab.c"
    break;

  case 164:
#line 359 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2694 "y.tab.c"
    break;

  case 165:
#line 360 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2700 "y.tab.c"
    break;

  case 166:
#line 361 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2706 "y.tab.c"
    break;

  case 167:
#line 362 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2712 "y.tab.c"
    break;

  case 168:
#line 363 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2718 "y.tab.c"
    break;

  case 169:
#line 364 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2724 "y.tab.c"
    break;

  case 170:
#line 365 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2730 "y.tab.c"
    break;

  case 171:
#line 369 "syntaxChecker.y"
                                {yyval=yyvsp[0];}
#line 2736 "y.tab.c"
    break;

  case 175:
#line 376 "syntaxChecker.y"
                                           { makeList(",", 'p', lineCount); }
#line 2742 "y.tab.c"
    break;

  case 182:
#line 389 "syntaxChecker.y"
                                                        { makeList(tablePtr, 'v', lineCount);  }
#line 2748 "y.tab.c"
    break;

  case 183:
#line 390 "syntaxChecker.y"
                                                        { makeList(":", 'p', lineCount); makeList("case", 'k', lineCount);}
#line 2754 "y.tab.c"
    break;

  case 184:
#line 391 "syntaxChecker.y"
                                                        { makeList(":", 'p', lineCount); makeList("default", 'k', lineCount); }
#line 2760 "y.tab.c"
    break;

  case 193:
#line 412 "syntaxChecker.y"
                                        { makeList(";", 'p', lineCount); }
#line 2766 "y.tab.c"
    break;

  case 194:
#line 413 "syntaxChecker.y"
                                        { makeList(";", 'p', lineCount); }
#line 2772 "y.tab.c"
    break;

  case 195:
#line 418 "syntaxChecker.y"
                                { makeList("if", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount);}
#line 2778 "y.tab.c"
    break;

  case 196:
#line 420 "syntaxChecker.y"
                                { makeList("if", 'k', lineCount);  makeList("else", 'k', lineCount); makeList("(", 'p', lineCount); 					  makeList(")", 'p', lineCount); 
  				}
#line 2785 "y.tab.c"
    break;

  case 197:
#line 423 "syntaxChecker.y"
                                { makeList("switch", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2791 "y.tab.c"
    break;

  case 198:
#line 428 "syntaxChecker.y"
                        { makeList("while", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2797 "y.tab.c"
    break;

  case 199:
#line 430 "syntaxChecker.y"
                        { makeList("do", 'k', lineCount); makeList("while", 'k', lineCount); makeList("(", 'p', lineCount);         				  makeList(")", 'p', lineCount); makeList(";", 'p', lineCount); 
			}
#line 2804 "y.tab.c"
    break;

  case 200:
#line 433 "syntaxChecker.y"
                        { makeList("for", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2810 "y.tab.c"
    break;

  case 201:
#line 435 "syntaxChecker.y"
                        { makeList("for", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2816 "y.tab.c"
    break;

  case 202:
#line 439 "syntaxChecker.y"
                                { makeList("goto", 'k', lineCount); makeList(";", 'p', lineCount); makeList(tablePtr, 'v', lineCount);}
#line 2822 "y.tab.c"
    break;

  case 203:
#line 440 "syntaxChecker.y"
                                { makeList("continue", 'k', lineCount); makeList(";", 'p', lineCount); }
#line 2828 "y.tab.c"
    break;

  case 204:
#line 441 "syntaxChecker.y"
                                { makeList("break", 'k', lineCount); makeList(";", 'p', lineCount);}
#line 2834 "y.tab.c"
    break;

  case 205:
#line 442 "syntaxChecker.y"
                                { makeList("return", 'k', lineCount); makeList(";", 'p', lineCount);}
#line 2840 "y.tab.c"
    break;

  case 206:
#line 443 "syntaxChecker.y"
                                { makeList("return", 'k', lineCount); makeList(";", 'p', lineCount);}
#line 2846 "y.tab.c"
    break;


#line 2850 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 463 "syntaxChecker.y"

void yyerror()
{
	errorFlag=1;
	fflush(stdout);
	printf("\n%s : %d :Syntax error \n",sourceCode,lineCount);
}
void main(int argc,char **argv){
	if(argc<=1){
		
		printf("Invalid ,Expected Format : ./a.out <\"sourceCode\"> \n");
		return 0;
	}
	
	yyin=fopen(argv[1],"r");
	sourceCode=(char *)malloc(strlen(argv[1])*sizeof(char));
	sourceCode=argv[1];
	yyparse();
	
	if(nestedCommentCount!=0){
		errorFlag=1;
    		printf("%s : %d : Comment Does Not End\n",sourceCode,lineCount);
    		
	}
	if(commentFlag==1){
		errorFlag=1;
		printf("%s : %d : Nested Comment\n",sourceCode,lineCount);
    	}
	
		
	
	if(!errorFlag  && !semanticErr  && arrayIndexErr!=1){
		
		printf("\n\n\t\t%s Parsing Completed\n\n",sourceCode);
		
		
	
		FILE *writeParsed=fopen("parsedTable.txt","w");
    		fprintf(writeParsed,"\n\t\t\t\tParsed Table\n\n\t\tToken\t\t\t\t\t\tType\t\t\t\t\t\t\tLine Number\n");
      		for(tokenList *ptr=parsedPtr;ptr!=NULL;ptr=ptr->next){
  			fprintf(writeParsed,"\n%20s%30.30s%60s",ptr->token,ptr->type,ptr->line);
		}
  		
    		fprintf(writeParsed,"\n\n\n\n\t\t\t\tSymbolTable\n\n\t\tToken\t\t\t\tType\t\tLine Number\t\t\t\tScope\t\tFunction Number\n");
      		for(tokenList *ptr=symbolPtr;ptr!=NULL;ptr=ptr->next){
  			fprintf(writeParsed,"\n%20s%30.30s%30s%30s\t%d\t%d",ptr->token,ptr->type,ptr->line,ptr->scope,ptr->scopeValue,ptr->funcCount+1);
		}
		
		
    		fprintf(writeParsed,"\n\n\n\n   \t\t\t\t\t\t\t\tConstant Table \n\n \t\t\t\t\t\tValue\t\t\t\t\t\t\tLine Number\n");
    		for(tokenList *ptr=constantPtr;ptr!=NULL;ptr=ptr->next)
  		fprintf(writeParsed,"\n%50s%60s",ptr->token,ptr->line);
  	
  	
  		
		fclose(writeParsed);
	}
printf("\n\n");	
}


