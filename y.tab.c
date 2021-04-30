/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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




/* Copy the first part of user declarations.  */
#line 1 "miniC.y"

#include <stdio.h> 
#include <stdlib.h>
#include  "table.h"


#define TAILLE 103 /* nombre premier de préférence */

extern int chars;




void yyerror (char *s);
void table_reset();
//struct tree *t;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 19 "miniC.y"
{
	int val;
	char* id;
	struct _tree *tree;
}
/* Line 193 of yacc.c.  */
#line 192 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 205 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

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
/* YYNRULES -- Number of states.  */
#define YYNSTATES  163

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    13,    15,    19,    23,
      25,    27,    29,    31,    36,    46,    54,    56,    58,    62,
      64,    66,    67,    70,    73,    74,    76,    78,    80,    83,
      85,    87,    97,   103,   106,   112,   120,   126,   131,   135,
     138,   141,   145,   149,   154,   160,   162,   164,   166,   171,
     175,   179,   183,   187,   191,   195,   199,   203,   207,   210,
     212,   214,   219,   221,   222,   226,   228,   233,   237,   241,
     245,   247,   249,   251,   253,   255,   257,   259
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    50,    51,    -1,    50,    52,    -1,    -1,
      51,    56,    -1,    56,    -1,    57,    53,    37,    -1,    53,
      38,    54,    -1,    54,    -1,     3,    -1,    55,    -1,     3,
      -1,    55,    39,     4,    40,    -1,    57,     3,    41,    59,
      42,    43,    50,    61,    44,    -1,    33,    57,     3,    41,
      59,    42,    37,    -1,     5,    -1,     6,    -1,    58,    38,
      60,    -1,    60,    -1,    58,    -1,    -1,     6,     3,    -1,
      61,    62,    -1,    -1,    63,    -1,    64,    -1,    65,    -1,
      66,    37,    -1,    67,    -1,    68,    -1,     7,    41,    66,
      37,    74,    37,    66,    42,    62,    -1,     8,    41,    74,
      42,    62,    -1,     1,    45,    -1,     9,    41,    74,    42,
      62,    -1,     9,    41,    74,    42,    62,    10,    62,    -1,
      11,    41,    71,    42,    62,    -1,    12,     4,    46,    62,
      -1,    13,    46,    62,    -1,    14,    37,    -1,    15,    37,
      -1,    15,    71,    37,    -1,    69,    47,    71,    -1,    43,
      50,    61,    44,    -1,     3,    41,    72,    42,    37,    -1,
       3,    -1,    70,    -1,     3,    -1,    70,    39,    71,    40,
      -1,    41,    71,    42,    -1,    71,    16,    71,    -1,    71,
      17,    71,    -1,    71,    19,    71,    -1,    71,    18,    71,
      -1,    71,    21,    71,    -1,    71,    20,    71,    -1,    71,
      22,    71,    -1,    71,    23,    71,    -1,    17,    71,    -1,
       4,    -1,    69,    -1,     3,    41,    72,    42,    -1,    73,
      -1,    -1,    73,    38,    71,    -1,    71,    -1,    32,    41,
      74,    42,    -1,    74,    75,    74,    -1,    41,    74,    42,
      -1,    71,    76,    71,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,    31,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
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

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "binary_rel", "binary_comp", 0
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
     285,   286,   287,   288,   289,   290,   291,    59,    44,    91,
      93,    40,    41,   123,   125,    10,    58,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,     8,    15,    16,    17,     9,    42,
      26,    27,    28,    43,    56,    57,    58,    59,    60,    61,
      62,    79,    64,    92,    86,    87,    93,   129,   125
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -70
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,    -2,   -70,   -70,   -70,   226,   -70,   243,   152,
     -70,   227,   220,   174,   -69,   -70,   -70,   -70,   -66,   -70,
     -70,   -43,   -70,   -28,   163,   -70,   -58,   -70,   -70
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -48
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
static const yytype_uint8 yystos[] =
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 2:
#line 57 "miniC.y"
    {(yyval.tree)=initialiseTree("coucou",(yyvsp[(1) - (2)].tree)); (yyval.tree)->fil->suivants=reverse((yyvsp[(2) - (2)].tree)); writeDot((yyval.tree)); visualise((yyval.tree),0,0);}
    break;

  case 3:
#line 60 "miniC.y"
    {(yyval.tree) = (yyvsp[(2) - (2)].tree); (yyval.tree)->suivants = (yyvsp[(1) - (2)].tree);}
    break;

  case 4:
#line 61 "miniC.y"
    {(yyval.tree) = initialiseTree("...",NULL);}
    break;

  case 5:
#line 64 "miniC.y"
    {(yyval.tree) = (yyvsp[(2) - (2)].tree); (yyval.tree)->suivants = (yyvsp[(1) - (2)].tree);}
    break;

  case 6:
#line 65 "miniC.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);}
    break;

  case 7:
#line 68 "miniC.y"
    {(yyval.tree)=initialiseTree((yyvsp[(1) - (3)].id),NULL); (yyval.tree)->fil=reverse((yyvsp[(2) - (3)].tree));}
    break;

  case 8:
#line 71 "miniC.y"
    {(yyval.tree) = (yyvsp[(3) - (3)].tree); (yyval.tree)->suivants = (yyvsp[(1) - (3)].tree);}
    break;

  case 9:
#line 72 "miniC.y"
    {(yyval.tree) = (yyvsp[(1) - (1)].tree);}
    break;

  case 10:
#line 75 "miniC.y"
    { (yyval.tree) = initialiseTree((yyvsp[(1) - (1)].id),NULL);}
    break;

  case 11:
#line 76 "miniC.y"
    { (yyval.tree)=initialiseTree("tab",reverse((yyvsp[(1) - (1)].tree)));}
    break;

  case 12:
#line 79 "miniC.y"
    {(yyval.tree) = initialiseTree((yyvsp[(1) - (1)].id),NULL);}
    break;

  case 13:
#line 80 "miniC.y"
    {(yyval.tree) = initialiseTree((yyvsp[(3) - (4)].id),NULL); (yyval.tree)->suivants = (yyvsp[(1) - (4)].tree);}
    break;

  case 14:
#line 84 "miniC.y"
    {(yyval.tree)=initialiseTree("pomme",(yyvsp[(4) - (9)].tree));(yyval.tree)->fil->suivants=reverse((yyvsp[(7) - (9)].tree));(yyval.tree)->fil->suivants->suivants=reverse((yyvsp[(8) - (9)].tree));}
    break;

  case 15:
#line 85 "miniC.y"
    {(yyval.tree)=initialiseTree("extern",(yyvsp[(2) - (7)].id));(yyval.tree)->fil->suivants=(yyvsp[(3) - (7)].id);(yyval.tree)->fil->suivants->suivants=(yyvsp[(5) - (7)].tree);}
    break;

  case 16:
#line 88 "miniC.y"
    {(yyval.id)="void";}
    break;

  case 17:
#line 89 "miniC.y"
    {(yyval.id) = "int";}
    break;

  case 18:
#line 93 "miniC.y"
    {(yyval.tree) = (yyvsp[(3) - (3)].id); (yyval.tree)->suivants = (yyvsp[(1) - (3)].tree);}
    break;

  case 19:
#line 94 "miniC.y"
    {(yyval.tree) = initialiseTree((yyvsp[(1) - (1)].id),NULL);}
    break;

  case 20:
#line 98 "miniC.y"
    {(yyval.tree)=reverse((yyvsp[(1) - (1)].tree));}
    break;

  case 21:
#line 99 "miniC.y"
    {(yyval.tree) = initialiseTree("...",NULL);}
    break;

  case 22:
#line 103 "miniC.y"
    {(yyval.id)=initialiseTree("int",initialiseTree((yyvsp[(2) - (2)].id),NULL));}
    break;

  case 23:
#line 107 "miniC.y"
    {(yyval.tree) = (yyvsp[(2) - (2)].tree); (yyval.tree)->suivants = (yyvsp[(1) - (2)].tree);}
    break;

  case 24:
#line 108 "miniC.y"
    {(yyval.tree) = initialiseTree("...",NULL);}
    break;

  case 25:
#line 111 "miniC.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);}
    break;

  case 26:
#line 112 "miniC.y"
    {(yyval.tree) = (yyvsp[(1) - (1)].tree);}
    break;

  case 27:
#line 113 "miniC.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree);}
    break;

  case 28:
#line 114 "miniC.y"
    { (yyval.tree) = (yyvsp[(1) - (2)].tree);}
    break;

  case 29:
#line 115 "miniC.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);}
    break;

  case 30:
#line 116 "miniC.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);}
    break;

  case 31:
#line 119 "miniC.y"
    {(yyval.tree)=initialiseTree("for",(yyvsp[(3) - (9)].tree)); (yyval.tree)->fil->suivants=(yyvsp[(5) - (9)].tree);(yyval.tree)->fil->suivants->suivants=(yyvsp[(7) - (9)].tree);(yyval.tree)->fil->suivants->suivants->suivants=(yyvsp[(9) - (9)].tree);}
    break;

  case 32:
#line 120 "miniC.y"
    {(yyval.tree)=initialiseTree("while",(yyvsp[(3) - (5)].tree)); (yyval.tree)->fil->suivants=(yyvsp[(5) - (5)].tree);}
    break;

  case 33:
#line 121 "miniC.y"
    {yyerror("reenter last");
                        yyerrok; }
    break;

  case 34:
#line 125 "miniC.y"
    {(yyval.tree) = initialiseTree("if",(yyvsp[(3) - (5)].tree));(yyval.tree)->fil->suivants = (yyvsp[(5) - (5)].tree);}
    break;

  case 35:
#line 126 "miniC.y"
    {(yyval.tree) = initialiseTree("if",(yyvsp[(3) - (7)].tree));(yyval.tree)->fil->suivants = (yyvsp[(5) - (7)].tree);(yyval.tree)->fil->suivants->suivants = initialiseTree("else",(yyvsp[(7) - (7)].tree));}
    break;

  case 36:
#line 127 "miniC.y"
    {(yyval.tree) = initialiseTree("switch",(yyvsp[(3) - (5)].tree)); (yyval.tree)->fil->suivants = (yyvsp[(5) - (5)].tree);}
    break;

  case 37:
#line 128 "miniC.y"
    {(yyval.tree) = initialiseTree("case",(yyvsp[(1) - (4)].id)); (yyval.tree)->fil->suivants = (yyvsp[(4) - (4)].tree);}
    break;

  case 38:
#line 129 "miniC.y"
    {(yyval.tree) = initialiseTree("default",(yyvsp[(3) - (3)].tree));}
    break;

  case 39:
#line 132 "miniC.y"
    {(yyval.tree)=initialiseTree("break",NULL);}
    break;

  case 40:
#line 133 "miniC.y"
    {(yyval.tree) = initialiseTree("return",NULL);}
    break;

  case 41:
#line 134 "miniC.y"
    {(yyval.tree) = initialiseTree("return",(yyvsp[(2) - (3)].tree));}
    break;

  case 42:
#line 137 "miniC.y"
    {(yyval.tree) = initialiseTree("=",(yyvsp[(1) - (3)].tree));(yyval.tree)->fil->suivants = (yyvsp[(3) - (3)].tree);}
    break;

  case 43:
#line 140 "miniC.y"
    { (yyval.tree) = initialiseTree("bloc",initialiseTree("decla",NULL)); ;(yyval.tree)->fil->suivants = reverse((yyvsp[(3) - (4)].tree));}
    break;

  case 44:
#line 143 "miniC.y"
    {(yyval.tree)=initialiseTree((yyvsp[(1) - (5)].id),NULL);(yyval.tree)->fil=reverse((yyvsp[(3) - (5)].tree));}
    break;

  case 45:
#line 146 "miniC.y"
    {(yyval.tree) = initialiseTree((yyvsp[(1) - (1)].id),NULL);}
    break;

  case 46:
#line 147 "miniC.y"
    { (yyval.tree)=initialiseTree("tab",reverse((yyvsp[(1) - (1)].tree)));}
    break;

  case 47:
#line 150 "miniC.y"
    {(yyval.tree) = initialiseTree((yyvsp[(1) - (1)].id),NULL);}
    break;

  case 48:
#line 151 "miniC.y"
    {(yyval.tree) = (yyvsp[(3) - (4)].tree); (yyval.tree)->suivants = (yyvsp[(1) - (4)].tree);}
    break;

  case 49:
#line 154 "miniC.y"
    {(yyval.tree) = (yyvsp[(2) - (3)].tree);}
    break;

  case 50:
#line 156 "miniC.y"
    {(yyval.tree) = initialiseTree("+",(yyvsp[(1) - (3)].tree)); (yyval.tree)->fil->suivants = (yyvsp[(3) - (3)].tree);}
    break;

  case 51:
#line 157 "miniC.y"
    {(yyval.tree) = initialiseTree("-",(yyvsp[(1) - (3)].tree)); (yyval.tree)->fil->suivants = (yyvsp[(3) - (3)].tree);}
    break;

  case 52:
#line 158 "miniC.y"
    {(yyval.tree) = initialiseTree("/",(yyvsp[(1) - (3)].tree)); (yyval.tree)->fil->suivants = (yyvsp[(3) - (3)].tree);}
    break;

  case 53:
#line 159 "miniC.y"
    {(yyval.tree) = initialiseTree("*",(yyvsp[(1) - (3)].tree)); (yyval.tree)->fil->suivants = (yyvsp[(3) - (3)].tree);}
    break;

  case 54:
#line 160 "miniC.y"
    {(yyval.tree) = initialiseTree(">>",(yyvsp[(1) - (3)].tree)); (yyval.tree)->fil->suivants = (yyvsp[(3) - (3)].tree);}
    break;

  case 55:
#line 161 "miniC.y"
    {(yyval.tree) = initialiseTree("<<",(yyvsp[(1) - (3)].tree)); (yyval.tree)->fil->suivants = (yyvsp[(3) - (3)].tree);}
    break;

  case 56:
#line 162 "miniC.y"
    {(yyval.tree) = initialiseTree("&=",(yyvsp[(1) - (3)].tree)); (yyval.tree)->fil->suivants = (yyvsp[(3) - (3)].tree);}
    break;

  case 57:
#line 163 "miniC.y"
    {(yyval.tree) = initialiseTree("|=",(yyvsp[(1) - (3)].tree)); (yyval.tree)->fil->suivants = (yyvsp[(3) - (3)].tree);}
    break;

  case 58:
#line 164 "miniC.y"
    {(yyval.tree) = initialiseTree("-",(yyvsp[(2) - (2)].tree));}
    break;

  case 59:
#line 165 "miniC.y"
    {(yyval.tree) = initialiseTree((yyvsp[(1) - (1)].id),NULL);}
    break;

  case 60:
#line 166 "miniC.y"
    {(yyval.tree) =  (yyvsp[(1) - (1)].tree);}
    break;

  case 61:
#line 167 "miniC.y"
    {(yyval.tree) = initialiseTree(NULL,NULL);}
    break;

  case 62:
#line 171 "miniC.y"
    {(yyval.tree) = (yyvsp[(1) - (1)].tree);}
    break;

  case 63:
#line 172 "miniC.y"
    {(yyval.tree) = initialiseTree("...",NULL);}
    break;

  case 64:
#line 175 "miniC.y"
    {(yyval.tree) = (yyvsp[(3) - (3)].tree); (yyval.tree)->suivants = (yyvsp[(1) - (3)].tree);}
    break;

  case 65:
#line 176 "miniC.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);}
    break;

  case 66:
#line 179 "miniC.y"
    {(yyval.tree) = initialiseTree("not",(yyvsp[(3) - (4)].tree));}
    break;

  case 67:
#line 180 "miniC.y"
    {(yyval.tree) = initialiseTree((yyvsp[(2) - (3)].id),(yyvsp[(1) - (3)].tree)); (yyval.tree)->fil->suivants = (yyvsp[(3) - (3)].tree);}
    break;

  case 68:
#line 181 "miniC.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree);}
    break;

  case 69:
#line 182 "miniC.y"
    {(yyval.tree) = initialiseTree((yyvsp[(2) - (3)].id),(yyvsp[(1) - (3)].tree)); (yyval.tree)->fil->suivants = (yyvsp[(3) - (3)].tree);}
    break;

  case 70:
#line 195 "miniC.y"
    {(yyval.id) = "&&"; }
    break;

  case 71:
#line 196 "miniC.y"
    {(yyval.id) = "||"; }
    break;

  case 72:
#line 199 "miniC.y"
    {(yyval.id) = "<"; }
    break;

  case 73:
#line 200 "miniC.y"
    {(yyval.id) = ">"; }
    break;

  case 74:
#line 201 "miniC.y"
    {(yyval.id) = ">="; }
    break;

  case 75:
#line 202 "miniC.y"
    {(yyval.id) = "<="; }
    break;

  case 76:
#line 203 "miniC.y"
    {(yyval.id) = "="; }
    break;

  case 77:
#line 204 "miniC.y"
    {(yyval.id) = "!="; }
    break;


/* Line 1267 of yacc.c.  */
#line 1942 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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



