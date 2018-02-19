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

  #include "include/ast.hpp"

  #include <cassert>
  #include <fstream>
  
  
  extern FILE *yyin;
  extern const TranslationUnit *g_root; // A way of getting the AST out


  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);



#line 64 "src/C_parser.tab.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    PTR_OP = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LEFT_OP = 265,
    RIGHT_OP = 266,
    LE_OP = 267,
    GE_OP = 268,
    EQ_OP = 269,
    NE_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    MUL_ASSIGN = 273,
    DIV_ASSIGN = 274,
    MOD_ASSIGN = 275,
    ADD_ASSIGN = 276,
    SUB_ASSIGN = 277,
    LEFT_ASSIGN = 278,
    RIGHT_ASSIGN = 279,
    AND_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    GT = 283,
    LT = 284,
    PLUS = 285,
    MINUS = 286,
    MULTIPLY = 287,
    MODULO = 288,
    DIVIDE = 289,
    TYPEDEF = 290,
    EXTERN = 291,
    STATIC = 292,
    AUTO = 293,
    REGISTER = 294,
    CHAR = 295,
    SHORT = 296,
    INT = 297,
    LONG = 298,
    SIGNED = 299,
    UNSIGNED = 300,
    FLOAT = 301,
    DOUBLE = 302,
    CONST = 303,
    VOLATILE = 304,
    VOID = 305,
    STRUCT = 306,
    UNION = 307,
    ENUM = 308,
    ELLIPSIS = 309,
    CASE = 310,
    DEFAULT = 311,
    IF = 312,
    ELSE = 313,
    SWITCH = 314,
    WHILE = 315,
    DO = 316,
    FOR = 317,
    GOTO = 318,
    CONTINUE = 319,
    BREAK = 320,
    RETURN = 321
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "src/C_parser.y" /* yacc.c:1909  */


	TranslationUnit* ASTtree;
	ExternalDeclaration* ExternalDecLaration;
	FunctionDefinition* FunctionDefinitionPtr;
	Declaration* DecLaration;
	DeclarationSpecifiers* DeclarationSpecifierS;
	TypeQualifier* TypeQuaLifier;
	TypeSpecifier* TypeSpeCifier;
	StructOrUnionSpecifier* StructOrUnionSpecifieR;
	StructDeclarationList* StructDeclarationLisT;
	StructDeclarator* STructDeclarator;
	StructDeclaration* StructDecLaration;
	StructDeclaratorList* StructDeclaratoRList;
	StorageClassSpecifiers* StorageClassSpecifierS;
	InitDeclaratorList* InitDeclaratoRList;
	InitDeclarator* InitDeclArator;
	Declarator* DecLarator;
	DirectDeclarator* DirectDeclaratorPtr;
	ConstantExpression* ConstanTExpression;
	DirectDeclarator* DiRectDeclarator;
	StructOrUnion* StruCtOrUnion;
	ConditionalExpression* COnditionalExpression;
	EnumSpecifier* ENumSpecifier;
	LogicalOrExpression* LOgicalOrExpression;
	LogicalAndExpression* LogicalANDexpression;
	InclusiveOrExpression* InclusiveOrExpressioN;
	ExclusiveOrExpression* ExclusiveOrExpressioN;
	AndExpression* AndExpressioN;
	EqualityExpression* EQualityExpression;
	RelationalExpression* RElationalExpression;
	ShiftExpression* SHiftExpression;
	AdditiveExpression* ADDitiveExpression;
	MultiplicativeExpression* MUltiplicativeExpression;
	CastExpression* CAstExpression;
	Initializer* InitializerPtr;
	AssignmentExpression* AssignmentExpressionPtr;
	UnaryExpression* UnaryExpressionPtr;
	PostFixExpression* PostFixExpressionPtr;
	PrimaryExpression* PrimaryExpressionPtr;
	ArgumentExpressionList* ArgumentExpressionListPtr;
	CompoundStatement* CompoundStatementPtr;
	StatementList* StatementListPtr;
	Statement* StatementPtr;
	JumpStatement* JumpStatementPtr;
	IterationStatement* IterationStatementPtr;
	SelectionStatement* SelectionStatementPtr;
	ExpressionStatement* ExpressionStatementPtr;
	LabeledStatement* LabeledStatementPtr;
	std::string* text;
	DeclarationList* DeclarationListPtr;

#line 196 "src/C_parser.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED  */
