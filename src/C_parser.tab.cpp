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



#line 117 "src/C_parser.tab.cpp" /* yacc.c:355  */

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
#line 23 "src/C_parser.y" /* yacc.c:355  */


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

#line 249 "src/C_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 266 "src/C_parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   917

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  286

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,     2,     2,    67,     2,
      78,    79,    84,     2,    75,     2,    71,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    74,    83,
       2,    70,     2,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,    76,    73,    68,     2,     2,     2,
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
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   144,   144,   145,   146,   147,   150,   151,   152,   153,
     154,   155,   156,   157,   161,   162,   166,   167,   168,   169,
     175,   176,   177,   178,   179,   180,   184,   189,   190,   191,
     192,   196,   197,   198,   202,   203,   204,   208,   209,   210,
     211,   212,   216,   217,   218,   222,   223,   227,   228,   232,
     233,   237,   238,   242,   243,   247,   248,   252,   253,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     271,   272,   276,   279,   280,   284,   285,   286,   287,   288,
     289,   293,   294,   298,   299,   302,   303,   304,   305,   306,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   325,   326,   327,   331,   332,   336,   337,   341,   345,
     346,   347,   348,   352,   353,   357,   358,   359,   362,   379,
     380,   384,   385,   386,   390,   392,   393,   396,   400,   401,
     402,   403,   407,   408,   457,   458,   459,   462,   463,   467,
     468,   469,   470,   471,   472,   476,   477,   478,   482,   483,
     484,   485,   489,   490,   494,   495,   499,   500,   504,   505,
     506,   510,   511,   512,   513,   516,   517,   518,   519,   520,
     522,   523,   525,   526,   529,   530,   531,   532
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "GT", "LT", "PLUS", "MINUS", "MULTIPLY", "MODULO", "DIVIDE", "TYPEDEF",
  "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG",
  "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID",
  "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "'&'", "'~'", "'!'", "'='", "'.'", "'{'", "'}'", "':'", "','", "'|'",
  "'^'", "'('", "')'", "'['", "']'", "'?'", "';'", "'*'", "$accept",
  "PRIMARY_EXPRESSION", "POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST",
  "UNARY_EXPRESSION", "UNARY_OPERATOR", "CAST_EXPRESSION",
  "MULTIPLICATIVE_EXPRESSION", "ADDITIVE_EXPRESSION", "SHIFT_EXPRESSION",
  "RELATIONAL_EXPRESSION", "EQUALITY_EXPRESSION", "AND_EXPRESSION",
  "EXCLUSIVE_OR_EXPRESSION", "INCLUSIVE_OR_EXPRESSION",
  "LOGICAL_AND_EXPRESSION", "LOGICAL_OR_EXPRESSION",
  "CONDITIONAL_EXPRESSION", "ASSIGNMENT_EXPRESSION", "ASSIGNMENT_OPERATOR",
  "EXPRESSION", "CONSTANT_EXPRESSION", "DECLARATION",
  "DECLARATION_SPECIFIERS", "INIT_DECLARATOR_LIST", "INIT_DECLARATOR",
  "STORAGE_CLASS_SPECIFIERS", "TYPE_SPECIFIER",
  "STRUCT_OR_UNION_SPECIFIER", "STRUCT_OR_UNION",
  "STRUCT_DECLARATION_LIST", "STRUCT_DECLARATION",
  "SPECIFIER_QUALIFIER_LIST", "STRUCT_DECLARATOR_LIST",
  "STRUCT_DECLARATOR", "ENUM_SPECIFIER", "TYPE_QUALIFIER", "DECLARATOR",
  "DIRECT_DECLARATOR", "POINTER", "TYPE_QUALIFIER_LIST", "INITIALIZER",
  "INITIALIZER_LIST", "STATEMENT", "LABELED_STATEMENT",
  "COMPOUND_STATEMENT", "DECLARATION_LIST", "STATEMENT_LIST",
  "EXPRESSION_STATEMENT", "SELECTION_STATEMENT", "ITERATION_STATEMENT",
  "JUMP_STATEMENT", "TRANSLATION_UNIT", "EXTERNAL_DECLARATION",
  "FUNCTION_DEFINITION", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,    38,   126,    33,
      61,    46,   123,   125,    58,    44,   124,    94,    40,    41,
      91,    93,    63,    59,    42
};
# endif

#define YYPACT_NINF -139

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-139)))

#define YYTABLE_NINF -84

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     258,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
      17,   -25,  -139,   208,  -139,  -139,  -139,    15,  -139,  -139,
     811,    28,    14,   190,  -139,  -139,   -42,  -139,  -139,   -25,
    -139,   -45,  -139,  -139,  -139,  -139,   762,   -30,   278,   308,
    -139,   208,  -139,   811,   -23,   614,    28,  -139,  -139,  -139,
    -139,  -139,    17,  -139,   706,  -139,   811,   278,   278,   824,
    -139,    26,   278,    95,  -139,  -139,   718,   718,  -139,  -139,
    -139,   718,   100,   -29,   116,   120,   538,   121,   202,   123,
     124,   462,  -139,  -139,  -139,  -139,   718,  -139,  -139,     3,
     131,   718,  -139,   147,    40,   172,    90,   170,   141,   133,
     136,   199,    -4,  -139,  -139,   -40,  -139,  -139,  -139,   379,
     450,  -139,  -139,  -139,  -139,   146,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,   137,  -139,   706,  -139,  -139,  -139,   844,
    -139,  -139,  -139,   718,    -6,  -139,   145,  -139,   538,  -139,
    -139,   148,   538,   718,   718,   718,   160,   581,   140,  -139,
    -139,  -139,    30,   -21,   259,  -139,  -139,   260,   621,   718,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,   718,  -139,   718,   718,   718,   718,   718,   718,   718,
     718,   718,   718,   718,   718,   718,   718,   718,   718,   718,
     718,   718,   718,  -139,  -139,   494,  -139,  -139,  -139,  -139,
      92,  -139,  -139,    26,  -139,   718,  -139,   538,  -139,     5,
      41,    42,   186,   581,  -139,  -139,  -139,  -139,  -139,  -139,
      48,  -139,    34,  -139,  -139,  -139,  -139,   147,   147,    40,
      40,   172,   172,   172,   172,    90,    90,   170,   141,   133,
     136,   199,   112,  -139,  -139,  -139,   698,  -139,  -139,  -139,
     538,   538,   538,   718,   666,   718,  -139,  -139,   718,  -139,
    -139,   207,  -139,  -139,    87,   538,    89,  -139,  -139,   538,
     183,  -139,   538,  -139,  -139,  -139
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     118,   124,    85,    86,    87,    88,    89,    91,    92,    93,
      94,    97,    98,    95,    96,   119,   120,    90,   104,   105,
       0,   128,   173,     0,    75,    77,    99,     0,   100,    79,
     118,   122,     0,   118,   170,   172,     0,   132,   130,   129,
      73,     0,    81,    76,    78,    80,   118,   103,   118,   118,
     152,     0,   177,   118,     0,     0,   121,     1,   171,   123,
     133,   131,     0,    74,     0,   175,   118,   118,   110,   118,
     106,     0,   112,     2,     3,     4,     0,     0,    22,    23,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    24,    25,   148,     0,   156,     6,    16,
      26,     0,    27,    31,    34,    37,    42,    45,    47,    49,
      51,    53,    55,    57,    70,     0,   154,   139,   140,   118,
       0,   141,   142,   143,   144,    83,   153,   176,   127,     2,
     126,    26,    72,     0,    82,     0,   134,    84,   174,   118,
     109,   102,   107,     0,     0,   113,   115,   111,     0,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,   166,
     167,   168,     0,     0,     0,    12,    13,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      59,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,   150,     0,   149,   155,   125,   137,
       0,   101,   116,     0,   108,     0,   145,     0,   147,     0,
       0,     0,     0,     0,   165,   169,     5,    11,    10,     8,
       0,    14,     0,    58,    28,    30,    29,    32,    33,    35,
      36,    40,    41,    39,    38,    43,    44,    46,    48,    50,
      52,    54,     0,    71,   151,   135,     0,   114,   117,   146,
       0,     0,     0,     0,     0,     0,     9,     7,     0,   136,
     138,   158,   160,   161,     0,     0,     0,    15,    56,     0,
       0,   163,     0,   159,   162,   164
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,  -139,   -55,  -139,   -86,     2,     8,   -20,
      -3,    71,    72,    73,    74,    70,  -139,   -54,   -56,  -139,
     -87,   -67,     7,    32,  -139,   210,    13,   -17,  -139,  -139,
     209,   -53,    39,  -139,    62,  -139,    24,   -18,   245,    18,
    -139,  -132,  -139,   -58,  -139,    -5,   129,   159,  -138,  -139,
    -139,  -139,  -139,   246,  -139
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    98,    99,   230,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   181,
     115,   133,    50,    51,    41,    42,    24,    25,    26,    27,
      69,    70,    71,   144,   145,    28,    29,    30,    31,    32,
      39,   137,   210,   116,   117,   118,    53,   120,   121,   122,
     123,   124,    33,    34,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     131,   132,    36,   209,   162,    46,    44,    22,   136,   163,
     164,   165,   166,   200,   151,   182,   142,     1,    47,   223,
       1,   149,   150,    15,    16,    52,   131,   132,   156,     1,
      62,    68,    23,   125,    44,   202,    43,    59,    63,    38,
      22,    65,    67,   203,   125,    37,   131,    45,   127,   153,
      68,    68,    68,   146,   202,    68,   128,    61,   226,    21,
     126,   138,   207,    60,    43,    23,   219,   220,   221,   213,
     186,   187,    72,   126,   167,    45,   212,   214,   201,   136,
     202,   168,   232,   169,   260,   264,   142,    48,   131,   132,
     216,    72,    72,    72,   218,    20,    72,   234,   235,   236,
     143,    21,   190,   191,    20,   202,    54,   140,    55,   202,
      21,   147,   231,   225,   252,   267,   202,   202,   192,   193,
     261,   262,    68,   265,   270,   233,   126,   266,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   253,   207,   258,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   259,
     131,   132,   202,    72,   202,   255,   280,   256,   282,   148,
     241,   242,   243,   244,   152,    66,   274,   276,   119,   183,
     184,   185,   188,   189,   194,   195,   268,   202,   237,   238,
      57,   245,   246,     1,   154,   146,   239,   240,   155,   157,
     136,   180,   271,   272,   273,   158,   159,   160,   196,   277,
     197,     1,   198,   131,   278,   199,    64,   281,   208,   215,
     222,   283,   217,   224,   285,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     1,   227,   228,   263,   279,   284,   247,    20,   248,
     251,   249,   134,   250,    21,   257,   139,    56,   205,    58,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,    40,    21,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    73,    74,    75,     0,     0,    76,    77,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,     0,     0,    20,     0,    78,    79,
      80,     0,    21,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     0,     0,    81,    82,    83,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
      49,    95,    73,    74,    75,     0,    96,    76,    77,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,    80,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,    81,    82,    83,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,     0,
       0,    49,   204,    73,    74,    75,     0,    96,    76,    77,
       0,     0,    97,     0,     0,   129,    74,    75,     0,     0,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,     0,     0,    73,    74,    75,
       0,     0,    76,    77,     0,    81,    82,    83,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       0,     0,    49,   206,    78,    79,    80,     0,    96,    92,
      93,    94,     0,    97,     0,     0,     0,     0,     0,     0,
      96,    73,    74,    75,     0,   161,    76,    77,     0,    81,
      82,    83,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     0,     0,    49,   254,    78,    79,
      80,     0,    96,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,   129,    74,    75,     0,     0,    76,
      77,     0,     0,    81,    82,    83,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
      49,    78,    79,    80,     0,     0,    96,   129,    74,    75,
       0,    97,    76,    77,   129,    74,    75,     0,     0,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,     0,    92,    93,
      94,    78,    79,    80,     0,     0,     0,     0,     0,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,   129,
      74,    75,     0,     0,    76,    77,     0,     0,     0,     0,
       0,    92,    93,    94,     0,     0,     0,     0,    92,    93,
      94,     0,    96,     0,     0,   130,    78,    79,    80,    96,
     229,   129,    74,    75,     0,     0,    76,    77,     0,   129,
      74,    75,     0,     0,    76,    77,     0,     0,     0,     0,
       0,   129,    74,    75,     0,     0,    76,    77,    78,    79,
      80,     0,     0,    92,    93,    94,    78,    79,    80,     0,
       0,     0,     0,     0,    96,   275,     0,     0,    78,    79,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,     0,     0,
     135,   269,     0,    92,    93,    94,    96,     0,   135,     0,
       0,     0,     0,     0,    96,    92,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,     0,    49,     0,     0,   -83,     0,     0,
       0,     0,     0,     0,     0,   -83,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,     0,    49,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   211
};

static const yytype_int16 yycheck[] =
{
      55,    55,    20,   135,    91,    23,    23,     0,    64,    96,
       7,     8,     9,    17,    81,   101,    69,     3,     3,   157,
       3,    76,    77,    48,    49,    30,    81,    81,    86,     3,
      75,    48,     0,    51,    51,    75,    23,    79,    83,    21,
      33,    46,    72,    83,    62,    21,   101,    23,    53,    78,
      67,    68,    69,    71,    75,    72,    79,    39,    79,    84,
      53,    66,   120,    39,    51,    33,   153,   154,   155,    75,
      30,    31,    48,    66,    71,    51,   143,    83,    82,   135,
      75,    78,   169,    80,    79,   223,   139,    72,   143,   143,
     148,    67,    68,    69,   152,    78,    72,   183,   184,   185,
      74,    84,    12,    13,    78,    75,    78,    68,    80,    75,
      84,    72,   168,    83,   201,    81,    75,    75,    28,    29,
      79,    79,   139,    75,   256,   181,   119,    79,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   202,   205,   215,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   217,
     215,   215,    75,   139,    75,    73,    79,    75,    79,    74,
     190,   191,   192,   193,    74,    46,   263,   264,    49,    32,
      33,    34,    10,    11,    14,    15,    74,    75,   186,   187,
       0,   194,   195,     3,    78,   213,   188,   189,    78,    78,
     256,    70,   260,   261,   262,     3,    83,    83,    67,   265,
      77,     3,    76,   268,   268,    16,    70,   275,    81,    74,
      60,   279,    74,    83,   282,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     3,     3,     3,    78,    58,    83,   196,    78,   197,
     200,   198,    62,   199,    84,   213,    67,    32,   119,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    83,    84,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     3,     4,     5,    -1,    -1,     8,     9,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    78,    -1,    30,    31,
      32,    -1,    84,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    55,    56,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    -1,
      72,    73,     3,     4,     5,    -1,    78,     8,     9,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      -1,    72,    73,     3,     4,     5,    -1,    78,     8,     9,
      -1,    -1,    83,    -1,    -1,     3,     4,     5,    -1,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    -1,    -1,     3,     4,     5,
      -1,    -1,     8,     9,    -1,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    -1,    72,    73,    30,    31,    32,    -1,    78,    67,
      68,    69,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      78,     3,     4,     5,    -1,    83,     8,     9,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    73,    30,    31,
      32,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,     8,
       9,    -1,    -1,    55,    56,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    -1,
      72,    30,    31,    32,    -1,    -1,    78,     3,     4,     5,
      -1,    83,     8,     9,     3,     4,     5,    -1,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    -1,    67,    68,
      69,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    67,    68,
      69,    -1,    78,    -1,    -1,    81,    30,    31,    32,    78,
      79,     3,     4,     5,    -1,    -1,     8,     9,    -1,     3,
       4,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,     8,     9,    30,    31,
      32,    -1,    -1,    67,    68,    69,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      72,    73,    -1,    67,    68,    69,    78,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    78,    67,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      78,    84,   107,   108,   111,   112,   113,   114,   120,   121,
     122,   123,   124,   137,   138,   139,   122,   121,   124,   125,
      83,   109,   110,   111,   112,   121,   122,     3,    72,    72,
     107,   108,   130,   131,    78,    80,   123,     0,   138,    79,
     121,   124,    75,    83,    70,   130,   131,    72,   112,   115,
     116,   117,   121,     3,     4,     5,     8,     9,    30,    31,
      32,    55,    56,    57,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    73,    78,    83,    86,    87,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   105,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   122,   107,   130,    79,     3,
      81,    89,   102,   106,   110,    72,   103,   126,   130,   115,
     117,    73,   116,    74,   118,   119,   122,   117,    74,    89,
      89,   106,    74,    78,    78,    78,   128,    78,     3,    83,
      83,    83,   105,   105,     7,     8,     9,    71,    78,    80,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      70,   104,    91,    32,    33,    34,    30,    31,    10,    11,
      12,    13,    28,    29,    14,    15,    67,    77,    76,    16,
      17,    82,    75,    83,    73,   132,    73,   128,    81,   126,
     127,    73,   106,    75,    83,    74,   128,    74,   128,   105,
     105,   105,    60,   133,    83,    83,    79,     3,     3,    79,
      88,   103,   105,   103,    91,    91,    91,    92,    92,    93,
      93,    94,    94,    94,    94,    95,    95,    96,    97,    98,
      99,   100,   105,   103,    73,    73,    75,   119,   106,   128,
      79,    79,    79,    78,   133,    75,    79,    81,    74,    73,
     126,   128,   128,   128,   105,    79,   105,   103,   102,    58,
      79,   128,    79,   128,    83,   128
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    89,    89,    89,    89,
      90,    90,    90,    90,    90,    90,    91,    92,    92,    92,
      92,    93,    93,    93,    94,    94,    94,    95,    95,    95,
      95,    95,    96,    96,    96,    97,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   106,   107,   107,   108,   108,   108,   108,   108,
     108,   109,   109,   110,   110,   111,   111,   111,   111,   111,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   113,   113,   113,   114,   114,   115,   115,   116,   117,
     117,   117,   117,   118,   118,   119,   119,   119,   120,   121,
     121,   122,   122,   122,   123,   123,   123,   123,   124,   124,
     124,   124,   125,   125,   126,   126,   126,   127,   127,   128,
     128,   128,   128,   128,   128,   129,   129,   129,   130,   130,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     134,   135,   135,   135,   135,   136,   136,   136,   136,   136,
     137,   137,   138,   138,   139,   139,   139,   139
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     4,     2,     1,     1,     1,     2,     3,     2,
       1,     2,     1,     1,     3,     1,     2,     3,     0,     1,
       1,     2,     1,     3,     1,     4,     3,     3,     1,     2,
       2,     3,     1,     2,     1,     3,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       3,     4,     1,     2,     1,     2,     1,     2,     5,     7,
       5,     5,     7,     6,     7,     3,     2,     2,     2,     3,
       1,     2,     1,     1,     4,     3,     3,     2
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
#line 144 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression((yyvsp[0].text),NULL,NULL,NULL); }
#line 1703 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 145 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression(NULL,(yyvsp[0].text),NULL,NULL); }
#line 1709 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 146 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression(NULL,NULL,(yyvsp[0].text),NULL); }
#line 1715 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 147 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression(NULL,NULL,NULL,(yyvsp[-1].AssignmentExpressionPtr)); }
#line 1721 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 150 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression((yyvsp[0].PrimaryExpressionPtr),NULL,NULL,NULL,NULL); }
#line 1727 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 151 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,(yyvsp[-1].AssignmentExpressionPtr),NULL,NULL,NULL); }
#line 1733 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 152 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = (yyvsp[-2].PostFixExpressionPtr); }
#line 1739 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 153 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,(yyvsp[-1].ArgumentExpressionListPtr),NULL,NULL);}
#line 1745 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 154 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,NULL,(yyvsp[0].text),(yyvsp[-1].text)); }
#line 1751 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 155 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,NULL,(yyvsp[0].text),(yyvsp[-1].text)); }
#line 1757 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 156 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,NULL,(yyvsp[0].text),NULL); }
#line 1763 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 157 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,NULL,(yyvsp[0].text),NULL); }
#line 1769 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 161 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ArgumentExpressionListPtr) = new ArgumentExpressionList((yyvsp[0].AssignmentExpressionPtr)); }
#line 1775 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 162 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ArgumentExpressionListPtr) = new ArgumentExpressionList((yyvsp[0].AssignmentExpressionPtr)); }
#line 1781 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 166 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression((yyvsp[0].PostFixExpressionPtr),NULL,NULL) ; }
#line 1787 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 167 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,(yyvsp[-1].text),NULL) ; }
#line 1793 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 168 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,(yyvsp[-1].text),NULL) ; }
#line 1799 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 169 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,(yyvsp[-1].text),(yyvsp[0].CAstExpression)) ; }
#line 1805 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 175 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 1811 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 176 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 1817 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 177 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 1823 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 178 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 1829 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 179 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 1835 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 180 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 1841 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 184 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CAstExpression) = new CastExpression((yyvsp[0].UnaryExpressionPtr),NULL); }
#line 1847 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 189 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression),NULL,NULL); }
#line 1853 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 190 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression), (yyvsp[-1].text) ,(yyvsp[-2].MUltiplicativeExpression)); }
#line 1859 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 191 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression), (yyvsp[-1].text) ,(yyvsp[-2].MUltiplicativeExpression)); }
#line 1865 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 192 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression), (yyvsp[-1].text) ,(yyvsp[-2].MUltiplicativeExpression)); }
#line 1871 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 196 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ADDitiveExpression) = new AdditiveExpression((yyvsp[0].MUltiplicativeExpression),NULL,NULL); }
#line 1877 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 197 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ADDitiveExpression) = new AdditiveExpression((yyvsp[0].MUltiplicativeExpression), (yyvsp[-1].text) ,(yyvsp[-2].ADDitiveExpression)); }
#line 1883 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 198 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ADDitiveExpression) = new AdditiveExpression((yyvsp[0].MUltiplicativeExpression), (yyvsp[-1].text) ,(yyvsp[-2].ADDitiveExpression)); }
#line 1889 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 202 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SHiftExpression) = new ShiftExpression((yyvsp[0].ADDitiveExpression),NULL,NULL); }
#line 1895 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 203 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SHiftExpression) = new ShiftExpression((yyvsp[0].ADDitiveExpression), (yyvsp[-1].text) ,(yyvsp[-2].SHiftExpression)); }
#line 1901 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 204 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SHiftExpression) = new ShiftExpression((yyvsp[0].ADDitiveExpression), (yyvsp[-1].text) ,(yyvsp[-2].SHiftExpression)); }
#line 1907 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 208 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression),NULL,NULL); }
#line 1913 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 209 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 1919 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 210 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 1925 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 211 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 1931 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 212 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 1937 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 216 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EQualityExpression) = new EqualityExpression((yyvsp[0].RElationalExpression), NULL, NULL); }
#line 1943 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 217 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EQualityExpression) = new EqualityExpression((yyvsp[0].RElationalExpression), (yyvsp[-1].text) ,(yyvsp[-2].EQualityExpression)); }
#line 1949 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 218 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EQualityExpression) = new EqualityExpression((yyvsp[0].RElationalExpression), (yyvsp[-1].text) ,(yyvsp[-2].EQualityExpression)); }
#line 1955 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 222 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AndExpressioN) = new AndExpression((yyvsp[0].EQualityExpression), NULL, NULL);}
#line 1961 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 223 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AndExpressioN) = new AndExpression((yyvsp[0].EQualityExpression), (yyvsp[-1].text) ,(yyvsp[-2].AndExpressioN));}
#line 1967 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 227 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExclusiveOrExpressioN) = new ExclusiveOrExpression((yyvsp[0].AndExpressioN), NULL, NULL);}
#line 1973 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 228 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExclusiveOrExpressioN) = new ExclusiveOrExpression((yyvsp[0].AndExpressioN), (yyvsp[-1].text) ,(yyvsp[-2].ExclusiveOrExpressioN));}
#line 1979 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 232 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InclusiveOrExpressioN) = new InclusiveOrExpression((yyvsp[0].ExclusiveOrExpressioN), NULL, NULL);}
#line 1985 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 233 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InclusiveOrExpressioN) = new InclusiveOrExpression((yyvsp[0].ExclusiveOrExpressioN), (yyvsp[-1].text) ,(yyvsp[-2].InclusiveOrExpressioN));}
#line 1991 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 237 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LogicalANDexpression) = new LogicalAndExpression((yyvsp[0].InclusiveOrExpressioN), NULL, NULL);}
#line 1997 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 238 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LogicalANDexpression) = new LogicalAndExpression((yyvsp[0].InclusiveOrExpressioN), (yyvsp[-1].text) ,(yyvsp[-2].LogicalANDexpression));}
#line 2003 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 242 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LOgicalOrExpression) = new LogicalOrExpression((yyvsp[0].LogicalANDexpression), NULL, NULL);}
#line 2009 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 243 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LOgicalOrExpression) = new LogicalOrExpression((yyvsp[0].LogicalANDexpression), (yyvsp[-1].text) ,(yyvsp[-2].LOgicalOrExpression));}
#line 2015 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 247 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.COnditionalExpression) = new ConditionalExpression((yyvsp[0].LOgicalOrExpression),NULL); }
#line 2021 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 248 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.COnditionalExpression) = new ConditionalExpression((yyvsp[-4].LOgicalOrExpression),(yyvsp[-2].AssignmentExpressionPtr)); }
#line 2027 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 252 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = new AssignmentExpression(NULL,NULL,(yyvsp[0].COnditionalExpression)); }
#line 2033 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 253 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = new AssignmentExpression((yyvsp[-2].UnaryExpressionPtr),(yyvsp[-1].text),NULL); }
#line 2039 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 257 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2045 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 258 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2051 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 259 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2057 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 260 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2063 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 261 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2069 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 262 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2075 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 263 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2081 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 264 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2087 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 265 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2093 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 266 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2099 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 267 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2105 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 271 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = (yyvsp[0].AssignmentExpressionPtr); }
#line 2111 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 272 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = (yyvsp[0].AssignmentExpressionPtr); }
#line 2117 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 276 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ConstanTExpression) = new ConstantExpression((yyvsp[0].COnditionalExpression)); }
#line 2123 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 279 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLaration) = new Declaration((yyvsp[-1].DeclarationSpecifierS),NULL);  }
#line 2129 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 280 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLaration) = new Declaration((yyvsp[-2].DeclarationSpecifierS),(yyvsp[-1].InitDeclaratoRList)); }
#line 2135 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 284 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers((yyvsp[0].StorageClassSpecifierS),NULL,NULL) ;}
#line 2141 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 285 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers((yyvsp[0].StorageClassSpecifierS),NULL,NULL) ;}
#line 2147 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 286 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,(yyvsp[0].TypeSpeCifier),NULL) ;}
#line 2153 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 287 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,(yyvsp[0].TypeSpeCifier),NULL) ;}
#line 2159 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 288 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,NULL,(yyvsp[0].TypeQuaLifier)) ;}
#line 2165 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 289 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,NULL,(yyvsp[0].TypeQuaLifier)) ;}
#line 2171 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 293 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclaratoRList) = new InitDeclaratorList((yyvsp[0].InitDeclArator)); }
#line 2177 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 294 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclaratoRList) = new InitDeclaratorList((yyvsp[0].InitDeclArator)); }
#line 2183 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 298 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclArator) = new InitDeclarator((yyvsp[0].DecLarator),NULL); }
#line 2189 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 299 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclArator) = new InitDeclarator((yyvsp[-2].DecLarator),(yyvsp[0].InitializerPtr));  }
#line 2195 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 302 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 2201 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 303 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 2207 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 304 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 2213 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 305 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 2219 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 306 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 2225 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 310 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 2231 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 311 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 2237 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 312 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 2243 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 313 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 2249 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 314 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 2255 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 315 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 2261 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 316 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 2267 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 317 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 2273 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 318 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 2279 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 319 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].StructOrUnionSpecifieR)); }
#line 2285 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 320 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].ENumSpecifier)); }
#line 2291 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 325 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructOrUnionSpecifieR) = new StructOrUnionSpecifier((yyvsp[-4].StruCtOrUnion),(yyvsp[-3].text),(yyvsp[-1].StructDeclarationLisT)); }
#line 2297 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 326 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructOrUnionSpecifieR) = new StructOrUnionSpecifier((yyvsp[-3].StruCtOrUnion),NULL,(yyvsp[-1].StructDeclarationLisT)); }
#line 2303 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 327 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructOrUnionSpecifieR) = new StructOrUnionSpecifier((yyvsp[-1].StruCtOrUnion),(yyvsp[0].text),NULL); }
#line 2309 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 331 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StruCtOrUnion) = new StructOrUnion( (yyvsp[0].text) ); }
#line 2315 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 332 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StruCtOrUnion) = new StructOrUnion( (yyvsp[0].text) ); }
#line 2321 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 379 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeQuaLifier) = new TypeQualifier( (yyvsp[0].text) ) ; }
#line 2327 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 380 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeQuaLifier) = new TypeQualifier( (yyvsp[0].text) ) ; }
#line 2333 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 385 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLarator) = new Declarator(NULL,(yyvsp[0].DirectDeclaratorPtr));}
#line 2339 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 386 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLarator) = (yyvsp[-1].DecLarator); }
#line 2345 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 390 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = new DirectDeclarator((yyvsp[0].text),NULL,NULL,NULL); }
#line 2351 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 392 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = new DirectDeclarator(NULL,(yyvsp[-1].ConstanTExpression),NULL,NULL); }
#line 2357 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 393 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = (yyvsp[-2].DirectDeclaratorPtr); }
#line 2363 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 396 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = (yyvsp[-2].DirectDeclaratorPtr); }
#line 2369 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 457 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = new Initializer((yyvsp[0].AssignmentExpressionPtr),NULL); }
#line 2375 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 458 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = new Initializer(NULL,(yyvsp[-1].InitializerPtr)); }
#line 2381 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 459 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = new Initializer(NULL,(yyvsp[-2].InitializerPtr)); }
#line 2387 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 462 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = (yyvsp[0].InitializerPtr); }
#line 2393 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 463 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = (yyvsp[0].InitializerPtr); }
#line 2399 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 467 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement((yyvsp[0].LabeledStatementPtr),NULL,NULL,NULL,NULL,NULL); }
#line 2405 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 468 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,(yyvsp[0].CompoundStatementPtr),NULL,NULL,NULL,NULL); }
#line 2411 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 469 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,(yyvsp[0].ExpressionStatementPtr),NULL,NULL,NULL); }
#line 2417 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 470 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,NULL,(yyvsp[0].SelectionStatementPtr),NULL,NULL); }
#line 2423 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 471 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,NULL,NULL,(yyvsp[0].IterationStatementPtr),NULL); }
#line 2429 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 472 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,NULL,NULL,NULL,(yyvsp[0].JumpStatementPtr)); }
#line 2435 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 476 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LabeledStatementPtr) = new LabeledStatement((yyvsp[-2].text),NULL,NULL,(yyvsp[0].StatementPtr)); }
#line 2441 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 477 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LabeledStatementPtr) = new LabeledStatement(NULL,(yyvsp[-3].text),(yyvsp[-2].ConstanTExpression),(yyvsp[0].StatementPtr)); }
#line 2447 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 478 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LabeledStatementPtr) = new LabeledStatement(NULL,(yyvsp[-2].text),NULL,(yyvsp[0].StatementPtr)); }
#line 2453 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 482 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement(NULL,NULL); }
#line 2459 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 483 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement((yyvsp[-1].StatementListPtr),NULL); }
#line 2465 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 484 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement(NULL,(yyvsp[-1].DeclarationListPtr)); }
#line 2471 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 485 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement((yyvsp[-1].StatementListPtr),(yyvsp[-2].DeclarationListPtr)); }
#line 2477 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 489 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationListPtr) = new DeclarationList((yyvsp[0].DecLaration)) ; }
#line 2483 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 490 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationListPtr) = new DeclarationList((yyvsp[0].DecLaration)) ; }
#line 2489 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 494 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementListPtr) = new StatementList((yyvsp[0].StatementPtr)); }
#line 2495 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 495 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementListPtr) = new StatementList((yyvsp[0].StatementPtr)); }
#line 2501 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 499 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExpressionStatementPtr) = new ExpressionStatement(NULL) ; }
#line 2507 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 500 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExpressionStatementPtr) = new ExpressionStatement((yyvsp[-1].AssignmentExpressionPtr)) ; }
#line 2513 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 504 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SelectionStatementPtr) = new SelectionStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[0].StatementPtr),NULL,(yyvsp[-4].text),NULL,NULL); }
#line 2519 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 505 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SelectionStatementPtr) = new SelectionStatement((yyvsp[-4].AssignmentExpressionPtr),(yyvsp[-2].StatementPtr),(yyvsp[0].StatementPtr),(yyvsp[-6].text),(yyvsp[-1].text),NULL); }
#line 2525 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 506 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SelectionStatementPtr) = new SelectionStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[0].StatementPtr),NULL,NULL,NULL,(yyvsp[-4].text)); }
#line 2531 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 510 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[0].StatementPtr),NULL,NULL,(yyvsp[-4].text)); }
#line 2537 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 511 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[-5].StatementPtr),NULL,NULL,(yyvsp[-6].text)); }
#line 2543 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 512 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement(NULL,(yyvsp[0].StatementPtr),(yyvsp[-3].ExpressionStatementPtr),(yyvsp[-2].ExpressionStatementPtr),(yyvsp[-5].text)); }
#line 2549 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 513 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[0].StatementPtr),(yyvsp[-4].ExpressionStatementPtr),(yyvsp[-3].ExpressionStatementPtr),(yyvsp[-6].text)); }
#line 2555 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 516 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement((yyvsp[-1].text),NULL,(yyvsp[-2].text)); }
#line 2561 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 517 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,NULL,(yyvsp[-1].text)); }
#line 2567 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 518 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,NULL,(yyvsp[-1].text)); }
#line 2573 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 519 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,NULL,(yyvsp[-1].text)); }
#line 2579 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 520 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,(yyvsp[-1].AssignmentExpressionPtr),(yyvsp[-2].text)); }
#line 2585 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 522 "src/C_parser.y" /* yacc.c:1646  */
    { g_root = new TranslationUnit((yyvsp[0].ExternalDecLaration)); }
#line 2591 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 523 "src/C_parser.y" /* yacc.c:1646  */
    { g_root = new TranslationUnit((yyvsp[0].ExternalDecLaration)); }
#line 2597 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 525 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExternalDecLaration) = new ExternalDeclaration((yyvsp[0].FunctionDefinitionPtr),NULL) ; }
#line 2603 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 526 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExternalDecLaration) = new ExternalDeclaration(NULL,(yyvsp[0].DecLaration)) ; }
#line 2609 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 529 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition((yyvsp[-3].DeclarationSpecifierS),(yyvsp[-2].DecLarator),(yyvsp[-1].DeclarationListPtr),(yyvsp[0].CompoundStatementPtr)); }
#line 2615 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 530 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition((yyvsp[-2].DeclarationSpecifierS),(yyvsp[-1].DecLarator),NULL,(yyvsp[0].CompoundStatementPtr)); }
#line 2621 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 531 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition(NULL,(yyvsp[-2].DecLarator),(yyvsp[-1].DeclarationListPtr),(yyvsp[0].CompoundStatementPtr)); }
#line 2627 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 532 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition(NULL,(yyvsp[-1].DecLarator),NULL,(yyvsp[0].CompoundStatementPtr)); }
#line 2633 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2637 "src/C_parser.tab.cpp" /* yacc.c:1646  */
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
#line 535 "src/C_parser.y" /* yacc.c:1906  */


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
