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
#line 1 "miniC.y"

#include <stdio.h> 
#include <stdlib.h>
#include  "table.h"


#define TAILLE 103 /* nombre premier de préférence */

extern int chars;




void yyerror (char *s);
void table_reset();
//struct tree *t;

#line 88 "y.tab.c"

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
    IDENTIFICATEUR = 258,
    CONSTANTE = 259,
    VOID = 260,
    INT = 261,
    FOR = 262,
    WHILE = 263,
    IF = 264,
    ELSE = 265,
    SWITCH = 266,
    CASE = 267,
    DEFAULT = 268,
    BREAK = 269,
    RETURN = 270,
    PLUS = 271,
    MOINS = 272,
    MUL = 273,
    DIV = 274,
    LSHIFT = 275,
    RSHIFT = 276,
    BAND = 277,
    BOR = 278,
    LAND = 279,
    LOR = 280,
    LT = 281,
    GT = 282,
    GEQ = 283,
    LEQ = 284,
    EQ = 285,
    NEQ = 286,
    NOT = 287,
    EXTERN = 288,
    THEN = 289,
    OP = 290,
    REL = 291
  };
#endif
/* Tokens.  */
#define IDENTIFICATEUR 258
#define CONSTANTE 259
#define VOID 260
#define INT 261
#define FOR 262
#define WHILE 263
#define IF 264
#define ELSE 265
#define SWITCH 266
#define CASE 267
#define DEFAULT 268
#define BREAK 269
#define RETURN 270
#define PLUS 271
#define MOINS 272
#define MUL 273
#define DIV 274
#define LSHIFT 275
#define RSHIFT 276
#define BAND 277
#define BOR 278
#define LAND 279
#define LOR 280
#define LT 281
#define GT 282
#define GEQ 283
#define LEQ 284
#define EQ 285
#define NEQ 286
#define NOT 287
#define EXTERN 288
#define THEN 289
#define OP 290
#define REL 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "miniC.y"

	int val;
	char* id;
	struct _tree *tree;

#line 218 "y.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   261

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  163

#define YYUNDEFTOK  2
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,     2,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    37,
       2,    47,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    57,    57,    60,    61,    64,    65,    68,    71,    72,
      75,    76,    79,    80,    84,    85,    88,    89,    93,    94,
      98,    99,   103,   107,   108,   111,   112,   113,   114,   115,
     116,   119,   120,   121,   125,   126,   127,   128,   129,   132,
     133,   134,   137,   140,   143,   146,   147,   150,   151,   154,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   171,   172,   175,   176,   179,   180,   181,   182,
     195,   196,   199,   200,   201,   202,   203,   204
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFICATEUR", "CONSTANTE", "VOID",
  "INT", "FOR", "WHILE", "IF", "ELSE", "SWITCH", "CASE", "DEFAULT",
  "BREAK", "RETURN", "PLUS", "MOINS", "MUL", "DIV", "LSHIFT", "RSHIFT",
  "BAND", "BOR", "LAND", "LOR", "LT", "GT", "GEQ", "LEQ", "EQ", "NEQ",
  "NOT", "EXTERN", "THEN", "OP", "REL", "';'", "','", "'['", "']'", "'('",
  "')'", "'{'", "'}'", "'\\n'", "':'", "'='", "$accept", "programme",
  "liste_declarations", "liste_fonctions", "declaration",
  "liste_declarateurs", "declarateur", "tableau_declarateur", "fonction",
  "type", "params_liste_creator", "liste_parms", "parm",
  "liste_instructions", "instruction", "iteration", "selection", "saut",
  "affectation", "bloc", "appel", "variable", "tableau_variable",
  "expression", "liste_expressions", "expr_liste_creator", "condition",
  "binary_rel", "binary_comp", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    59,    44,    91,
      93,    40,    41,   123,   125,    10,    58,    61
};
# endif

#define YYPACT_NINF (-70)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-48)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -70,    30,    35,   -70,   -70,   -70,    15,    35,   -70,   -70,
       4,    31,   -70,    51,   -13,    74,   -70,    33,    28,    43,
      85,   -70,    93,    94,    85,    99,    70,    95,   -70,   107,
     -70,   153,   150,   -70,    85,   151,   -70,   158,   -70,   -70,
     -70,    15,    93,     1,   155,    78,   156,   160,   161,   162,
     192,   168,   178,     2,   -70,   -70,   -70,   -70,   -70,   -70,
     179,   -70,   -70,   170,   159,   -70,   106,   201,    19,    19,
     106,   180,   113,   -70,   116,   -70,   106,   -70,   106,   -70,
     190,    15,   -70,   106,   106,   218,   200,   205,   206,   207,
     208,    19,   202,    -7,     7,   149,   113,   -70,   106,   140,
     157,   106,   106,   106,   106,   106,   106,   106,   106,   -70,
      92,   218,   165,   209,   106,    19,    19,   122,    22,   -70,
     -70,   -70,   -70,   -70,   -70,   106,   -70,   -70,   113,    19,
     113,   113,   -70,   210,   -70,   111,   111,   140,   140,   167,
     167,   -70,   -70,   -70,   -70,   -70,   218,    57,    41,   -70,
     218,   -70,   -70,   237,   -70,   -70,   201,   -70,   113,   211,
     -70,   113,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     1,    16,    17,     0,     2,     3,     6,
       0,     0,     5,     0,    10,     0,     9,    11,     0,     0,
      21,     7,     0,     0,    21,     0,    20,     0,    19,    10,
       8,     0,     0,    22,     0,     0,    13,     0,    18,     4,
      15,    24,     0,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     4,    14,    23,    25,    26,    27,
       0,    29,    30,     0,    46,    33,    63,     0,     0,     0,
       0,     0,     0,    39,    45,    59,     0,    40,     0,    60,
       0,    24,    28,     0,     0,    65,     0,    62,    45,     0,
       0,     0,     0,     0,     0,     0,     0,    38,    63,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,    42,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,    77,     0,    70,    71,     0,     0,
       0,     0,    37,     0,    49,    50,    51,    53,    52,    55,
      54,    56,    57,    43,    48,    44,    64,     0,     0,    68,
      69,    32,    67,    34,    36,    61,     0,    66,     0,     0,
      35,     0,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,    -2,   -70,   -70,   -70,   226,   -70,   243,   152,
     -70,   227,   220,   174,   -69,   -70,   -70,   -70,   -66,   -70,
     -70,   -43,   -70,   -28,   163,   -70,   -58,   -70,   -70
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,     8,    15,    16,    17,     9,    42,
      26,    27,    28,    43,    56,    57,    58,    59,    60,    61,
      62,    79,    64,    92,    86,    87,    93,   129,   125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,    89,    44,    97,    45,    74,    75,    14,    46,    47,
      48,    94,    49,    50,    51,    52,    53,   126,   127,    76,
       4,     5,    74,    75,    63,    80,   -12,   132,    20,    63,
       3,   126,   127,   118,    18,   128,    76,    41,    85,    77,
       4,     5,    95,    78,    54,    55,   126,   127,    99,   130,
     100,    90,    81,    63,    19,   111,   112,   147,   148,   151,
      91,   153,   154,   117,   149,   126,   127,    63,     6,    24,
      85,   152,    23,   135,   136,   137,   138,   139,   140,   141,
     142,   126,   127,   157,    20,    63,   146,    63,    63,   160,
     159,    25,   162,    44,   156,    45,    29,   150,    31,    46,
      47,    48,    33,    49,    50,    51,    52,    53,    34,    74,
      75,    21,    22,    63,    44,    63,    45,   -47,    63,    66,
      46,    47,    48,    76,    49,    50,    51,    52,    53,   103,
     104,   105,   106,   107,   108,    54,   143,    35,   101,   102,
     103,   104,   105,   106,   107,   108,   -12,    78,   119,   120,
     121,   122,   123,   124,    10,   -47,    54,    98,    11,    13,
     105,   106,   107,   108,   134,   101,   102,   103,   104,   105,
     106,   107,   108,   101,   102,   103,   104,   105,   106,   107,
     108,   101,   102,   103,   104,   105,   106,   107,   108,   107,
     108,   131,    37,    36,    39,    40,    71,    67,    84,   134,
      65,    68,    69,    70,    88,   144,   101,   102,   103,   104,
     105,   106,   107,   108,    72,    73,    82,    83,   101,   102,
     103,   104,   105,   106,   107,   108,    96,   109,   119,   120,
     121,   122,   123,   124,   101,   102,   103,   104,   105,   106,
     107,   108,   113,   114,   115,   -47,   145,   158,    30,   116,
      12,    32,   155,   161,    38,   110,     0,     0,     0,     0,
       0,   133
};

static const yytype_int16 yycheck[] =
{
      43,    67,     1,    72,     3,     3,     4,     3,     7,     8,
       9,    69,    11,    12,    13,    14,    15,    24,    25,    17,
       5,     6,     3,     4,    67,    53,    39,    96,    41,    72,
       0,    24,    25,    91,     3,    42,    17,    39,    66,    37,
       5,     6,    70,    41,    43,    44,    24,    25,    76,    42,
      78,    32,    54,    96,     3,    83,    84,   115,   116,   128,
      41,   130,   131,    91,    42,    24,    25,   110,    33,    41,
      98,   129,    39,   101,   102,   103,   104,   105,   106,   107,
     108,    24,    25,    42,    41,   128,   114,   130,   131,   158,
     156,     6,   161,     1,    37,     3,     3,   125,     4,     7,
       8,     9,     3,    11,    12,    13,    14,    15,    38,     3,
       4,    37,    38,   156,     1,   158,     3,    39,   161,    41,
       7,     8,     9,    17,    11,    12,    13,    14,    15,    18,
      19,    20,    21,    22,    23,    43,    44,    42,    16,    17,
      18,    19,    20,    21,    22,    23,    39,    41,    26,    27,
      28,    29,    30,    31,     2,    39,    43,    41,     6,     7,
      20,    21,    22,    23,    42,    16,    17,    18,    19,    20,
      21,    22,    23,    16,    17,    18,    19,    20,    21,    22,
      23,    16,    17,    18,    19,    20,    21,    22,    23,    22,
      23,    42,    42,    40,    43,    37,     4,    41,    39,    42,
      45,    41,    41,    41,     3,    40,    16,    17,    18,    19,
      20,    21,    22,    23,    46,    37,    37,    47,    16,    17,
      18,    19,    20,    21,    22,    23,    46,    37,    26,    27,
      28,    29,    30,    31,    16,    17,    18,    19,    20,    21,
      22,    23,    42,    38,    37,    39,    37,    10,    22,    41,
       7,    24,    42,    42,    34,    81,    -1,    -1,    -1,    -1,
      -1,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,     5,     6,    33,    51,    52,    56,
      57,    57,    56,    57,     3,    53,    54,    55,     3,     3,
      41,    37,    38,    39,    41,     6,    58,    59,    60,     3,
      54,     4,    59,     3,    38,    42,    40,    42,    60,    43,
      37,    50,    57,    61,     1,     3,     7,     8,     9,    11,
      12,    13,    14,    15,    43,    44,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    45,    41,    41,    41,    41,
      41,     4,    46,    37,     3,     4,    17,    37,    41,    69,
      71,    50,    37,    47,    39,    71,    72,    73,     3,    66,
      32,    41,    71,    74,    74,    71,    46,    62,    41,    71,
      71,    16,    17,    18,    19,    20,    21,    22,    23,    37,
      61,    71,    71,    42,    38,    37,    41,    71,    74,    26,
      27,    28,    29,    30,    31,    76,    24,    25,    42,    75,
      42,    42,    62,    72,    42,    71,    71,    71,    71,    71,
      71,    71,    71,    44,    40,    37,    71,    74,    74,    42,
      71,    62,    74,    62,    62,    42,    37,    42,    10,    66,
      62,    42,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    52,    53,    53,
      54,    54,    55,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    63,    63,    63,    64,    64,    64,    64,    64,    65,
      65,    65,    66,    67,    68,    69,    69,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    72,    72,    73,    73,    74,    74,    74,    74,
      75,    75,    76,    76,    76,    76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     2,     1,     3,     3,     1,
       1,     1,     1,     4,     9,     7,     1,     1,     3,     1,
       1,     0,     2,     2,     0,     1,     1,     1,     2,     1,
       1,     9,     5,     2,     5,     7,     5,     4,     3,     2,
       2,     3,     3,     4,     5,     1,     1,     1,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     1,
       1,     4,     1,     0,     3,     1,     4,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 57 "miniC.y"
                                                    {(yyval.tree)=initialiseTree("coucou",(yyvsp[-1].tree)); (yyval.tree)->fil->suivants=reverse((yyvsp[0].tree)); visualise((yyval.tree),0,0);writeDot((yyval.tree));}
#line 1524 "y.tab.c"
    break;

  case 3:
#line 60 "miniC.y"
                                                {(yyval.tree) = (yyvsp[0].tree); (yyval.tree)->suivants = (yyvsp[-1].tree);}
#line 1530 "y.tab.c"
    break;

  case 4:
#line 61 "miniC.y"
                                        {(yyval.tree) = initialiseTree("...",NULL);}
#line 1536 "y.tab.c"
    break;

  case 5:
#line 64 "miniC.y"
                                              {(yyval.tree) = (yyvsp[0].tree); (yyval.tree)->suivants = (yyvsp[-1].tree);}
#line 1542 "y.tab.c"
    break;

  case 6:
#line 65 "miniC.y"
                                                {(yyval.tree)=(yyvsp[0].tree);}
#line 1548 "y.tab.c"
    break;

  case 7:
#line 68 "miniC.y"
                                            {(yyval.tree)=initialiseTree((yyvsp[-2].id),NULL); (yyval.tree)->fil=reverse((yyvsp[-1].tree));}
#line 1554 "y.tab.c"
    break;

  case 8:
#line 71 "miniC.y"
                                                   {(yyval.tree) = (yyvsp[0].tree); (yyval.tree)->suivants = (yyvsp[-2].tree);}
#line 1560 "y.tab.c"
    break;

  case 9:
#line 72 "miniC.y"
                             {(yyval.tree) = (yyvsp[0].tree);}
#line 1566 "y.tab.c"
    break;

  case 10:
#line 75 "miniC.y"
                                 { (yyval.tree) = initialiseTree((yyvsp[0].id),NULL);}
#line 1572 "y.tab.c"
    break;

  case 11:
#line 76 "miniC.y"
                                     { (yyval.tree)=initialiseTree("tab",reverse((yyvsp[0].tree)));}
#line 1578 "y.tab.c"
    break;

  case 12:
#line 79 "miniC.y"
                        {(yyval.tree) = initialiseTree((yyvsp[0].id),NULL);}
#line 1584 "y.tab.c"
    break;

  case 13:
#line 80 "miniC.y"
                                               {(yyval.tree) = initialiseTree((yyvsp[-1].id),NULL); (yyval.tree)->suivants = (yyvsp[-3].tree);}
#line 1590 "y.tab.c"
    break;

  case 14:
#line 84 "miniC.y"
                                                                                                      {(yyval.tree)=initialiseTree("pomme",(yyvsp[-5].tree));(yyval.tree)->fil->suivants=reverse((yyvsp[-2].tree));(yyval.tree)->fil->suivants->suivants=reverse((yyvsp[-1].tree));}
#line 1596 "y.tab.c"
    break;

  case 15:
#line 85 "miniC.y"
                                                                   {(yyval.tree)=initialiseTree("extern",(yyvsp[-5].id));(yyval.tree)->fil->suivants=(yyvsp[-4].id);(yyval.tree)->fil->suivants->suivants=(yyvsp[-2].tree);}
#line 1602 "y.tab.c"
    break;

  case 16:
#line 88 "miniC.y"
                     {(yyval.id)="void";}
#line 1608 "y.tab.c"
    break;

  case 17:
#line 89 "miniC.y"
                    {(yyval.id) = "int";}
#line 1614 "y.tab.c"
    break;

  case 18:
#line 93 "miniC.y"
                                      {(yyval.tree) = (yyvsp[0].id); (yyval.tree)->suivants = (yyvsp[-2].tree);}
#line 1620 "y.tab.c"
    break;

  case 19:
#line 94 "miniC.y"
                {(yyval.tree) = initialiseTree((yyvsp[0].id),NULL);}
#line 1626 "y.tab.c"
    break;

  case 20:
#line 98 "miniC.y"
                                     {(yyval.tree)=reverse((yyvsp[0].tree));}
#line 1632 "y.tab.c"
    break;

  case 21:
#line 99 "miniC.y"
                                        {(yyval.tree) = initialiseTree("...",NULL);}
#line 1638 "y.tab.c"
    break;

  case 22:
#line 103 "miniC.y"
                                    {(yyval.id)=initialiseTree("int",initialiseTree((yyvsp[0].id),NULL));}
#line 1644 "y.tab.c"
    break;

  case 23:
#line 107 "miniC.y"
                                               {(yyval.tree) = (yyvsp[0].tree); (yyval.tree)->suivants = (yyvsp[-1].tree);}
#line 1650 "y.tab.c"
    break;

  case 24:
#line 108 "miniC.y"
                                        {(yyval.tree) = initialiseTree("...",NULL);}
#line 1656 "y.tab.c"
    break;

  case 25:
#line 111 "miniC.y"
                          {(yyval.tree)=(yyvsp[0].tree);}
#line 1662 "y.tab.c"
    break;

  case 26:
#line 112 "miniC.y"
                          {(yyval.tree) = (yyvsp[0].tree);}
#line 1668 "y.tab.c"
    break;

  case 27:
#line 113 "miniC.y"
                     { (yyval.tree) = (yyvsp[0].tree);}
#line 1674 "y.tab.c"
    break;

  case 28:
#line 114 "miniC.y"
                                { (yyval.tree) = (yyvsp[-1].tree);}
#line 1680 "y.tab.c"
    break;

  case 29:
#line 115 "miniC.y"
                     {(yyval.tree)=(yyvsp[0].tree);}
#line 1686 "y.tab.c"
    break;

  case 30:
#line 116 "miniC.y"
                      {(yyval.tree)=(yyvsp[0].tree);}
#line 1692 "y.tab.c"
    break;

  case 31:
#line 119 "miniC.y"
                                                                                        {(yyval.tree)=initialiseTree("for",(yyvsp[-6].tree)); (yyval.tree)->fil->suivants=(yyvsp[-4].tree);(yyval.tree)->fil->suivants->suivants=(yyvsp[-2].tree);(yyval.tree)->fil->suivants->suivants->suivants=(yyvsp[0].tree);}
#line 1698 "y.tab.c"
    break;

  case 32:
#line 120 "miniC.y"
                                                    {(yyval.tree)=initialiseTree("while",(yyvsp[-2].tree)); (yyval.tree)->fil->suivants=(yyvsp[0].tree);}
#line 1704 "y.tab.c"
    break;

  case 33:
#line 121 "miniC.y"
                       {yyerror("reenter last");
                        yyerrok; }
#line 1711 "y.tab.c"
    break;

  case 34:
#line 125 "miniC.y"
                                                            {(yyval.tree) = initialiseTree("if",(yyvsp[-2].tree));(yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1717 "y.tab.c"
    break;

  case 35:
#line 126 "miniC.y"
                                                                  {(yyval.tree) = initialiseTree("if",(yyvsp[-4].tree));(yyval.tree)->fil->suivants = (yyvsp[-2].tree);(yyval.tree)->fil->suivants->suivants = initialiseTree("else",(yyvsp[0].tree));}
#line 1723 "y.tab.c"
    break;

  case 36:
#line 127 "miniC.y"
                                                      {(yyval.tree) = initialiseTree("switch",(yyvsp[-2].tree)); (yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1729 "y.tab.c"
    break;

  case 37:
#line 128 "miniC.y"
                                               {(yyval.tree) = initialiseTree("case",(yyvsp[-3].id)); (yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1735 "y.tab.c"
    break;

  case 38:
#line 129 "miniC.y"
                                        {(yyval.tree) = initialiseTree("default",(yyvsp[0].tree));}
#line 1741 "y.tab.c"
    break;

  case 39:
#line 132 "miniC.y"
                          {(yyval.tree)=initialiseTree("break",NULL);}
#line 1747 "y.tab.c"
    break;

  case 40:
#line 133 "miniC.y"
                           {(yyval.tree) = initialiseTree("return",NULL);}
#line 1753 "y.tab.c"
    break;

  case 41:
#line 134 "miniC.y"
                                      {(yyval.tree) = initialiseTree("return",(yyvsp[-1].tree));}
#line 1759 "y.tab.c"
    break;

  case 42:
#line 137 "miniC.y"
                                         {(yyval.tree) = initialiseTree("=",(yyvsp[-2].tree));(yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1765 "y.tab.c"
    break;

  case 43:
#line 140 "miniC.y"
                                                              { (yyval.tree) = initialiseTree("bloc",initialiseTree("decla",NULL)); ;(yyval.tree)->fil->suivants = reverse((yyvsp[-1].tree));}
#line 1771 "y.tab.c"
    break;

  case 44:
#line 143 "miniC.y"
                                                             {(yyval.tree)=initialiseTree((yyvsp[-4].id),NULL);(yyval.tree)->fil=reverse((yyvsp[-2].tree));}
#line 1777 "y.tab.c"
    break;

  case 45:
#line 146 "miniC.y"
                                {(yyval.tree) = initialiseTree((yyvsp[0].id),NULL);}
#line 1783 "y.tab.c"
    break;

  case 46:
#line 147 "miniC.y"
                                 { (yyval.tree)=initialiseTree("tab",reverse((yyvsp[0].tree)));}
#line 1789 "y.tab.c"
    break;

  case 47:
#line 150 "miniC.y"
                        {(yyval.tree) = initialiseTree((yyvsp[0].id),NULL);}
#line 1795 "y.tab.c"
    break;

  case 48:
#line 151 "miniC.y"
                                             {(yyval.tree) = (yyvsp[-1].tree); (yyval.tree)->suivants = (yyvsp[-3].tree);}
#line 1801 "y.tab.c"
    break;

  case 49:
#line 154 "miniC.y"
                                        {(yyval.tree) = (yyvsp[-1].tree);}
#line 1807 "y.tab.c"
    break;

  case 50:
#line 156 "miniC.y"
                                                {(yyval.tree) = initialiseTree("+",(yyvsp[-2].tree)); (yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1813 "y.tab.c"
    break;

  case 51:
#line 157 "miniC.y"
                                                {(yyval.tree) = initialiseTree("-",(yyvsp[-2].tree)); (yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1819 "y.tab.c"
    break;

  case 52:
#line 158 "miniC.y"
                                         {(yyval.tree) = initialiseTree("/",(yyvsp[-2].tree)); (yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1825 "y.tab.c"
    break;

  case 53:
#line 159 "miniC.y"
                                                {(yyval.tree) = initialiseTree("*",(yyvsp[-2].tree)); (yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1831 "y.tab.c"
    break;

  case 54:
#line 160 "miniC.y"
                                                {(yyval.tree) = initialiseTree(">>",(yyvsp[-2].tree)); (yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1837 "y.tab.c"
    break;

  case 55:
#line 161 "miniC.y"
                                                {(yyval.tree) = initialiseTree("<<",(yyvsp[-2].tree)); (yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1843 "y.tab.c"
    break;

  case 56:
#line 162 "miniC.y"
                                                {(yyval.tree) = initialiseTree("&=",(yyvsp[-2].tree)); (yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1849 "y.tab.c"
    break;

  case 57:
#line 163 "miniC.y"
                                                {(yyval.tree) = initialiseTree("|=",(yyvsp[-2].tree)); (yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1855 "y.tab.c"
    break;

  case 58:
#line 164 "miniC.y"
                                                {(yyval.tree) = initialiseTree("-",(yyvsp[0].tree));}
#line 1861 "y.tab.c"
    break;

  case 59:
#line 165 "miniC.y"
                                {(yyval.tree) = initialiseTree((yyvsp[0].id),NULL);}
#line 1867 "y.tab.c"
    break;

  case 60:
#line 166 "miniC.y"
                                 {(yyval.tree) =  (yyvsp[0].tree);}
#line 1873 "y.tab.c"
    break;

  case 61:
#line 167 "miniC.y"
                                                         {(yyval.tree) = initialiseTree(NULL,NULL);}
#line 1879 "y.tab.c"
    break;

  case 62:
#line 171 "miniC.y"
                       {(yyval.tree) = (yyvsp[0].tree);}
#line 1885 "y.tab.c"
    break;

  case 63:
#line 172 "miniC.y"
                        {(yyval.tree) = initialiseTree("...",NULL);}
#line 1891 "y.tab.c"
    break;

  case 64:
#line 175 "miniC.y"
                                      {(yyval.tree) = (yyvsp[0].tree); (yyval.tree)->suivants = (yyvsp[-2].tree);}
#line 1897 "y.tab.c"
    break;

  case 65:
#line 176 "miniC.y"
                                   {(yyval.tree)=(yyvsp[0].tree);}
#line 1903 "y.tab.c"
    break;

  case 66:
#line 179 "miniC.y"
                                      {(yyval.tree) = initialiseTree("not",(yyvsp[-1].tree));}
#line 1909 "y.tab.c"
    break;

  case 67:
#line 180 "miniC.y"
                                                         {(yyval.tree) = initialiseTree((yyvsp[-1].id),(yyvsp[-2].tree)); (yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1915 "y.tab.c"
    break;

  case 68:
#line 181 "miniC.y"
                                  { (yyval.tree) = (yyvsp[-1].tree);}
#line 1921 "y.tab.c"
    break;

  case 69:
#line 182 "miniC.y"
                                                  {(yyval.tree) = initialiseTree((yyvsp[-1].id),(yyvsp[-2].tree)); (yyval.tree)->fil->suivants = (yyvsp[0].tree);}
#line 1927 "y.tab.c"
    break;

  case 70:
#line 195 "miniC.y"
                     {(yyval.id) = "&&"; }
#line 1933 "y.tab.c"
    break;

  case 71:
#line 196 "miniC.y"
                        {(yyval.id) = "||"; }
#line 1939 "y.tab.c"
    break;

  case 72:
#line 199 "miniC.y"
                        {(yyval.id) = "<"; }
#line 1945 "y.tab.c"
    break;

  case 73:
#line 200 "miniC.y"
                        {(yyval.id) = ">"; }
#line 1951 "y.tab.c"
    break;

  case 74:
#line 201 "miniC.y"
                        {(yyval.id) = ">="; }
#line 1957 "y.tab.c"
    break;

  case 75:
#line 202 "miniC.y"
                        {(yyval.id) = "<="; }
#line 1963 "y.tab.c"
    break;

  case 76:
#line 203 "miniC.y"
                        {(yyval.id) = "="; }
#line 1969 "y.tab.c"
    break;

  case 77:
#line 204 "miniC.y"
                        {(yyval.id) = "!="; }
#line 1975 "y.tab.c"
    break;


#line 1979 "y.tab.c"

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
#line 207 "miniC.y"




extern int yylineno;
void yyerror(char *s){
	 fprintf(stderr, " line %d: %s\n", yylineno, s);
	 exit(1);
}

int yywrap() {
	return 1;
} 
int main(void) {
	//table_reset();
	while(yyparse());
}


