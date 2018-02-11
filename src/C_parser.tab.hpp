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

  #include <cassert>

  extern const Node *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);

  void addTolist(listPtr& hdList,std::string& data_t, std::string& id);
  void addTolist2(listPtr& hdList,std::string& data_t);
  void addTolist3(listPtr& hdList,std::string& id);
  extern listPtr hdList;

#line 63 "src/C_parser.tab.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMICOLON = 258,
    PREPROCESSOR = 259,
    COMMA = 260,
    POINTER = 261,
    NUMBER = 262,
    HEX = 263,
    OCTAL = 264,
    FLOAT_LITERAL = 265,
    int_NUM = 266,
    DIGIT = 267,
    IDENTIFIER = 268,
    WHITESPACE = 269,
    NEWLINE = 270,
    AUTO = 271,
    BREAK = 272,
    CASE = 273,
    CHAR = 274,
    CONST = 275,
    CONTINUE = 276,
    DEFAULT = 277,
    DO = 278,
    DOUBLE = 279,
    ELSE = 280,
    ENUM = 281,
    EXTERN = 282,
    FLOAT = 283,
    FOR = 284,
    GOTO = 285,
    IF = 286,
    INT = 287,
    LONG = 288,
    REGISTER = 289,
    RETURN = 290,
    SHORT = 291,
    SIGNED = 292,
    SIZEOF = 293,
    STATIC = 294,
    STRUCT = 295,
    SWITCH = 296,
    TYPEDEF = 297,
    UNION = 298,
    UNSIGNED = 299,
    VOID = 300,
    VOLATILE = 301,
    WHILE = 302,
    SIGNED_CHAR = 303,
    UNSIGNED_CHAR = 304,
    UNSIGNED_SHORT = 305,
    UNSIGNED_INT = 306,
    UNSIGNED_LONG = 307,
    LONG_DOUBLE = 308,
    LONG_LONG = 309,
    UNSIGNED_LONG_LONG = 310,
    INTMAX_T = 311,
    UINTMAX_T = 312,
    LROUND = 313,
    RROUND = 314,
    LSQUARE = 315,
    RSQUARE = 316,
    LCURLY = 317,
    RCURLY = 318,
    DOT_OP = 319,
    POINTER_OP = 320,
    LOGICAL_NOT_OP = 321,
    BITWISE_NOT_OP = 322,
    PLUS_OP = 323,
    MINUS_OP = 324,
    INC_OP = 325,
    DEC_OP = 326,
    MULT = 327,
    DIV = 328,
    MODULUS_OP = 329,
    SHIFT_LEFT_OP = 330,
    SHIFT_RIGHT_OP = 331,
    LT = 332,
    GT = 333,
    LE = 334,
    GE = 335,
    EQ = 336,
    NOT_EQ = 337,
    AND = 338,
    XOR = 339,
    OR = 340,
    LOG_AND = 341,
    LOG_OR = 342,
    COND_OP = 343,
    ASSIGN_OP = 344,
    SHRT_ASSIGNPLUS = 345,
    SHRT_ASSIGNMINUS = 346,
    SHRT_ASSIGNMULT = 347,
    SHRT_ASSIGNMOD = 348,
    SHRT_ASSIGNAND = 349,
    SHRT_ASSIGNOR = 350,
    SHRT_ASSIGNXOR = 351,
    SHRT_ASSIGNLSHIFT = 352,
    SHRT_ASSIGNRSHIFT = 353,
    STRING_LITERAL = 354,
    ELLIPSIS = 355
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 22 "src/C_parser.y" /* yacc.c:1909  */

  const Node* GlobalDecl;
  const Node* FunctionDeclCall;
  std::string* text;
  double* numberValue;
  listPtr linkedlist;

#line 184 "src/C_parser.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED  */
