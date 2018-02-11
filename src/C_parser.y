%code requires{
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
}

// Represents the value associated with any kind of
// AST node.
%union{
  const Node* GlobalDecl;
  const Node* FunctionDeclCall;
  std::string* text;
  double* numberValue;
  listPtr linkedlist;
}

%token SEMICOLON PREPROCESSOR COMMA POINTER NUMBER HEX OCTAL FLOAT_LITERAL int_NUM DIGIT IDENTIFIER WHITESPACE NEWLINE AUTO BREAK CASE CHAR CONST
%token CONTINUE	DEFAULT	DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INT LONG REGISTER RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED 
%token VOID VOLATILE WHILE SIGNED_CHAR UNSIGNED_CHAR UNSIGNED_SHORT UNSIGNED_INT UNSIGNED_LONG LONG_DOUBLE LONG_LONG UNSIGNED_LONG_LONG INTMAX_T UINTMAX_T LROUND
%token RROUND LSQUARE RSQUARE LCURLY RCURLY DOT_OP POINTER_OP LOGICAL_NOT_OP BITWISE_NOT_OP PLUS_OP MINUS_OP INC_OP DEC_OP MULT DIV MODULUS_OP SHIFT_LEFT_OP SHIFT_RIGHT_OP
%token LT GT LE	GE EQ NOT_EQ AND XOR OR LOG_AND	LOG_OR COND_OP ASSIGN_OP SHRT_ASSIGNPLUS SHRT_ASSIGNMINUS SHRT_ASSIGNMULT SHRT_ASSIGNMOD SHRT_ASSIGNAND	SHRT_ASSIGNOR
%token SHRT_ASSIGNXOR SHRT_ASSIGNLSHIFT	SHRT_ASSIGNRSHIFT STRING_LITERAL ELLIPSIS


%type <GlobalDecl> NODE GLOBAL_DECLARATION DECLARATION DECLARATION_LIST
%type <text> AUTO REGISTER EXTERN STATIC TYPEDEF INT CHAR SHORT FLOAT DOUBLE SIGNED UNSIGNED VOID STRUCT UNION IDENTIFIER STORAGE_SPECIFIER TYPE_SPECIFIER CONST VOLATILE FUNCTION_ID
%type <text> PARAMETER_ID STRING_LITERAL
%type <linkedlist> FORMAL_PARAMETERS ACTUAL_PARAMETERS
%type <FunctionDeclCall> FUNCTION FUNCTION_DECLARATION FUNCTION_CALL
%type <text> int_NUM FLOAT_LITERAL HEX OCTAL

%start ROOT



%%


//*****************************************************************************
//				  START
//*****************************************************************************


ROOT : NODE { g_root = $1; }

NODE : NODE DECLARATION			{ $$ = $2 ; } 
     | DECLARATION			{ $$ = $1 ; }

DECLARATION : FUNCTION			{ $$ = $1 ;}
	    | GLOBAL_DECLARATION	{ $$ = $1 ;}


//*****************************************************************************
//				FUNCTIONS
//*****************************************************************************


FUNCTION : //FUNCTION_DEFINITION		{ $$ = $1 ; }
	   FUNCTION_DECLARATION			{ $$ = $1 ; }
	 | FUNCTION_CALL			{ $$ = $1 ; }


FUNCTION_DECLARATION : STORAGE_SPECIFIER FUNCTION_ID LROUND FORMAL_PARAMETERS RROUND SEMICOLON 	{ $$ = new StorageSpecFunctDeclCall( $1, $2, $4 );}
		     | TYPE_SPECIFIER FUNCTION_ID LROUND FORMAL_PARAMETERS RROUND SEMICOLON 	{ $$ = new TypeSpecFunctDeclCall( $1, $2, $4 ); }
		     | TYPE_SPECIFIER FUNCTION_ID LROUND RROUND SEMICOLON			{ $$ = new TypeSpecFunctDeclCall( $1, $2, NULL ) 	  ;}
		     | STORAGE_SPECIFIER FUNCTION_ID LROUND RROUND SEMICOLON			{ $$ = new StorageSpecFunctDeclCall( $1, $2, NULL ) 	  ;}

FUNCTION_CALL : FUNCTION_ID LROUND ACTUAL_PARAMETERS RROUND SEMICOLON				{ $$ = new Function( NULL, $1, $3 ) ;}
	      | FUNCTION_ID LROUND RROUND SEMICOLON						{ $$ = new Function( NULL, $1, NULL ) ;}

FUNCTION_ID : IDENTIFIER	{ $$ = $1 ;}

PARAMETER_ID : IDENTIFIER	{ $$ = $1 ;}

FORMAL_PARAMETERS : STORAGE_SPECIFIER PARAMETER_ID			    { addTolist(hdList,*$1,*$2); $$ = hdList;}
	   	  | TYPE_SPECIFIER PARAMETER_ID				    { addTolist(hdList,*$1,*$2); $$ = hdList;}
	   	  | STORAGE_SPECIFIER 					    { addTolist2(hdList,*$1); $$ = hdList;}
	   	  | TYPE_SPECIFIER					    { addTolist2(hdList,*$1); $$ = hdList;}
		  | FLOAT_LITERAL					    { addTolist3(hdList,*$1); $$ = hdList;}
		  | int_NUM						    { addTolist3(hdList,*$1); $$ = hdList;}
		  | HEX							    { addTolist3(hdList,*$1); $$ = hdList;}
		  | OCTAL						    { addTolist3(hdList,*$1); $$ = hdList;}
		  | STRING_LITERAL					    { addTolist3(hdList,*$1); $$ = hdList;}
	   	  | FORMAL_PARAMETERS COMMA STORAGE_SPECIFIER PARAMETER_ID  { addTolist(hdList,*$3,*$4); }
	          | FORMAL_PARAMETERS COMMA TYPE_SPECIFIER PARAMETER_ID     { addTolist(hdList,*$3,*$4); }

ACTUAL_PARAMETERS : PARAMETER_ID					    {  addTolist3(hdList,*$1); $$ = hdList;}
		  | STORAGE_SPECIFIER					    {  addTolist2(hdList,*$1); $$ = hdList;}
		  | TYPE_SPECIFIER					    {  addTolist2(hdList,*$1); $$ = hdList;}
		  | FLOAT_LITERAL					    {  addTolist3(hdList,*$1); $$ = hdList;}
		  | int_NUM						    {  addTolist3(hdList,*$1); $$ = hdList;}
		  | HEX							    {  addTolist3(hdList,*$1); $$ = hdList;}
		  | OCTAL						    {  addTolist3(hdList,*$1); $$ = hdList;}
		  | STRING_LITERAL					    {  addTolist3(hdList,*$1); $$ = hdList;}
		  | ACTUAL_PARAMETERS COMMA PARAMETER_ID  		    {  addTolist3(hdList,*$3); $$ = hdList;}
		  | ACTUAL_PARAMETERS COMMA TYPE_SPECIFIER  		    {  addTolist2(hdList,*$3); $$ = hdList;}
		  | ACTUAL_PARAMETERS COMMA STORAGE_SPECIFIER  		    {  addTolist2(hdList,*$3); $$ = hdList;}
		  | ACTUAL_PARAMETERS COMMA FLOAT_LITERAL	    	    {  addTolist3(hdList,*$3); $$ = hdList;}
		  | ACTUAL_PARAMETERS COMMA int_NUM  		    	    {  addTolist3(hdList,*$3); $$ = hdList;}
		  | ACTUAL_PARAMETERS COMMA HEX  		            {  addTolist3(hdList,*$3); $$ = hdList;}
		  | ACTUAL_PARAMETERS COMMA OCTAL  		            {  addTolist3(hdList,*$3); $$ = hdList;}
		  | ACTUAL_PARAMETERS COMMA STRING_LITERAL  		    {  addTolist3(hdList,*$3); $$ = hdList;}


//*****************************************************************************
//			GLOBAL DECLARATIONS
//*****************************************************************************
 
DECLARATION_LIST : GLOBAL_DECLARATION					{ $$ = $1; }
		 | DECLARATION_LIST COMMA GLOBAL_DECLARATION		{ $$ = $3; }



GLOBAL_DECLARATION : STORAGE_SPECIFIER IDENTIFIER SEMICOLON		{ $$ = new StorageSpecifierDecl( $1 , $2  ) ; }
	 	   | TYPE_SPECIFIER IDENTIFIER SEMICOLON		{ $$ = new TypeSpecifierDecl( $1 , $2  ) ; }
		   | TYPE_SPECIFIER SEMICOLON				{ $$ = new TypeSpecifierDecl( $1 ) ; }
		   | STORAGE_SPECIFIER SEMICOLON			{ $$ = new StorageSpecifierDecl( $1 ) ; }


STORAGE_SPECIFIER : AUTO 		{ $$ = $1 ; }
		  | REGISTER		{ $$ = $1 ; }
		  | EXTERN 		{ $$ = $1 ; }
		  | STATIC 		{ $$ = $1 ; }
		  | TYPEDEF  		{ $$ = $1 ; }

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
	       | CONST			{ $$ = $1 ; }
	       | VOLATILE		{ $$ = $1 ; }



%%

//*****************************************************************************
//THIS SECTION CONTAINS ALL THE GLOBAL FUNCTIONS USED BY THE GRAMMAR
//*****************************************************************************

listPtr hdList = NULL;

const Node *g_root; // Definition of variable (to match declaration earlier)

void addTolist(listPtr& hdList, std::string& data_t , std::string& id ){
	if(hdList == NULL){
		hdList = new list;
		hdList->data_type = data_t;
		hdList->identifier = id;
		hdList->next = NULL;
	}
	else{
		listPtr temp = new list;
		temp->data_type = data_t;
		temp->identifier = id;
		temp->next = hdList;
		hdList = temp;
	}
}

void addTolist2(listPtr& hdList,std::string& data_t){
	if(hdList == NULL){
		hdList = new list;
		hdList->data_type = data_t;
		hdList->identifier = "";
		hdList->next = NULL;
	}
	else{
		listPtr temp = new list;
		temp->data_type = data_t;
		temp->identifier = "";
		temp->next = hdList;
		hdList = temp;
	}
}

void addTolist3(listPtr& hdList,std::string& id){
	if(hdList == NULL){
		hdList = new list;
		hdList->data_type = "";
		hdList->identifier = id;
		hdList->next = NULL;
	}
	else{
		listPtr temp = new list;
		temp->data_type = "";
		temp->identifier = id;
		temp->next = hdList;
		hdList = temp;
	}
}

const Node *parseAST(){
  g_root=0;
  yyparse();
  return g_root;
}
