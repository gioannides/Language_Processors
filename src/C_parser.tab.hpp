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

#ifndef YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/C_parser.y" /* yacc.c:1909  */

  #include "ast.hpp"
  #include <iostream>
  #include <cassert>
  extern const Statement *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);

#line 57 "src/C_parser.tab.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    None = 258,
    SEMICOLON = 259,
    PREPROCESSOR = 260,
    COMMA = 261,
    POINTER = 262,
    NUMBER = 263,
    HEX = 264,
    OCTAL = 265,
    FLOAT_LITERAL = 266,
    int_NUM = 267,
    DIGIT = 268,
    IDENTIFIER = 269,
    WHITESPACE = 270,
    NEWLINE = 271,
    AUTO = 272,
    BREAK = 273,
    CASE = 274,
    CHAR = 275,
    CONST = 276,
    CONTINUE = 277,
    DEFAULT = 278,
    DO = 279,
    DOUBLE = 280,
    ELSE = 281,
    ENUM = 282,
    EXTERN = 283,
    FLOAT = 284,
    FOR = 285,
    GOTO = 286,
    IF = 287,
    INT = 288,
    LONG = 289,
    REGISTER = 290,
    RETURN = 291,
    SHORT = 292,
    SIGNED = 293,
    SIZEOF = 294,
    STATIC = 295,
    STRUCT = 296,
    SWITCH = 297,
    TYPEDEF = 298,
    UNION = 299,
    UNSIGNED = 300,
    VOID = 301,
    VOLATILE = 302,
    WHILE = 303,
    SIGNED_CHAR = 304,
    UNSIGNED_CHAR = 305,
    UNSIGNED_SHORT = 306,
    UNSIGNED_INT = 307,
    UNSIGNED_LONG = 308,
    LONG_DOUBLE = 309,
    LONG_LONG = 310,
    UNSIGNED_LONG_LONG = 311,
    INTMAX_T = 312,
    UINTMAX_T = 313,
    LROUND = 314,
    RROUND = 315,
    LSQUARE = 316,
    RSQUARE = 317,
    LCURLY = 318,
    RCURLY = 319,
    DOT_OP = 320,
    POINTER_OP = 321,
    LOGICAL_NOT_OP = 322,
    BITWISE_NOT_OP = 323,
    PLUS_OP = 324,
    MINUS_OP = 325,
    INC_OP = 326,
    DEC_OP = 327,
    MULT = 328,
    DIV = 329,
    MODULUS_OP = 330,
    SHIFT_LEFT_OP = 331,
    SHIFT_RIGHT_OP = 332,
    LT = 333,
    GT = 334,
    LE = 335,
    GE = 336,
    EQ = 337,
    NOT_EQ = 338,
    AND = 339,
    XOR = 340,
    OR = 341,
    LOG_AND = 342,
    LOG_OR = 343,
    COND_OP = 344,
    ASSIGN_OP = 345,
    SHRT_ASSIGNPLUS = 346,
    SHRT_ASSIGNMINUS = 347,
    SHRT_ASSIGNMULT = 348,
    SHRT_ASSIGNMOD = 349,
    SHRT_ASSIGNAND = 350,
    SHRT_ASSIGNOR = 351,
    SHRT_ASSIGNXOR = 352,
    SHRT_ASSIGNLSHIFT = 353,
    SHRT_ASSIGNRSHIFT = 354,
    STRING_LITERAL = 355,
    COMMENT = 356
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "src/C_parser.y" /* yacc.c:1909  */

  const Statement* statement;
  std::string *text;

#line 176 "src/C_parser.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED  */
