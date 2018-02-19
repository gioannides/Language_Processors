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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   867

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
      79,    80,    84,     2,    75,     2,    71,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    74,    78,
       2,    70,     2,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    77,     2,     2,     2,     2,     2,
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
       0,   149,   149,   150,   155,   156,   160,   161,   162,   163,
     169,   170,   176,   177,   178,   179,   180,   181,   187,   188,
     189,   190,   191,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   214,   215,   222,   223,   228,   229,
     237,   238,   239,   245,   247,   248,   251,   254,   262,   263,
     269,   270,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   290,   291,   295,   296,   297,   298,   301,
     302,   324,   325,   333,   334,   341,   342,   350,   351,   358,
     359,   366,   367,   368,   375,   376,   377,   378,   379,   387,
     388,   389,   395,   396,   397,   403,   404,   405,   406,   413,
     422,   423,   424,   425,   434,   435,   436,   437,   438,   439,
     440,   441,   448,   449,   450,   451,   458,   459,   460,   461,
     462,   463,   467,   468,   475,   476,   477,   482,   483,   489,
     490,   491,   492,   493,   494,   500,   501,   502,   508,   509,
     510,   511,   517,   518,   524,   525,   530,   531,   534,   535,
     536,   542,   543,   544,   545,   551,   552,   553,   554,   555,
     595,   609,   610,   611,   614,   615,   618,   619,   622,   625,
     626,   627,   628,   631,   632,   635,   636,   637
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
  "'^'", "';'", "'('", "')'", "'['", "']'", "'?'", "'*'", "$accept",
  "TRANSLATION_UNIT", "EXTERNAL_DECLARATION", "FUNCTION_DEFINITION",
  "DECLARATION", "DECLARATION_SPECIFIERS", "STORAGE_CLASS_SPECIFIERS",
  "TYPE_SPECIFIER", "TYPE_QUALIFIER", "INIT_DECLARATOR_LIST",
  "INIT_DECLARATOR", "DECLARATOR", "DIRECT_DECLARATOR",
  "CONSTANT_EXPRESSION", "ASSIGNMENT_EXPRESSION", "EXPRESSION",
  "ASSIGNMENT_OPERATOR", "CONDITIONAL_EXPRESSION", "POINTER",
  "TYPE_QUALIFIER_LIST", "LOGICAL_OR_EXPRESSION", "LOGICAL_AND_EXPRESSION",
  "INCLUSIVE_OR_EXPRESSION", "EXCLUSIVE_OR_EXPRESSION", "AND_EXPRESSION",
  "EQUALITY_EXPRESSION", "RELATIONAL_EXPRESSION", "SHIFT_EXPRESSION",
  "ADDITIVE_EXPRESSION", "MULTIPLICATIVE_EXPRESSION", "CAST_EXPRESSION",
  "UNARY_EXPRESSION", "POSTFIX_EXPRESSION", "PRIMARY_EXPRESSION",
  "UNARY_OPERATOR", "ARGUMENT_EXPRESSION_LIST", "INITIALIZER",
  "INITIALIZER_LIST", "STATEMENT", "LABELED_STATEMENT",
  "COMPOUND_STATEMENT", "DECLARATION_LIST", "STATEMENT_LIST",
  "EXPRESSION_STATEMENT", "SELECTION_STATEMENT", "ITERATION_STATEMENT",
  "JUMP_STATEMENT", "ENUM_SPECIFIER", "STRUCT_OR_UNION_SPECIFIER",
  "STRUCT_OR_UNION", "STRUCT_DECLARATION_LIST", "STRUCT_DECLARATION",
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
     315,   316,   317,   318,   319,   320,   321,    38,   126,    33,
      61,    46,   123,   125,    58,    44,   124,    94,    59,    40,
      41,    91,    93,    63,    42
};
# endif

#define YYPACT_NINF -136

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-136)))

#define YYTABLE_NINF -39

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     267,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
       0,    -4,   199,  -136,  -136,  -136,   217,  -136,  -136,  -136,
     334,   -38,     5,  -136,  -136,    13,   -33,  -136,  -136,    -4,
    -136,  -136,  -136,  -136,  -136,  -136,    60,  -136,   789,   389,
    -136,   217,  -136,   334,    19,   268,   -38,   -37,   431,  -136,
    -136,  -136,     0,  -136,   698,  -136,   334,    72,  -136,  -136,
     786,   786,  -136,  -136,  -136,   786,    88,    18,    98,   127,
     621,   129,   153,   141,   149,   714,  -136,  -136,  -136,  -136,
    -136,   786,  -136,    83,  -136,    -8,   212,   154,   152,   164,
     157,    82,   163,   145,   -14,  -136,    34,    84,  -136,   786,
    -136,  -136,  -136,   461,   533,  -136,  -136,  -136,  -136,   162,
    -136,  -136,  -136,  -136,  -136,   192,  -136,  -136,   431,   431,
     431,   140,  -136,     2,  -136,   698,  -136,  -136,  -136,   621,
    -136,  -136,   201,   621,   786,   786,   786,   219,   744,   202,
    -136,  -136,  -136,    89,    23,   786,  -136,   786,   786,   786,
     786,   786,   786,   786,   786,   786,   786,   786,   786,   786,
     786,   786,   786,   786,   786,   786,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,   786,   278,  -136,
    -136,   279,   322,   786,  -136,  -136,   577,  -136,  -136,  -136,
     503,  -136,  -136,  -136,  -136,   786,   210,    91,  -136,  -136,
      95,  -136,   621,  -136,    25,    69,    70,   206,   744,  -136,
    -136,  -136,  -136,   212,   122,   154,   152,   164,   157,    82,
      82,   163,   163,   163,   163,   145,   145,   -14,   -14,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,    73,   -13,  -136,
    -136,  -136,   786,     2,  -136,  -136,   664,  -136,   621,   621,
     621,   786,   336,   786,   786,  -136,  -136,  -136,  -136,  -136,
    -136,   228,  -136,  -136,    77,   621,    79,  -136,  -136,   621,
     209,  -136,   621,  -136,  -136,  -136
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     160,    43,    18,    19,    20,    21,    22,    24,    25,    26,
      27,    30,    31,    28,    29,    34,    35,    23,   164,   165,
       0,    65,   160,     2,     4,     5,     0,    12,    14,    16,
     160,    41,     0,    33,    32,     0,     0,    69,    67,    66,
       1,     3,    10,    13,    15,    17,     0,    36,   160,   160,
     142,     0,     9,   160,     0,     0,    40,   163,   160,    42,
      70,    68,     0,    11,     0,     7,   160,   112,   113,   114,
       0,     0,   118,   119,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   116,   120,   121,   138,
     146,     0,    50,     0,    48,    63,    71,    73,    75,    77,
      79,    81,    84,    89,    92,    95,    99,   100,   104,     0,
     144,   129,   130,   160,     0,   131,   132,   133,   134,    38,
     143,     8,    46,   112,    45,     0,    47,    99,   160,   160,
     160,   160,   166,     0,    37,     0,   124,    39,     6,     0,
     101,   102,     0,     0,     0,     0,     0,     0,     0,     0,
     156,   157,   158,     0,     0,     0,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    52,     0,     0,   110,
     111,     0,     0,     0,   103,   140,     0,   139,   145,    44,
     160,   169,   171,   162,   167,     0,   175,     0,   173,   127,
       0,   135,     0,   137,     0,     0,     0,     0,     0,   155,
     159,   115,    51,    72,     0,    74,    76,    78,    80,    82,
      83,    87,    88,    86,    85,    90,    91,    93,    94,    96,
      98,    97,    49,   109,   108,   106,   122,     0,     0,   141,
     161,   176,     0,     0,   168,   125,     0,   136,     0,     0,
       0,     0,     0,     0,     0,   107,   105,   177,   174,   126,
     128,   148,   150,   151,     0,     0,     0,    64,   123,     0,
       0,   153,     0,   149,   152,   154
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,   266,  -136,    24,    17,    -3,   -22,    12,  -136,
     227,   -20,   258,   -73,   -53,   -57,  -136,   -54,     1,  -136,
    -136,   134,   133,   137,   132,   158,    37,  -100,    46,    50,
    -102,   -45,  -136,  -136,  -136,  -136,  -123,  -136,   -65,  -136,
     -16,   175,   181,  -135,  -136,  -136,  -136,  -136,  -136,  -136,
     193,  -104,    96,  -136,    71
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    50,    51,    27,    28,    29,    46,
      47,    30,    31,   125,    92,    93,   187,    94,    32,    39,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   247,   137,   210,   110,   111,
     112,    53,   114,   115,   116,   117,   118,    33,    34,    35,
     131,   132,   133,   207,   208
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,   126,   142,     1,    44,     1,    48,   194,     1,   157,
     127,   136,   209,   218,    52,   147,    57,    26,   173,   174,
     175,   126,    38,    43,    25,   140,   141,   204,   153,    44,
     127,   119,    65,    37,   154,   128,   129,   121,    45,    26,
      61,    54,   119,    55,    15,    16,    25,    59,    43,   198,
     138,    60,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   155,    45,   127,   231,   232,   233,   234,   266,
     130,   239,   240,   241,   211,   158,   205,   120,   213,    20,
      21,    20,   136,   262,    21,    58,    21,   214,   215,   216,
     120,   188,   189,   190,   165,   166,   204,   144,   155,   122,
     155,   224,   222,   221,   186,   258,   129,   129,   129,   129,
     167,   168,   127,   206,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   198,   251,   270,   242,    62,   248,   120,    63,   246,
     130,   130,   130,   130,   155,   155,   139,   257,   264,   259,
     260,   126,   155,   265,   155,   191,   149,   280,   155,   282,
     127,   156,   143,   192,   155,   193,   253,   220,   255,   254,
     256,   163,   164,   169,   170,   171,   172,   145,   129,   267,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   271,   272,   273,   263,   155,   126,    40,
     229,   230,     1,   136,   274,   276,   146,   127,   148,   277,
     281,   278,   130,   203,   283,   235,   236,   285,   127,   150,
       1,   237,   238,    66,   113,   201,   202,   151,   159,   161,
     160,   162,    64,   206,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       1,   123,    68,    69,   199,   212,    70,    71,    20,   217,
     219,   243,   244,    21,   252,   261,   279,   284,    41,   134,
      56,   223,   225,   227,   196,    42,    20,   226,    72,    73,
      74,    21,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
     228,   200,     0,     0,   268,   123,    68,    69,     0,     0,
      70,    71,     0,     0,     0,    86,    87,    88,     0,   123,
      68,    69,     0,     0,    70,    71,    20,    91,     0,     0,
     124,    21,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     0,    86,
      87,    88,    67,    68,    69,     0,     0,    70,    71,     0,
       0,    91,   245,    86,    87,    88,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    91,   275,     0,     0,    72,
      73,    74,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,    75,    76,    77,     0,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,     0,
       0,    49,    89,     0,    67,    68,    69,    90,    91,    70,
      71,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,     0,    75,    76,    77,     0,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,     0,    49,   195,     0,    67,    68,    69,    90,
      91,    70,    71,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,     0,     0,     0,
      67,    68,    69,     0,     0,    70,    71,     0,    75,    76,
      77,     0,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     0,    49,   197,    72,    73,    74,
       0,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,    69,     0,     0,    70,
      71,     0,    75,    76,    77,     0,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,    49,
     249,    72,    73,    74,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,    68,    69,
       0,     0,    70,    71,     0,     0,    75,    76,    77,     0,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,     0,    49,    72,    73,    74,     0,     0,    90,
      91,   123,    68,    69,     0,     0,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,    68,    69,
       0,     0,    70,    71,     0,     0,     0,     0,    72,    73,
      74,    86,    87,    88,     0,     0,   135,   269,     0,     0,
       0,     0,     0,    91,    72,    73,    74,   123,    68,    69,
       0,     0,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,     0,     0,
     135,     0,     0,     0,    72,    73,    74,    91,     0,     0,
       0,    86,    87,    88,     0,     0,     0,     0,     0,   123,
      68,    69,   152,    91,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,     0,     0,    72,    73,    74,     0,
       0,     0,    90,    91,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,     0,     0,     0,    64,
       0,    49,     0,     0,   -38,    91,     0,   -38
};

static const yytype_int16 yycheck[] =
{
      20,    55,    75,     3,    26,     3,    26,   109,     3,    17,
      55,    64,   135,   148,    30,    80,     3,     0,    32,    33,
      34,    75,    21,    26,     0,    70,    71,   131,    85,    51,
      75,    51,    48,    21,    91,    72,    58,    53,    26,    22,
      39,    79,    62,    81,    48,    49,    22,    80,    51,   114,
      66,    39,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    75,    51,   109,   165,   166,   167,   168,    82,
      58,   173,   174,   175,   139,    83,    74,    53,   143,    79,
      84,    79,   135,   218,    84,    72,    84,   144,   145,   146,
      66,     7,     8,     9,    12,    13,   200,    79,    75,    80,
      75,   158,   155,    80,    70,    80,   128,   129,   130,   131,
      28,    29,   157,   133,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   196,   205,   256,   187,    75,   193,   113,    78,   192,
     128,   129,   130,   131,    75,    75,    74,   212,    75,    80,
      80,   205,    75,    80,    75,    71,     3,    80,    75,    80,
     205,    78,    74,    79,    75,    81,    75,    78,    73,    78,
      75,    14,    15,    10,    11,    30,    31,    79,   200,   252,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,   258,   259,   260,    74,    75,   252,     0,
     163,   164,     3,   256,   261,   262,    79,   252,    79,   263,
     275,   264,   200,    73,   279,   169,   170,   282,   263,    78,
       3,   171,   172,    48,    49,   129,   130,    78,    16,    77,
      76,    67,    70,   253,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       3,     3,     4,     5,    82,    74,     8,     9,    79,    60,
      78,     3,     3,    84,    74,    79,    58,    78,    22,    62,
      32,   157,   159,   161,   113,    78,    79,   160,    30,    31,
      32,    84,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
     162,   128,    -1,    -1,   253,     3,     4,     5,    -1,    -1,
       8,     9,    -1,    -1,    -1,    67,    68,    69,    -1,     3,
       4,     5,    -1,    -1,     8,     9,    79,    79,    -1,    -1,
      82,    84,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    67,
      68,    69,     3,     4,     5,    -1,    -1,     8,     9,    -1,
      -1,    79,    80,    67,    68,    69,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      -1,    72,    73,    -1,     3,     4,     5,    78,    79,     8,
       9,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    72,    73,    -1,     3,     4,     5,    78,
      79,     8,     9,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,     8,     9,    -1,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    73,    30,    31,    32,
      -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,     8,
       9,    -1,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    72,
      73,    30,    31,    32,    -1,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    -1,     8,     9,    -1,    -1,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    72,    30,    31,    32,    -1,    -1,    78,
      79,     3,     4,     5,    -1,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    30,    31,
      32,    67,    68,    69,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    30,    31,    32,     3,     4,     5,
      -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    -1,    -1,    30,    31,    32,    79,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    78,    79,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    30,    31,    32,    -1,
      -1,    -1,    78,    79,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    75,    79,    -1,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      79,    84,    86,    87,    88,    89,    90,    91,    92,    93,
      96,    97,   103,   132,   133,   134,    96,    93,   103,   104,
       0,    87,    78,    91,    92,    93,    94,    95,    96,    72,
      89,    90,   125,   126,    79,    81,    97,     3,    72,    80,
      93,   103,    75,    78,    70,   125,   126,     3,     4,     5,
       8,     9,    30,    31,    32,    55,    56,    57,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    73,
      78,    79,    99,   100,   102,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     123,   124,   125,   126,   127,   128,   129,   130,   131,    96,
      89,   125,    80,     3,    82,    98,   102,   116,    72,    92,
      93,   135,   136,   137,    95,    72,    99,   121,   125,    74,
     116,   116,    98,    74,    79,    79,    79,   123,    79,     3,
      78,    78,    78,   100,   100,    75,    78,    17,    83,    16,
      76,    77,    67,    14,    15,    12,    13,    28,    29,    10,
      11,    30,    31,    32,    33,    34,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    70,   101,     7,     8,
       9,    71,    79,    81,   115,    73,   127,    73,   123,    82,
     135,   137,   137,    73,   136,    74,    96,   138,   139,   121,
     122,   123,    74,   123,   100,   100,   100,    60,   128,    78,
      78,    80,    99,   106,   100,   107,   108,   109,   110,   111,
     111,   112,   112,   112,   112,   113,   113,   114,   114,   115,
     115,   115,    99,     3,     3,    80,    99,   120,   100,    73,
      73,    98,    74,    75,    78,    73,    75,   123,    80,    80,
      80,    79,   128,    74,    75,    80,    82,    98,   139,    73,
     121,   123,   123,   123,   100,    80,   100,   102,    99,    58,
      80,   123,    80,   123,    78,   123
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    87,    87,    88,    88,    88,    88,
      89,    89,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    94,    94,    95,    95,
      96,    96,    96,    97,    97,    97,    97,    98,    99,    99,
     100,   100,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   103,   103,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   110,   111,   111,   111,   111,   111,   112,
     112,   112,   113,   113,   113,   114,   114,   114,   114,   115,
     116,   116,   116,   116,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   118,   118,   119,   119,   119,   119,
     119,   119,   120,   120,   121,   121,   121,   122,   122,   123,
     123,   123,   123,   123,   123,   124,   124,   124,   125,   125,
     125,   125,   126,   126,   127,   127,   128,   128,   129,   129,
     129,   130,   130,   130,   130,   131,   131,   131,   131,   131,
     132,   133,   133,   133,   134,   134,   135,   135,   136,   137,
     137,   137,   137,   138,   138,   139,   139,   139
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     4,     3,     3,     2,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       2,     1,     3,     1,     4,     3,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     1,     2,     2,     3,     1,
       2,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       1,     2,     2,     2,     1,     4,     3,     4,     3,     3,
       2,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       3,     4,     1,     2,     1,     2,     1,     2,     5,     7,
       5,     5,     7,     6,     7,     3,     2,     2,     2,     3,
       0,     5,     4,     2,     1,     1,     1,     2,     3,     2,
       1,     2,     1,     1,     3,     1,     2,     3
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
#line 149 "src/C_parser.y" /* yacc.c:1646  */
    { g_root = new TranslationUnit((yyvsp[0].ExternalDecLaration)); }
#line 1692 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 150 "src/C_parser.y" /* yacc.c:1646  */
    { g_root = new TranslationUnit((yyvsp[0].ExternalDecLaration)); }
#line 1698 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 155 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExternalDecLaration) = new ExternalDeclaration((yyvsp[0].FunctionDefinitionPtr),NULL) ; }
#line 1704 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 156 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExternalDecLaration) = new ExternalDeclaration(NULL,(yyvsp[0].DecLaration)) ; }
#line 1710 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 160 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition((yyvsp[-3].DeclarationSpecifierS),(yyvsp[-2].DecLarator),(yyvsp[-1].DeclarationListPtr),(yyvsp[0].CompoundStatementPtr)); }
#line 1716 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 161 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition((yyvsp[-2].DeclarationSpecifierS),(yyvsp[-1].DecLarator),NULL,(yyvsp[0].CompoundStatementPtr)); }
#line 1722 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 162 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition(NULL,(yyvsp[-2].DecLarator),(yyvsp[-1].DeclarationListPtr),(yyvsp[0].CompoundStatementPtr)); }
#line 1728 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 163 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition(NULL,(yyvsp[-1].DecLarator),NULL,(yyvsp[0].CompoundStatementPtr)); }
#line 1734 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 169 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLaration) = new Declaration((yyvsp[-1].DeclarationSpecifierS),NULL);  }
#line 1740 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 170 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLaration) = new Declaration((yyvsp[-2].DeclarationSpecifierS),(yyvsp[-1].InitDeclaratoRList)); }
#line 1746 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 176 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers((yyvsp[0].StorageClassSpecifierS),NULL,NULL) ;}
#line 1752 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 177 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers((yyvsp[0].StorageClassSpecifierS),NULL,NULL) ;}
#line 1758 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 178 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,(yyvsp[0].TypeSpeCifier),NULL) ;}
#line 1764 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 179 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,(yyvsp[0].TypeSpeCifier),NULL) ;}
#line 1770 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 180 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,NULL,(yyvsp[0].TypeQuaLifier)) ;}
#line 1776 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 181 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,NULL,(yyvsp[0].TypeQuaLifier)) ;}
#line 1782 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 187 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1788 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 188 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1794 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 189 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1800 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 190 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1806 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 191 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1812 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 197 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1818 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 198 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1824 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 199 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1830 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 200 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1836 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 201 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1842 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 202 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1848 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 203 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1854 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 204 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1860 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 205 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1866 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 206 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].StructOrUnionSpecifieR)); }
#line 1872 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 207 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].ENumSpecifier)); }
#line 1878 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 214 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeQuaLifier) = new TypeQualifier( (yyvsp[0].text) ) ; }
#line 1884 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 215 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeQuaLifier) = new TypeQualifier( (yyvsp[0].text) ) ; }
#line 1890 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 222 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclaratoRList) = new InitDeclaratorList((yyvsp[0].InitDeclArator)); }
#line 1896 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 223 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclaratoRList) = new InitDeclaratorList((yyvsp[0].InitDeclArator)); }
#line 1902 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 228 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclArator) = new InitDeclarator((yyvsp[0].DecLarator),NULL); }
#line 1908 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 229 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclArator) = new InitDeclarator((yyvsp[-2].DecLarator),(yyvsp[0].InitializerPtr));  }
#line 1914 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 238 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLarator) = new Declarator(NULL,(yyvsp[0].DirectDeclaratorPtr));}
#line 1920 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 239 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLarator) = (yyvsp[-1].DecLarator); }
#line 1926 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 245 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = new DirectDeclarator((yyvsp[0].text),NULL,NULL,NULL); }
#line 1932 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 247 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = new DirectDeclarator(NULL,(yyvsp[-1].ConstanTExpression),NULL,NULL); }
#line 1938 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 248 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = (yyvsp[-2].DirectDeclaratorPtr); }
#line 1944 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 251 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = (yyvsp[-2].DirectDeclaratorPtr); }
#line 1950 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 254 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ConstanTExpression) = new ConstantExpression((yyvsp[0].COnditionalExpression)); }
#line 1956 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 262 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = new AssignmentExpression(NULL,NULL,(yyvsp[0].COnditionalExpression)); }
#line 1962 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 263 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = new AssignmentExpression((yyvsp[-2].UnaryExpressionPtr),(yyvsp[-1].text),NULL); }
#line 1968 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 269 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = (yyvsp[0].AssignmentExpressionPtr); }
#line 1974 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 270 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = (yyvsp[0].AssignmentExpressionPtr); }
#line 1980 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 275 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 1986 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 276 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 1992 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 277 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 1998 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 278 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2004 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 279 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2010 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 280 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2016 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 281 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2022 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 282 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2028 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 283 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2034 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 284 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2040 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 285 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2046 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 290 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.COnditionalExpression) = new ConditionalExpression((yyvsp[0].LOgicalOrExpression),NULL); }
#line 2052 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 291 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.COnditionalExpression) = new ConditionalExpression((yyvsp[-4].LOgicalOrExpression),(yyvsp[-2].AssignmentExpressionPtr)); }
#line 2058 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 324 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LOgicalOrExpression) = new LogicalOrExpression((yyvsp[0].LogicalANDexpression), NULL, NULL);}
#line 2064 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 325 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LOgicalOrExpression) = new LogicalOrExpression((yyvsp[0].LogicalANDexpression), (yyvsp[-1].text) ,(yyvsp[-2].LOgicalOrExpression));}
#line 2070 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 333 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LogicalANDexpression) = new LogicalAndExpression((yyvsp[0].InclusiveOrExpressioN), NULL, NULL);}
#line 2076 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 334 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LogicalANDexpression) = new LogicalAndExpression((yyvsp[0].InclusiveOrExpressioN), (yyvsp[-1].text) ,(yyvsp[-2].LogicalANDexpression));}
#line 2082 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 341 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InclusiveOrExpressioN) = new InclusiveOrExpression((yyvsp[0].ExclusiveOrExpressioN), NULL, NULL);}
#line 2088 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 342 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InclusiveOrExpressioN) = new InclusiveOrExpression((yyvsp[0].ExclusiveOrExpressioN), (yyvsp[-1].text) ,(yyvsp[-2].InclusiveOrExpressioN));}
#line 2094 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 350 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExclusiveOrExpressioN) = new ExclusiveOrExpression((yyvsp[0].AndExpressioN), NULL, NULL);}
#line 2100 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 351 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExclusiveOrExpressioN) = new ExclusiveOrExpression((yyvsp[0].AndExpressioN), (yyvsp[-1].text) ,(yyvsp[-2].ExclusiveOrExpressioN));}
#line 2106 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 358 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AndExpressioN) = new AndExpression((yyvsp[0].EQualityExpression), NULL, NULL);}
#line 2112 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 359 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AndExpressioN) = new AndExpression((yyvsp[0].EQualityExpression), (yyvsp[-1].text) ,(yyvsp[-2].AndExpressioN));}
#line 2118 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 366 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EQualityExpression) = new EqualityExpression((yyvsp[0].RElationalExpression), NULL, NULL); }
#line 2124 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 367 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EQualityExpression) = new EqualityExpression((yyvsp[0].RElationalExpression), (yyvsp[-1].text) ,(yyvsp[-2].EQualityExpression)); }
#line 2130 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 368 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EQualityExpression) = new EqualityExpression((yyvsp[0].RElationalExpression), (yyvsp[-1].text) ,(yyvsp[-2].EQualityExpression)); }
#line 2136 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 375 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression),NULL,NULL); }
#line 2142 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 376 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 2148 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 377 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 2154 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 378 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 2160 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 379 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 2166 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 387 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SHiftExpression) = new ShiftExpression((yyvsp[0].ADDitiveExpression),NULL,NULL); }
#line 2172 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 388 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SHiftExpression) = new ShiftExpression((yyvsp[0].ADDitiveExpression), (yyvsp[-1].text) ,(yyvsp[-2].SHiftExpression)); }
#line 2178 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 389 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SHiftExpression) = new ShiftExpression((yyvsp[0].ADDitiveExpression), (yyvsp[-1].text) ,(yyvsp[-2].SHiftExpression)); }
#line 2184 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 395 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ADDitiveExpression) = new AdditiveExpression((yyvsp[0].MUltiplicativeExpression),NULL,NULL); }
#line 2190 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 396 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ADDitiveExpression) = new AdditiveExpression((yyvsp[0].MUltiplicativeExpression), (yyvsp[-1].text) ,(yyvsp[-2].ADDitiveExpression)); }
#line 2196 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 397 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ADDitiveExpression) = new AdditiveExpression((yyvsp[0].MUltiplicativeExpression), (yyvsp[-1].text) ,(yyvsp[-2].ADDitiveExpression)); }
#line 2202 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 403 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression),NULL,NULL); }
#line 2208 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 404 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression), (yyvsp[-1].text) ,(yyvsp[-2].MUltiplicativeExpression)); }
#line 2214 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 405 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression), (yyvsp[-1].text) ,(yyvsp[-2].MUltiplicativeExpression)); }
#line 2220 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 406 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression), (yyvsp[-1].text) ,(yyvsp[-2].MUltiplicativeExpression)); }
#line 2226 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 413 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CAstExpression) = new CastExpression((yyvsp[0].UnaryExpressionPtr),NULL); }
#line 2232 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 422 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression((yyvsp[0].PostFixExpressionPtr),NULL,NULL) ; }
#line 2238 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 423 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,(yyvsp[-1].text),NULL) ; }
#line 2244 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 424 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,(yyvsp[-1].text),NULL) ; }
#line 2250 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 425 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,(yyvsp[-1].text),(yyvsp[0].CAstExpression)) ; }
#line 2256 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 434 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression((yyvsp[0].PrimaryExpressionPtr),NULL,NULL,NULL,NULL); }
#line 2262 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 435 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,(yyvsp[-1].AssignmentExpressionPtr),NULL,NULL,NULL); }
#line 2268 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 436 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = (yyvsp[-2].PostFixExpressionPtr); }
#line 2274 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 437 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,(yyvsp[-1].ArgumentExpressionListPtr),NULL,NULL);}
#line 2280 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 438 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,NULL,(yyvsp[0].text),(yyvsp[-1].text)); }
#line 2286 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 439 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,NULL,(yyvsp[0].text),(yyvsp[-1].text)); }
#line 2292 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 440 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,NULL,(yyvsp[0].text),NULL); }
#line 2298 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 441 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,NULL,(yyvsp[0].text),NULL); }
#line 2304 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 448 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression((yyvsp[0].text),NULL,NULL,NULL); }
#line 2310 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 449 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression(NULL,(yyvsp[0].text),NULL,NULL); }
#line 2316 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 450 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression(NULL,NULL,(yyvsp[0].text),NULL); }
#line 2322 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 451 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression(NULL,NULL,NULL,(yyvsp[-1].AssignmentExpressionPtr)); }
#line 2328 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 458 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 2334 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 459 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 2340 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 460 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 2346 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 461 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 2352 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 462 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 2358 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 463 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 2364 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 467 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ArgumentExpressionListPtr) = new ArgumentExpressionList((yyvsp[0].AssignmentExpressionPtr)); }
#line 2370 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 468 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ArgumentExpressionListPtr) = new ArgumentExpressionList((yyvsp[0].AssignmentExpressionPtr)); }
#line 2376 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 475 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = new Initializer((yyvsp[0].AssignmentExpressionPtr),NULL); }
#line 2382 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 476 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = new Initializer(NULL,(yyvsp[-1].InitializerPtr)); }
#line 2388 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 477 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = new Initializer(NULL,(yyvsp[-2].InitializerPtr)); }
#line 2394 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 482 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = (yyvsp[0].InitializerPtr); }
#line 2400 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 483 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = (yyvsp[0].InitializerPtr); }
#line 2406 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 489 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement((yyvsp[0].LabeledStatementPtr),NULL,NULL,NULL,NULL,NULL); }
#line 2412 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 490 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,(yyvsp[0].CompoundStatementPtr),NULL,NULL,NULL,NULL); }
#line 2418 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 491 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,(yyvsp[0].ExpressionStatementPtr),NULL,NULL,NULL); }
#line 2424 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 492 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,NULL,(yyvsp[0].SelectionStatementPtr),NULL,NULL); }
#line 2430 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 493 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,NULL,NULL,(yyvsp[0].IterationStatementPtr),NULL); }
#line 2436 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 494 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,NULL,NULL,NULL,(yyvsp[0].JumpStatementPtr)); }
#line 2442 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 500 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LabeledStatementPtr) = new LabeledStatement((yyvsp[-2].text),NULL,NULL,(yyvsp[0].StatementPtr)); }
#line 2448 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 501 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LabeledStatementPtr) = new LabeledStatement(NULL,(yyvsp[-3].text),(yyvsp[-2].ConstanTExpression),(yyvsp[0].StatementPtr)); }
#line 2454 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 502 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LabeledStatementPtr) = new LabeledStatement(NULL,(yyvsp[-2].text),NULL,(yyvsp[0].StatementPtr)); }
#line 2460 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 508 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement(NULL,NULL); }
#line 2466 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 509 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement((yyvsp[-1].StatementListPtr),NULL); }
#line 2472 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 510 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement(NULL,(yyvsp[-1].DeclarationListPtr)); }
#line 2478 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 511 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement((yyvsp[-1].StatementListPtr),(yyvsp[-2].DeclarationListPtr)); }
#line 2484 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 517 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationListPtr) = new DeclarationList((yyvsp[0].DecLaration)) ; }
#line 2490 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 518 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationListPtr) = new DeclarationList((yyvsp[0].DecLaration)) ; }
#line 2496 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 524 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementListPtr) = new StatementList((yyvsp[0].StatementPtr)); }
#line 2502 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 525 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementListPtr) = new StatementList((yyvsp[0].StatementPtr)); }
#line 2508 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 530 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExpressionStatementPtr) = new ExpressionStatement(NULL) ; }
#line 2514 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 531 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExpressionStatementPtr) = new ExpressionStatement((yyvsp[-1].AssignmentExpressionPtr)) ; }
#line 2520 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 534 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SelectionStatementPtr) = new SelectionStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[0].StatementPtr),NULL,(yyvsp[-4].text),NULL,NULL); }
#line 2526 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 535 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SelectionStatementPtr) = new SelectionStatement((yyvsp[-4].AssignmentExpressionPtr),(yyvsp[-2].StatementPtr),(yyvsp[0].StatementPtr),(yyvsp[-6].text),(yyvsp[-1].text),NULL); }
#line 2532 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 536 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SelectionStatementPtr) = new SelectionStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[0].StatementPtr),NULL,NULL,NULL,(yyvsp[-4].text)); }
#line 2538 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 542 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[0].StatementPtr),NULL,NULL,(yyvsp[-4].text)); }
#line 2544 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 543 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[-5].StatementPtr),NULL,NULL,(yyvsp[-6].text)); }
#line 2550 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 544 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement(NULL,(yyvsp[0].StatementPtr),(yyvsp[-3].ExpressionStatementPtr),(yyvsp[-2].ExpressionStatementPtr),(yyvsp[-5].text)); }
#line 2556 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 545 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[0].StatementPtr),(yyvsp[-4].ExpressionStatementPtr),(yyvsp[-3].ExpressionStatementPtr),(yyvsp[-6].text)); }
#line 2562 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 551 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement((yyvsp[-1].text),NULL,(yyvsp[-2].text)); }
#line 2568 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 552 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,NULL,(yyvsp[-1].text)); }
#line 2574 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 553 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,NULL,(yyvsp[-1].text)); }
#line 2580 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 554 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,NULL,(yyvsp[-1].text)); }
#line 2586 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 555 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,(yyvsp[-1].AssignmentExpressionPtr),(yyvsp[-2].text)); }
#line 2592 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 609 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructOrUnionSpecifieR) = new StructOrUnionSpecifier((yyvsp[-4].StruCtOrUnion),(yyvsp[-3].text),(yyvsp[-1].StructDeclarationLisT)); }
#line 2598 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 610 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructOrUnionSpecifieR) = new StructOrUnionSpecifier((yyvsp[-3].StruCtOrUnion),NULL,(yyvsp[-1].StructDeclarationLisT)); }
#line 2604 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 611 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructOrUnionSpecifieR) = new StructOrUnionSpecifier((yyvsp[-1].StruCtOrUnion),(yyvsp[0].text),NULL); }
#line 2610 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 614 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StruCtOrUnion) = new StructOrUnion( (yyvsp[0].text) ); }
#line 2616 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 615 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StruCtOrUnion) = new StructOrUnion( (yyvsp[0].text) ); }
#line 2622 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2626 "src/C_parser.tab.cpp" /* yacc.c:1646  */
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
#line 639 "src/C_parser.y" /* yacc.c:1906  */


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
