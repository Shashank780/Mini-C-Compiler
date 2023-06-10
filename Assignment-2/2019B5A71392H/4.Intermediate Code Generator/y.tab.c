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

#include "icg.h"


extern int yylineno;
extern char *yytext;

int paramCount;
char icgQuad[50];
int funcLineNumber = 0;


#line 83 "y.tab.c"

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
    VOID = 258,
    INT = 259,
    FLOAT = 260,
    CONSTANT = 261,
    IDENTIFIER = 262,
    IF = 263,
    ELSE = 264,
    RETURN = 265,
    DO = 266,
    WHILE = 267,
    FOR = 268,
    INC_OP = 269,
    DEC_OP = 270,
    U_PLUS = 271,
    U_MINUS = 272,
    EQUAL = 273,
    NOT_EQUAL = 274,
    GREATER_OR_EQUAL = 275,
    LESS_OR_EQUAL = 276,
    SHIFTLEFT = 277,
    LOG_AND = 278,
    LOG_OR = 279
  };
#endif
/* Tokens.  */
#define VOID 258
#define INT 259
#define FLOAT 260
#define CONSTANT 261
#define IDENTIFIER 262
#define IF 263
#define ELSE 264
#define RETURN 265
#define DO 266
#define WHILE 267
#define FOR 268
#define INC_OP 269
#define DEC_OP 270
#define U_PLUS 271
#define U_MINUS 272
#define EQUAL 273
#define NOT_EQUAL 274
#define GREATER_OR_EQUAL 275
#define LESS_OR_EQUAL 276
#define SHIFTLEFT 277
#define LOG_AND 278
#define LOG_OR 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "syntaxChecker.y"

    char         	*str;
    int           	integer;
    float         	real;
    int           	type;
	struct
	{
	    char                 	*value;
	    int   			type;
	    int				cType;
	    struct BackpatchList* 	trueList;
	    struct BackpatchList* 	falseList;
	} expr;
	struct
	{
	  struct BackpatchList* 	nextList;
	} stmt;
	struct
	{
	  int				quad;
	  struct BackpatchList* 	nextList;
	} mark;
	struct
	{
	    int				count;
	    struct tokenList * 	queue;
	} exp_list;

#line 212 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   308

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  162

#define YYUNDEFTOK  2
#define YYMAXUTOK   279


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
       2,     2,     2,    33,     2,     2,     2,    32,     2,     2,
      34,    35,    30,    28,    39,    29,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
      26,    25,    27,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    71,    71,    83,    90,   102,   109,   120,   125,   133,
     137,   144,   150,   156,   168,   174,   180,   186,   192,   197,
     203,   208,   214,   222,   228,   238,   244,   253,   262,   269,
     278,   287,   296,   302,   322,   328,   337,   344,   353,   374,
     386,   391,   412,   437,   462,   481,   500,   516,   540,   556,
     572,   588,   605,   635,   665,   695,   725,   755,   775,   782,
     795,   804,   810,   836,   863,   879,   890,   904,   911,   917
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "FLOAT", "CONSTANT",
  "IDENTIFIER", "IF", "ELSE", "RETURN", "DO", "WHILE", "FOR", "INC_OP",
  "DEC_OP", "U_PLUS", "U_MINUS", "EQUAL", "NOT_EQUAL", "GREATER_OR_EQUAL",
  "LESS_OR_EQUAL", "SHIFTLEFT", "LOG_AND", "LOG_OR", "'='", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'('", "')'", "';'", "'{'",
  "'}'", "','", "$accept", "program_head", "program", "function",
  "function_body", "declaration_list", "declaration", "parameter_list",
  "var_type", "statement_list", "statement", "matched_statement",
  "unmatched_statement", "assignment", "expression", "exp_list", "id",
  "marker", "jump_marker", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    61,    60,    62,    43,    45,
      42,    47,    37,    33,    40,    41,    59,   123,   125,    44
};
# endif

#define YYPACT_NINF (-84)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -84,    11,    55,    55,   -84,   -84,   -84,   -84,   -84,     6,
     -84,   -84,   -32,    65,   -84,     6,     6,   -30,   -84,   -84,
       2,    88,   -84,   160,   -84,     6,     6,     6,     6,   -84,
     -10,    14,   -84,   -84,    -8,    66,    66,    66,    66,    66,
      66,   175,   160,     1,   -23,   -84,   -84,   -84,    35,   246,
     -24,   -84,   -84,   -84,   -84,    66,   -84,    39,   208,    44,
      66,   -84,    51,   -84,   -84,   -84,   -84,   228,   -84,    52,
      18,    59,   -84,     6,   -84,   208,   -84,    66,    66,    66,
      66,   -84,   -84,    66,    66,    66,    66,    66,    66,    66,
      66,    28,    63,   -84,    91,    66,    68,   -84,   -84,   -84,
     -84,   -84,   -84,   173,   173,   114,   114,    66,    66,   114,
     114,    57,    57,   -84,   -84,   -84,   246,    69,   246,   -12,
     -84,    80,    71,   -84,   276,   261,   -84,    81,    66,   208,
     -84,   -84,    66,   -84,   246,   -84,   110,    66,   208,    85,
     113,    89,   -84,   -84,   -84,   -84,    90,   -84,   -84,    66,
     208,   -84,   -84,   -84,   -84,    99,   -84,   208,   -84,   -84,
     -84,   -84
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      69,     0,     2,     0,     1,    20,    21,    22,     4,     0,
       3,    67,     0,    19,    18,     0,     0,     0,    14,    15,
       0,     0,     5,     0,     6,     0,     0,     0,     0,    60,
       0,     0,    68,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    23,    25,    26,     0,    40,
      64,    16,    17,    11,    12,     0,    29,     0,     0,     0,
       0,    42,    64,    43,    58,    59,    57,     0,    35,    68,
       0,    68,     9,     0,     7,     0,    28,     0,     0,     0,
       0,    68,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,     0,     0,    61,    34,    10,
       8,    13,    24,    47,    46,    48,    49,     0,     0,    51,
      50,    52,    53,    54,    55,    56,    41,     0,    65,     0,
      68,     0,     0,    68,    45,    44,    63,     0,     0,     0,
      68,    68,     0,    62,    66,    36,    25,     0,     0,     0,
       0,     0,    69,    69,    68,    68,     0,    31,    37,     0,
       0,    32,    69,    27,    39,     0,    68,     0,    69,    69,
      33,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -84,   -84,   -84,   122,   -84,   -84,    93,   -84,   -84,    54,
     -50,   -73,   -83,   -19,    72,   -84,    -9,   -29,    -5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     8,    24,    42,    43,    17,     9,    44,
      45,    46,    47,    48,    49,   119,    62,    75,     3
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,    90,    13,    58,    59,    20,    18,    19,    94,    21,
      91,     4,    57,    11,    50,    74,    51,    52,    53,    54,
      29,    11,    50,   127,    55,   102,    60,   128,    35,    36,
      37,    38,    50,    50,    29,    11,    92,    72,    22,    23,
      73,    96,    35,    36,    37,    38,    50,    39,    40,    50,
      56,    50,   107,   108,    99,   143,   136,    73,     5,     6,
       7,    39,    40,   117,   101,   142,    50,   154,    14,    15,
      16,    76,    29,    11,   159,    93,   122,   153,    95,   135,
      35,    36,    37,    38,   158,    91,    50,    87,    88,    89,
      98,   129,    25,    26,   132,    69,    71,   100,   120,    39,
      40,   137,   138,   121,   123,   126,   131,    61,    63,    64,
      65,    66,    67,   139,   130,   149,   150,   133,   141,   -69,
      50,   144,   145,    50,   146,    10,   151,   157,    50,    50,
     152,   140,    77,    78,   156,    70,     0,   147,   148,     0,
      50,    50,    85,    86,    87,    88,    89,   155,    50,   103,
     104,   105,   106,   160,   161,   109,   110,   111,   112,   113,
     114,   115,   116,   118,    27,    28,    29,    11,    30,     0,
      31,    32,    33,    34,    35,    36,    37,    38,     0,   124,
     125,    29,    11,    30,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,    41,     0,     0,
     134,    85,    86,    87,    88,    89,     0,     0,    39,    40,
       0,     0,    41,    68,    29,    11,    30,     0,    31,    32,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,    41,    77,    78,    79,    80,
       0,    81,    82,     0,    83,    84,    85,    86,    87,    88,
      89,     0,     0,    97,    77,    78,    79,    80,     0,    81,
      82,     0,    83,    84,    85,    86,    87,    88,    89,    77,
      78,    79,    80,     0,    81,     0,     0,    83,    84,    85,
      86,    87,    88,    89,    77,    78,    79,    80,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89
};

static const yytype_int16 yycheck[] =
{
       9,    25,    34,    32,    33,    35,    15,    16,    58,    39,
      34,     0,    31,     7,    23,    38,    25,    26,    27,    28,
       6,     7,    31,    35,    34,    75,    34,    39,    14,    15,
      16,    17,    41,    42,     6,     7,    55,    36,    36,    37,
      39,    60,    14,    15,    16,    17,    55,    33,    34,    58,
      36,    60,    81,    82,    36,   138,   129,    39,     3,     4,
       5,    33,    34,    35,    73,   138,    75,   150,     3,     4,
       5,    36,     6,     7,   157,    36,    95,   150,    34,   129,
      14,    15,    16,    17,   157,    34,    95,    30,    31,    32,
      38,   120,     4,     5,   123,    41,    42,    38,    35,    33,
      34,   130,   131,    12,    36,    36,    35,    35,    36,    37,
      38,    39,    40,   132,    34,   144,   145,    36,   137,     9,
     129,    36,     9,   132,    35,     3,    36,   156,   137,   138,
     149,   136,    18,    19,    35,    42,    -1,   142,   143,    -1,
     149,   150,    28,    29,    30,    31,    32,   152,   157,    77,
      78,    79,    80,   158,   159,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,   107,
     108,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    33,    34,    -1,    -1,    37,    -1,    -1,
     128,    28,    29,    30,    31,    32,    -1,    -1,    33,    34,
      -1,    -1,    37,    38,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    37,    18,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    18,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    32,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    42,    58,     0,     3,     4,     5,    43,    48,
      43,     7,    56,    34,     3,     4,     5,    47,    56,    56,
      35,    39,    36,    37,    44,     4,     5,     4,     5,     6,
       8,    10,    11,    12,    13,    14,    15,    16,    17,    33,
      34,    37,    45,    46,    49,    50,    51,    52,    53,    54,
      56,    56,    56,    56,    56,    34,    36,    53,    57,    57,
      34,    54,    56,    54,    54,    54,    54,    54,    38,    49,
      46,    49,    36,    39,    38,    57,    36,    18,    19,    20,
      21,    23,    24,    26,    27,    28,    29,    30,    31,    32,
      25,    34,    53,    36,    50,    34,    53,    35,    38,    36,
      38,    56,    50,    54,    54,    54,    54,    57,    57,    54,
      54,    54,    54,    54,    54,    54,    54,    35,    54,    55,
      35,    12,    53,    36,    54,    54,    36,    35,    39,    57,
      34,    35,    57,    36,    54,    50,    51,    57,    57,    53,
      58,    53,    51,    52,    36,     9,    35,    58,    58,    57,
      57,    36,    53,    51,    52,    58,    35,    57,    51,    52,
      58,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    44,    44,    45,
      45,    46,    46,    46,    47,    47,    47,    47,    47,    47,
      48,    48,    48,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    52,
      53,    53,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    56,    57,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     6,     6,     3,     4,     2,
       3,     2,     2,     3,     2,     2,     4,     4,     1,     0,
       1,     1,     1,     1,     3,     1,     1,    10,     2,     2,
       3,     8,     9,    14,     3,     2,     6,     8,    14,    10,
       1,     3,     2,     2,     4,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       1,     3,     5,     4,     1,     1,     3,     1,     0,     0
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
#line 72 "syntaxChecker.y"
        {
	    tokenList * mainFunc = getSymbol("main");
	    if(mainFunc == NULL){
		printf("ERROR: Main function not found!\n");
		yyerror();
	    }
	    backpatch((yyvsp[0].stmt).nextList,mainFunc->line+1);
	}
#line 1522 "y.tab.c"
    break;

  case 3:
#line 84 "syntaxChecker.y"
        {

	    (yyval.stmt).nextList = (yyvsp[-1].mark).nextList;
            backpatch((yyvsp[0].stmt).nextList, nextquad());

        }
#line 1533 "y.tab.c"
    break;

  case 4:
#line 91 "syntaxChecker.y"
        {

	    (yyval.stmt).nextList = (yyvsp[-1].stmt).nextList;
            backpatch((yyvsp[0].stmt).nextList, nextquad());

        }
#line 1544 "y.tab.c"
    break;

  case 5:
#line 103 "syntaxChecker.y"
        {

            addFunctionPrototype((yyvsp[-4].str), paramCount, (yyvsp[-5].type));
            paramCount = 0;
            (yyval.stmt).nextList = NULL;
        }
#line 1555 "y.tab.c"
    break;

  case 6:
#line 110 "syntaxChecker.y"
        {

            addFunction((yyvsp[-4].str), paramCount, (yyvsp[-5].type), funcLineNumber);
            paramCount = 0;
	    funcLineNumber = nextquad();
            (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;
        }
#line 1567 "y.tab.c"
    break;

  case 7:
#line 121 "syntaxChecker.y"
        {

            (yyval.stmt).nextList = (yyvsp[-1].stmt).nextList;
        }
#line 1576 "y.tab.c"
    break;

  case 8:
#line 126 "syntaxChecker.y"
        {

            (yyval.stmt).nextList = (yyvsp[-1].stmt).nextList;
        }
#line 1585 "y.tab.c"
    break;

  case 9:
#line 134 "syntaxChecker.y"
        {

        }
#line 1593 "y.tab.c"
    break;

  case 10:
#line 138 "syntaxChecker.y"
        {

        }
#line 1601 "y.tab.c"
    break;

  case 11:
#line 145 "syntaxChecker.y"
        {
            (yyval.type) = INT_type;
            addSymbolToQueue((yyvsp[0].str), INT_type, 0);

        }
#line 1611 "y.tab.c"
    break;

  case 12:
#line 151 "syntaxChecker.y"
        {
            (yyval.type) = FLOAT_type;
            addSymbolToQueue((yyvsp[0].str), FLOAT_type, 0);

        }
#line 1621 "y.tab.c"
    break;

  case 13:
#line 157 "syntaxChecker.y"
        {
            if(INT_type == (yyvsp[-2].type)) {
                addSymbolToQueue((yyvsp[0].str), INT_type, 0);
            } else if(FLOAT_type == (yyvsp[-2].type)) {
                addSymbolToQueue((yyvsp[0].str), FLOAT_type, 0);
            }

        }
#line 1634 "y.tab.c"
    break;

  case 14:
#line 169 "syntaxChecker.y"
        {
            paramCount++;
            addSymbolToQueue((yyvsp[0].str), INT_type, paramCount);

        }
#line 1644 "y.tab.c"
    break;

  case 15:
#line 175 "syntaxChecker.y"
        {
            paramCount++;
            addSymbolToQueue((yyvsp[0].str), FLOAT_type, paramCount);

        }
#line 1654 "y.tab.c"
    break;

  case 16:
#line 181 "syntaxChecker.y"
        {
            paramCount++;
            addSymbolToQueue((yyvsp[0].str), INT_type, paramCount);

        }
#line 1664 "y.tab.c"
    break;

  case 17:
#line 187 "syntaxChecker.y"
        {
            paramCount++;
            addSymbolToQueue((yyvsp[0].str), FLOAT_type, paramCount);

        }
#line 1674 "y.tab.c"
    break;

  case 18:
#line 193 "syntaxChecker.y"
        {

        }
#line 1682 "y.tab.c"
    break;

  case 19:
#line 197 "syntaxChecker.y"
        {

        }
#line 1690 "y.tab.c"
    break;

  case 20:
#line 204 "syntaxChecker.y"
        {
            (yyval.type) = Return_VOID;

        }
#line 1699 "y.tab.c"
    break;

  case 21:
#line 209 "syntaxChecker.y"
        {
            (yyval.type) = Return_INT;

        }
#line 1708 "y.tab.c"
    break;

  case 22:
#line 215 "syntaxChecker.y"
        {
            (yyval.type) = Return_FLOAT;

        }
#line 1717 "y.tab.c"
    break;

  case 23:
#line 223 "syntaxChecker.y"
        {

            (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;

        }
#line 1727 "y.tab.c"
    break;

  case 24:
#line 229 "syntaxChecker.y"
        {

	    backpatch((yyvsp[-2].stmt).nextList,(yyvsp[-1].mark).quad);
	    (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;

        }
#line 1738 "y.tab.c"
    break;

  case 25:
#line 239 "syntaxChecker.y"
        {

	    (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;

        }
#line 1748 "y.tab.c"
    break;

  case 26:
#line 245 "syntaxChecker.y"
        {

	    (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;

        }
#line 1758 "y.tab.c"
    break;

  case 27:
#line 254 "syntaxChecker.y"
        {

	    backpatch((yyvsp[-7].expr).trueList,(yyvsp[-5].mark).quad);
	    backpatch((yyvsp[-7].expr).falseList,(yyvsp[-1].mark).quad);
	    (yyval.stmt).nextList = mergelists((yyvsp[-3].mark).nextList,(yyvsp[0].stmt).nextList);
	    (yyval.stmt).nextList = mergelists((yyval.stmt).nextList,(yyvsp[-4].stmt).nextList);

        }
#line 1771 "y.tab.c"
    break;

  case 28:
#line 263 "syntaxChecker.y"
        {

       
	    (yyval.stmt).nextList = NULL;

	}
#line 1782 "y.tab.c"
    break;

  case 29:
#line 270 "syntaxChecker.y"
        {


	    (yyval.stmt).nextList = NULL;
	    sprintf(icgQuad,"RETURN");
	    appendCode(icgQuad);

        }
#line 1795 "y.tab.c"
    break;

  case 30:
#line 279 "syntaxChecker.y"
        {


	    (yyval.stmt).nextList = NULL;
            sprintf(icgQuad,"RETURN %s",(yyvsp[-1].expr).value);
	    appendCode(icgQuad);

        }
#line 1808 "y.tab.c"
    break;

  case 31:
#line 288 "syntaxChecker.y"
        {

	    backpatch((yyvsp[-4].expr).trueList,(yyvsp[-2].mark).quad);
	    (yyval.stmt).nextList = (yyvsp[-4].expr).falseList;
	    backpatch((yyvsp[-1].stmt).nextList,(yyvsp[-6].mark).quad);
	    backpatch((yyvsp[0].mark).nextList,(yyvsp[-6].mark).quad);

        }
#line 1821 "y.tab.c"
    break;

  case 32:
#line 297 "syntaxChecker.y"
        {
	    backpatch((yyvsp[-6].stmt).nextList,(yyvsp[-3].mark).quad);
	    backpatch((yyvsp[-2].expr).trueList,(yyvsp[-7].mark).quad);
	    (yyval.stmt).nextList = (yyvsp[-2].expr).falseList;
        }
#line 1831 "y.tab.c"
    break;

  case 33:
#line 303 "syntaxChecker.y"
        {

            if(BOOL_type == (yyvsp[-11].expr).type || BOOL_type == (yyvsp[-5].expr).type) {
                printf("error, no boolean statements allowed as 1st or 3rd assignment in for loop\n");
                yyerror();
            }
            if(BOOL_type != (yyvsp[-8].expr).type) {
                printf("error, 2nd argument of for loop must be boolean\n");
                yyerror();
            }
            backpatch((yyvsp[-11].expr).trueList, (yyvsp[-9].mark).quad);
            backpatch((yyvsp[-1].stmt).nextList, (yyvsp[-6].mark).quad);
            backpatch((yyvsp[0].mark).nextList, (yyvsp[-6].mark).quad);
            (yyval.stmt).nextList = (yyvsp[-8].expr).falseList;
            backpatch((yyvsp[-8].expr).trueList, (yyvsp[-2].mark).quad);
            backpatch((yyvsp[-5].expr).trueList, (yyvsp[-9].mark).quad);
            backpatch((yyvsp[-4].mark).nextList, (yyvsp[-9].mark).quad);

        }
#line 1855 "y.tab.c"
    break;

  case 34:
#line 323 "syntaxChecker.y"
        {

	    (yyval.stmt).nextList = (yyvsp[-1].stmt).nextList;

        }
#line 1865 "y.tab.c"
    break;

  case 35:
#line 329 "syntaxChecker.y"
        {	    

	    (yyval.stmt).nextList = NULL;

        }
#line 1875 "y.tab.c"
    break;

  case 36:
#line 338 "syntaxChecker.y"
        {

	    backpatch((yyvsp[-3].expr).trueList,(yyvsp[-1].mark).quad);
	    (yyval.stmt).nextList = mergelists((yyvsp[-3].expr).falseList,(yyvsp[0].stmt).nextList);

        }
#line 1886 "y.tab.c"
    break;

  case 37:
#line 345 "syntaxChecker.y"
        {

	    backpatch((yyvsp[-4].expr).trueList,(yyvsp[-2].mark).quad);
	    (yyval.stmt).nextList = (yyvsp[-4].expr).falseList;
	    backpatch((yyvsp[-1].stmt).nextList,(yyvsp[-6].mark).quad);
	    backpatch((yyvsp[0].mark).nextList,(yyvsp[-6].mark).quad);

        }
#line 1899 "y.tab.c"
    break;

  case 38:
#line 354 "syntaxChecker.y"
        {

            if(BOOL_type == (yyvsp[-11].expr).type || BOOL_type == (yyvsp[-5].expr).type) {
                printf("error, no boolean statements allowed as 1st or 3rd assignment in for loop\n");
                yyerror();
            }
            if(BOOL_type != (yyvsp[-8].expr).type) {
                printf("error, 2nd argument of for loop must be boolean\n");
                yyerror();
            }
            backpatch((yyvsp[-11].expr).trueList, (yyvsp[-9].mark).quad);
            backpatch((yyvsp[-1].stmt).nextList, (yyvsp[-6].mark).quad);
            backpatch((yyvsp[0].mark).nextList, (yyvsp[-6].mark).quad);
            (yyval.stmt).nextList = (yyvsp[-8].expr).falseList;
            backpatch((yyvsp[-8].expr).trueList, (yyvsp[-2].mark).quad);
            backpatch((yyvsp[-5].expr).trueList, (yyvsp[-9].mark).quad);
            backpatch((yyvsp[-4].mark).nextList, (yyvsp[-9].mark).quad);

        }
#line 1923 "y.tab.c"
    break;

  case 39:
#line 375 "syntaxChecker.y"
        {

	    backpatch((yyvsp[-7].expr).trueList,(yyvsp[-5].mark).quad);
	    backpatch((yyvsp[-7].expr).falseList,(yyvsp[-1].mark).quad);
	    (yyval.stmt).nextList = mergelists((yyvsp[-3].mark).nextList,(yyvsp[0].stmt).nextList);
	    (yyval.stmt).nextList = mergelists((yyval.stmt).nextList,(yyvsp[-4].stmt).nextList);

        }
#line 1936 "y.tab.c"
    break;

  case 40:
#line 387 "syntaxChecker.y"
        {

            (yyval.expr)=(yyvsp[0].expr);
        }
#line 1945 "y.tab.c"
    break;

  case 41:
#line 392 "syntaxChecker.y"
        {
            int destType = getSymbolType((yyvsp[-2].str));
        	if(destType == 0){
        		printf("ERROR: Not in scope");
        	}
            if(destType != (yyvsp[0].expr).type) {
                printf("Type error on line: %d\n", yylineno);
                yyerror();
            }

            sprintf(icgQuad,"%s := %s",(yyvsp[-2].str),(yyvsp[0].expr).value);
            appendCode(icgQuad);
            (yyval.expr).type = destType;
            (yyval.expr).trueList = (yyvsp[0].expr).trueList;
            (yyval.expr).cType = VAR_type;
            (yyval.expr).value = (yyvsp[-2].str);
        }
#line 1967 "y.tab.c"
    break;

  case 42:
#line 413 "syntaxChecker.y"
        {

	    if((yyvsp[0].expr).type != INT_type){
		    printf("ERROR: Increment not allowed for types different than Integer.\n");
		    yyerror();
	    }
	    //Create a variable if needed
	    if((yyvsp[0].expr).cType != VAR_type){
		    char *var = nextIntVar();
		    sprintf(icgQuad,"%s := %s",var,(yyvsp[0].expr).value);
		    appendCode(icgQuad);
		    free((yyvsp[0].expr).value);
		    (yyvsp[0].expr).value = var;
		    (yyvsp[0].expr).type = INT_type;
		    (yyvsp[0].expr).cType = VAR_type;
	    }
            sprintf(icgQuad,"%s := %s + 1",(yyvsp[0].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            //Set the attributes
            (yyval.expr) = (yyvsp[0].expr);
            (yyval.expr).trueList = NULL;
            (yyval.expr).falseList = NULL;

        }
#line 1996 "y.tab.c"
    break;

  case 43:
#line 438 "syntaxChecker.y"
        {

	    if((yyvsp[0].expr).type != INT_type){
		    printf("ERROR: Decrement not allowed for types different than Integer.\n");
		    yyerror();
	    }
	    //Create a variable if needed
	    if((yyvsp[0].expr).cType != VAR_type){
		    char *var = nextIntVar();
		    sprintf(icgQuad,"%s := %s",var,(yyvsp[0].expr).value);
		appendCode(icgQuad);
		    free((yyvsp[0].expr).value);
		    (yyvsp[0].expr).value = var;
		    (yyvsp[0].expr).type = INT_type;
		    (yyvsp[0].expr).cType = VAR_type;
	    }
            sprintf(icgQuad,"%s := %s - 1",(yyvsp[0].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            //Set the attributes
            (yyval.expr) = (yyvsp[0].expr);
            (yyval.expr).trueList = NULL;
            (yyval.expr).falseList = NULL;

        }
#line 2025 "y.tab.c"
    break;

  case 44:
#line 463 "syntaxChecker.y"
        {
            if(BOOL_type != (yyvsp[-3].expr).type) {
                sprintf(icgQuad, "IF (%s <> 0) GOTO", (yyvsp[-3].expr).value);
                (yyvsp[-3].expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
                sprintf(icgQuad, "GOTO");
                (yyvsp[-3].expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
            }
            if(BOOL_type != (yyvsp[0].expr).type) {
                sprintf(icgQuad, "IF (%s <> 0) GOTO", (yyvsp[0].expr).value);
                (yyvsp[0].expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
                sprintf(icgQuad, "GOTO");
                (yyvsp[0].expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
            }
            (yyval.expr).trueList = mergelists((yyvsp[-3].expr).trueList, (yyvsp[0].expr).trueList);
            backpatch((yyvsp[-3].expr).falseList, (yyvsp[-1].mark).quad);
            (yyval.expr).falseList = (yyvsp[0].expr).falseList;
            (yyval.expr).type = BOOL_type;
	}
#line 2048 "y.tab.c"
    break;

  case 45:
#line 482 "syntaxChecker.y"
        {
            if(BOOL_type != (yyvsp[-3].expr).type) {
                sprintf(icgQuad, "IF (%s <> 0) GOTO", (yyvsp[-3].expr).value);
                (yyvsp[-3].expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
                sprintf(icgQuad, "GOTO");
                (yyvsp[-3].expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
            }
            if(BOOL_type != (yyvsp[0].expr).type) {
                sprintf(icgQuad, "IF (%s <> 0) GOTO", (yyvsp[0].expr).value);
                (yyvsp[0].expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
                sprintf(icgQuad, "GOTO");
                (yyvsp[0].expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
            }
            (yyval.expr).falseList = mergelists((yyvsp[-3].expr).falseList, (yyvsp[0].expr).falseList);
            backpatch((yyvsp[-3].expr).trueList, (yyvsp[-1].mark).quad);
            (yyval.expr).trueList = (yyvsp[0].expr).trueList;
            (yyval.expr).type = BOOL_type;
	 }
#line 2071 "y.tab.c"
    break;

  case 46:
#line 501 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type != FLOAT_type){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
            sprintf(icgQuad,"IF (%s <> %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
            sprintf(icgQuad,"GOTO");
	    (yyval.expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = BOOL_type;
	    (yyval.expr).cType = NONE_type;

        }
#line 2091 "y.tab.c"
    break;

  case 47:
#line 517 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type != FLOAT_type){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
            sprintf(icgQuad,"IF (%s = %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
            sprintf(icgQuad,"GOTO");
	    (yyval.expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
        if(BOOL_type == (yyvsp[-2].expr).type) {
            (yyval.expr).trueList = mergelists((yyval.expr).trueList, (yyvsp[-2].expr).trueList);
            (yyval.expr).falseList = mergelists((yyval.expr).falseList, (yyvsp[-2].expr).falseList);
        }
        if(BOOL_type == (yyvsp[0].expr).type) {
            (yyval.expr).trueList = mergelists((yyval.expr).trueList, (yyvsp[0].expr).trueList);
            (yyval.expr).falseList = mergelists((yyval.expr).falseList, (yyvsp[0].expr).falseList);
        }
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = BOOL_type;
	    (yyval.expr).cType = NONE_type;

        }
#line 2119 "y.tab.c"
    break;

  case 48:
#line 541 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type != FLOAT_type){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
            sprintf(icgQuad,"IF (%s >= %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
            sprintf(icgQuad,"GOTO");
	    (yyval.expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = BOOL_type;
	    (yyval.expr).cType = NONE_type;

        }
#line 2139 "y.tab.c"
    break;

  case 49:
#line 557 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type != FLOAT_type){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
	    sprintf(icgQuad,"IF (%s <= %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
	    sprintf(icgQuad,"GOTO");
	    (yyval.expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = BOOL_type;
	    (yyval.expr).cType = NONE_type;

        }
#line 2159 "y.tab.c"
    break;

  case 50:
#line 573 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type != FLOAT_type){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
	    sprintf(icgQuad,"IF (%s > %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
	    sprintf(icgQuad,"GOTO");
	    (yyval.expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = BOOL_type;
	    (yyval.expr).cType = NONE_type;

        }
#line 2179 "y.tab.c"
    break;

  case 51:
#line 589 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type != FLOAT_type){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
	    sprintf(icgQuad,"IF (%s < %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
	    sprintf(icgQuad,"GOTO");
	    (yyval.expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = BOOL_type;
	    (yyval.expr).cType = NONE_type;

        }
#line 2199 "y.tab.c"
    break;

  case 52:
#line 606 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type!= FLOAT_type &&  (yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		printf("ERROR: Only integer and float values allowed when adding numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = FLOAT_type;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case INT_type: var = nextIntVar();break;
            	case FLOAT_type:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(icgQuad,"%s := %s + %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = VAR_type;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;

        }
#line 2233 "y.tab.c"
    break;

  case 53:
#line 636 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type!= FLOAT_type &&  (yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		printf("ERROR: Only integer and float values allowed when substracting numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = FLOAT_type;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case INT_type: var = nextIntVar();break;
            	case FLOAT_type:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(icgQuad,"%s := %s - %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = VAR_type;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;

        }
#line 2267 "y.tab.c"
    break;

  case 54:
#line 666 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type!= FLOAT_type &&  (yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		printf("ERROR: Only integer and float values allowed when multiplicating numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = FLOAT_type;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case INT_type: var = nextIntVar();break;
            	case FLOAT_type:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(icgQuad,"%s := %s * %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = VAR_type;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;

        }
#line 2301 "y.tab.c"
    break;

  case 55:
#line 696 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type!= FLOAT_type &&  (yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		printf("ERROR: Only integer and float values allowed when dividing numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = FLOAT_type;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case INT_type: var = nextIntVar();break;
            	case FLOAT_type:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(icgQuad,"%s := %s / %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = VAR_type;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;

        }
#line 2335 "y.tab.c"
    break;

  case 56:
#line 726 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type!= FLOAT_type &&  (yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		printf("ERROR: Only integer and float values allowed when caluclating mod.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = FLOAT_type;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case INT_type: var = nextIntVar();break;
            	case FLOAT_type:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(icgQuad,"%s := %s \% %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = VAR_type;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;

        }
#line 2369 "y.tab.c"
    break;

  case 57:
#line 756 "syntaxChecker.y"
        {

	    if((yyvsp[0].expr).type != BOOL_type){
		if((yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		    printf("ERROR: Only Bool, Int and Float allowed in logical expressions!\n");
		    yyerror();
		}
		sprintf(icgQuad,"IF (%s <> 0) GOTO",(yyvsp[0].expr).value);
		(yyval.expr).falseList = appendToBackPatch(NULL,appendCode(icgQuad));
		sprintf(icgQuad,"GOTO",(yyvsp[0].expr).value);
		(yyval.expr).trueList = appendToBackPatch(NULL,appendCode (icgQuad));
	    }
	    else{
	      (yyval.expr) = (yyvsp[0].expr);
	      (yyval.expr).trueList = (yyvsp[0].expr).falseList;
	      (yyval.expr).falseList = (yyvsp[0].expr).trueList;
	    }

	}
#line 2393 "y.tab.c"
    break;

  case 58:
#line 776 "syntaxChecker.y"
        {
            if(INT_type != (yyvsp[0].expr).type && FLOAT_type != (yyvsp[0].expr).type) {
                yyerror();
            }
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2404 "y.tab.c"
    break;

  case 59:
#line 783 "syntaxChecker.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
            if(INT_type == (yyvsp[0].expr).type) {
                (yyval.expr).value = nextIntVar();
            } else if (FLOAT_type == (yyvsp[0].expr).type) {
                (yyval.expr).value = nextFloatVar();
            } else {
                yyerror();
            }
            sprintf(icgQuad, "%s := -%s", (yyval.expr).value, (yyvsp[0].expr).value);
            appendCode (icgQuad);
       }
#line 2421 "y.tab.c"
    break;

  case 60:
#line 796 "syntaxChecker.y"
        {

            (yyval.expr).value = strdup(yytext);
            (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;

            
        }
#line 2434 "y.tab.c"
    break;

  case 61:
#line 805 "syntaxChecker.y"
        {

	    (yyval.expr) = (yyvsp[-1].expr);

        }
#line 2444 "y.tab.c"
    break;

  case 62:
#line 811 "syntaxChecker.y"
        {

            int varType = getFunctionType((yyvsp[-4].str));
            if(varType == 0){
            	printf("ERROR: Function %s not defined!\n",(yyvsp[-4].str));
		yyerror();
            }
            char* var = NULL;
            switch(varType){
            case Return_INT:
                var = nextIntVar();
                (yyval.expr).type = INT_type;
                break;
            case Return_FLOAT:
                var = nextFloatVar();
                (yyval.expr).type = FLOAT_type;
                break;
            }
	    (yyval.expr).value = var;
	    (yyval.expr).cType = VAR_type;
	    checkAndGenerateParams((yyvsp[-2].exp_list).queue,(yyvsp[-4].str),(yyvsp[-2].exp_list).count);
            sprintf(icgQuad,"%s := CALL %s, %d",var,(yyvsp[-4].str),(yyvsp[-2].exp_list).count);
            appendCode (icgQuad);

        }
#line 2474 "y.tab.c"
    break;

  case 63:
#line 837 "syntaxChecker.y"
        {

            int varType = getFunctionType((yyvsp[-3].str));
            if(varType == 0){
            	printf("ERROR: Function %s not defined!\n",(yyvsp[-3].str));
		yyerror();
            }
            char* var = NULL;
            switch(varType){
             case Return_INT:
                var = nextIntVar;
                (yyval.expr).type = INT_type;
                break;
            case Return_FLOAT:
                var = nextFloatVar;
                (yyval.expr).type = FLOAT_type;
                break;
           
            }
	    (yyval.expr).value = var;
	    (yyval.expr).cType = VAR_type;
	    checkAndGenerateParams(NULL,(yyvsp[-3].str),0);
            sprintf(icgQuad,"%s := CALL %s, %d",var,(yyvsp[-3].str),0);
            appendCode (icgQuad);

        }
#line 2505 "y.tab.c"
    break;

  case 64:
#line 864 "syntaxChecker.y"
        {

	    int varType = getSymbolType((yyvsp[0].str));
            if(varType == 0){
            	printf("ERROR: Variable %s not in scope!\n",(yyvsp[0].str));
		yyerror();
            }
	    (yyval.expr).value = (yyvsp[0].str);
	    (yyval.expr).type = varType;
	    (yyval.expr).cType = VAR_type;

        }
#line 2522 "y.tab.c"
    break;

  case 65:
#line 880 "syntaxChecker.y"
        {

	    if((yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		printf("ERROR: Only Integer and Float are allowed as parameter types.\n");
		yyerror();
	    }
	    (yyval.exp_list).queue = addSymbolToParameterQueue(NULL,(yyvsp[0].expr).value,(yyvsp[0].expr).type);
	    (yyval.exp_list).count = 1;

        }
#line 2537 "y.tab.c"
    break;

  case 66:
#line 891 "syntaxChecker.y"
        {

	      if((yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		  printf("ERROR: Only Integer and Float are allowed as parameter types.\n");
		  yyerror();
	      }
	      (yyval.exp_list).queue = addSymbolToParameterQueue((yyvsp[-2].exp_list).queue,(yyvsp[0].expr).value,(yyvsp[0].expr).type);
	      (yyval.exp_list).count = (yyvsp[-2].exp_list).count + 1;

        }
#line 2552 "y.tab.c"
    break;

  case 67:
#line 905 "syntaxChecker.y"
        {

            (yyval.str) = strdup(yytext);
        }
#line 2561 "y.tab.c"
    break;

  case 68:
#line 911 "syntaxChecker.y"
          {	

	      (yyval.mark).quad = nextquad();

	}
#line 2571 "y.tab.c"
    break;

  case 69:
#line 917 "syntaxChecker.y"
          {

	      (yyval.mark).quad = nextquad();
	      sprintf(icgQuad,"GOTO");
	      (yyval.mark).nextList = appendToBackPatch(NULL, appendCode (icgQuad));

   }
#line 2583 "y.tab.c"
    break;


#line 2587 "y.tab.c"

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
#line 924 "syntaxChecker.y"

