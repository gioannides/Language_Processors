%code requires{
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


}

// Represents the value associated with any kind of
// AST node.
%union{

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
}


%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF SEMICOLON
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN 
%token XOR_ASSIGN OR_ASSIGN GT LT PLUS MINUS TILDE MULTIPLY MODULO DIVIDE 

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS PREPROCESSOR

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN TYPE_NAME_


%type <PointerPtr> POINTER
%type <IdentifierListPtr> IDENTIFIER_LIST
%type <DirectAbstractDeclaratorPtr> DIRECT_ABSTRACT_DECLARATOR
%type <AbstractDeclaratorPtr> ABSTRACT_DECLARATOR
%type <ParameterDeclarationPtr> PARAMETER_DECLARATION
%type <ParameterListPtr> PARAMETER_LIST
%type <ParameterTypeListPtr> PARAMETER_TYPE_LIST
%type <FunctionDefinitionPtr> FUNCTION_DEFINITION
%type <DeclarationListPtr> DECLARATION_LIST
%type <LabeledStatementPtr> LABELED_STATEMENT
%type <ExpressionStatementPtr> EXPRESSION_STATEMENT
%type <SelectionStatementPtr> SELECTION_STATEMENT
%type <IterationStatementPtr> ITERATION_STATEMENT
%type <JumpStatementPtr> JUMP_STATEMENT
%type <StatementPtr> STATEMENT
%type <StatementListPtr> STATEMENT_LIST
%type <CompoundStatementPtr> COMPOUND_STATEMENT
%type <ArgumentExpressionListPtr> ARGUMENT_EXPRESSION_LIST
%type <PrimaryExpressionPtr> PRIMARY_EXPRESSION
%type <PostFixExpressionPtr> POSTFIX_EXPRESSION
%type <UnaryExpressionPtr> UNARY_EXPRESSION
%type <AssignmentExpressionPtr> ASSIGNMENT_EXPRESSION
%type <InitializerPtr> INITIALIZER INITIALIZER_LIST
%type <DirectDeclaratorPtr> DIRECT_DECLARATOR
%type <CAstExpression> CAST_EXPRESSION
%type <MUltiplicativeExpression> MULTIPLICATIVE_EXPRESSION
%type <ADDitiveExpression> ADDITIVE_EXPRESSION
%type <SHiftExpression> SHIFT_EXPRESSION
%type <RElationalExpression> RELATIONAL_EXPRESSION
%type <EQualityExpression> EQUALITY_EXPRESSION
%type <AndExpressioN> AND_EXPRESSION
%type <ExclusiveOrExpressioN> EXCLUSIVE_OR_EXPRESSION
%type <InclusiveOrExpressioN> INCLUSIVE_OR_EXPRESSION
%type <LogicalANDexpression> LOGICAL_AND_EXPRESSION
%type <LOgicalOrExpression> LOGICAL_OR_EXPRESSION
%type <COnditionalExpression> CONDITIONAL_EXPRESSION
%type <ConstanTExpression> CONSTANT_EXPRESSION
%type <ASTtree> TRANSLATION_UNIT  
%type <ExternalDecLaration>  EXTERNAL_DECLARATION
%type <DecLaration> DECLARATION
%type <DeclarationSpecifierS> DECLARATION_SPECIFIERS
%type <TypeQuaLifier> TYPE_QUALIFIER 
%type <TypeQualifierListPtr> TYPE_QUALIFIER_LIST
%type <TypeSpeCifier> TYPE_SPECIFIER
%type <StructOrUnionSpecifieR> STRUCT_OR_UNION_SPECIFIER
%type <StorageClassSpecifierS> STORAGE_CLASS_SPECIFIERS
%type <InitDeclaratoRList> INIT_DECLARATOR_LIST
%type <InitDeclArator> INIT_DECLARATOR
%type <DecLarator> DECLARATOR
%type <StruCtOrUnion> STRUCT_OR_UNION
%type <ENumSpecifier> ENUM_SPECIFIER
%type <StructDecLaration> STRUCT_DECLARATION
%type <TypeNamePtr> TYPE_NAME
%type <EnumeratorListPtr> ENUMERATOR_LIST
%type <EnumeratorPtr> ENUMERATOR
%type <StructDeclarationListPtr> STRUCT_DECLARATION_LIST
%type <SpecifierQualifierListPtr> SPECIFIER_QUALIFIER_LIST
%type <StructDeclaratorListPtr> STRUCT_DECLARATOR_LIST
%type <StructDeclaratorPtr> STRUCT_DECLARATOR
%type <UnaryOperatorPtr> UNARY_OPERATOR
%type <ExpressionPtr> EXPRESSION

%type <text> IDENTIFIER TYPEDEF EXTERN STATIC AUTO REGISTER VOID CHAR SHORT INT LONG FLOAT DOUBLE SIGNED UNSIGNED CONST VOLATILE STRUCT UNION ENUM TYPE_NAME_
%type <text> MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN SIZEOF OR_OP
%type <text> '&' '!' LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP '=' LT GT ASSIGNMENT_OPERATOR INC_OP DEC_OP '.' CONSTANT STRING_LITERAL PTR_OP SEMICOLON
%type <text> '{' '}' ':' ',' CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN AND_OP '|' '^' PLUS MINUS  MULTIPLY MODULO DIVIDE ELLIPSIS PREPROCESSOR TILDE '(' ')' '[' ']'


%precedence IF
%precedence ELSE


%start ROOT 

%%

ROOT: TRANSLATION_UNIT { g_root = $1;}

TRANSLATION_UNIT: EXTERNAL_DECLARATION								{ $$ = new TranslationUnit($1,NULL); }
    		| TRANSLATION_UNIT EXTERNAL_DECLARATION 					{ $$ = new TranslationUnit($2,$1); }




EXTERNAL_DECLARATION: FUNCTION_DEFINITION							{ $$ = new ExternalDeclaration($1,NULL,NULL,NULL) ; }
		     |DECLARATION								{ $$ = new ExternalDeclaration(NULL,$1,NULL,NULL) ; }



FUNCTION_DEFINITION: DECLARATION_SPECIFIERS DECLARATOR DECLARATION_LIST COMPOUND_STATEMENT 	{ $$ = new FunctionDefinition($1,$2,$3,$4); } 
		   | DECLARATION_SPECIFIERS DECLARATOR COMPOUND_STATEMENT			{ $$ = new FunctionDefinition($1,$2,NULL,$3); } 
		   | DECLARATOR DECLARATION_LIST COMPOUND_STATEMENT				{ $$ = new FunctionDefinition(NULL,$1,$2,$3); } 
		   | DECLARATOR COMPOUND_STATEMENT						{ $$ = new FunctionDefinition(NULL,$1,NULL,$2); } 





DECLARATION : DECLARATION_SPECIFIERS SEMICOLON 							{ $$ = new Declaration($1,NULL);  } 
	    | DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST SEMICOLON				{ $$ = new Declaration($1,$2); } 





DECLARATION_SPECIFIERS: STORAGE_CLASS_SPECIFIERS						{ $$ = new DeclarationSpecifiers($1,NULL,NULL,NULL) ;}
			| DECLARATION_SPECIFIERS STORAGE_CLASS_SPECIFIERS 			{ $$ = new DeclarationSpecifiers($2,NULL,NULL,$1) ;}
			| TYPE_SPECIFIER							{ $$ = new DeclarationSpecifiers(NULL,$1,NULL,NULL) ;}
			| DECLARATION_SPECIFIERS TYPE_SPECIFIER 				{ $$ = new DeclarationSpecifiers(NULL,$2,NULL,$1) ;}
			| TYPE_QUALIFIER							{ $$ = new DeclarationSpecifiers(NULL,NULL,$1,NULL) ;}
			| DECLARATION_SPECIFIERS TYPE_QUALIFIER 				{ $$ = new DeclarationSpecifiers(NULL,NULL,$2,$1) ;}





STORAGE_CLASS_SPECIFIERS: TYPEDEF								{ $$ = new StorageClassSpecifiers( $1) ; } 
			| EXTERN								{ $$ = new StorageClassSpecifiers( $1) ; } 
			| STATIC								{ $$ = new StorageClassSpecifiers( $1) ; } 
			| AUTO									{ $$ = new StorageClassSpecifiers( $1) ; } 
			| REGISTER								{ $$ = new StorageClassSpecifiers( $1) ; } 



	

TYPE_SPECIFIER:   VOID										{ $$ = new TypeSpecifier($1); } 
		| CHAR										{ $$ = new TypeSpecifier($1); } 
		| SHORT										{ $$ = new TypeSpecifier($1); }
		| INT										{ $$ = new TypeSpecifier($1); } 
		| LONG										{ $$ = new TypeSpecifier($1); } 
		| FLOAT										{ $$ = new TypeSpecifier($1); } 
		| DOUBLE									{ $$ = new TypeSpecifier($1); } 
		| SIGNED									{ $$ = new TypeSpecifier($1); } 
		| UNSIGNED									{ $$ = new TypeSpecifier($1); } 
		| STRUCT_OR_UNION_SPECIFIER							{ $$ = new TypeSpecifier($1); } 
		| ENUM_SPECIFIER								{ $$ = new TypeSpecifier($1); } 
		| TYPE_NAME_									{ $$ = new TypeSpecifier($1); }





TYPE_QUALIFIER: CONST										{ $$ = new TypeQualifier( $1 ) ; }	
	      | VOLATILE									{ $$ = new TypeQualifier( $1 ) ; }	



	


INIT_DECLARATOR_LIST: INIT_DECLARATOR								{ $$ = new InitDeclaratorList($1,NULL); }
		| INIT_DECLARATOR_LIST ',' INIT_DECLARATOR					{ $$ = new InitDeclaratorList($3,$1); }


	

INIT_DECLARATOR: DECLARATOR									{ $$ = new InitDeclarator($1,NULL); }					
		| DECLARATOR '=' INITIALIZER							{ $$ = new InitDeclarator($1,$3);  }					



DECLARATION_LIST: DECLARATION									{ $$ = new DeclarationList($1,NULL) ; }				
		| DECLARATION_LIST DECLARATION							{ $$ = new DeclarationList($2,$1) ; }



DECLARATOR: POINTER DIRECT_DECLARATOR								{ $$ = new Declarator($1,$2,NULL);}	//DONE			
	  | DIRECT_DECLARATOR									{ $$ = new Declarator(NULL,$1,NULL);}					//DONE
	 
	




DIRECT_DECLARATOR: IDENTIFIER								{ $$ = new DirectDeclarator($1,NULL,NULL,NULL,NULL,NULL,0); }
		| '(' DECLARATOR ')'								{ $$ = new DirectDeclarator(NULL,NULL,NULL,NULL,NULL,$2,3); }
		| DIRECT_DECLARATOR '[' CONSTANT_EXPRESSION ']'		{ $$ = new DirectDeclarator(NULL,$3,NULL,NULL,$1,NULL,2);   }//DONE
		| DIRECT_DECLARATOR '[' ']'							{ $$ = new DirectDeclarator(NULL,NULL,NULL,NULL,$1,NULL,2);   }
		| DIRECT_DECLARATOR '(' PARAMETER_TYPE_LIST ')'		{ $$ = new DirectDeclarator(NULL,NULL,$3,NULL,$1,NULL,1);   }//DONE 
		| DIRECT_DECLARATOR '(' IDENTIFIER_LIST ')'			{ $$ = new DirectDeclarator(NULL,NULL,NULL,$3,$1,NULL,1);   }//DONE
		| DIRECT_DECLARATOR '(' ')'							{ $$ = new DirectDeclarator(NULL,NULL,NULL,NULL,$1,NULL,1); }//DONE


CONSTANT_EXPRESSION: CONDITIONAL_EXPRESSION							{ $$ = new ConstantExpression($1); }//DONE COMPLETELY



EXPRESSION: ASSIGNMENT_EXPRESSION								{ $$ = new Expression($1,NULL); }
	| EXPRESSION ',' ASSIGNMENT_EXPRESSION							{ $$ = new Expression($3,$1); }



	

ASSIGNMENT_EXPRESSION:CONDITIONAL_EXPRESSION							{ $$ = new AssignmentExpression(NULL,NULL,$1,NULL); } 
		     | UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION		{ $$ = new AssignmentExpression($1,$2,NULL,$3); }




UNARY_EXPRESSION: POSTFIX_EXPRESSION								{ $$ = new UnaryExpression($1,NULL,NULL,NULL,NULL,NULL) ; } 
		| INC_OP UNARY_EXPRESSION							{ $$ = new UnaryExpression(NULL,$1,NULL,NULL,$2,NULL) ; } 
		| DEC_OP UNARY_EXPRESSION							{ $$ = new UnaryExpression(NULL,$1,NULL,NULL,$2,NULL) ; } 
		| UNARY_OPERATOR CAST_EXPRESSION						{ $$ = new UnaryExpression(NULL,NULL,$1,$2,NULL,NULL) ; } 
		| SIZEOF UNARY_EXPRESSION							{ $$ = new UnaryExpression(NULL,$1,NULL,NULL,$2,NULL) ; } 
		| SIZEOF '(' TYPE_NAME ')'							{ $$ = new UnaryExpression(NULL,$1,NULL,NULL,NULL,$3) ; } 



CAST_EXPRESSION: UNARY_EXPRESSION								{ $$ = new CastExpression($1,NULL,NULL); }
		| '(' TYPE_NAME ')' CAST_EXPRESSION						{ $$ = new CastExpression(NULL,$2,$4); }




UNARY_OPERATOR:   '&'		{ $$ = new UnaryOperator(new std::string("&"));}								
		| MULTIPLY	{ $$ = new UnaryOperator(new std::string("*"));}								
		| PLUS		{ $$ = new UnaryOperator(new std::string("+"));}								
		| MINUS		{ $$ = new UnaryOperator(new std::string("-"));}								
		| TILDE		{$$ = new UnaryOperator(new std::string("~"));}								
		| '!'		{$$ = new UnaryOperator(new std::string("!"));}								
	



ASSIGNMENT_OPERATOR: '='     {$$ = $1;}
		| MUL_ASSIGN {$$ = $1;}
		| DIV_ASSIGN {$$ = $1;}
		| MOD_ASSIGN {$$ = $1;}
		| ADD_ASSIGN {$$ = $1;}
		| SUB_ASSIGN {$$ = $1;}
		| LEFT_ASSIGN {$$ = $1;}
		| RIGHT_ASSIGN {$$ = $1;}
		| AND_ASSIGN {$$ = $1;}
		| XOR_ASSIGN {$$ = $1;}
		| OR_ASSIGN {$$ = $1;}




CONDITIONAL_EXPRESSION: LOGICAL_OR_EXPRESSION							{ $$ = new ConditionalExpression($1,NULL,NULL); }
		      | LOGICAL_OR_EXPRESSION '?' EXPRESSION ':' CONDITIONAL_EXPRESSION		{ $$ = new ConditionalExpression($1,$3,$5); }





PARAMETER_TYPE_LIST: PARAMETER_LIST 								{ $$ = new ParameterTypeList($1,NULL); }
		   | PARAMETER_LIST ',' ELLIPSIS 						{ $$ = new ParameterTypeList($1,$3); }




PARAMETER_LIST: PARAMETER_DECLARATION 								{ $$ = new ParameterList($1,NULL); }
	      | PARAMETER_LIST ',' PARAMETER_DECLARATION 					{ $$ = new ParameterList($3,$1); }




PARAMETER_DECLARATION: DECLARATION_SPECIFIERS DECLARATOR 					{ $$ = new ParameterDeclaration($1,NULL,$2); } 
	             | DECLARATION_SPECIFIERS ABSTRACT_DECLARATOR 				{ $$ = new ParameterDeclaration($1,$2,NULL); }
		     | DECLARATION_SPECIFIERS 							{ $$ = new ParameterDeclaration($1,NULL,NULL); }

LOGICAL_OR_EXPRESSION: LOGICAL_AND_EXPRESSION							{ $$ = new LogicalOrExpression($1, NULL, NULL);}
		     | LOGICAL_OR_EXPRESSION OR_OP LOGICAL_AND_EXPRESSION			{ $$ = new LogicalOrExpression($3, $2 ,$1);}





	

LOGICAL_AND_EXPRESSION: INCLUSIVE_OR_EXPRESSION							{ $$ = new LogicalAndExpression($1, NULL, NULL);}
		      | LOGICAL_AND_EXPRESSION AND_OP INCLUSIVE_OR_EXPRESSION			{ $$ = new LogicalAndExpression($3, $2 ,$1);}



	


INCLUSIVE_OR_EXPRESSION: EXCLUSIVE_OR_EXPRESSION						{ $$ = new InclusiveOrExpression($1, NULL, NULL);}
		       | INCLUSIVE_OR_EXPRESSION '|' EXCLUSIVE_OR_EXPRESSION			{ $$ = new InclusiveOrExpression($3, $2 ,$1);}







EXCLUSIVE_OR_EXPRESSION: AND_EXPRESSION								{ $$ = new ExclusiveOrExpression($1, NULL, NULL);}
		       | EXCLUSIVE_OR_EXPRESSION '^' AND_EXPRESSION				{ $$ = new ExclusiveOrExpression($3, $2 ,$1);}



	


AND_EXPRESSION: EQUALITY_EXPRESSION								{ $$ = new AndExpression($1, NULL, NULL);}
	      | AND_EXPRESSION '&' EQUALITY_EXPRESSION						{ $$ = new AndExpression($3, $2 ,$1);}



	


EQUALITY_EXPRESSION: RELATIONAL_EXPRESSION							{ $$ = new EqualityExpression($1, NULL, NULL); }
		   | EQUALITY_EXPRESSION EQ_OP RELATIONAL_EXPRESSION				{ $$ = new EqualityExpression($3, $2 ,$1); }
		   | EQUALITY_EXPRESSION NE_OP RELATIONAL_EXPRESSION				{ $$ = new EqualityExpression($3, $2 ,$1); }



	


RELATIONAL_EXPRESSION: SHIFT_EXPRESSION								{ $$ = new RelationalExpression($1,NULL,NULL); }
		     | RELATIONAL_EXPRESSION LT SHIFT_EXPRESSION				{ $$ = new RelationalExpression($3, $2 ,$1); }
		     | RELATIONAL_EXPRESSION GT SHIFT_EXPRESSION				{ $$ = new RelationalExpression($3, $2 ,$1); }
		     | RELATIONAL_EXPRESSION LE_OP SHIFT_EXPRESSION				{ $$ = new RelationalExpression($3, $2 ,$1); }
		     | RELATIONAL_EXPRESSION GE_OP SHIFT_EXPRESSION				{ $$ = new RelationalExpression($3, $2 ,$1); }



	


SHIFT_EXPRESSION													
	: ADDITIVE_EXPRESSION									{ $$ = new ShiftExpression($1,NULL,NULL); }
	| SHIFT_EXPRESSION LEFT_OP ADDITIVE_EXPRESSION						{ $$ = new ShiftExpression($3, $2 ,$1); }
	| SHIFT_EXPRESSION RIGHT_OP ADDITIVE_EXPRESSION						{ $$ = new ShiftExpression($3, $2 ,$1); }



	

ADDITIVE_EXPRESSION: MULTIPLICATIVE_EXPRESSION							{ $$ = new AdditiveExpression($1,NULL,NULL); }
		   | ADDITIVE_EXPRESSION PLUS MULTIPLICATIVE_EXPRESSION				{ $$ = new AdditiveExpression($3, $2 ,$1); }
	           | ADDITIVE_EXPRESSION MINUS MULTIPLICATIVE_EXPRESSION			{ $$ = new AdditiveExpression($3, $2 ,$1); }



	

MULTIPLICATIVE_EXPRESSION: CAST_EXPRESSION							{ $$ = new MultiplicativeExpression($1,NULL,NULL); }
			| MULTIPLICATIVE_EXPRESSION MULTIPLY CAST_EXPRESSION			{ $$ = new MultiplicativeExpression($3, $2 ,$1); }
			| MULTIPLICATIVE_EXPRESSION DIVIDE CAST_EXPRESSION			{ $$ = new MultiplicativeExpression($3, $2 ,$1); }
			| MULTIPLICATIVE_EXPRESSION MODULO CAST_EXPRESSION			{ $$ = new MultiplicativeExpression($3, $2 ,$1); }





POSTFIX_EXPRESSION: PRIMARY_EXPRESSION				      				{ $$ = new PostFixExpression(NULL,$1,NULL,NULL,NULL,NULL); }
		  | POSTFIX_EXPRESSION '[' EXPRESSION ']'		     			{ $$ = new PostFixExpression($1,NULL,$3,NULL,NULL,NULL); } //array
		  | POSTFIX_EXPRESSION '(' ')'			      				{ $$ = new PostFixExpression($1,NULL,NULL,NULL,NULL,NULL); }
		  | POSTFIX_EXPRESSION '(' ARGUMENT_EXPRESSION_LIST ')' 			{ $$ = new PostFixExpression($1,NULL,NULL,$3,NULL,NULL);}
		  | POSTFIX_EXPRESSION '.' IDENTIFIER		     				{ $$ = new PostFixExpression($1,NULL,NULL,NULL,$3,$2); }
		  | POSTFIX_EXPRESSION PTR_OP IDENTIFIER		      			{ $$ = new PostFixExpression($1,NULL,NULL,NULL,$3,$2); }
		  | POSTFIX_EXPRESSION INC_OP			     				{ $$ = new PostFixExpression($1,NULL,NULL,NULL,NULL,$2); }
		  | POSTFIX_EXPRESSION DEC_OP			     				{ $$ = new PostFixExpression($1,NULL,NULL,NULL,NULL,$2); }




	

PRIMARY_EXPRESSION: IDENTIFIER				      					{ $$ = new PrimaryExpression($1,NULL,NULL,NULL); }
		  | CONSTANT				     					{ $$ = new PrimaryExpression(NULL,$1,NULL,NULL); }
		  | STRING_LITERAL			     					{ $$ = new PrimaryExpression(NULL,NULL,$1,NULL); }
		  | '(' EXPRESSION ')'			      					{ $$ = new PrimaryExpression(NULL,NULL,NULL,$2); }







ARGUMENT_EXPRESSION_LIST: ASSIGNMENT_EXPRESSION							{ $$ = new ArgumentExpressionList(NULL,$1); }
			| ARGUMENT_EXPRESSION_LIST ',' ASSIGNMENT_EXPRESSION			{ $$ = new ArgumentExpressionList($1,$3); }



	


INITIALIZER: ASSIGNMENT_EXPRESSION		 						{ $$ = new Initializer($1,NULL); }
	   | '{' INITIALIZER_LIST '}'	 							{ $$ = new Initializer(NULL,$2); }
	   | '{' INITIALIZER_LIST ',' '}'	  						{ $$ = new Initializer(NULL,$2); }




INITIALIZER_LIST: INITIALIZER									{ $$ = $1; } 
		| INITIALIZER_LIST ',' INITIALIZER						{ $$ = $3; }





STATEMENT: LABELED_STATEMENT 				{ $$ = new Statement($1,NULL,NULL,NULL,NULL,NULL); }
	| COMPOUND_STATEMENT				{ $$ = new Statement(NULL,$1,NULL,NULL,NULL,NULL); }
	| EXPRESSION_STATEMENT				{ $$ = new Statement(NULL,NULL,$1,NULL,NULL,NULL); }
	| SELECTION_STATEMENT				{ $$ = new Statement(NULL,NULL,NULL,$1,NULL,NULL); }
	| ITERATION_STATEMENT				{ $$ = new Statement(NULL,NULL,NULL,NULL,$1,NULL); }
	| JUMP_STATEMENT				{ $$ = new Statement(NULL,NULL,NULL,NULL,NULL,$1); }





LABELED_STATEMENT: IDENTIFIER ':' STATEMENT			{ $$ = new LabeledStatement($1,NULL,NULL,$3); }
		| CASE CONSTANT_EXPRESSION ':' STATEMENT	{ $$ = new LabeledStatement(NULL,$1,$2,$4); }
		| DEFAULT ':' STATEMENT				{ $$ = new LabeledStatement(NULL,$1,NULL,$3); }



	

COMPOUND_STATEMENT: '{' '}'					{ $$ = new CompoundStatement(NULL,NULL); } 
		  | '{' STATEMENT_LIST '}'			{ $$ = new CompoundStatement($2,NULL); }   
		  | '{' DECLARATION_LIST '}'			{ $$ = new CompoundStatement(NULL,$2); }
		  | '{' DECLARATION_LIST STATEMENT_LIST '}'	{ $$ = new CompoundStatement($3,$2); }
		  | '{' STATEMENT_LIST DECLARATION_LIST '}'	{ $$ = new CompoundStatement($2,$3); }



	


STATEMENT_LIST: STATEMENT					{ $$ = new StatementList($1,NULL); }
	      | STATEMENT_LIST STATEMENT			{ $$ = new StatementList($2,$1); }




EXPRESSION_STATEMENT: SEMICOLON						{ $$ = new ExpressionStatement(NULL) ; }
		    | EXPRESSION SEMICOLON				{ $$ = new ExpressionStatement($1) ; }


SELECTION_STATEMENT: IF '(' EXPRESSION ')' STATEMENT			{ $$ = new SelectionStatement($3,$5,NULL,$1,NULL,NULL); } 
		| IF '(' EXPRESSION ')' STATEMENT ELSE STATEMENT	{ $$ = new SelectionStatement($3,$5,$7,$1,$6,NULL); }     
		| SWITCH '(' EXPRESSION ')' STATEMENT			{ $$ = new SelectionStatement($3,$5,NULL,NULL,NULL,$1); }





ITERATION_STATEMENT: WHILE '(' EXPRESSION ')' STATEMENT						{ $$ = new IterationStatement($3,$5,NULL,NULL,$1); }
		| DO STATEMENT WHILE '(' EXPRESSION ')' SEMICOLON				{ $$ = new IterationStatement($5,$2,NULL,NULL,$1); }
		| FOR '(' EXPRESSION_STATEMENT EXPRESSION_STATEMENT ')' STATEMENT		{ $$ = new IterationStatement(NULL,$6,$3,$4,$1); }
		| FOR '(' EXPRESSION_STATEMENT EXPRESSION_STATEMENT EXPRESSION ')' STATEMENT	{ $$ = new IterationStatement($5,$7,$3,$4,$1); }





JUMP_STATEMENT: GOTO IDENTIFIER SEMICOLON		{ $$ = new JumpStatement($2,NULL,$1); }		
		| CONTINUE SEMICOLON			{ $$ = new JumpStatement(NULL,NULL,$1); }	
		| BREAK SEMICOLON			{ $$ = new JumpStatement(NULL,NULL,$1); }
		| RETURN SEMICOLON			{ $$ = new JumpStatement(NULL,NULL,$1); }
		| RETURN EXPRESSION SEMICOLON		{ $$ = new JumpStatement(NULL,$2,$1); }



IDENTIFIER_LIST: IDENTIFIER				{ $$ = new IdentifierList($1,NULL); }
	       | IDENTIFIER_LIST ',' IDENTIFIER		{ $$ = new IdentifierList($3,$1); }





POINTER	: MULTIPLY					{ $$ = new Pointer(NULL,NULL); }
	| MULTIPLY TYPE_QUALIFIER_LIST			{ $$ = new Pointer(NULL,$2); }
	| MULTIPLY POINTER				{ $$ = new Pointer($2,NULL); }
	| MULTIPLY TYPE_QUALIFIER_LIST POINTER		{ $$ = new Pointer($3,$2); }


TYPE_QUALIFIER_LIST: TYPE_QUALIFIER			{ $$ = new TypeQualifierList($1,NULL);}
		   | TYPE_QUALIFIER_LIST TYPE_QUALIFIER	{ $$ = new TypeQualifierList($2,$1);}



TYPE_NAME: SPECIFIER_QUALIFIER_LIST			{ $$ = new TypeName($1,NULL); }
	 | SPECIFIER_QUALIFIER_LIST ABSTRACT_DECLARATOR	{ $$ = new TypeName($1,$2); }




ABSTRACT_DECLARATOR :POINTER 					{ $$ = new AbstractDeclarator($1,NULL) ; }
		    |DIRECT_ABSTRACT_DECLARATOR 		{ $$ = new AbstractDeclarator(NULL,$1); }
	            |POINTER DIRECT_ABSTRACT_DECLARATOR 	{ $$ = new AbstractDeclarator($1,$2); }  




DIRECT_ABSTRACT_DECLARATOR: '(' ABSTRACT_DECLARATOR ')' 				{ $$ = new DirectAbstractDeclarator($2,NULL,NULL,NULL); } 
			  | '[' ']'							{ $$ = new DirectAbstractDeclarator(NULL,NULL,NULL,NULL); } 
			  | '[' CONSTANT_EXPRESSION ']'					{ $$ = new DirectAbstractDeclarator(NULL,$2,NULL,NULL); } 
			  | DIRECT_ABSTRACT_DECLARATOR '[' ']'				{ $$ = new DirectAbstractDeclarator(NULL,NULL,NULL,$1); } 
			  | DIRECT_ABSTRACT_DECLARATOR '[' CONSTANT_EXPRESSION ']'	{ $$ = new DirectAbstractDeclarator(NULL,$3,NULL,$1); } 
			  | '(' ')'						  	{ $$ = new DirectAbstractDeclarator(NULL,NULL,NULL,NULL); } 
			  | '(' PARAMETER_TYPE_LIST ')'				   	{ $$ = new DirectAbstractDeclarator(NULL,NULL,$2,NULL); } 
			  | DIRECT_ABSTRACT_DECLARATOR '(' ')'			   	{ $$ = new DirectAbstractDeclarator(NULL,NULL,NULL,$1); } 
			  | DIRECT_ABSTRACT_DECLARATOR '(' PARAMETER_TYPE_LIST ')' 	{ $$ = new DirectAbstractDeclarator(NULL,NULL,$3,$1); } 







ENUM_SPECIFIER :  ENUM '{' ENUMERATOR_LIST '}'			{ $$ = new EnumSpecifier($3,NULL); }			
		| ENUM IDENTIFIER '{' ENUMERATOR_LIST '}'	{ $$ = new EnumSpecifier($4,$2);   }			
		| ENUM IDENTIFIER				{ $$ = new EnumSpecifier(NULL,$2); }			


ENUMERATOR_LIST: ENUMERATOR					{ $$ = new EnumeratorList($1,NULL); }
		| ENUMERATOR_LIST ',' ENUMERATOR		{ $$ = new EnumeratorList($3,$1); }


ENUMERATOR: IDENTIFIER						{ $$ = new Enumerator($1,NULL); }
	  | IDENTIFIER '=' CONSTANT_EXPRESSION			{ $$ = new Enumerator($1,$3); }



STRUCT_OR_UNION_SPECIFIER: STRUCT_OR_UNION IDENTIFIER '{' STRUCT_DECLARATION_LIST '}'    { $$ = new StructOrUnionSpecifier($1,$2,$4); }
			| STRUCT_OR_UNION '{' STRUCT_DECLARATION_LIST '}'              	 { $$ = new StructOrUnionSpecifier($1,NULL,$3); }
			| STRUCT_OR_UNION IDENTIFIER					 { $$ = new StructOrUnionSpecifier($1,$2,NULL); }
	

STRUCT_OR_UNION: STRUCT									{ $$ = new StructOrUnion( $1 ); }	
		| UNION									{ $$ = new StructOrUnion( $1 ); }	
	

STRUCT_DECLARATION_LIST: STRUCT_DECLARATION						{ $$ = new StructDeclarationList($1,NULL); }
			| STRUCT_DECLARATION_LIST STRUCT_DECLARATION			{ $$ = new StructDeclarationList($2,$1); }
	

STRUCT_DECLARATION: SPECIFIER_QUALIFIER_LIST STRUCT_DECLARATOR_LIST ';'			{ $$ = new StructDeclaration($1,$2); }


SPECIFIER_QUALIFIER_LIST: TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST			{ $$ = new SpecifierQualifierList($1,$2,NULL) ; }			
			| TYPE_SPECIFIER						{ $$ = new SpecifierQualifierList($1,NULL,NULL) ; }	
			| TYPE_QUALIFIER SPECIFIER_QUALIFIER_LIST			{ $$ = new SpecifierQualifierList(NULL,$2,$1) ; }
			| TYPE_QUALIFIER						{ $$ = new SpecifierQualifierList(NULL,NULL,$1) ; }	


STRUCT_DECLARATOR_LIST: STRUCT_DECLARATOR						{ $$ = new StructDeclaratorList($1,NULL); }						
			| STRUCT_DECLARATOR_LIST ',' STRUCT_DECLARATOR			{ $$ = new StructDeclaratorList($3,$1); }		


STRUCT_DECLARATOR: DECLARATOR								{ $$ = new StructDeclarator($1,NULL); }					
		| ':' CONSTANT_EXPRESSION						{ $$ = new StructDeclarator(NULL,$2); }				
		| DECLARATOR ':' CONSTANT_EXPRESSION					{ $$ = new StructDeclarator($1,$3); }				

%%

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
