%code requires{
  #include "ast.hpp"

  #include <cassert>

  extern const Node *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);
}

// Represents the value associated with any kind of
// AST node.
%union{
  const Node* GlobalDecl;
  char* text;
  double numberValue;
}

%token SEMICOLON PREPROCESSOR COMMA POINTER NUMBER HEX OCTAL FLOAT_LITERAL int_NUM DIGIT IDENTIFIER WHITESPACE NEWLINE AUTO BREAK CASE CHAR CONST
%token CONTINUE	DEFAULT	DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INT LONG REGISTER RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED 
%token VOID VOLATILE WHILE SIGNED_CHAR UNSIGNED_CHAR UNSIGNED_SHORT UNSIGNED_INT UNSIGNED_LONG LONG_DOUBLE LONG_LONG UNSIGNED_LONG_LONG INTMAX_T UINTMAX_T LROUND
%token RROUND LSQUARE RSQUARE LCURLY RCURLY DOT_OP POINTER_OP LOGICAL_NOT_OP BITWISE_NOT_OP PLUS_OP MINUS_OP INC_OP DEC_OP MULT DIV MODULUS_OP SHIFT_LEFT_OP SHIFT_RIGHT_OP
%token LT GT LE	GE EQ NOT_EQ AND XOR OR LOG_AND	LOG_OR COND_OP ASSIGN_OP SHRT_ASSIGNPLUS SHRT_ASSIGNMINUS SHRT_ASSIGNMULT SHRT_ASSIGNMOD SHRT_ASSIGNAND	SHRT_ASSIGNOR
%token SHRT_ASSIGNXOR SHRT_ASSIGNLSHIFT	SHRT_ASSIGNRSHIFT STRING_LITERAL ELLIPSIS


%type <GlobalDecl> NODE GLOBAL_DECLARATION
%type <text> AUTO REGISTER EXTERN STATIC TYPEDEF INT CHAR SHORT FLOAT DOUBLE SIGNED UNSIGNED VOID STRUCT UNION IDENTIFIER STORAGE_SPECIFIER TYPE_SPECIFIER CONST VOLATILE


%start ROOT



%%


ROOT : NODE { g_root = $1; }

NODE : NODE GLOBAL_DECLARATION			{ $$ = $2 ; }
     | GLOBAL_DECLARATION			{ $$ = $1 ; }

 

GLOBAL_DECLARATION : STORAGE_SPECIFIER IDENTIFIER SEMICOLON		{ $$ = new StorageSpecifierDecl( $1 , $2  ) ; }
	 	   | TYPE_SPECIFIER IDENTIFIER SEMICOLON		{ $$ = new TypeSpecifierDecl( $1 , $2  ) ; }
		   | TYPE_SPECIFIER SEMICOLON				{ $$ = new TypeSpecifierDecl( $1 ) ; }
		   | STORAGE_SPECIFIER SEMICOLON			{ $$ = new StorageSpecifierDecl( $1 ) ; }


STORAGE_SPECIFIER : AUTO 		{ $$ = $1 ; }
		  | REGISTER		{ $$ = $1 ; }
		  | EXTERN 		{ $$ = $1 ; }
		  | STATIC 		{ $$ = $1 ; }
		  | TYPEDEF  		{ $$ = $1 ; }
		  | CONST		{ $$ = $1 ; }
		  | VOLATILE		{ $$ = $1 ; }

TYPE_SPECIFIER : INT			{ $$ = $1 ; }
	       | CHAR			{ $$ = $1 ; }
               | SHORT			{ $$ = $1 ; }
               | FLOAT			{ $$ = $1 ; }
               | DOUBLE			{ $$ = $1 ; }
               | SIGNED			{ $$ = $1 ; }
               | UNSIGNED		{ $$ = $1 ; }
               | VOID 			{ $$ = $1 ; }
               | STRUCT 		{ $$ = $1 ; }
               | UNION			{ $$ = $1 ; }



%%

const Node *g_root; // Definition of variable (to match declaration earlier)

const Node *parseAST(){
  g_root=0;
  yyparse();
  return g_root;
}
