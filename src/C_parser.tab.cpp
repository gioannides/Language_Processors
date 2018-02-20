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
#define YYLAST   903

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

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
       0,   149,   149,   150,   155,   156,   157,   158,   162,   163,
     164,   165,   171,   172,   178,   179,   180,   181,   182,   183,
     189,   190,   191,   192,   193,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   216,   217,   224,   225,
     230,   231,   239,   240,   241,   247,   249,   250,   253,   256,
     264,   265,   271,   272,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   292,   293,   297,   298,   299,
     300,   303,   304,   326,   327,   335,   336,   343,   344,   352,
     353,   360,   361,   368,   369,   370,   377,   378,   379,   380,
     381,   389,   390,   391,   397,   398,   399,   405,   406,   407,
     408,   415,   424,   425,   426,   427,   436,   437,   438,   439,
     440,   441,   442,   443,   450,   451,   452,   453,   460,   461,
     462,   463,   464,   465,   469,   470,   477,   478,   479,   484,
     485,   491,   492,   493,   494,   495,   496,   502,   503,   504,
     510,   511,   512,   513,   519,   520,   526,   527,   532,   533,
     536,   537,   538,   544,   545,   546,   547,   553,   554,   555,
     556,   557,   597,   611,   612,   613,   616,   617,   620,   621,
     624,   627,   628,   629,   630,   633,   634,   637,   638,   639
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

#define YYPACT_NINF -148

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-148)))

#define YYTABLE_NINF -41

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     269,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
       6,   -19,   201,   269,  -148,  -148,   219,  -148,  -148,  -148,
     336,    72,    45,  -148,  -148,     5,   -61,  -148,  -148,   -19,
    -148,   269,  -148,  -148,  -148,  -148,  -148,  -148,   -57,  -148,
     791,   391,  -148,   219,  -148,   336,   -46,   270,    72,    -9,
     433,  -148,  -148,  -148,     6,  -148,   700,  -148,   336,   -18,
    -148,  -148,   788,   788,  -148,  -148,  -148,   788,     9,    14,
      71,    76,   623,    97,   102,   113,   120,   716,  -148,  -148,
    -148,  -148,  -148,   788,  -148,    32,  -148,    -2,    85,   104,
     123,   141,    98,    30,   133,   130,   150,  -148,   145,    17,
    -148,   788,  -148,  -148,  -148,   463,   535,  -148,  -148,  -148,
    -148,   144,  -148,  -148,  -148,  -148,  -148,   129,  -148,  -148,
     433,   433,   433,   505,  -148,     8,  -148,   700,  -148,  -148,
    -148,   623,  -148,  -148,   147,   623,   788,   788,   788,   158,
     746,   149,  -148,  -148,  -148,    62,   -25,   788,  -148,   788,
     788,   788,   788,   788,   788,   788,   788,   788,   788,   788,
     788,   788,   788,   788,   788,   788,   788,   788,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,   788,
     226,  -148,  -148,   227,   324,   788,  -148,  -148,   579,  -148,
    -148,  -148,   830,  -148,  -148,  -148,  -148,   788,   157,    64,
    -148,  -148,   100,  -148,   623,  -148,    -8,    19,    20,   153,
     746,  -148,  -148,  -148,  -148,    85,   115,   104,   123,   141,
      98,    30,    30,   133,   133,   133,   133,   130,   130,   150,
     150,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,    22,
     -35,  -148,  -148,  -148,   788,     8,  -148,  -148,   666,  -148,
     623,   623,   623,   788,   338,   788,   788,  -148,  -148,  -148,
    -148,  -148,  -148,   175,  -148,  -148,    28,   623,    31,  -148,
    -148,   623,   156,  -148,   623,  -148,  -148,  -148
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     162,    45,    20,    21,    22,    23,    24,    26,    27,    28,
      29,    32,    33,    30,    31,    36,    37,    25,   166,   167,
       0,    67,   162,     2,     4,     5,     0,    14,    16,    18,
     162,    43,     0,    35,    34,     0,     0,    71,    69,    68,
       1,     3,     6,     7,    12,    15,    17,    19,     0,    38,
     162,   162,   144,     0,    11,   162,     0,     0,    42,   165,
     162,    44,    72,    70,     0,    13,     0,     9,   162,   114,
     115,   116,     0,     0,   120,   121,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,   122,
     123,   140,   148,     0,    52,     0,    50,    65,    73,    75,
      77,    79,    81,    83,    86,    91,    94,    97,   101,   102,
     106,     0,   146,   131,   132,   162,     0,   133,   134,   135,
     136,    40,   145,    10,    48,   114,    47,     0,    49,   101,
     162,   162,   162,   162,   168,     0,    39,     0,   126,    41,
       8,     0,   103,   104,     0,     0,     0,     0,     0,     0,
       0,     0,   158,   159,   160,     0,     0,     0,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    54,     0,
       0,   112,   113,     0,     0,     0,   105,   142,     0,   141,
     147,    46,   162,   171,   173,   164,   169,     0,   177,     0,
     175,   129,     0,   137,     0,   139,     0,     0,     0,     0,
       0,   157,   161,   117,    53,    74,     0,    76,    78,    80,
      82,    84,    85,    89,    90,    88,    87,    92,    93,    95,
      96,    98,   100,    99,    51,   111,   110,   108,   124,     0,
       0,   143,   163,   178,     0,     0,   170,   127,     0,   138,
       0,     0,     0,     0,     0,     0,     0,   109,   107,   179,
     176,   128,   130,   150,   152,   153,     0,     0,     0,    66,
     125,     0,     0,   155,     0,   151,   154,   156
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,   254,    12,    23,    16,   -16,    26,    15,  -148,
     213,   -20,   249,   -73,   -53,   -86,  -148,   -55,    10,  -148,
    -148,   125,   121,   126,   127,   119,    37,    18,    35,    50,
    -106,   -45,  -148,  -148,  -148,  -148,  -123,  -148,   -65,  -148,
     124,   143,   171,  -147,  -148,  -148,  -148,  -148,  -148,  -148,
     159,  -113,    94,  -148,    36
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    52,    53,    27,    28,    29,    48,
      49,    30,    31,   127,    94,    95,   189,    96,    32,    39,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   249,   139,   212,   112,   113,
     114,    55,   116,   117,   118,   119,   120,    33,    34,    35,
     133,   134,   135,   209,   210
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,   155,   128,   220,   144,   196,    50,   156,    59,     1,
      45,     1,   129,   138,   211,   159,    26,   149,    64,    61,
     206,    65,   128,    25,   190,   191,   192,   142,   143,    15,
      16,    38,   129,   121,   124,    42,    37,    45,    26,    26,
     157,    47,   167,   168,   121,    25,    43,   268,     1,    63,
     157,   200,    46,    42,    62,   223,   141,    26,   169,   170,
     216,   217,   218,   130,    43,    21,   129,   157,    47,   241,
     242,   243,   260,   264,   226,   132,   213,    60,   122,    46,
     215,   160,   207,   145,   138,    20,   131,    20,   193,   206,
      21,   122,    21,   146,   157,   157,   194,   266,   195,   261,
     262,   161,   267,   157,   224,   151,   157,   157,   282,   250,
     158,   284,   165,   166,   129,   208,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   200,   253,   272,   244,   157,   122,   255,
     222,   248,   256,   171,   172,   132,   132,   132,   132,   259,
     147,    56,   128,    57,    54,   148,   131,   131,   131,   131,
     173,   174,   129,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   257,    67,   258,   150,   276,   278,   123,
     162,   269,   175,   176,   177,   233,   234,   235,   236,   265,
     157,   152,   140,    68,   115,   273,   274,   275,   153,   128,
     163,    40,   231,   232,     1,   138,   237,   238,   164,   129,
     279,   201,   283,   280,    66,   188,   285,   132,   219,   287,
     129,   214,     1,   239,   240,   203,   204,   221,   131,   245,
     246,   254,   263,   281,   286,   208,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     1,   125,    70,    71,    41,   136,    72,    73,
      20,    58,   227,   230,   225,    21,   198,     0,   228,   202,
     229,   270,     0,     0,     0,     0,     0,    44,    20,     0,
      74,    75,    76,    21,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,   125,    70,    71,
       0,     0,    72,    73,     0,     0,     0,    88,    89,    90,
       0,   125,    70,    71,     0,     0,    72,    73,    20,    93,
       0,     0,   126,    21,    74,    75,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,    88,    89,    90,    69,    70,    71,     0,     0,    72,
      73,     0,     0,    93,   247,    88,    89,    90,    51,     0,
       0,     0,     0,     0,     0,     0,     0,    93,   277,     0,
       0,    74,    75,    76,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,     0,    77,    78,    79,     0,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     0,     0,    51,    91,     0,    69,    70,    71,    92,
      93,    72,    73,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,    77,    78,
      79,     0,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     0,     0,    51,   197,     0,    69,    70,
      71,    92,    93,    72,    73,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   205,     0,
       0,     0,    69,    70,    71,     0,     0,    72,    73,     0,
      77,    78,    79,     0,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,     0,    51,   199,    74,
      75,    76,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    69,    70,    71,     0,
       0,    72,    73,     0,    77,    78,    79,     0,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,    51,   251,    74,    75,    76,     0,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
      70,    71,     0,     0,    72,    73,     0,     0,    77,    78,
      79,     0,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     0,     0,    51,    74,    75,    76,     0,
       0,    92,    93,   125,    70,    71,     0,     0,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
      70,    71,     0,     0,    72,    73,     0,     0,     0,     0,
      74,    75,    76,    88,    89,    90,     0,     0,   137,   271,
       0,     0,     0,     0,     0,    93,    74,    75,    76,   125,
      70,    71,     0,     0,    72,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
       0,     0,   137,     0,     0,     0,    74,    75,    76,    93,
       0,     0,     0,    88,    89,    90,     0,     0,     0,     0,
       0,   125,    70,    71,   154,    93,    72,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,     0,     0,    74,    75,
      76,     0,     0,     0,    92,    93,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,     0,     0,
       0,    66,     0,    51,     0,     0,   -40,    93,     0,   -40,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   252
};

static const yytype_int16 yycheck[] =
{
      20,    87,    57,   150,    77,   111,    26,    93,     3,     3,
      26,     3,    57,    66,   137,    17,     0,    82,    75,    80,
     133,    78,    77,     0,     7,     8,     9,    72,    73,    48,
      49,    21,    77,    53,    80,    23,    21,    53,    22,    23,
      75,    26,    12,    13,    64,    22,    23,    82,     3,    39,
      75,   116,    26,    41,    39,    80,    74,    41,    28,    29,
     146,   147,   148,    72,    41,    84,   111,    75,    53,   175,
     176,   177,    80,   220,   160,    60,   141,    72,    55,    53,
     145,    83,    74,    74,   137,    79,    60,    79,    71,   202,
      84,    68,    84,    79,    75,    75,    79,    75,    81,    80,
      80,    16,    80,    75,   157,     3,    75,    75,    80,   195,
      78,    80,    14,    15,   159,   135,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   198,   207,   258,   189,    75,   115,    75,
      78,   194,    78,    10,    11,   130,   131,   132,   133,   214,
      79,    79,   207,    81,    30,    79,   130,   131,   132,   133,
      30,    31,   207,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    73,    50,    75,    79,   263,   264,    55,
      76,   254,    32,    33,    34,   167,   168,   169,   170,    74,
      75,    78,    68,    50,    51,   260,   261,   262,    78,   254,
      77,     0,   165,   166,     3,   258,   171,   172,    67,   254,
     265,    82,   277,   266,    70,    70,   281,   202,    60,   284,
     265,    74,     3,   173,   174,   131,   132,    78,   202,     3,
       3,    74,    79,    58,    78,   255,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     3,     3,     4,     5,    22,    64,     8,     9,
      79,    32,   161,   164,   159,    84,   115,    -1,   162,   130,
     163,   255,    -1,    -1,    -1,    -1,    -1,    78,    79,    -1,
      30,    31,    32,    84,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    -1,     8,     9,    -1,    -1,    -1,    67,    68,    69,
      -1,     3,     4,     5,    -1,    -1,     8,     9,    79,    79,
      -1,    -1,    82,    84,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    67,    68,    69,     3,     4,     5,    -1,    -1,     8,
       9,    -1,    -1,    79,    80,    67,    68,    69,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,
      -1,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    72,    73,    -1,     3,     4,     5,    78,
      79,     8,     9,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    73,    -1,     3,     4,
       5,    78,    79,     8,     9,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,     3,     4,     5,    -1,    -1,     8,     9,    -1,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    -1,    72,    73,    30,
      31,    32,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,     8,     9,    -1,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      -1,    72,    73,    30,    31,    32,    -1,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,     8,     9,    -1,    -1,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    30,    31,    32,    -1,
      -1,    78,    79,     3,     4,     5,    -1,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      30,    31,    32,    67,    68,    69,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    30,    31,    32,     3,
       4,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      -1,    -1,    72,    -1,    -1,    -1,    30,    31,    32,    79,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    78,    79,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,    30,    31,
      32,    -1,    -1,    -1,    78,    79,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    75,    79,    -1,    78,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      79,    84,    86,    87,    88,    89,    90,    91,    92,    93,
      96,    97,   103,   132,   133,   134,    96,    93,   103,   104,
       0,    87,    88,    89,    78,    91,    92,    93,    94,    95,
      96,    72,    89,    90,   125,   126,    79,    81,    97,     3,
      72,    80,    93,   103,    75,    78,    70,   125,   126,     3,
       4,     5,     8,     9,    30,    31,    32,    55,    56,    57,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    73,    78,    79,    99,   100,   102,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   123,   124,   125,   126,   127,   128,   129,   130,
     131,    96,    89,   125,    80,     3,    82,    98,   102,   116,
      72,    92,    93,   135,   136,   137,    95,    72,    99,   121,
     125,    74,   116,   116,    98,    74,    79,    79,    79,   123,
      79,     3,    78,    78,    78,   100,   100,    75,    78,    17,
      83,    16,    76,    77,    67,    14,    15,    12,    13,    28,
      29,    10,    11,    30,    31,    32,    33,    34,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    70,   101,
       7,     8,     9,    71,    79,    81,   115,    73,   127,    73,
     123,    82,   135,   137,   137,    73,   136,    74,    96,   138,
     139,   121,   122,   123,    74,   123,   100,   100,   100,    60,
     128,    78,    78,    80,    99,   106,   100,   107,   108,   109,
     110,   111,   111,   112,   112,   112,   112,   113,   113,   114,
     114,   115,   115,   115,    99,     3,     3,    80,    99,   120,
     100,    73,    73,    98,    74,    75,    78,    73,    75,   123,
      80,    80,    80,    79,   128,    74,    75,    80,    82,    98,
     139,    73,   121,   123,   123,   123,   100,    80,   100,   102,
      99,    58,    80,   123,    80,   123,    78,   123
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    87,    87,    87,    87,    88,    88,
      88,    88,    89,    89,    90,    90,    90,    90,    90,    90,
      91,    91,    91,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    96,    97,    97,    97,    97,    98,
      99,    99,   100,   100,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   102,   103,   103,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   110,   110,   110,   111,   111,   111,   111,
     111,   112,   112,   112,   113,   113,   113,   114,   114,   114,
     114,   115,   116,   116,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   117,   118,   118,   118,   118,   119,   119,
     119,   119,   119,   119,   120,   120,   121,   121,   121,   122,
     122,   123,   123,   123,   123,   123,   123,   124,   124,   124,
     125,   125,   125,   125,   126,   126,   127,   127,   128,   128,
     129,   129,   129,   130,   130,   130,   130,   131,   131,   131,
     131,   131,   132,   133,   133,   133,   134,   134,   135,   135,
     136,   137,   137,   137,   137,   138,   138,   139,   139,   139
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     2,     4,     3,
       3,     2,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     2,     1,     3,     1,     4,     3,     3,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     1,     2,     2,     2,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     3,     4,     1,     2,     1,     2,     1,     2,
       5,     7,     5,     5,     7,     6,     7,     3,     2,     2,
       2,     3,     0,     5,     4,     2,     1,     1,     1,     2,
       3,     2,     1,     2,     1,     1,     3,     1,     2,     3
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
#line 1700 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 150 "src/C_parser.y" /* yacc.c:1646  */
    { g_root = new TranslationUnit((yyvsp[0].ExternalDecLaration)); }
#line 1706 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 155 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExternalDecLaration) = new ExternalDeclaration((yyvsp[0].FunctionDefinitionPtr),NULL,NULL) ; }
#line 1712 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 156 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExternalDecLaration) = new ExternalDeclaration(NULL,(yyvsp[0].DecLaration),NULL) ; }
#line 1718 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 157 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExternalDecLaration) = new ExternalDeclaration((yyvsp[0].FunctionDefinitionPtr),NULL,(yyvsp[-1].ExternalDecLaration)) ; }
#line 1724 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 158 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExternalDecLaration) = new ExternalDeclaration(NULL,(yyvsp[0].DecLaration),(yyvsp[-1].ExternalDecLaration)) ; }
#line 1730 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 162 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition((yyvsp[-3].DeclarationSpecifierS),(yyvsp[-2].DecLarator),(yyvsp[-1].DeclarationListPtr),(yyvsp[0].CompoundStatementPtr)); }
#line 1736 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 163 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition((yyvsp[-2].DeclarationSpecifierS),(yyvsp[-1].DecLarator),NULL,(yyvsp[0].CompoundStatementPtr)); }
#line 1742 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 164 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition(NULL,(yyvsp[-2].DecLarator),(yyvsp[-1].DeclarationListPtr),(yyvsp[0].CompoundStatementPtr)); }
#line 1748 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 165 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.FunctionDefinitionPtr) = new FunctionDefinition(NULL,(yyvsp[-1].DecLarator),NULL,(yyvsp[0].CompoundStatementPtr)); }
#line 1754 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 171 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLaration) = new Declaration((yyvsp[-1].DeclarationSpecifierS),NULL);  }
#line 1760 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 172 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLaration) = new Declaration((yyvsp[-2].DeclarationSpecifierS),(yyvsp[-1].InitDeclaratoRList)); }
#line 1766 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 178 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers((yyvsp[0].StorageClassSpecifierS),NULL,NULL) ;}
#line 1772 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 179 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers((yyvsp[0].StorageClassSpecifierS),NULL,NULL) ;}
#line 1778 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 180 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,(yyvsp[0].TypeSpeCifier),NULL) ;}
#line 1784 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 181 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,(yyvsp[0].TypeSpeCifier),NULL) ;}
#line 1790 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 182 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,NULL,(yyvsp[0].TypeQuaLifier)) ;}
#line 1796 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 183 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationSpecifierS) = new DeclarationSpecifiers(NULL,NULL,(yyvsp[0].TypeQuaLifier)) ;}
#line 1802 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 189 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1808 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 190 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1814 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 191 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1820 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 192 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1826 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 193 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StorageClassSpecifierS) = new StorageClassSpecifiers( (yyvsp[0].text)) ; }
#line 1832 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 199 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1838 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 200 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1844 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 201 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1850 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 202 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1856 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 203 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1862 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 204 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1868 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 205 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1874 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 206 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1880 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 207 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].text)); }
#line 1886 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 208 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].StructOrUnionSpecifieR)); }
#line 1892 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 209 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeSpeCifier) = new TypeSpecifier((yyvsp[0].ENumSpecifier)); }
#line 1898 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 216 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeQuaLifier) = new TypeQualifier( (yyvsp[0].text) ) ; }
#line 1904 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 217 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.TypeQuaLifier) = new TypeQualifier( (yyvsp[0].text) ) ; }
#line 1910 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 224 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclaratoRList) = new InitDeclaratorList((yyvsp[0].InitDeclArator)); }
#line 1916 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 225 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclaratoRList) = new InitDeclaratorList((yyvsp[0].InitDeclArator)); }
#line 1922 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 230 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclArator) = new InitDeclarator((yyvsp[0].DecLarator),NULL); }
#line 1928 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 231 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitDeclArator) = new InitDeclarator((yyvsp[-2].DecLarator),(yyvsp[0].InitializerPtr));  }
#line 1934 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 240 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLarator) = new Declarator(NULL,(yyvsp[0].DirectDeclaratorPtr));}
#line 1940 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 241 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DecLarator) = (yyvsp[-1].DecLarator); }
#line 1946 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 247 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = new DirectDeclarator((yyvsp[0].text),NULL,NULL,NULL); }
#line 1952 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 249 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = new DirectDeclarator(NULL,(yyvsp[-1].ConstanTExpression),NULL,NULL); }
#line 1958 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 250 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = (yyvsp[-2].DirectDeclaratorPtr); }
#line 1964 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 253 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DirectDeclaratorPtr) = (yyvsp[-2].DirectDeclaratorPtr); }
#line 1970 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 256 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ConstanTExpression) = new ConstantExpression((yyvsp[0].COnditionalExpression)); }
#line 1976 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 264 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = new AssignmentExpression(NULL,NULL,(yyvsp[0].COnditionalExpression)); }
#line 1982 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 265 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = new AssignmentExpression((yyvsp[-2].UnaryExpressionPtr),(yyvsp[-1].text),NULL); }
#line 1988 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 271 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = (yyvsp[0].AssignmentExpressionPtr); }
#line 1994 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 272 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AssignmentExpressionPtr) = (yyvsp[0].AssignmentExpressionPtr); }
#line 2000 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 277 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2006 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 278 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2012 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 279 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2018 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 280 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2024 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 281 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2030 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 282 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2036 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 283 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2042 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 284 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2048 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 285 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2054 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 286 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2060 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 287 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 2066 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 292 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.COnditionalExpression) = new ConditionalExpression((yyvsp[0].LOgicalOrExpression),NULL); }
#line 2072 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 293 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.COnditionalExpression) = new ConditionalExpression((yyvsp[-4].LOgicalOrExpression),(yyvsp[-2].AssignmentExpressionPtr)); }
#line 2078 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 326 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LOgicalOrExpression) = new LogicalOrExpression((yyvsp[0].LogicalANDexpression), NULL, NULL);}
#line 2084 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 327 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LOgicalOrExpression) = new LogicalOrExpression((yyvsp[0].LogicalANDexpression), (yyvsp[-1].text) ,(yyvsp[-2].LOgicalOrExpression));}
#line 2090 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 335 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LogicalANDexpression) = new LogicalAndExpression((yyvsp[0].InclusiveOrExpressioN), NULL, NULL);}
#line 2096 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 336 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LogicalANDexpression) = new LogicalAndExpression((yyvsp[0].InclusiveOrExpressioN), (yyvsp[-1].text) ,(yyvsp[-2].LogicalANDexpression));}
#line 2102 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 343 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InclusiveOrExpressioN) = new InclusiveOrExpression((yyvsp[0].ExclusiveOrExpressioN), NULL, NULL);}
#line 2108 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 344 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InclusiveOrExpressioN) = new InclusiveOrExpression((yyvsp[0].ExclusiveOrExpressioN), (yyvsp[-1].text) ,(yyvsp[-2].InclusiveOrExpressioN));}
#line 2114 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 352 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExclusiveOrExpressioN) = new ExclusiveOrExpression((yyvsp[0].AndExpressioN), NULL, NULL);}
#line 2120 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 353 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExclusiveOrExpressioN) = new ExclusiveOrExpression((yyvsp[0].AndExpressioN), (yyvsp[-1].text) ,(yyvsp[-2].ExclusiveOrExpressioN));}
#line 2126 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 360 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AndExpressioN) = new AndExpression((yyvsp[0].EQualityExpression), NULL, NULL);}
#line 2132 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 361 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.AndExpressioN) = new AndExpression((yyvsp[0].EQualityExpression), (yyvsp[-1].text) ,(yyvsp[-2].AndExpressioN));}
#line 2138 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 368 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EQualityExpression) = new EqualityExpression((yyvsp[0].RElationalExpression), NULL, NULL); }
#line 2144 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 369 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EQualityExpression) = new EqualityExpression((yyvsp[0].RElationalExpression), (yyvsp[-1].text) ,(yyvsp[-2].EQualityExpression)); }
#line 2150 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 370 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.EQualityExpression) = new EqualityExpression((yyvsp[0].RElationalExpression), (yyvsp[-1].text) ,(yyvsp[-2].EQualityExpression)); }
#line 2156 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 377 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression),NULL,NULL); }
#line 2162 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 378 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 2168 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 379 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 2174 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 380 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 2180 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 381 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.RElationalExpression) = new RelationalExpression((yyvsp[0].SHiftExpression), (yyvsp[-1].text) ,(yyvsp[-2].RElationalExpression)); }
#line 2186 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 389 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SHiftExpression) = new ShiftExpression((yyvsp[0].ADDitiveExpression),NULL,NULL); }
#line 2192 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 390 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SHiftExpression) = new ShiftExpression((yyvsp[0].ADDitiveExpression), (yyvsp[-1].text) ,(yyvsp[-2].SHiftExpression)); }
#line 2198 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 391 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SHiftExpression) = new ShiftExpression((yyvsp[0].ADDitiveExpression), (yyvsp[-1].text) ,(yyvsp[-2].SHiftExpression)); }
#line 2204 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 397 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ADDitiveExpression) = new AdditiveExpression((yyvsp[0].MUltiplicativeExpression),NULL,NULL); }
#line 2210 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 398 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ADDitiveExpression) = new AdditiveExpression((yyvsp[0].MUltiplicativeExpression), (yyvsp[-1].text) ,(yyvsp[-2].ADDitiveExpression)); }
#line 2216 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 399 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ADDitiveExpression) = new AdditiveExpression((yyvsp[0].MUltiplicativeExpression), (yyvsp[-1].text) ,(yyvsp[-2].ADDitiveExpression)); }
#line 2222 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 405 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression),NULL,NULL); }
#line 2228 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 406 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression), (yyvsp[-1].text) ,(yyvsp[-2].MUltiplicativeExpression)); }
#line 2234 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 407 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression), (yyvsp[-1].text) ,(yyvsp[-2].MUltiplicativeExpression)); }
#line 2240 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 408 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.MUltiplicativeExpression) = new MultiplicativeExpression((yyvsp[0].CAstExpression), (yyvsp[-1].text) ,(yyvsp[-2].MUltiplicativeExpression)); }
#line 2246 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 415 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CAstExpression) = new CastExpression((yyvsp[0].UnaryExpressionPtr),NULL); }
#line 2252 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 424 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression((yyvsp[0].PostFixExpressionPtr),NULL,NULL) ; }
#line 2258 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 425 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,(yyvsp[-1].text),NULL) ; }
#line 2264 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 426 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,(yyvsp[-1].text),NULL) ; }
#line 2270 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 427 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.UnaryExpressionPtr) = new UnaryExpression(NULL,(yyvsp[-1].text),(yyvsp[0].CAstExpression)) ; }
#line 2276 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 436 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression((yyvsp[0].PrimaryExpressionPtr),NULL,NULL,NULL,NULL); }
#line 2282 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 437 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,(yyvsp[-1].AssignmentExpressionPtr),NULL,NULL,NULL); }
#line 2288 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 438 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = (yyvsp[-2].PostFixExpressionPtr); }
#line 2294 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 439 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,(yyvsp[-1].ArgumentExpressionListPtr),NULL,NULL);}
#line 2300 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 440 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,NULL,(yyvsp[0].text),(yyvsp[-1].text)); }
#line 2306 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 441 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,NULL,(yyvsp[0].text),(yyvsp[-1].text)); }
#line 2312 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 442 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,NULL,(yyvsp[0].text),NULL); }
#line 2318 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 443 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PostFixExpressionPtr) = new PostFixExpression(NULL,NULL,NULL,(yyvsp[0].text),NULL); }
#line 2324 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 450 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression((yyvsp[0].text),NULL,NULL,NULL); }
#line 2330 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 451 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression(NULL,(yyvsp[0].text),NULL,NULL); }
#line 2336 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 452 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression(NULL,NULL,(yyvsp[0].text),NULL); }
#line 2342 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 453 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.PrimaryExpressionPtr) = new PrimaryExpression(NULL,NULL,NULL,(yyvsp[-1].AssignmentExpressionPtr)); }
#line 2348 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 460 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 2354 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 461 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 2360 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 462 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 2366 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 463 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 2372 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 464 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 2378 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 465 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.text) = (yyvsp[0].text);}
#line 2384 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 469 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ArgumentExpressionListPtr) = new ArgumentExpressionList((yyvsp[0].AssignmentExpressionPtr)); }
#line 2390 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 470 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ArgumentExpressionListPtr) = new ArgumentExpressionList((yyvsp[0].AssignmentExpressionPtr)); }
#line 2396 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 477 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = new Initializer((yyvsp[0].AssignmentExpressionPtr),NULL); }
#line 2402 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 478 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = new Initializer(NULL,(yyvsp[-1].InitializerPtr)); }
#line 2408 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 479 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = new Initializer(NULL,(yyvsp[-2].InitializerPtr)); }
#line 2414 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 484 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = (yyvsp[0].InitializerPtr); }
#line 2420 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 485 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.InitializerPtr) = (yyvsp[0].InitializerPtr); }
#line 2426 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 491 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement((yyvsp[0].LabeledStatementPtr),NULL,NULL,NULL,NULL,NULL); }
#line 2432 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 492 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,(yyvsp[0].CompoundStatementPtr),NULL,NULL,NULL,NULL); }
#line 2438 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 493 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,(yyvsp[0].ExpressionStatementPtr),NULL,NULL,NULL); }
#line 2444 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 494 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,NULL,(yyvsp[0].SelectionStatementPtr),NULL,NULL); }
#line 2450 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 495 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,NULL,NULL,(yyvsp[0].IterationStatementPtr),NULL); }
#line 2456 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 496 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementPtr) = new Statement(NULL,NULL,NULL,NULL,NULL,(yyvsp[0].JumpStatementPtr)); }
#line 2462 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 502 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LabeledStatementPtr) = new LabeledStatement((yyvsp[-2].text),NULL,NULL,(yyvsp[0].StatementPtr)); }
#line 2468 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 503 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LabeledStatementPtr) = new LabeledStatement(NULL,(yyvsp[-3].text),(yyvsp[-2].ConstanTExpression),(yyvsp[0].StatementPtr)); }
#line 2474 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 504 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.LabeledStatementPtr) = new LabeledStatement(NULL,(yyvsp[-2].text),NULL,(yyvsp[0].StatementPtr)); }
#line 2480 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 510 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement(NULL,NULL); }
#line 2486 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 511 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement((yyvsp[-1].StatementListPtr),NULL); }
#line 2492 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 512 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement(NULL,(yyvsp[-1].DeclarationListPtr)); }
#line 2498 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 513 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.CompoundStatementPtr) = new CompoundStatement((yyvsp[-1].StatementListPtr),(yyvsp[-2].DeclarationListPtr)); }
#line 2504 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 519 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationListPtr) = new DeclarationList((yyvsp[0].DecLaration),NULL) ; }
#line 2510 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 520 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.DeclarationListPtr) = new DeclarationList((yyvsp[0].DecLaration),(yyvsp[-1].DeclarationListPtr)) ; }
#line 2516 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 526 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementListPtr) = new StatementList((yyvsp[0].StatementPtr),NULL); }
#line 2522 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 527 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StatementListPtr) = new StatementList((yyvsp[0].StatementPtr),(yyvsp[-1].StatementListPtr)); }
#line 2528 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 532 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExpressionStatementPtr) = new ExpressionStatement(NULL) ; }
#line 2534 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 533 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.ExpressionStatementPtr) = new ExpressionStatement((yyvsp[-1].AssignmentExpressionPtr)) ; }
#line 2540 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 536 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SelectionStatementPtr) = new SelectionStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[0].StatementPtr),NULL,(yyvsp[-4].text),NULL,NULL); }
#line 2546 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 537 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SelectionStatementPtr) = new SelectionStatement((yyvsp[-4].AssignmentExpressionPtr),(yyvsp[-2].StatementPtr),(yyvsp[0].StatementPtr),(yyvsp[-6].text),(yyvsp[-1].text),NULL); }
#line 2552 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 538 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.SelectionStatementPtr) = new SelectionStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[0].StatementPtr),NULL,NULL,NULL,(yyvsp[-4].text)); }
#line 2558 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 544 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[0].StatementPtr),NULL,NULL,(yyvsp[-4].text)); }
#line 2564 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 545 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[-5].StatementPtr),NULL,NULL,(yyvsp[-6].text)); }
#line 2570 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 546 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement(NULL,(yyvsp[0].StatementPtr),(yyvsp[-3].ExpressionStatementPtr),(yyvsp[-2].ExpressionStatementPtr),(yyvsp[-5].text)); }
#line 2576 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 547 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.IterationStatementPtr) = new IterationStatement((yyvsp[-2].AssignmentExpressionPtr),(yyvsp[0].StatementPtr),(yyvsp[-4].ExpressionStatementPtr),(yyvsp[-3].ExpressionStatementPtr),(yyvsp[-6].text)); }
#line 2582 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 553 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement((yyvsp[-1].text),NULL,(yyvsp[-2].text)); }
#line 2588 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 554 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,NULL,(yyvsp[-1].text)); }
#line 2594 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 555 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,NULL,(yyvsp[-1].text)); }
#line 2600 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 556 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,NULL,(yyvsp[-1].text)); }
#line 2606 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 557 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.JumpStatementPtr) = new JumpStatement(NULL,(yyvsp[-1].AssignmentExpressionPtr),(yyvsp[-2].text)); }
#line 2612 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 611 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructOrUnionSpecifieR) = new StructOrUnionSpecifier((yyvsp[-4].StruCtOrUnion),(yyvsp[-3].text),(yyvsp[-1].StructDeclarationLisT)); }
#line 2618 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 612 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructOrUnionSpecifieR) = new StructOrUnionSpecifier((yyvsp[-3].StruCtOrUnion),NULL,(yyvsp[-1].StructDeclarationLisT)); }
#line 2624 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 613 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StructOrUnionSpecifieR) = new StructOrUnionSpecifier((yyvsp[-1].StruCtOrUnion),(yyvsp[0].text),NULL); }
#line 2630 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 616 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StruCtOrUnion) = new StructOrUnion( (yyvsp[0].text) ); }
#line 2636 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 617 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.StruCtOrUnion) = new StructOrUnion( (yyvsp[0].text) ); }
#line 2642 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2646 "src/C_parser.tab.cpp" /* yacc.c:1646  */
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
#line 641 "src/C_parser.y" /* yacc.c:1906  */


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
