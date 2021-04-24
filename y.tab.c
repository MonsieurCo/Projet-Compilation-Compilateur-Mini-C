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
     VOID = 258,
     INT = 259,
     PLUS = 260,
     MOINS = 261,
     MUL = 262,
     DIV = 263,
     LSHIFT = 264,
     RSHIFT = 265,
     BAND = 266,
     BOR = 267,
     LAND = 268,
     LOR = 269,
     LT = 270,
     GT = 271,
     GEQ = 272,
     LEQ = 273,
     EQ = 274,
     NEQ = 275,
     THEN = 276,
     ELSE = 277,
     OP = 278,
     REL = 279,
     WHILE = 280,
     FOR = 281,
     IF = 282,
     NOT = 283,
     IDENTIFICATEUR = 284,
     CONSTANTE = 285,
     BREAK = 286,
     RETURN = 287,
     DEFAULT = 288,
     CASE = 289,
     SWITCH = 290,
     EXTERN = 291
   };
#endif
/* Tokens.  */
#define VOID 258
#define INT 259
#define PLUS 260
#define MOINS 261
#define MUL 262
#define DIV 263
#define LSHIFT 264
#define RSHIFT 265
#define BAND 266
#define BOR 267
#define LAND 268
#define LOR 269
#define LT 270
#define GT 271
#define GEQ 272
#define LEQ 273
#define EQ 274
#define NEQ 275
#define THEN 276
#define ELSE 277
#define OP 278
#define REL 279
#define WHILE 280
#define FOR 281
#define IF 282
#define NOT 283
#define IDENTIFICATEUR 284
#define CONSTANTE 285
#define BREAK 286
#define RETURN 287
#define DEFAULT 288
#define CASE 289
#define SWITCH 290
#define EXTERN 291




/* Copy the first part of user declarations.  */
#line 1 "miniC.y"

#include <stdio.h> 
#include <stdlib.h>
#include <stdio.h> "table.h"


#define TAILLE 103 /* nombre premier de préférence */

extern int chars;


void yyerror (char *s);
void table_reset();


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
#line 16 "miniC.y"
{
	int val;
	char* id;
}
/* Line 193 of yacc.c.  */
#line 188 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 201 "y.tab.c"

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
#define YYLAST   244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNRULES -- Number of states.  */
#define YYNSTATES  155

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
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    13,    15,    19,    23,
      25,    27,    32,    42,    50,    52,    54,    58,    60,    62,
      63,    66,    69,    70,    72,    74,    76,    79,    81,    83,
      93,    99,   102,   108,   116,   122,   127,   131,   134,   137,
     141,   145,   150,   156,   158,   163,   167,   171,   174,   176,
     178,   183,   185,   186,   190,   192,   197,   201,   205,   209,
     211,   213,   215,   217,   219,   221,   223,   225,   227,   229,
     231,   233,   235,   237,   239
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    50,    51,    -1,    50,    52,    -1,    -1,
      51,    55,    -1,    55,    -1,    56,    53,    37,    -1,    53,
      38,    54,    -1,    54,    -1,    29,    -1,    54,    39,    30,
      40,    -1,    56,    29,    41,    58,    42,    43,    50,    60,
      44,    -1,    36,    56,    29,    41,    58,    42,    37,    -1,
       3,    -1,     4,    -1,    57,    38,    59,    -1,    59,    -1,
      57,    -1,    -1,     4,    29,    -1,    60,    61,    -1,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    37,    -1,    66,
      -1,    67,    -1,    26,    41,    65,    37,    72,    37,    65,
      42,    61,    -1,    25,    41,    72,    42,    61,    -1,     1,
      45,    -1,    27,    41,    72,    42,    61,    -1,    27,    41,
      72,    42,    61,    22,    61,    -1,    35,    41,    69,    42,
      61,    -1,    34,    30,    46,    61,    -1,    33,    46,    61,
      -1,    31,    37,    -1,    32,    37,    -1,    32,    69,    37,
      -1,    68,    47,    69,    -1,    43,    50,    60,    44,    -1,
      29,    41,    70,    42,    37,    -1,    29,    -1,    68,    39,
      69,    40,    -1,    41,    69,    42,    -1,    69,    73,    69,
      -1,     6,    69,    -1,    30,    -1,    68,    -1,    29,    41,
      70,    42,    -1,    71,    -1,    -1,    71,    38,    69,    -1,
      69,    -1,    28,    41,    72,    42,    -1,    72,    74,    72,
      -1,    41,    72,    42,    -1,    69,    75,    69,    -1,     5,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,    15,
      -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,    20,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    82,    82,    85,    86,    89,    90,    93,    96,    97,
     100,   101,   104,   105,   108,   109,   113,   114,   118,   119,
     123,   127,   128,   131,   132,   133,   134,   135,   136,   139,
     140,   141,   145,   146,   147,   148,   149,   152,   153,   154,
     157,   160,   163,   166,   167,   170,   171,   172,   173,   174,
     175,   179,   180,   183,   184,   187,   188,   189,   190,   193,
     194,   195,   196,   197,   198,   199,   200,   203,   204,   207,
     208,   209,   210,   211,   212
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "PLUS", "MOINS", "MUL",
  "DIV", "LSHIFT", "RSHIFT", "BAND", "BOR", "LAND", "LOR", "LT", "GT",
  "GEQ", "LEQ", "EQ", "NEQ", "THEN", "ELSE", "OP", "REL", "WHILE", "FOR",
  "IF", "NOT", "IDENTIFICATEUR", "CONSTANTE", "BREAK", "RETURN", "DEFAULT",
  "CASE", "SWITCH", "EXTERN", "';'", "','", "'['", "']'", "'('", "')'",
  "'{'", "'}'", "'\\n'", "':'", "'='", "$accept", "programme",
  "liste_declarations", "liste_fonctions", "declaration",
  "liste_declarateurs", "declarateur", "fonction", "type",
  "params_liste_creator", "liste_parms", "parm", "liste_instructions",
  "instruction", "iteration", "selection", "saut", "affectation", "bloc",
  "appel", "variable", "expression", "liste_expressions",
  "expr_liste_creator", "condition", "binary_op", "binary_rel",
  "binary_comp", 0
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
      59,    60,    60,    61,    61,    61,    61,    61,    61,    62,
      62,    62,    63,    63,    63,    63,    63,    64,    64,    64,
      65,    66,    67,    68,    68,    69,    69,    69,    69,    69,
      69,    70,    70,    71,    71,    72,    72,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     2,     1,     3,     3,     1,
       1,     4,     9,     7,     1,     1,     3,     1,     1,     0,
       2,     2,     0,     1,     1,     1,     2,     1,     1,     9,
       5,     2,     5,     7,     5,     4,     3,     2,     2,     3,
       3,     4,     5,     1,     4,     3,     3,     2,     1,     1,
       4,     1,     0,     3,     1,     4,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,    14,    15,     0,     2,     3,     6,
       0,     0,     5,     0,    10,     0,     9,     0,     0,    19,
       7,     0,     0,    19,     0,    18,     0,    17,    10,     8,
       0,     0,    20,     0,     0,    11,     0,    16,     4,    13,
      22,     0,     0,     0,     0,     0,     0,    43,     0,     0,
       0,     0,     0,     4,    12,    21,    23,    24,    25,     0,
      27,    28,     0,    31,     0,     0,     0,    52,    37,     0,
      43,    48,    38,     0,    49,     0,     0,     0,     0,    22,
      26,     0,     0,     0,     0,     0,     0,    43,     0,     0,
      54,     0,    51,    47,    52,     0,    59,    60,    61,    62,
      63,    64,    65,    66,    39,     0,    36,     0,     0,     0,
       0,    40,     0,     0,     0,    69,    70,    71,    72,    73,
      74,     0,    67,    68,     0,     0,     0,     0,     0,     0,
       0,    45,    46,    35,     0,    41,    44,     0,    57,    58,
      30,    56,     0,    32,    42,    53,    50,    34,    55,     0,
       0,     0,    33,     0,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     7,     8,    15,    16,     9,    41,    25,
      26,    27,    42,    55,    56,    57,    58,    59,    60,    61,
      74,    85,    91,    92,    86,   105,   125,   121
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -64
static const yytype_int16 yypact[] =
{
     -64,    32,    26,   -64,   -64,   -64,    60,    26,   -64,   -64,
       6,    17,   -64,    21,    25,    52,    35,    36,    25,    83,
     -64,    62,    63,    83,    66,    58,    68,   -64,   -64,    35,
      75,    90,   -64,    83,    74,   -64,   101,   -64,   -64,   -64,
      60,    62,    87,    99,   104,   105,   106,   107,   112,    11,
     110,   120,   117,   -64,   -64,   -64,   -64,   -64,   -64,   127,
     -64,   -64,    14,   -64,    -3,   136,    -3,    15,   -64,    15,
     125,   -64,   -64,    15,   129,   191,   128,   121,    15,    60,
     -64,    15,    15,   139,    -3,   224,     1,   -64,   132,     5,
     205,   162,   143,   116,    15,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,    15,   -64,   128,    94,   108,
     183,   205,    -3,   167,    41,   -64,   -64,   -64,   -64,   -64,
     -64,    15,   -64,   -64,   128,    -3,    -3,   128,   133,    15,
     163,   -64,   -64,   -64,   128,   -64,   -64,    56,   -64,   205,
     -64,   -64,    44,   184,   -64,   205,   -64,   -64,   -64,   136,
     128,   165,   -64,   128,   -64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -64,   -64,   -37,   -64,   -64,   -64,   187,   211,    73,   -64,
     196,   188,   141,   -56,   -64,   -64,   -64,   -63,   -64,   -64,
     -42,   -45,   130,   -64,   -53,   -64,   -64,   -64
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      62,    40,    88,    69,    75,    96,    97,    98,    99,   100,
     101,   102,   103,    89,   122,   123,    79,    69,   122,   123,
     106,    69,    90,    62,    93,    83,    70,    71,    95,     4,
       5,   114,     3,   108,    62,    14,   110,   111,    84,   113,
      70,    71,   131,   124,    70,    71,    17,   127,    72,    90,
      18,   133,    73,    81,   122,   123,    73,   122,   123,   137,
     132,    82,     6,     4,     5,    62,    19,    62,   140,   122,
     123,   143,   141,   142,    22,    10,   139,    23,   147,    11,
      13,   149,    62,   138,   145,    62,   151,    24,    43,    20,
      21,    28,    62,    30,   152,    32,    33,   154,   148,    96,
      97,    98,    99,   100,   101,   102,   103,    62,    62,    43,
      34,    62,    44,    45,    46,    35,    47,    38,    48,    49,
      50,    51,    52,    98,    99,   100,   101,   102,   103,    43,
      53,    54,    36,    44,    45,    46,   134,    47,    39,    48,
      49,    50,    51,    52,    63,    64,    65,    66,    67,    68,
      77,    53,   135,    44,    45,    46,    76,    47,    78,    48,
      49,    50,    51,    52,    80,    87,    94,   107,    81,   126,
     144,    53,    96,    97,    98,    99,   100,   101,   102,   103,
     112,   129,   115,   116,   117,   118,   119,   120,    96,    97,
      98,    99,   100,   101,   102,   103,    96,    97,    98,    99,
     100,   101,   102,   103,   128,   146,   150,   153,    29,   131,
      96,    97,    98,    99,   100,   101,   102,   103,    12,    31,
     109,    37,     0,   136,   130,     0,     0,     0,   104,    96,
      97,    98,    99,   100,   101,   102,   103,     0,     0,   115,
     116,   117,   118,   119,   120
};

static const yytype_int16 yycheck[] =
{
      42,    38,    65,     6,    49,     5,     6,     7,     8,     9,
      10,    11,    12,    66,    13,    14,    53,     6,    13,    14,
      76,     6,    67,    65,    69,    28,    29,    30,    73,     3,
       4,    84,     0,    78,    76,    29,    81,    82,    41,    84,
      29,    30,    42,    42,    29,    30,    29,    42,    37,    94,
      29,   107,    41,    39,    13,    14,    41,    13,    14,   112,
     105,    47,    36,     3,     4,   107,    41,   109,   124,    13,
      14,   127,   125,   126,    39,     2,   121,    41,   134,     6,
       7,    37,   124,    42,   129,   127,   149,     4,     1,    37,
      38,    29,   134,    30,   150,    29,    38,   153,    42,     5,
       6,     7,     8,     9,    10,    11,    12,   149,   150,     1,
      42,   153,    25,    26,    27,    40,    29,    43,    31,    32,
      33,    34,    35,     7,     8,     9,    10,    11,    12,     1,
      43,    44,    42,    25,    26,    27,    42,    29,    37,    31,
      32,    33,    34,    35,    45,    41,    41,    41,    41,    37,
      30,    43,    44,    25,    26,    27,    46,    29,    41,    31,
      32,    33,    34,    35,    37,    29,    41,    46,    39,    37,
      37,    43,     5,     6,     7,     8,     9,    10,    11,    12,
      41,    38,    15,    16,    17,    18,    19,    20,     5,     6,
       7,     8,     9,    10,    11,    12,     5,     6,     7,     8,
       9,    10,    11,    12,    42,    42,    22,    42,    21,    42,
       5,     6,     7,     8,     9,    10,    11,    12,     7,    23,
      79,    33,    -1,    40,    94,    -1,    -1,    -1,    37,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,    50,     0,     3,     4,    36,    51,    52,    55,
      56,    56,    55,    56,    29,    53,    54,    29,    29,    41,
      37,    38,    39,    41,     4,    57,    58,    59,    29,    54,
      30,    58,    29,    38,    42,    40,    42,    59,    43,    37,
      50,    56,    60,     1,    25,    26,    27,    29,    31,    32,
      33,    34,    35,    43,    44,    61,    62,    63,    64,    65,
      66,    67,    68,    45,    41,    41,    41,    41,    37,     6,
      29,    30,    37,    41,    68,    69,    46,    30,    41,    50,
      37,    39,    47,    28,    41,    69,    72,    29,    65,    72,
      69,    70,    71,    69,    41,    69,     5,     6,     7,     8,
       9,    10,    11,    12,    37,    73,    61,    46,    69,    60,
      69,    69,    41,    69,    72,    15,    16,    17,    18,    19,
      20,    75,    13,    14,    42,    74,    37,    42,    42,    38,
      70,    42,    69,    61,    42,    44,    40,    72,    42,    69,
      61,    72,    72,    61,    37,    69,    42,    61,    42,    37,
      22,    65,    61,    42,    61
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
#line 82 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (2)].id);}
    break;

  case 3:
#line 85 "miniC.y"
    {(yyval.id)=(yyvsp[(2) - (2)].id);}
    break;

  case 4:
#line 86 "miniC.y"
    {(yyval.id)=" ";}
    break;

  case 5:
#line 89 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (2)].id);}
    break;

  case 6:
#line 90 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (1)].id);}
    break;

  case 7:
#line 93 "miniC.y"
    {(yyval.id) = (yyvsp[(1) - (3)].id);}
    break;

  case 8:
#line 96 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (3)].id);}
    break;

  case 9:
#line 97 "miniC.y"
    {(yyval.id) = (yyvsp[(1) - (1)].id); }
    break;

  case 10:
#line 100 "miniC.y"
    { (yyval.id) = (yyvsp[(1) - (1)].id);}
    break;

  case 11:
#line 101 "miniC.y"
    {(yyval.id)="0";}
    break;

  case 12:
#line 104 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (9)].id);}
    break;

  case 13:
#line 105 "miniC.y"
    {(yyval.id)=EXTERN;}
    break;

  case 14:
#line 108 "miniC.y"
    {(yyval.id) = "void";}
    break;

  case 15:
#line 109 "miniC.y"
    {(yyval.id) = "int";}
    break;

  case 16:
#line 113 "miniC.y"
    {(yyval.id)=(yyvsp[(3) - (3)].id);}
    break;

  case 17:
#line 114 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (1)].id);}
    break;

  case 18:
#line 118 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (1)].id);}
    break;

  case 19:
#line 119 "miniC.y"
    {(yyval.id)=" ";}
    break;

  case 20:
#line 123 "miniC.y"
    {(yyval.id) = (yyvsp[(2) - (2)].id);}
    break;

  case 21:
#line 127 "miniC.y"
    {(yyval.id)=(yyvsp[(2) - (2)].id);}
    break;

  case 22:
#line 128 "miniC.y"
    {(yyval.id)=" ";}
    break;

  case 23:
#line 131 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (1)].id);}
    break;

  case 24:
#line 132 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (1)].id);}
    break;

  case 25:
#line 133 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (1)].id);}
    break;

  case 26:
#line 134 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (2)].id);}
    break;

  case 27:
#line 135 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (1)].id);}
    break;

  case 28:
#line 136 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (1)].id);}
    break;

  case 29:
#line 139 "miniC.y"
    {(yyval.id)=FOR;}
    break;

  case 30:
#line 140 "miniC.y"
    {(yyval.id)= WHILE;}
    break;

  case 31:
#line 141 "miniC.y"
    {yyerror("reenter last");
                        yyerrok; }
    break;

  case 32:
#line 145 "miniC.y"
    {(yyval.id)=IF;}
    break;

  case 33:
#line 146 "miniC.y"
    {(yyval.id)=ELSE;}
    break;

  case 34:
#line 147 "miniC.y"
    {(yyval.id)=SWITCH;}
    break;

  case 35:
#line 148 "miniC.y"
    {(yyval.id)=CASE;}
    break;

  case 36:
#line 149 "miniC.y"
    {(yyval.id)=DEFAULT;}
    break;

  case 37:
#line 152 "miniC.y"
    {(yyval.id)=BREAK;}
    break;

  case 38:
#line 153 "miniC.y"
    {(yyval.id)=RETURN;}
    break;

  case 39:
#line 154 "miniC.y"
    {(yyval.id)=RETURN;}
    break;

  case 40:
#line 157 "miniC.y"
    {(yyval.id) = (yyvsp[(3) - (3)].id);}
    break;

  case 41:
#line 160 "miniC.y"
    {(yyval.id)="0";}
    break;

  case 42:
#line 163 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (5)].id);}
    break;

  case 43:
#line 166 "miniC.y"
    {(yyval.id) = (yyvsp[(1) - (1)].id);}
    break;

  case 44:
#line 167 "miniC.y"
    {(yyval.id) ="0";/* $$ = $1[$3] ;*/}
    break;

  case 45:
#line 170 "miniC.y"
    {(yyval.id) = (yyvsp[(2) - (3)].id);}
    break;

  case 46:
#line 171 "miniC.y"
    {(yyval.id)="0";}
    break;

  case 47:
#line 172 "miniC.y"
    {(yyval.id) = (yyvsp[(2) - (2)].id);}
    break;

  case 48:
#line 173 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (1)].id);}
    break;

  case 49:
#line 174 "miniC.y"
    {(yyval.id) = (yyvsp[(1) - (1)].id);}
    break;

  case 50:
#line 175 "miniC.y"
    {(yyval.id) = (yyvsp[(1) - (4)].id);}
    break;

  case 51:
#line 179 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (1)].id);}
    break;

  case 52:
#line 180 "miniC.y"
    {(yyval.id)=" ";}
    break;

  case 53:
#line 183 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (3)].id);}
    break;

  case 54:
#line 184 "miniC.y"
    {(yyval.id)=(yyvsp[(1) - (1)].id);}
    break;

  case 55:
#line 187 "miniC.y"
    {printf("!%s",(yyvsp[(3) - (4)].id));(yyval.id) = (yyvsp[(3) - (4)].id);}
    break;

  case 56:
#line 188 "miniC.y"
    {(yyval.id)="0";}
    break;

  case 57:
#line 189 "miniC.y"
    {printf("(%s)",(yyvsp[(2) - (3)].id)); (yyval.id) = (yyvsp[(2) - (3)].id);}
    break;

  case 58:
#line 190 "miniC.y"
    {(yyval.id) = (yyvsp[(1) - (3)].id);}
    break;

  case 59:
#line 193 "miniC.y"
    {(yyval.id) = "+"; }
    break;

  case 60:
#line 194 "miniC.y"
    {(yyval.id) = "-"; }
    break;

  case 61:
#line 195 "miniC.y"
    {(yyval.id) = "*"; }
    break;

  case 62:
#line 196 "miniC.y"
    {(yyval.id) = "/"; }
    break;

  case 63:
#line 197 "miniC.y"
    {(yyval.id) = "<<"; }
    break;

  case 64:
#line 198 "miniC.y"
    {(yyval.id) = ">>"; }
    break;

  case 65:
#line 199 "miniC.y"
    {(yyval.id) = "&="; }
    break;

  case 66:
#line 200 "miniC.y"
    {(yyval.id) = "|="; }
    break;

  case 67:
#line 203 "miniC.y"
    {(yyval.id) = "&&"; }
    break;

  case 68:
#line 204 "miniC.y"
    {(yyval.id) = "||"; }
    break;

  case 69:
#line 207 "miniC.y"
    {(yyval.id) = "<"; }
    break;

  case 70:
#line 208 "miniC.y"
    {(yyval.id) = ">"; }
    break;

  case 71:
#line 209 "miniC.y"
    {(yyval.id) = ">="; }
    break;

  case 72:
#line 210 "miniC.y"
    {(yyval.id) = "<="; }
    break;

  case 73:
#line 211 "miniC.y"
    {(yyval.id) = "="; }
    break;

  case 74:
#line 212 "miniC.y"
    {(yyval.id) = "!="; }
    break;


/* Line 1267 of yacc.c.  */
#line 1914 "y.tab.c"
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


#line 215 "miniC.y"




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



