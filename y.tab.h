/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    EXTERN = 276,
    THEN = 277,
    ELSE = 278,
    OP = 279,
    REL = 280,
    WHILE = 281,
    FOR = 282,
    IF = 283,
    NOT = 284,
    IDENTIFICATEUR = 285,
    CONSTANTE = 286,
    BREAK = 287,
    RETURN = 288,
    DEFAULT = 289,
    CASE = 290,
    SWITCH = 291
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
#define EXTERN 276
#define THEN 277
#define ELSE 278
#define OP 279
#define REL 280
#define WHILE 281
#define FOR 282
#define IF 283
#define NOT 284
#define IDENTIFICATEUR 285
#define CONSTANTE 286
#define BREAK 287
#define RETURN 288
#define DEFAULT 289
#define CASE 290
#define SWITCH 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "miniC.y"

	int val;
	char* id;

#line 134 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
