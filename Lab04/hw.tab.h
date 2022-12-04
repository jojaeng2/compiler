/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     COLOEQ = 258,
     EQ = 259,
     NOTEQ = 260,
     LT = 261,
     GT = 262,
     LE = 263,
     GE = 264,
     CONST = 265,
     VAR = 266,
     FUNCTION = 267,
     BEGINN = 268,
     END = 269,
     IF = 270,
     THEN = 271,
     WHILE = 272,
     DO = 273,
     RETURN = 274,
     WRITE = 275,
     WRITELN = 276,
     ODD = 277,
     IDENT = 278,
     NUMBER = 279
   };
#endif
/* Tokens.  */
#define COLOEQ 258
#define EQ 259
#define NOTEQ 260
#define LT 261
#define GT 262
#define LE 263
#define GE 264
#define CONST 265
#define VAR 266
#define FUNCTION 267
#define BEGINN 268
#define END 269
#define IF 270
#define THEN 271
#define WHILE 272
#define DO 273
#define RETURN 274
#define WRITE 275
#define WRITELN 276
#define ODD 277
#define IDENT 278
#define NUMBER 279




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 1 "hw.y"
{
  char *name;
  int val;
}
/* Line 1529 of yacc.c.  */
#line 102 "hw.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

