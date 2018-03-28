/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "src/C_parser.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "C_parser.tab.hpp".  */
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
#line 1 "src/C_parser.y" /* yacc.c:355  */

  #include "../include/ast.hpp"

  #include <cassert>
  #include <fstream>
  
  
  extern FILE *yyin;
  extern const TranslationUnit *g_root; // A way of getting the AST out



  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);



#line 118 "src/C_parser.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    SEMICOLON = 262,
    PTR_OP = 263,
    INC_OP = 264,
    DEC_OP = 265,
    LEFT_OP = 266,
    RIGHT_OP = 267,
    LE_OP = 268,
    GE_OP = 269,
    EQ_OP = 270,
    NE_OP = 271,
    AND_OP = 272,
    OR_OP = 273,
    MUL_ASSIGN = 274,
    DIV_ASSIGN = 275,
    MOD_ASSIGN = 276,
    ADD_ASSIGN = 277,
    SUB_ASSIGN = 278,
    LEFT_ASSIGN = 279,
    RIGHT_ASSIGN = 280,
    AND_ASSIGN = 281,
    XOR_ASSIGN = 282,
    OR_ASSIGN = 283,
    GT = 284,
    LT = 285,
    PLUS = 286,
    MINUS = 287,
    TILDE = 288,
    MULTIPLY = 289,
    MODULO = 290,
    DIVIDE = 291,
    TYPEDEF = 292,
    EXTERN = 293,
    STATIC = 294,
    AUTO = 295,
    REGISTER = 296,
    CHAR = 297,
    SHORT = 298,
    INT = 299,
    LONG = 300,
    SIGNED = 301,
    UNSIGNED = 302,
    FLOAT = 303,
    DOUBLE = 304,
    CONST = 305,
    VOLATILE = 306,
    VOID = 307,
    STRUCT = 308,
    UNION = 309,
    ENUM = 310,
    ELLIPSIS = 311,
    PREPROCESSOR = 312,
    CASE = 313,
    DEFAULT = 314,
    IF = 315,
    ELSE = 316,
    SWITCH = 317,
    WHILE = 318,
    DO = 319,
    FOR = 320,
    GOTO = 321,
    CONTINUE = 322,
    BREAK = 323,
    RETURN = 324,
    TYPE_NAME_ = 325
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "src/C_parser.y" /* yacc.c:355  */


	TranslationUnit* ASTtree;
	ExternalDeclaration* ExternalDecLaration;
	FunctionDefinition* FunctionDefinitionPtr;
	Declaration* DecLaration;
	DeclarationSpecifiers* DeclarationSpecifierS;
	TypeQualifier* TypeQuaLifier;
	TypeSpecifier* TypeSpeCifier;
	StructOrUnionSpecifier* StructOrUnionSpecifieR;	
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
	ParameterTypeList* ParameterTypeListPtr;
	ParameterList* ParameterListPtr;
	ParameterDeclaration* ParameterDeclarationPtr;
	AbstractDeclarator* AbstractDeclaratorPtr;
	DirectAbstractDeclarator* DirectAbstractDeclaratorPtr;
	IdentifierList* IdentifierListPtr;
	Pointer* PointerPtr;
	TypeName* TypeNamePtr;
	EnumeratorList* EnumeratorListPtr;
	Enumerator* EnumeratorPtr;
	StructDeclarationList* StructDeclarationListPtr;
	SpecifierQualifierList* SpecifierQualifierListPtr;
	StructDeclaratorList* StructDeclaratorListPtr;
	StructDeclarator* StructDeclaratorPtr;
	TypeQualifierList* TypeQualifierListPtr;
	UnaryOperator* UnaryOperatorPtr;
	Expression* ExpressionPtr;
	InitializerList* InitializerListPtr;

#line 270 "src/C_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 287 "src/C_parser.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1446

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  353

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,     2,     2,     2,    71,     2,
      81,    82,     2,     2,    78,     2,    74,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    86,
       2,    73,     2,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    83,     2,    84,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    79,    76,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   184,   184,   186,   187,   192,   193,   197,   198,   199,
     200,   206,   207,   213,   214,   215,   216,   217,   218,   224,
     225,   226,   227,   228,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   251,   252,   259,   260,
     265,   266,   270,   271,   275,   276,   283,   284,   285,   286,
     287,   288,   289,   292,   296,   297,   303,   304,   309,   310,
     311,   312,   313,   314,   318,   319,   324,   325,   326,   327,
     328,   329,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   349,   350,   356,   357,   362,   363,   368,
     369,   370,   372,   373,   381,   382,   389,   390,   398,   399,
     406,   407,   414,   415,   416,   423,   424,   425,   426,   427,
     435,   436,   437,   443,   444,   445,   451,   452,   453,   454,
     460,   461,   462,   463,   464,   465,   466,   467,   474,   475,
     476,   477,   485,   486,   493,   494,   495,   500,   501,   507,
     508,   509,   510,   511,   512,   518,   519,   520,   526,   527,
     528,   529,   530,   537,   538,   543,   544,   547,   548,   549,
     555,   556,   557,   558,   564,   565,   566,   567,   568,   572,
     573,   579,   580,   581,   582,   585,   586,   590,   591,   596,
     597,   598,   603,   604,   605,   606,   607,   608,   609,   610,
     611,   619,   620,   621,   624,   625,   628,   629,   633,   634,
     635,   638,   639,   642,   643,   646,   649,   650,   651,   652,
     655,   656,   659,   660,   661
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "SEMICOLON", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "GT", "LT", "PLUS", "MINUS", "TILDE", "MULTIPLY", "MODULO",
  "DIVIDE", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS",
  "PREPROCESSOR", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "TYPE_NAME_", "'&'", "'!'",
  "'='", "'.'", "'{'", "'}'", "':'", "','", "'|'", "'^'", "'('", "')'",
  "'['", "']'", "'?'", "';'", "$accept", "ROOT", "TRANSLATION_UNIT",
  "EXTERNAL_DECLARATION", "FUNCTION_DEFINITION", "DECLARATION",
  "DECLARATION_SPECIFIERS", "STORAGE_CLASS_SPECIFIERS", "TYPE_SPECIFIER",
  "TYPE_QUALIFIER", "INIT_DECLARATOR_LIST", "INIT_DECLARATOR",
  "DECLARATION_LIST", "DECLARATOR", "DIRECT_DECLARATOR",
  "CONSTANT_EXPRESSION", "EXPRESSION", "ASSIGNMENT_EXPRESSION",
  "UNARY_EXPRESSION", "CAST_EXPRESSION", "UNARY_OPERATOR",
  "ASSIGNMENT_OPERATOR", "CONDITIONAL_EXPRESSION", "PARAMETER_TYPE_LIST",
  "PARAMETER_LIST", "PARAMETER_DECLARATION", "LOGICAL_OR_EXPRESSION",
  "LOGICAL_AND_EXPRESSION", "INCLUSIVE_OR_EXPRESSION",
  "EXCLUSIVE_OR_EXPRESSION", "AND_EXPRESSION", "EQUALITY_EXPRESSION",
  "RELATIONAL_EXPRESSION", "SHIFT_EXPRESSION", "ADDITIVE_EXPRESSION",
  "MULTIPLICATIVE_EXPRESSION", "POSTFIX_EXPRESSION", "PRIMARY_EXPRESSION",
  "ARGUMENT_EXPRESSION_LIST", "INITIALIZER", "INITIALIZER_LIST",
  "STATEMENT", "LABELED_STATEMENT", "COMPOUND_STATEMENT", "STATEMENT_LIST",
  "EXPRESSION_STATEMENT", "SELECTION_STATEMENT", "ITERATION_STATEMENT",
  "JUMP_STATEMENT", "IDENTIFIER_LIST", "POINTER", "TYPE_QUALIFIER_LIST",
  "TYPE_NAME", "ABSTRACT_DECLARATOR", "DIRECT_ABSTRACT_DECLARATOR",
  "ENUM_SPECIFIER", "ENUMERATOR_LIST", "ENUMERATOR",
  "STRUCT_OR_UNION_SPECIFIER", "STRUCT_OR_UNION",
  "STRUCT_DECLARATION_LIST", "STRUCT_DECLARATION",
  "SPECIFIER_QUALIFIER_LIST", "STRUCT_DECLARATOR_LIST",
  "STRUCT_DECLARATOR", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,    38,    33,    61,    46,   123,   125,    58,    44,   124,
      94,    40,    41,    91,    93,    63,    59
};
# endif

#define YYPACT_NINF -194

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-194)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     942,  -194,    10,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,    11,  -194,    17,    55,   942,  -194,  -194,  -194,   889,
    -194,  -194,  -194,  1322,   -42,    19,  -194,  -194,    13,  -194,
    -194,    10,   -17,    75,   -64,  -194,  -194,  -194,  -194,  -194,
    -194,    33,  -194,  1283,   534,  -194,   889,  1322,  -194,   480,
     271,   -42,     9,   735,  -194,  -194,    75,    48,   -12,  -194,
    -194,  -194,    17,  1000,  1322,  -194,    54,  -194,  -194,  1093,
    -194,  1104,  1104,  -194,  -194,  -194,  -194,  1138,   103,   112,
     115,   120,   839,   125,   214,   215,   219,  1051,  -194,  -194,
    -194,   766,   613,    46,  -194,   426,  -194,  1138,  -194,     5,
     211,   154,   155,   170,    91,    43,   198,   182,   127,    39,
    -194,  -194,  -194,  -194,   692,  -194,  -194,  -194,  -194,   169,
    -194,  -194,  -194,  -194,   427,   162,   168,  -194,   -36,  -194,
    -194,   171,  -194,  -194,   735,   735,   735,  1107,  -194,    28,
      15,  1138,  -194,    75,  -194,  1000,  -194,  -194,  -194,   839,
     766,  -194,  1138,  -194,  -194,   175,   839,  1138,  1138,  1138,
     191,  1059,   249,  -194,  -194,  -194,    47,     1,   177,   -13,
    -194,   819,  -194,  1138,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,  -194,  -194,  -194,  1138,  -194,  1138,  1138,  1138,
    1138,  1138,  1138,  1138,  1138,  1138,  1138,  1138,  1138,  1138,
    1138,  1138,  1138,  1138,  1138,  1138,   254,  -194,  -194,   257,
     360,  1138,  -194,  1243,  -194,   374,   315,  -194,    14,  -194,
      57,  -194,  1376,   259,  -194,  -194,  1336,  -194,  -194,  -194,
    -194,  1138,   192,    -9,  -194,  -194,  -194,  -194,  -194,    96,
    -194,   189,   839,  -194,     7,    41,    61,   197,  1059,  -194,
    -194,  -194,  1138,  1150,   121,  -194,  -194,  -194,  -194,   211,
     138,   154,   155,   170,    91,    43,    43,   198,   198,   198,
     198,   182,   182,   127,   127,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,   101,    -3,  -194,  -194,   190,   200,  -194,   195,
      57,  1197,   326,  -194,  -194,  -194,  -194,  -194,  1138,    28,
    -194,  -194,   968,  -194,  -194,   839,   839,   839,  1138,   482,
    -194,  1138,  1138,  -194,  -194,  -194,  -194,  -194,  -194,   204,
    -194,   205,  -194,  -194,  -194,  -194,   212,  -194,  -194,   107,
     839,   110,  -194,  -194,  -194,  -194,   839,   281,  -194,   839,
    -194,  -194,  -194
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    46,   171,    19,    20,    21,    22,    23,    25,    26,
      27,    28,    31,    32,    29,    30,    36,    37,    24,   201,
     202,     0,    33,     0,     0,     2,     3,     5,     6,     0,
      13,    15,    17,     0,    45,     0,    35,    34,     0,   175,
     173,   172,   193,     0,     0,     1,     4,    11,    14,    16,
      18,     0,    38,    40,     0,    42,     0,     0,    10,     0,
       0,    44,   200,     0,   176,   174,     0,   196,     0,   194,
      47,    12,     0,     0,     0,     8,   128,   129,   130,     0,
     155,     0,     0,    68,    69,    70,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,    71,
     148,     0,     0,     0,    54,    64,   116,     0,    56,    83,
      92,    94,    96,    98,   100,   102,   105,   110,   113,    58,
     120,   153,   139,   140,     0,   141,   142,   143,   144,    40,
      43,     9,   169,    52,    91,     0,    85,    87,     0,   128,
      49,     0,    64,    53,     0,   207,   209,     0,   203,     0,
       0,     0,   191,     0,    39,     0,   134,    41,     7,     0,
       0,    62,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,   165,   166,   167,     0,     0,     0,   177,
     150,     0,   156,     0,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    72,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,   127,     0,
       0,     0,   149,     0,   154,     0,     0,    89,   179,    90,
     180,    50,     0,     0,    51,    48,     0,   206,   208,   199,
     204,     0,   212,     0,   210,   192,   197,   195,   137,     0,
     145,     0,     0,   147,     0,     0,     0,     0,     0,   164,
     168,   131,     0,     0,   179,   178,   151,    55,    57,    93,
       0,    95,    97,    99,   101,   103,   104,   108,   109,   107,
     106,   111,   112,   114,   115,   117,   119,   118,   125,   124,
     122,   132,     0,     0,   152,   187,     0,     0,   183,     0,
     181,     0,     0,    86,    88,   170,   198,   213,     0,     0,
     205,   135,     0,    63,   146,     0,     0,     0,     0,     0,
      65,     0,     0,   123,   121,   188,   182,   184,   189,     0,
     185,     0,   214,   211,   136,   138,   157,   159,   160,     0,
       0,     0,    84,   133,   190,   186,     0,     0,   162,     0,
     158,   161,   163
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,  -194,   265,  -194,     8,     0,   -20,   149,    74,
    -194,   220,   -16,   -22,   -33,   -59,   -34,   -54,   -55,   -97,
    -194,  -194,   -57,   -53,  -194,    59,  -194,   100,    99,   106,
      98,   105,    20,    -8,    30,    18,  -194,  -194,  -194,  -144,
    -194,   -79,  -194,   137,   206,  -159,  -194,  -194,  -194,  -194,
       2,  -194,   140,  -105,  -193,  -194,   245,   159,  -194,  -194,
     172,  -132,    31,  -194,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,    55,    56,    30,    31,    32,
      51,    52,    57,    33,    34,   141,   103,   104,   105,   106,
     107,   195,   108,   296,   136,   137,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   292,   157,
     249,   121,   122,   123,   124,   125,   126,   127,   128,   138,
      35,    41,   178,   297,   230,    36,    68,    69,    37,    38,
     147,   148,   149,   243,   244
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      29,    44,    61,   143,    40,   142,   135,    53,    28,    48,
     196,   248,   258,   170,    42,   240,    62,     1,    70,   156,
       1,     2,     1,   197,   161,    29,   163,   164,   165,   229,
     143,     1,   142,    28,   129,   300,    48,    74,   102,    59,
      71,    60,   233,    65,     2,   224,   234,   216,   217,   218,
     129,     2,   142,   182,   260,    45,   205,   206,    66,   134,
      16,    17,     2,   176,   152,   130,   153,   177,   263,   309,
     226,   300,   207,   208,   265,   183,    39,   310,    67,   183,
     250,   324,   130,   261,   144,   183,    43,   253,    63,   315,
     198,   245,   246,   153,   143,   225,   142,   226,    23,   319,
      23,   156,   224,    50,   240,   241,   203,   204,   223,    23,
     130,    72,   227,   219,    48,    64,   285,   286,   287,   183,
     220,   151,   221,   316,   183,   183,   177,   242,   177,   267,
      50,   159,   179,   254,   255,   256,   228,   146,   301,   183,
     302,   268,   142,   317,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   213,   214,   215,   270,   320,   291,   299,   335,   143,
      58,   142,   311,   314,   312,   146,   237,   238,    49,   322,
     166,   264,   307,   323,   143,   183,   142,   293,   183,   347,
      75,   179,   349,   167,   131,    61,   168,   277,   278,   279,
     280,   169,   263,    44,   226,    49,   171,   142,    50,   209,
     210,   158,   145,   211,   212,   321,   183,   172,   146,   146,
     146,   146,   173,   275,   276,   134,   174,   228,   199,   283,
     284,   130,   134,   200,   146,   201,   336,   337,   338,   281,
     282,   202,    73,   331,   231,   143,   232,   142,   329,   332,
     145,   143,   252,   142,   257,   235,   259,   288,   156,   262,
     289,   348,   305,   134,   342,   264,   142,   350,   343,   308,
     352,   313,   325,   346,   139,    77,    78,    79,   318,   327,
      81,    82,   326,    49,   339,   341,   344,   242,   351,   345,
      46,   304,   154,   145,   145,   145,   145,   269,   271,   273,
     251,   134,    83,    84,    85,    86,   272,   274,   181,   145,
     146,   150,   247,   333,     0,     0,   236,     0,   139,    77,
      78,    79,     0,     0,    81,    82,     0,     0,     0,   139,
      77,    78,    79,     0,     0,    81,    82,     0,     0,     0,
       0,     0,    98,    99,     0,     0,    83,    84,    85,    86,
       0,     0,   101,     0,     0,   140,     0,    83,    84,    85,
      86,     0,     0,   139,    77,    78,    79,     0,     0,    81,
      82,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,   145,    98,    99,     0,     0,
       0,    83,    84,    85,    86,     0,   101,    98,    99,   298,
       0,     0,     0,     0,     0,     0,     0,   101,     2,     0,
     330,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       1,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   101,   290,     0,    22,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   225,   295,   226,     0,     0,
       0,     2,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   132,     0,   139,    77,    78,    79,     0,
       0,    81,    82,     0,     0,     0,     0,    22,     0,   194,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
     226,     0,     0,    83,    84,    85,    86,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     0,     0,     0,     0,
      22,     0,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,   133,   101,   340,    83,    84,    85,    86,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,    87,    88,    89,     0,    90,    91,    92,    93,
      94,    95,    96,    97,    22,    98,    99,     0,     0,    54,
     100,     0,     0,     0,     0,   101,    76,    77,    78,    79,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,    84,    85,    86,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,    87,    88,    89,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    22,    98,    99,     0,     0,    54,   180,
       0,     0,     0,     0,   101,    76,    77,    78,    79,    80,
       0,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,    84,    85,    86,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
      87,    88,    89,     0,    90,    91,    92,    93,    94,    95,
      96,    97,    22,    98,    99,     0,     0,    54,   222,   139,
      77,    78,    79,   101,     0,    81,    82,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,    83,    84,    85,
      86,     0,     0,     0,     0,    22,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    76,    77,    78,    79,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,    22,    98,    99,     0,
       0,     0,    76,    77,    78,    79,    80,   101,    81,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,    84,    85,    86,     0,     0,     0,    87,    88,    89,
       0,    90,    91,    92,    93,    94,    95,    96,    97,     0,
      98,    99,     1,     0,    54,   266,    47,    87,    88,    89,
     101,    90,    91,    92,    93,    94,    95,    96,    97,     0,
      98,    99,     0,     0,    54,     0,     0,     0,     0,     0,
     101,     0,     0,     2,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,   139,    77,    78,    79,     0,     2,    81,    82,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,    83,
      84,    85,    86,   139,    77,    78,    79,     0,     0,    81,
      82,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,    83,    84,    85,    86,     0,     0,     0,     0,    98,
      99,     0,     0,   155,   334,     0,     0,     0,     0,   101,
       0,     0,     0,     0,   139,    77,    78,    79,   175,     0,
      81,    82,   139,    77,    78,    79,    80,     0,    81,    82,
       0,    98,    99,     0,     0,   155,     0,     0,     0,     0,
       0,   101,    83,    84,    85,    86,     0,     0,     0,     0,
      83,    84,    85,    86,     0,     0,   139,    77,    78,    79,
       0,     0,    81,    82,     0,     0,     0,   139,    77,    78,
      79,     0,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,    98,    99,    83,    84,    85,    86,     0,     0,
      98,    99,   101,     0,     0,    83,    84,    85,    86,     0,
     101,   139,    77,    78,    79,     0,     0,    81,    82,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,    98,    99,     0,     0,     0,    83,
      84,    85,    86,     0,   160,    98,    99,    22,     0,     0,
       0,     0,     0,   239,     2,   162,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,   101,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   263,   295,   226,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   328,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,   294,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,    73,     0,    54,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,   306,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   303,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22
};

static const yytype_int16 yycheck[] =
{
       0,    23,    35,    60,     2,    60,    59,    29,     0,    29,
     107,   155,   171,    92,     3,   147,     3,     3,    82,    73,
       3,    34,     3,    18,    79,    25,    81,    82,    87,   134,
      87,     3,    87,    25,    56,   228,    56,    53,    54,    81,
       7,    83,    78,    41,    34,   124,    82,     8,     9,    10,
      72,    34,   107,     7,     7,     0,    13,    14,    75,    59,
      50,    51,    34,    97,    76,    57,    78,   101,    81,    78,
      83,   264,    29,    30,   179,    78,     2,    86,     3,    78,
     159,    84,    74,    82,    75,    78,    75,   166,    75,    82,
      85,    76,   151,    78,   151,    81,   151,    83,    81,   258,
      81,   155,   181,    29,   236,    77,    15,    16,   124,    81,
     102,    78,   134,    74,   134,    41,   213,   214,   215,    78,
      81,    73,    83,    82,    78,    78,   160,   149,   162,   183,
      56,    77,   101,   167,   168,   169,   134,    63,    81,    78,
      83,   195,   197,    82,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,    34,    35,    36,   198,   262,   220,   226,   312,   226,
      33,   226,    76,   252,    78,   101,   145,   146,    29,    78,
      77,   179,   241,    82,   241,    78,   241,   221,    78,    82,
      53,   160,    82,    81,    57,   228,    81,   205,   206,   207,
     208,    81,    81,   225,    83,    56,    81,   262,   134,    11,
      12,    74,    63,    31,    32,    77,    78,     3,   144,   145,
     146,   147,     7,   203,   204,   225,     7,   225,    17,   211,
     212,   223,   232,    79,   160,    80,   315,   316,   317,   209,
     210,    71,    73,   302,    82,   302,    78,   302,   301,   308,
     101,   308,    77,   308,    63,    84,     7,     3,   312,    82,
       3,   340,     3,   263,   321,   263,   321,   346,   322,    77,
     349,    82,    82,    61,     3,     4,     5,     6,    81,    84,
       9,    10,    82,   134,   318,   319,    82,   309,     7,    84,
      25,   232,    72,   144,   145,   146,   147,   197,   199,   201,
     160,   301,    31,    32,    33,    34,   200,   202,   102,   160,
     236,    66,   153,   309,    -1,    -1,   144,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    31,    32,    33,    34,
      -1,    -1,    81,    -1,    -1,    84,    -1,    31,    32,    33,
      34,    -1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   236,    71,    72,    -1,    -1,
      -1,    31,    32,    33,    34,    -1,    81,    71,    72,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    34,    -1,
      84,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       3,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    -1,    70,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    81,    82,    83,    -1,    -1,
      -1,    34,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     3,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    70,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      83,    -1,    -1,    31,    32,    33,    34,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    81,    82,    31,    32,    33,    34,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    81,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    59,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    81,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    75,    76,     3,
       4,     5,     6,    81,    -1,     9,    10,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    70,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    81,     9,    10,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    -1,    -1,    -1,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      71,    72,     3,    -1,    75,    76,     7,    58,    59,    60,
      81,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      71,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    34,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,     3,     4,     5,     6,    -1,    34,     9,    10,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    31,
      32,    33,    34,     3,     4,     5,     6,    -1,    -1,     9,
      10,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    71,
      72,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    81,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    31,    32,    33,    34,    -1,    -1,
      71,    72,    81,    -1,    -1,    31,    32,    33,    34,    -1,
      81,     3,     4,     5,     6,    -1,    -1,     9,    10,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    71,    72,    -1,    -1,    -1,    31,
      32,    33,    34,    -1,    81,    71,    72,    70,    -1,    -1,
      -1,    -1,    -1,    76,    34,    81,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    76,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    73,    -1,    75,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    76,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    34,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    70,    81,    88,    89,    90,    91,    92,    93,
      94,    95,    96,   100,   101,   137,   142,   145,   146,    96,
     137,   138,     3,    75,   100,     0,    90,     7,    94,    95,
      96,    97,    98,   100,    75,    92,    93,    99,   130,    81,
      83,   101,     3,    75,    96,   137,    75,     3,   143,   144,
      82,     7,    78,    73,    99,   130,     3,     4,     5,     6,
       7,     9,    10,    31,    32,    33,    34,    58,    59,    60,
      62,    63,    64,    65,    66,    67,    68,    69,    71,    72,
      76,    81,    99,   103,   104,   105,   106,   107,   109,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   128,   129,   130,   131,   132,   133,   134,   135,   100,
      92,   130,     3,    82,    93,   110,   111,   112,   136,     3,
      84,   102,   105,   109,    75,    95,    96,   147,   148,   149,
     143,    73,    76,    78,    98,    75,   104,   126,   130,    77,
      81,   105,    81,   105,   105,   102,    77,    81,    81,    81,
     128,    81,     3,     7,     7,     7,   103,   103,   139,   149,
      76,   131,     7,    78,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    73,   108,   106,    18,    85,    17,
      79,    80,    71,    15,    16,    13,    14,    29,    30,    11,
      12,    31,    32,    34,    35,    36,     8,     9,    10,    74,
      81,    83,    76,    99,   128,    81,    83,   100,   137,   140,
     141,    82,    78,    78,    82,    84,   147,   149,   149,    76,
     148,    77,   100,   150,   151,    76,   102,   144,   126,   127,
     128,   139,    77,   128,   103,   103,   103,    63,   132,     7,
       7,    82,    82,    81,   137,   140,    76,   104,   104,   114,
     103,   115,   116,   117,   118,   119,   119,   120,   120,   120,
     120,   121,   121,   122,   122,   106,   106,   106,     3,     3,
      82,   104,   125,   103,    76,    82,   110,   140,    84,   102,
     141,    81,    83,    56,   112,     3,    76,   102,    77,    78,
      86,    76,    78,    82,   128,    82,    82,    82,    81,   132,
     106,    77,    78,    82,    84,    82,    82,    84,    82,   110,
      84,   102,   102,   151,    76,   126,   128,   128,   128,   103,
      82,   103,   109,   104,    82,    84,    61,    82,   128,    82,
     128,     7,   128
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    92,    92,    93,    93,    93,    93,    93,    93,    94,
      94,    94,    94,    94,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   102,   103,   103,   104,   104,   105,   105,
     105,   105,   105,   105,   106,   106,   107,   107,   107,   107,
     107,   107,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   118,   118,   119,   119,   119,   119,   119,
     120,   120,   120,   121,   121,   121,   122,   122,   122,   122,
     123,   123,   123,   123,   123,   123,   123,   123,   124,   124,
     124,   124,   125,   125,   126,   126,   126,   127,   127,   128,
     128,   128,   128,   128,   128,   129,   129,   129,   130,   130,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     134,   134,   134,   134,   135,   135,   135,   135,   135,   136,
     136,   137,   137,   137,   137,   138,   138,   139,   139,   140,
     140,   140,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   142,   142,   142,   143,   143,   144,   144,   145,   145,
     145,   146,   146,   147,   147,   148,   149,   149,   149,   149,
     150,   150,   151,   151,   151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     4,     3,     3,
       2,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     2,     2,     1,     1,     3,     4,     3,
       4,     4,     3,     1,     1,     3,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     1,     3,     1,     3,     2,
       2,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     4,     3,     4,     3,     3,     2,     2,     1,     1,
       1,     3,     1,     3,     1,     3,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       3,     4,     4,     1,     2,     1,     2,     5,     7,     5,
       5,     7,     6,     7,     3,     2,     2,     2,     3,     1,
       3,     1,     2,     2,     3,     1,     2,     1,     2,     1,
       1,     2,     3,     2,     3,     3,     4,     2,     3,     3,
       4,     4,     5,     2,     1,     3,     1,     3,     5,     4,
       2,     1,     1,     1,     2,     3,     2,     1,     2,     1,
       1,     3,     1,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
#line 184 "src/C_parser.y" /* yacc.c:1646  */
    { g_root = (yyvsp[0].ASTtree);}
#line 1868 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 186 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ASTtree) = new TranslationUnit((yyvsp[0].ExternalDecLaration),NULL); }
#line 1874 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 187 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ASTtree) = new TranslationUnit((yyvsp[0].ExternalDecLaration),(yyvsp[-1].ASTtree)); }
#line 1880 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 192 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExternalDecLaration) = new ExternalDeclaration((yyvsp[0].FunctionDefinitionPtr),NULL,NULL,NULL) ; }
#line 1886 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 193 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExternalDecLaration) = new ExternalDeclaration(NULL,(yyvsp[0].DecLaration),NULL,NULL) ; }
#line 1892 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 197 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition((yyvsp[-3].DeclarationSpecifierS),(yyvsp[-2].DecLarator),(yyvsp[-1].DeclarationListPtr),(yyvsp[0].CompoundStatementPtr)); }
#line 1898 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 198 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition((yyvsp[-2].DeclarationSpecifierS),(yyvsp[-1].DecLarator),NULL,(yyvsp[0].CompoundStatementPtr)); }
#line 1904 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 199 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition(NULL,(yyvsp[-2].DecLarator),(yyvsp[-1].DeclarationListPtr),(yyvsp[0].CompoundStatementPtr)); }
#line 1910 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 200 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition(NULL,(yyvsp[-1].DecLarator),NULL,(yyvsp[0].CompoundStatementPtr)); }
#line 1916 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 206 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLaration) = new Declaration((yyvsp[-1].DeclarationSpecifierS),NULL);  }
#line 1922 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 207 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLaration) = new Declaration((yyvsp[-2].DeclarationSpecifierS),(yyvsp[-1].InitDeclaratoRList)); }
#line 1928 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 213 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers((yyvsp[0].StorageClassSpecifierS),NULL,NULL,NULL) ;}
#line 1934 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 214 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers((yyvsp[0].StorageClassSpecifierS),NULL,NULL,(yyvsp[-1].DeclarationSpecifierS)) ;}
#line 1940 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 215 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,(yyvsp[0].TypeSpeCifier),NULL,NULL) ;}
#line 1946 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 216 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,(yyvsp[0].TypeSpeCifier),NULL,(yyvsp[-1].DeclarationSpecifierS)) ;}
#line 1952 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 217 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,NULL,(yyvsp[0].TypeQuaLifier),NULL) ;}
#line 1958 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 218 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,NULL,(yyvsp[0].TypeQuaLifier),(yyvsp[-1].DeclarationSpecifierS)) ;}
#line 1964 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 224 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1970 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 225 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1976 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 226 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1982 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 227 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1988 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 228 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1994 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 234 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text),NULL,NULL); }
#line 2000 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 235 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text),NULL,NULL); }
#line 2006 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 236 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text),NULL,NULL); }
#line 2012 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 237 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text),NULL,NULL); }
#line 2018 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 238 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text),NULL,NULL); }
#line 2024 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 239 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text),NULL,NULL); }
#line 2030 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 240 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text),NULL,NULL); }
#line 2036 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 241 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text),NULL,NULL); }
#line 2042 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 242 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text),NULL,NULL); }
#line 2048 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 243 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text),NULL,NULL); }
#line 2054 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 244 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier(NULL,(yyvsp[0].StructOrUnionSpecifieR),NULL); }
#line 2060 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 245 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier(NULL,NULL,(yyvsp[0].ENumSpecifier)); }
#line 2066 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 251 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeQuaLifier) = new TypeQualifier( (yyvsp[0].text) ) ; }
#line 2072 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 252 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeQuaLifier) = new TypeQualifier( (yyvsp[0].text) ) ; }
#line 2078 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 259 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclaratoRList) = new InitDeclaratorList((yyvsp[0].InitDeclArator),NULL); }
#line 2084 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 260 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclaratoRList) = new InitDeclaratorList((yyvsp[0].InitDeclArator),(yyvsp[-2].InitDeclaratoRList)); }
#line 2090 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 265 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclArator) = new InitDeclarator((yyvsp[0].DecLarator),NULL); }
#line 2096 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 266 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclArator) = new InitDeclarator((yyvsp[-2].DecLarator),(yyvsp[0].InitializerPtr));  }
#line 2102 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 270 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationListPtr) = new DeclarationList((yyvsp[0].DecLaration),NULL) ; }
#line 2108 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 271 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationListPtr) = new DeclarationList((yyvsp[0].DecLaration),(yyvsp[-1].DeclarationListPtr)) ; }
#line 2114 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 275 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLarator) = new Declarator((yyvsp[-1].PointerPtr),(yyvsp[0].DirectDeclaratorPtr),NULL);}
#line 2120 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 276 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLarator) = new Declarator(NULL,(yyvsp[0].DirectDeclaratorPtr),NULL);}
#line 2126 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 283 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = new DirectDeclarator((yyvsp[0].text),NULL,NULL,NULL,NULL,NULL,0); }
#line 2132 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 284 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = new DirectDeclarator(NULL,NULL,NULL,NULL,NULL,(yyvsp[-1].DecLarator),3); }
#line 2138 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 285 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = new DirectDeclarator(NULL,(yyvsp[-1].ConstanTExpression),NULL,NULL,(yyvsp[-3].DirectDeclaratorPtr),NULL,2);   }
#line 2144 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 286 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = new DirectDeclarator(NULL,NULL,NULL,NULL,(yyvsp[-2].DirectDeclaratorPtr),NULL,2);   }
#line 2150 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 287 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = new DirectDeclarator(NULL,NULL,(yyvsp[-1].ParameterTypeListPtr),NULL,(yyvsp[-3].DirectDeclaratorPtr),NULL,1);   }
#line 2156 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 288 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = new DirectDeclarator(NULL,NULL,NULL,(yyvsp[-1].IdentifierListPtr),(yyvsp[-3].DirectDeclaratorPtr),NULL,1);   }
#line 2162 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 289 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = new DirectDeclarator(NULL,NULL,NULL,NULL,(yyvsp[-2].DirectDeclaratorPtr),NULL,1); }
#line 2168 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 292 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ConstanTExpression) = new ConstantExpression((yyvsp[0].COnditionalExpression)); }
#line 2174 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 296 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExpressionPtr) = new Expression((yyvsp[0].AssignmentExpressionPtr),NULL); }
#line 2180 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 297 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExpressionPtr) = new Expression((yyvsp[0].AssignmentExpressionPtr),(yyvsp[-2].ExpressionPtr)); }
#line 2186 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 303 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = new AssignmentExpression(NULL,NULL,(yyvsp[0].COnditionalExpression),NULL); }
#line 2192 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 304 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = new AssignmentExpression((yyvsp[-2].UnaryExpressionPtr),(yyvsp[-1].text),NULL,(yyvsp[0].AssignmentExpressionPtr)); }
#line 2198 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 309 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression((yyvsp[0].PostFixExpressionPtr),NULL,NULL,NULL,NULL,NULL) ; }
#line 2204 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 310 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,(yyvsp[-1].text),NULL,NULL,(yyvsp[0].UnaryExpressionPtr),NULL) ; }
#line 2210 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 311 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,(yyvsp[-1].text),NULL,NULL,(yyvsp[0].UnaryExpressionPtr),NULL) ; }
#line 2216 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 312 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,NULL,(yyvsp[-1].UnaryOperatorPtr),(yyvsp[0].CAstExpression),NULL,NULL) ; }
#line 2222 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 313 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,(yyvsp[-1].text),NULL,NULL,(yyvsp[0].UnaryExpressionPtr),NULL) ; }
#line 2228 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 314 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,(yyvsp[-3].text),NULL,NULL,NULL,(yyvsp[-1].TypeNamePtr)) ; }
#line 2234 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 318 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CAstExpression) = new CastExpression((yyvsp[0].UnaryExpressionPtr),NULL,NULL); }
#line 2240 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 319 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CAstExpression) = new CastExpression(NULL,(yyvsp[-2].TypeNamePtr),(yyvsp[0].CAstExpression)); }
#line 2246 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 324 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryOperatorPtr) = new UnaryOperator(new std::string("&"));}
#line 2252 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 325 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryOperatorPtr) = new UnaryOperator(new std::string("*"));}
#line 2258 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 326 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryOperatorPtr) = new UnaryOperator(new std::string("+"));}
#line 2264 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 327 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryOperatorPtr) = new UnaryOperator(new std::string("-"));}
#line 2270 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 328 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.UnaryOperatorPtr) = new UnaryOperator(new std::string("~"));}
#line 2276 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 329 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.UnaryOperatorPtr) = new UnaryOperator(new std::string("!"));}
#line 2282 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 334 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2288 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 335 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2294 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 336 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2300 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 337 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2306 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 338 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2312 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 339 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2318 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 340 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2324 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 341 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2330 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 342 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2336 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 343 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2342 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 344 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2348 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 349 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.COnditionalExpression) = new ConditionalExpression((yyvsp[0].LOgicalOrExpression),NULL,NULL); }
#line 2354 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 350 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.COnditionalExpression) = new ConditionalExpression((yyvsp[-4].LOgicalOrExpression),(yyvsp[-2].ExpressionPtr),(yyvsp[0].COnditionalExpression)); }
#line 2360 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 356 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ParameterTypeListPtr) = new ParameterTypeList((yyvsp[0].ParameterListPtr),NULL); }
#line 2366 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 357 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ParameterTypeListPtr) = new ParameterTypeList((yyvsp[-2].ParameterListPtr),(yyvsp[0].text)); }
#line 2372 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 362 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ParameterListPtr) = new ParameterList((yyvsp[0].ParameterDeclarationPtr),NULL); }
#line 2378 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 363 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ParameterListPtr) = new ParameterList((yyvsp[0].ParameterDeclarationPtr),(yyvsp[-2].ParameterListPtr)); }
#line 2384 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 368 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ParameterDeclarationPtr) = new ParameterDeclaration((yyvsp[-1].DeclarationSpecifierS),NULL,(yyvsp[0].DecLarator)); }
#line 2390 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 369 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ParameterDeclarationPtr) = new ParameterDeclaration((yyvsp[-1].DeclarationSpecifierS),(yyvsp[0].AbstractDeclaratorPtr),NULL); }
#line 2396 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 370 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ParameterDeclarationPtr) = new ParameterDeclaration((yyvsp[0].DeclarationSpecifierS),NULL,NULL); }
#line 2402 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 372 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LOgicalOrExpression) = new LogicalOrExpression((yyvsp[0].LogicalANDexpression), NULL, NULL);}
#line 2408 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 373 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LOgicalOrExpression) = new LogicalOrExpression((yyvsp[0].LogicalANDexpression), (yyvsp[-1].text) ,(yyvsp[-2].LOgicalOrExpression));}
#line 2414 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 381 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LogicalANDexpression) = new LogicalAndExpression((yyvsp[0].InclusiveOrExpressioN), NULL, NULL);}
#line 2420 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 382 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LogicalANDexpression) = new LogicalAndExpression((yyvsp[0].InclusiveOrExpressioN), (yyvsp[-1].text) ,(yyvsp[-2].LogicalANDexpression));}
#line 2426 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 389 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InclusiveOrExpressioN) = new InclusiveOrExpression((yyvsp[0].ExclusiveOrExpressioN), NULL, NULL);}
#line 2432 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 390 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InclusiveOrExpressioN) = new InclusiveOrExpression((yyvsp[0].ExclusiveOrExpressioN), (yyvsp[-1].text) ,(yyvsp[-2].InclusiveOrExpressioN));}
#line 2438 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 398 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExclusiveOrExpressioN) = new ExclusiveOrExpression((yyvsp[0].AndExpressioN), NULL, NULL);}
#line 2444 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 399 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExclusiveOrExpressioN) = new ExclusiveOrExpression((yyvsp[0].AndExpressioN), (yyvsp[-1].text) ,(yyvsp[-2].ExclusiveOrExpressioN));}
#line 2450 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 406 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AndExpressioN) = new AndExpression((yyvsp[0].EQualityExpression), NULL, NULL);}
#line 2456 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 407 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AndExpressioN) = new AndExpression((yyvsp[0].EQualityExpression), (yyvsp[-1].text) ,(yyvsp[-2].AndExpressioN));}
#line 2462 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 414 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EQualityExpression) = new EqualityExpression((yyvsp[0].RElationalExpression), NULL, NULL); }
#line 2468 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 415 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EQualityExpression) = new EqualityExpression((yyvsp[0].RElationalExpression), (yyvsp[-1].text) ,(yyvsp[-2].EQualityExpression)); }
#line 2474 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 416 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EQualityExpression) = new EqualityExpression((yyvsp[0].RElationalExpression), (yyvsp[-1].text) ,(yyvsp[-2].EQualityExpression)); }
#line 2480 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 423 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression),NULL,NULL); }
#line 2486 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 424 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 2492 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 425 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 2498 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 426 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 2504 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 427 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 2510 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 435 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SHiftExpression) = new ShiftExpression((yyvsp[0].ADDitiveExpression),NULL,NULL); }
#line 2516 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 436 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SHiftExpression) = new ShiftExpression((yyvsp[0].ADDitiveExpression), (yyvsp[-1].text) ,(yyvsp[-2].SHiftExpression)); }
#line 2522 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 437 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SHiftExpression) = new ShiftExpression((yyvsp[0].ADDitiveExpression), (yyvsp[-1].text) ,(yyvsp[-2].SHiftExpression)); }
#line 2528 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 443 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ADDitiveExpression) = new AdditiveExpression((yyvsp[0].MUltiplicativeExpression),NULL,NULL); }
#line 2534 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 444 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ADDitiveExpression) = new AdditiveExpression((yyvsp[0].MUltiplicativeExpression), (yyvsp[-1].text) ,(yyvsp[-2].ADDitiveExpression)); }
#line 2540 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 445 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ADDitiveExpression) = new AdditiveExpression((yyvsp[0].MUltiplicativeExpression), (yyvsp[-1].text) ,(yyvsp[-2].ADDitiveExpression)); }
#line 2546 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 451 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression),NULL,NULL); }
#line 2552 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 452 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression), (yyvsp[-1].text) ,(yyvsp[-2].MUltiplicativeExpression)); }
#line 2558 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 453 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression), (yyvsp[-1].text) ,(yyvsp[-2].MUltiplicativeExpression)); }
#line 2564 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 454 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression), (yyvsp[-1].text) ,(yyvsp[-2].MUltiplicativeExpression)); }
#line 2570 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 460 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,(yyvsp[0].PrimaryExpressionPtr),NULL,NULL,NULL,NULL); }
#line 2576 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 461 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression((yyvsp[-3].PostFixExpressionPtr),NULL,(yyvsp[-1].ExpressionPtr),NULL,NULL,NULL); }
#line 2582 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 462 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression((yyvsp[-2].PostFixExpressionPtr),NULL,NULL,NULL,NULL,NULL); }
#line 2588 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 463 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression((yyvsp[-3].PostFixExpressionPtr),NULL,NULL,(yyvsp[-1].ArgumentExpressionListPtr),NULL,NULL);}
#line 2594 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 464 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression((yyvsp[-2].PostFixExpressionPtr),NULL,NULL,NULL,(yyvsp[0].text),(yyvsp[-1].text)); }
#line 2600 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 465 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression((yyvsp[-2].PostFixExpressionPtr),NULL,NULL,NULL,(yyvsp[0].text),(yyvsp[-1].text)); }
#line 2606 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 466 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression((yyvsp[-1].PostFixExpressionPtr),NULL,NULL,NULL,NULL,(yyvsp[0].text)); }
#line 2612 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 467 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression((yyvsp[-1].PostFixExpressionPtr),NULL,NULL,NULL,NULL,(yyvsp[0].text)); }
#line 2618 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 474 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression((yyvsp[0].text),NULL,NULL,NULL); }
#line 2624 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 475 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression(NULL,(yyvsp[0].text),NULL,NULL); }
#line 2630 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 476 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression(NULL,NULL,(yyvsp[0].text),NULL); }
#line 2636 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 477 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression(NULL,NULL,NULL,(yyvsp[-1].ExpressionPtr)); }
#line 2642 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 485 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ArgumentExpressionListPtr) = new ArgumentExpressionList(NULL,(yyvsp[0].AssignmentExpressionPtr)); }
#line 2648 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 486 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ArgumentExpressionListPtr) = new ArgumentExpressionList((yyvsp[-2].ArgumentExpressionListPtr),(yyvsp[0].AssignmentExpressionPtr)); }
#line 2654 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 493 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = new Initializer((yyvsp[0].AssignmentExpressionPtr),NULL); }
#line 2660 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 494 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = new Initializer(NULL,(yyvsp[-1].InitializerListPtr)); }
#line 2666 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 495 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = new Initializer(NULL,(yyvsp[-2].InitializerListPtr)); }
#line 2672 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 500 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerListPtr) = new InitializerList(NULL,(yyvsp[0].InitializerPtr)); }
#line 2678 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 501 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerListPtr) = new InitializerList((yyvsp[-2].InitializerListPtr),(yyvsp[0].InitializerPtr)); }
#line 2684 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 507 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement((yyvsp[0].LabeledStatementPtr),NULL,NULL,NULL,NULL,NULL); }
#line 2690 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 508 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,(yyvsp[0].CompoundStatementPtr),NULL,NULL,NULL,NULL); }
#line 2696 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 509 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,(yyvsp[0].ExpressionStatementPtr),NULL,NULL,NULL); }
#line 2702 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 510 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,NULL,(yyvsp[0].SelectionStatementPtr),NULL,NULL); }
#line 2708 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 511 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,NULL,NULL,(yyvsp[0].IterationStatementPtr),NULL); }
#line 2714 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 512 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,NULL,NULL,NULL,(yyvsp[0].JumpStatementPtr)); }
#line 2720 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 518 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LabeledStatementPtr) = new LabeledStatement((yyvsp[-2].text),NULL,NULL,(yyvsp[0].StatementPtr)); }
#line 2726 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 519 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LabeledStatementPtr) = new LabeledStatement(NULL,(yyvsp[-3].text),(yyvsp[-2].ConstanTExpression),(yyvsp[0].StatementPtr)); }
#line 2732 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 520 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LabeledStatementPtr) = new LabeledStatement(NULL,(yyvsp[-2].text),NULL,(yyvsp[0].StatementPtr)); }
#line 2738 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 526 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement(NULL,NULL); }
#line 2744 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 527 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement((yyvsp[-1].StatementListPtr),NULL); }
#line 2750 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 528 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement(NULL,(yyvsp[-1].DeclarationListPtr)); }
#line 2756 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 529 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement((yyvsp[-1].StatementListPtr),(yyvsp[-2].DeclarationListPtr)); }
#line 2762 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 530 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement((yyvsp[-2].StatementListPtr),(yyvsp[-1].DeclarationListPtr)); }
#line 2768 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 537 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementListPtr) = new StatementList((yyvsp[0].StatementPtr),NULL); }
#line 2774 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 538 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementListPtr) = new StatementList((yyvsp[0].StatementPtr),(yyvsp[-1].StatementListPtr)); }
#line 2780 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 543 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExpressionStatementPtr) = new ExpressionStatement(NULL) ; }
#line 2786 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 544 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExpressionStatementPtr) = new ExpressionStatement((yyvsp[-1].ExpressionPtr)) ; }
#line 2792 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 547 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SelectionStatementPtr) = new SelectionStatement((yyvsp[-2].ExpressionPtr),(yyvsp[0].StatementPtr),NULL,(yyvsp[-4].text),NULL,NULL); }
#line 2798 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 548 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SelectionStatementPtr) = new SelectionStatement((yyvsp[-4].ExpressionPtr),(yyvsp[-2].StatementPtr),(yyvsp[0].StatementPtr),(yyvsp[-6].text),(yyvsp[-1].text),NULL); }
#line 2804 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 549 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SelectionStatementPtr) = new SelectionStatement((yyvsp[-2].ExpressionPtr),(yyvsp[0].StatementPtr),NULL,NULL,NULL,(yyvsp[-4].text)); }
#line 2810 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 555 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement((yyvsp[-2].ExpressionPtr),(yyvsp[0].StatementPtr),NULL,NULL,(yyvsp[-4].text)); }
#line 2816 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 556 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement((yyvsp[-2].ExpressionPtr),(yyvsp[-5].StatementPtr),NULL,NULL,(yyvsp[-6].text)); }
#line 2822 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 557 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement(NULL,(yyvsp[0].StatementPtr),(yyvsp[-3].ExpressionStatementPtr),(yyvsp[-2].ExpressionStatementPtr),(yyvsp[-5].text)); }
#line 2828 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 558 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement((yyvsp[-2].ExpressionPtr),(yyvsp[0].StatementPtr),(yyvsp[-4].ExpressionStatementPtr),(yyvsp[-3].ExpressionStatementPtr),(yyvsp[-6].text)); }
#line 2834 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 564 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement((yyvsp[-1].text),NULL,(yyvsp[-2].text)); }
#line 2840 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 565 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,NULL,(yyvsp[-1].text)); }
#line 2846 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 566 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,NULL,(yyvsp[-1].text)); }
#line 2852 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 567 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,NULL,(yyvsp[-1].text)); }
#line 2858 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 568 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,(yyvsp[-1].ExpressionPtr),(yyvsp[-2].text)); }
#line 2864 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 572 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IdentifierListPtr) = new IdentifierList((yyvsp[0].text),NULL); }
#line 2870 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 573 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IdentifierListPtr) = new IdentifierList((yyvsp[0].text),(yyvsp[-2].IdentifierListPtr)); }
#line 2876 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 579 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PointerPtr) = new Pointer(NULL,NULL); }
#line 2882 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 580 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PointerPtr) = new Pointer(NULL,(yyvsp[0].TypeQualifierListPtr)); }
#line 2888 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 581 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PointerPtr) = new Pointer((yyvsp[0].PointerPtr),NULL); }
#line 2894 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 582 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PointerPtr) = new Pointer((yyvsp[0].PointerPtr),(yyvsp[-1].TypeQualifierListPtr)); }
#line 2900 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 585 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeQualifierListPtr) = new TypeQualifierList((yyvsp[0].TypeQuaLifier),NULL);}
#line 2906 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 586 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeQualifierListPtr) = new TypeQualifierList((yyvsp[0].TypeQuaLifier),(yyvsp[-1].TypeQualifierListPtr));}
#line 2912 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 590 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeNamePtr) = new TypeName((yyvsp[0].SpecifierQualifierListPtr),NULL); }
#line 2918 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 591 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeNamePtr) = new TypeName((yyvsp[-1].SpecifierQualifierListPtr),(yyvsp[0].AbstractDeclaratorPtr)); }
#line 2924 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 596 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AbstractDeclaratorPtr) = new AbstractDeclarator((yyvsp[0].PointerPtr),NULL) ; }
#line 2930 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 597 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AbstractDeclaratorPtr) = new AbstractDeclarator(NULL,(yyvsp[0].DirectAbstractDeclaratorPtr)); }
#line 2936 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 598 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AbstractDeclaratorPtr) = new AbstractDeclarator((yyvsp[-1].PointerPtr),(yyvsp[0].DirectAbstractDeclaratorPtr)); }
#line 2942 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 603 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectAbstractDeclaratorPtr) = new DirectAbstractDeclarator((yyvsp[-1].AbstractDeclaratorPtr),NULL,NULL,NULL); }
#line 2948 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 604 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectAbstractDeclaratorPtr) = new DirectAbstractDeclarator(NULL,NULL,NULL,NULL); }
#line 2954 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 605 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectAbstractDeclaratorPtr) = new DirectAbstractDeclarator(NULL,(yyvsp[-1].ConstanTExpression),NULL,NULL); }
#line 2960 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 606 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectAbstractDeclaratorPtr) = new DirectAbstractDeclarator(NULL,NULL,NULL,(yyvsp[-2].DirectAbstractDeclaratorPtr)); }
#line 2966 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 607 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectAbstractDeclaratorPtr) = new DirectAbstractDeclarator(NULL,(yyvsp[-1].ConstanTExpression),NULL,(yyvsp[-3].DirectAbstractDeclaratorPtr)); }
#line 2972 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 608 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectAbstractDeclaratorPtr) = new DirectAbstractDeclarator(NULL,NULL,NULL,NULL); }
#line 2978 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 609 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectAbstractDeclaratorPtr) = new DirectAbstractDeclarator(NULL,NULL,(yyvsp[-1].ParameterTypeListPtr),NULL); }
#line 2984 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 610 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectAbstractDeclaratorPtr) = new DirectAbstractDeclarator(NULL,NULL,NULL,(yyvsp[-2].DirectAbstractDeclaratorPtr)); }
#line 2990 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 611 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectAbstractDeclaratorPtr) = new DirectAbstractDeclarator(NULL,NULL,(yyvsp[-1].ParameterTypeListPtr),(yyvsp[-3].DirectAbstractDeclaratorPtr)); }
#line 2996 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 619 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ENumSpecifier) = new EnumSpecifier((yyvsp[-1].EnumeratorListPtr),NULL); }
#line 3002 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 620 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ENumSpecifier) = new EnumSpecifier((yyvsp[-1].EnumeratorListPtr),(yyvsp[-3].text));   }
#line 3008 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 621 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ENumSpecifier) = new EnumSpecifier(NULL,(yyvsp[0].text)); }
#line 3014 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 624 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EnumeratorListPtr) = new EnumeratorList((yyvsp[0].EnumeratorPtr),NULL); }
#line 3020 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 625 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EnumeratorListPtr) = new EnumeratorList((yyvsp[0].EnumeratorPtr),(yyvsp[-2].EnumeratorListPtr)); }
#line 3026 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 628 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EnumeratorPtr) = new Enumerator((yyvsp[0].text),NULL); }
#line 3032 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 629 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EnumeratorPtr) = new Enumerator((yyvsp[-2].text),(yyvsp[0].ConstanTExpression)); }
#line 3038 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 633 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructOrUnionSpecifieR) = new StructOrUnionSpecifier((yyvsp[-4].StruCtOrUnion),(yyvsp[-3].text),(yyvsp[-1].StructDeclarationListPtr)); }
#line 3044 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 634 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructOrUnionSpecifieR) = new StructOrUnionSpecifier((yyvsp[-3].StruCtOrUnion),NULL,(yyvsp[-1].StructDeclarationListPtr)); }
#line 3050 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 635 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructOrUnionSpecifieR) = new StructOrUnionSpecifier((yyvsp[-1].StruCtOrUnion),(yyvsp[0].text),NULL); }
#line 3056 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 638 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StruCtOrUnion) = new StructOrUnion( (yyvsp[0].text) ); }
#line 3062 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 639 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StruCtOrUnion) = new StructOrUnion( (yyvsp[0].text) ); }
#line 3068 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 642 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructDeclarationListPtr) = new StructDeclarationList((yyvsp[0].StructDecLaration),NULL); }
#line 3074 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 643 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructDeclarationListPtr) = new StructDeclarationList((yyvsp[0].StructDecLaration),(yyvsp[-1].StructDeclarationListPtr)); }
#line 3080 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 646 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructDecLaration) = new StructDeclaration((yyvsp[-2].SpecifierQualifierListPtr),(yyvsp[-1].StructDeclaratorListPtr)); }
#line 3086 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 649 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SpecifierQualifierListPtr) = new SpecifierQualifierList((yyvsp[-1].TypeSpeCifier),(yyvsp[0].SpecifierQualifierListPtr),NULL) ; }
#line 3092 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 650 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SpecifierQualifierListPtr) = new SpecifierQualifierList((yyvsp[0].TypeSpeCifier),NULL,NULL) ; }
#line 3098 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 651 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SpecifierQualifierListPtr) = new SpecifierQualifierList(NULL,(yyvsp[0].SpecifierQualifierListPtr),(yyvsp[-1].TypeQuaLifier)) ; }
#line 3104 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 652 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SpecifierQualifierListPtr) = new SpecifierQualifierList(NULL,NULL,(yyvsp[0].TypeQuaLifier)) ; }
#line 3110 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 655 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructDeclaratorListPtr) = new StructDeclaratorList((yyvsp[0].StructDeclaratorPtr),NULL); }
#line 3116 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 656 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructDeclaratorListPtr) = new StructDeclaratorList((yyvsp[0].StructDeclaratorPtr),(yyvsp[-2].StructDeclaratorListPtr)); }
#line 3122 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 659 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructDeclaratorPtr) = new StructDeclarator((yyvsp[0].DecLarator),NULL); }
#line 3128 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 660 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructDeclaratorPtr) = new StructDeclarator(NULL,(yyvsp[0].ConstanTExpression)); }
#line 3134 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 661 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructDeclaratorPtr) = new StructDeclarator((yyvsp[-2].DecLarator),(yyvsp[0].ConstanTExpression)); }
#line 3140 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 3144 "src/C_parser.tab.cpp" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
  return yyresult;
}
#line 663 "src/C_parser.y" /* yacc.c:1906  */


const TranslationUnit *g_root; // Definition of variable (to match declaration earlier)



const TranslationUnit* parseAST(char* x, char* y){
  g_root=0;
  yyin = fopen(x, "r");
  if(yyin) { 
	  yyparse();
  }
  fclose(yyin);
	
  return g_root;
}
