/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    ID = 258,
    STR_LITERAL = 259,
    WHITESPACE = 260,
    CALL = 261,
    OP_IN = 262,
    AND = 263,
    OR = 264,
    LE = 265,
    GE = 266,
    EQ = 267,
    NE = 268,
    EOL = 269,
    UMINUS = 270,
    TYPEDEF = 271,
    PRINT_VAR = 272,
    PRINT_INT = 273,
    PRINT_STR = 274,
    PRINT_FLOAT = 275,
    SCAN = 276,
    INT = 277,
    SIGNED = 278,
    UNSIGNED = 279,
    FLOAT = 280,
    CONST = 281,
    VOID = 282,
    BOOL = 283,
    EOFV = 284,
    INT_CONST = 285,
    TRUEV = 286,
    FALSEV = 287,
    CASE = 288,
    DEFAULT = 289,
    IF = 290,
    ELSE = 291,
    SWITCH = 292,
    WHILE = 293,
    DO = 294,
    FOR = 295,
    CONTINUE = 296,
    BREAK = 297,
    RETURN = 298,
    BINOP = 299,
    IFX = 300
  };
#endif
/* Tokens.  */
#define ID 258
#define STR_LITERAL 259
#define WHITESPACE 260
#define CALL 261
#define OP_IN 262
#define AND 263
#define OR 264
#define LE 265
#define GE 266
#define EQ 267
#define NE 268
#define EOL 269
#define UMINUS 270
#define TYPEDEF 271
#define PRINT_VAR 272
#define PRINT_INT 273
#define PRINT_STR 274
#define PRINT_FLOAT 275
#define SCAN 276
#define INT 277
#define SIGNED 278
#define UNSIGNED 279
#define FLOAT 280
#define CONST 281
#define VOID 282
#define BOOL 283
#define EOFV 284
#define INT_CONST 285
#define TRUEV 286
#define FALSEV 287
#define CASE 288
#define DEFAULT 289
#define IF 290
#define ELSE 291
#define SWITCH 292
#define WHILE 293
#define DO 294
#define FOR 295
#define CONTINUE 296
#define BREAK 297
#define RETURN 298
#define BINOP 299
#define IFX 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 58 "grp23.y" /* yacc.c:1909  */

		char* strv;
		struct node* nodeP;
		int	intv;
	

#line 151 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
