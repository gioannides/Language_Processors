#ifndef ast_node_hpp
#define ast_node_hpp

#include <string>
#include <iostream>
#include <memory>
#include <fstream>
#include <vector>
#include <cmath>
#include "class_forward_declarations.hpp"




struct bindings {
	int word_size = 0;
	std::string id = "";
	int value = 0;
};


static std::vector<bindings> Variables;
static bindings temp;

static std::string funct_id = "";
static int parameter_no = 1;


class SpecifierQualifierList : public Node {};
class Init_Declaration_List : public Node {};
class InclusiveAndExpression : public Node {};




class Pointer : public Node {

	private:
		Pointer* PointerPtr;
		TypeQualifier* TypeQualifierPtr;

	public:
		Pointer( Pointer* PointerPtr , TypeQualifier* TypeQualifierPtr ) : PointerPtr(PointerPtr) , TypeQualifierPtr(TypeQualifierPtr) {}

		~Pointer() {}

};






class TypeName : public Node {};


class PrimaryExpression : public Node {
	
	private:
		std::string* IDENTIFIER;
		std::string* CONSTANT;
		std::string* STRING_LITERAL;
		AssignmentExpression* AssignmentExpressionPtr;
	public:
		PrimaryExpression(std::string* IDENTIFIER, std::string* CONSTANT, std::string* STRING_LITERAL, AssignmentExpression* AssignmentExpressionPtr) :

			IDENTIFIER(IDENTIFIER) , CONSTANT(CONSTANT) , STRING_LITERAL(STRING_LITERAL) , AssignmentExpressionPtr(AssignmentExpressionPtr) {}

		~PrimaryExpression() {}

		void print_py(std::ofstream& file);

		void render_asm(std::ofstream& file) ; 
		
		

};





class ArgumentExpressionList : public Node {
	
	private:
		ArgumentExpressionList* ArgumentExpressionListPtr;
		AssignmentExpression* AssignmentExpressionPtr;

	public:
		ArgumentExpressionList( ArgumentExpressionList* ArgumentExpressionListPtr,AssignmentExpression* AssignmentExpressionPtr) : AssignmentExpressionPtr(AssignmentExpressionPtr)
			, ArgumentExpressionListPtr(ArgumentExpressionListPtr) {}

		~ArgumentExpressionList() {}

		void print_py(std::ofstream& file);

};







class PostFixExpression : public Node {

	private:
		PrimaryExpression* PrimaryExpressionPtr;
		AssignmentExpression* AssignmentExpressionPtr;
		ArgumentExpressionList* ArgumentExpressionListPtr;
		PostFixExpression* PostFixExpressionPtr;
		std::string* IDENTIFIER;
		std::string* OPERATOR;
		
	public:
		PostFixExpression(PostFixExpression* PostFixExpressionPtr, PrimaryExpression* PrimaryExpressionPtr, AssignmentExpression* AssignmentExpressionPtr, ArgumentExpressionList* ArgumentExpressionListPtr, std::string* IDENTIFIER, std::string* OPERATOR) :
	
				PrimaryExpressionPtr(PrimaryExpressionPtr), AssignmentExpressionPtr(AssignmentExpressionPtr) , ArgumentExpressionListPtr(ArgumentExpressionListPtr) , IDENTIFIER(IDENTIFIER) , OPERATOR(OPERATOR) , PostFixExpressionPtr(PostFixExpressionPtr) {}


		~PostFixExpression() {}

		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file); 

};




		

		

class UnaryExpression : public Node {
	
	private:
		PostFixExpression* PostFixExpressionPtr;
		std::string* OPERATOR;
		CastExpression* CastExpressionPtr;
	public:
		UnaryExpression(PostFixExpression* PostFixExpressionPtr, std::string* OPERATOR, CastExpression* CastExpressionPtr) :
			PostFixExpressionPtr(PostFixExpressionPtr) , OPERATOR(OPERATOR) , CastExpressionPtr(CastExpressionPtr) {}

		~UnaryExpression() {}

		void print_py(std::ofstream& file); 


		void render_asm(std::ofstream& file) {
		
			if(PostFixExpressionPtr != NULL) {
				PostFixExpressionPtr->render_asm(file);		// This is for getting identifier name, constant value	
			}
			/*else if ( CastExpressionPtr != NULL) {
				file << " " << *OPERATOR << " ";		//TODO: THIS IS FOR ++ and -- operators
				CastExpressionPtr->print_py(file);
			}*/
		}


};







class CastExpression : public Node {

	private:
		UnaryExpression* UNaryExpression;
		TypeName* TYpeName;

	public:
		CastExpression( UnaryExpression* UNaryExpression, TypeName* TYpeName) : UNaryExpression(UNaryExpression) , TYpeName(TYpeName) {}

		~CastExpression() {}

		void print_py(std::ofstream& file);

		void render_asm(std::ofstream& file) {

			if( UNaryExpression != NULL){
				UNaryExpression->render_asm(file);
			}

		}

};






class MultiplicativeExpression : public Node {

	private:
		CastExpression* CaStExpression;
		std::string* OPERATOR;
		MultiplicativeExpression* MultiplicativeExpressionPtr;

	public:
		MultiplicativeExpression( CastExpression* CaStExpression, std::string* OPERATOR , MultiplicativeExpression* MultiplicativeExpressionPtr ) : CaStExpression(CaStExpression) , OPERATOR(OPERATOR) , MultiplicativeExpressionPtr(MultiplicativeExpressionPtr) {}

		~MultiplicativeExpression() {}

		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file) {

			if( MultiplicativeExpressionPtr != NULL){
				MultiplicativeExpressionPtr->render_asm(file);
			}

			if( CaStExpression != NULL ) {
				CaStExpression->render_asm(file);
			}
		}

};




		


class AdditiveExpression : public Node {

	private:
		MultiplicativeExpression* MultiplicativeExpressioN;
		std::string* OPERATOR;
		AdditiveExpression* AdditiveExpressionPtr;
	
	public:
		AdditiveExpression(MultiplicativeExpression* MultiplicativeExpressioN, std::string* OPERATOR, AdditiveExpression* AdditiveExpressionPtr) : MultiplicativeExpressioN(MultiplicativeExpressioN), OPERATOR(OPERATOR) , AdditiveExpressionPtr(AdditiveExpressionPtr) {}

		

		~AdditiveExpression() {}


		void print_py(std::ofstream& file);

		void render_asm(std::ofstream& file) {

			if( AdditiveExpressionPtr != NULL){
				AdditiveExpressionPtr->render_asm(file);
			}

			if( MultiplicativeExpressioN != NULL ) {
				MultiplicativeExpressioN->render_asm(file);
			}
		}

};








class ShiftExpression : public Node {

	private:
		AdditiveExpression* AdditiVeExpression;
		std::string* OPERATOR;
		ShiftExpression* ShiftExpressionPtr;

	public:
		ShiftExpression(AdditiveExpression* AdditiVeExpression, std::string* OPERATOR, ShiftExpression* ShiftExpressionPtr) : AdditiVeExpression(AdditiVeExpression) , OPERATOR(OPERATOR) , ShiftExpressionPtr(ShiftExpressionPtr){}

		~ShiftExpression() {}

		void print_py(std::ofstream& file);

		void render_asm(std::ofstream& file) {

			if( ShiftExpressionPtr != NULL){
				ShiftExpressionPtr->render_asm(file);
			}

			if( AdditiVeExpression != NULL ) {
				AdditiVeExpression->render_asm(file);
			}
		}


};










class RelationalExpression : public Node {
	
	private:
		ShiftExpression* SHiftExpression;
		std::string* OPERATOR;
		RelationalExpression* RelationalExpressionPtr;

	public:
		RelationalExpression(ShiftExpression* SHiftExpression, std::string* OPERATOR, RelationalExpression* RelationalExpressionPtr) : SHiftExpression(SHiftExpression) , OPERATOR(OPERATOR) , RelationalExpressionPtr(RelationalExpressionPtr) {}

		~RelationalExpression() {}

		void print_py(std::ofstream& file);

		void render_asm(std::ofstream& file) {

			if( RelationalExpressionPtr != NULL){
				RelationalExpressionPtr->render_asm(file);
			}

			if( SHiftExpression != NULL ) {
				SHiftExpression->render_asm(file);
			}
		}


};








class EqualityExpression : public Node {

	private:
		RelationalExpression* RElationalExpression;
		std::string* OPERATOR;
		EqualityExpression* EqualityExpressionPtr;

	public:
		EqualityExpression(RelationalExpression* RElationalExpression, std::string* OPERATOR, EqualityExpression* EqualityExpressionPtr ) : RElationalExpression(RElationalExpression), OPERATOR(OPERATOR) , EqualityExpressionPtr(EqualityExpressionPtr) {}

		~EqualityExpression() {} 

		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file) {

			if( EqualityExpressionPtr != NULL){
				EqualityExpressionPtr->render_asm(file);
			}

			if( RElationalExpression != NULL ) {
				RElationalExpression->render_asm(file);
			}
		}

};









class AndExpression : public Node {
	
	private:
		EqualityExpression* EqualitYExpression;
		std::string* BIT_AND;
		AndExpression* AndExpressionPtr;
	public:
		AndExpression( EqualityExpression* EqualitYExpression, std::string* BIT_AND, AndExpression* AndExpressionPtr ) : EqualitYExpression(EqualitYExpression), 
			BIT_AND(BIT_AND) , AndExpressionPtr(AndExpressionPtr) {}

		~AndExpression() {}

		void print_py(std::ofstream& file);

		
		void render_asm(std::ofstream& file) {

			if( AndExpressionPtr != NULL){
				AndExpressionPtr->render_asm(file);
			}

			if( EqualitYExpression != NULL ) {
				EqualitYExpression->render_asm(file);
			}
		}

};








class ExclusiveOrExpression : public Node {

	private:
		AndExpression* ANDexpression;
		std::string* EXCL_OR;
		ExclusiveOrExpression* ExclusiveOrExpressionPtr;

	public:
		ExclusiveOrExpression( AndExpression* ANDexpression, std::string* EXCL_OR, ExclusiveOrExpression* ExclusiveOrExpressionPtr ) : ANDexpression(ANDexpression)
		, EXCL_OR(EXCL_OR) , ExclusiveOrExpressionPtr(ExclusiveOrExpressionPtr) {}

		~ExclusiveOrExpression() {}

		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file) {

			if( ExclusiveOrExpressionPtr != NULL){
				ExclusiveOrExpressionPtr->render_asm(file);
			}

			if( ANDexpression != NULL ) {
				ANDexpression->render_asm(file);
			}
		}

};








class InclusiveOrExpression : public Node {

	private:
		ExclusiveOrExpression* EXclusiveOrExpression;
		std::string* INC_OR;
		InclusiveOrExpression* InclusiveOrExpressionPtr;

	public:
		InclusiveOrExpression( ExclusiveOrExpression* EXclusiveOrExpression, std::string* INC_OR, InclusiveOrExpression* InclusiveOrExpressionPtr  ) : EXclusiveOrExpression(EXclusiveOrExpression) ,INC_OR(INC_OR) , InclusiveOrExpressionPtr(InclusiveOrExpressionPtr) {}

		~InclusiveOrExpression() {}

		void print_py(std::ofstream& file);

		void render_asm(std::ofstream& file) {

			if( InclusiveOrExpressionPtr != NULL){
				InclusiveOrExpressionPtr->render_asm(file);
			}

			if( EXclusiveOrExpression != NULL ) {
				EXclusiveOrExpression->render_asm(file);
			}
		}
};








class LogicalAndExpression : public Node {
	
	private:
		InclusiveOrExpression* INclusiveOrExpression;
		LogicalAndExpression* LogicalAndExpressionPtr;
		std::string* AND_OP;

	public:
		LogicalAndExpression(InclusiveOrExpression* INclusiveOrExpression, std::string* AND_OP, LogicalAndExpression* LogicalAndExpressionPtr) : INclusiveOrExpression(INclusiveOrExpression) , AND_OP(AND_OP) , LogicalAndExpressionPtr(LogicalAndExpressionPtr) {}
		~LogicalAndExpression() {}

		void print_py(std::ofstream& file);

		void render_asm(std::ofstream& file) {

			if( LogicalAndExpressionPtr != NULL){
				LogicalAndExpressionPtr->render_asm(file);
			}

			if( INclusiveOrExpression != NULL ) {
				INclusiveOrExpression->render_asm(file);
			}
		}
};






		


class LogicalOrExpression : public Node {

	private:
		LogicalAndExpression* LogicalAndExpressionPtr;
		std::string* OR_OP;
		LogicalOrExpression* LogicalOrExpressionPtr;
	public:
		LogicalOrExpression(LogicalAndExpression* LogicalAndExpressionPtr, std::string* OR_OP, LogicalOrExpression* LogicalOrExpressionPtr) 
		: LogicalAndExpressionPtr(LogicalAndExpressionPtr), OR_OP(OR_OP), LogicalOrExpressionPtr(LogicalOrExpressionPtr) {}

		~LogicalOrExpression() {}

		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file) {

			if( LogicalOrExpressionPtr != NULL){
				LogicalOrExpressionPtr->render_asm(file);
			}

			if( LogicalAndExpressionPtr != NULL ) {
				LogicalAndExpressionPtr->render_asm(file);
			}

		}
			
			
};







class ConditionalExpression : public Node {

	private:
		LogicalOrExpression* LogicalORExpression;
		AssignmentExpression* ExpressioN;

	public:

		ConditionalExpression( LogicalOrExpression* LogicalORExpression, AssignmentExpression* ExpressioN) : LogicalORExpression(LogicalORExpression),  ExpressioN(ExpressioN) {}

		~ConditionalExpression() {}

		void print_py(std::ofstream& file);

		void render_asm(std::ofstream& file) ;
			

};










class AssignmentExpression : public Node {

	private:
		ConditionalExpression* ConditionalExpressionPtr;
		UnaryExpression* UnaryExpressionPtr;
		std::string* AssignmentOperator;
		AssignmentExpression* AssignmentExpressionPtr;

	public :
		AssignmentExpression( UnaryExpression* UnaryExpressionPtr, std::string* AssignmentOperator, ConditionalExpression* ConditionalExpressionPtr , AssignmentExpression* AssignmentExpressionPtr) :
				AssignmentExpressionPtr(AssignmentExpressionPtr), UnaryExpressionPtr(UnaryExpressionPtr), AssignmentOperator(AssignmentOperator) ,ConditionalExpressionPtr(ConditionalExpressionPtr) {}

		~AssignmentExpression() {}

		void print_py(std::ofstream& file) ;


		void render_asm(std::ofstream& file) ; 
};







class IdentifierList : public Node {

	private:
		std::string* IDENTIFIER;
		IdentifierList* IdentifierListPtr;
	public:
		IdentifierList(std::string* IDENTIFIER , IdentifierList* IdentifierListPtr) : IDENTIFIER(IDENTIFIER) , IdentifierListPtr(IdentifierListPtr) {}

		void print_py(std::ofstream& file) ;


};






class ConstantExpression : public Node {

	private:
		ConditionalExpression* ConditionalExpressionPtr;

	public:
		ConstantExpression( ConditionalExpression* ConditionalExpressionPtr ) : ConditionalExpressionPtr(ConditionalExpressionPtr) {}

		~ConstantExpression() {}

};








class DirectAbstractDeclarator : public Node {

	private:
		AbstractDeclarator* AbstractDeclaratorPtr;
		ConstantExpression* ConstantExpressionPtr;
		ParameterTypeList* ParameterTypeListPtr;
		DirectAbstractDeclarator* DirectAbstractDeclaratorPtr;
		IdentifierList* IdentifierListPtr;

	public:

		DirectAbstractDeclarator( AbstractDeclarator* AbstractDeclaratorPtr , ConstantExpression* ConstantExpressionPtr , ParameterTypeList* ParameterTypeListPtr , DirectAbstractDeclarator* DirectAbstractDeclaratorPtr) :
					AbstractDeclaratorPtr(AbstractDeclaratorPtr) , ConstantExpressionPtr(ConstantExpressionPtr) , ParameterTypeListPtr(ParameterTypeListPtr),
					DirectAbstractDeclaratorPtr(DirectAbstractDeclaratorPtr) , IdentifierListPtr(IdentifierListPtr) {}

		~DirectAbstractDeclarator() {}

};








class AbstractDeclarator : public Node {

	private:
		Pointer* Pointerptr;
		DirectAbstractDeclarator* DirectAbstractDeclaratorPtr;
	public:
		AbstractDeclarator( Pointer* Pointerptr , DirectAbstractDeclarator* DirectAbstractDeclaratorPtr) : Pointerptr(Pointerptr) , DirectAbstractDeclaratorPtr(DirectAbstractDeclaratorPtr) {}

		~AbstractDeclarator() {}

};









class ParameterDeclaration : public Node {

	private:
		DeclarationSpecifiers* DeclarationSpecifiersPtr;
		Declarator* DeclaratorPtr;
		AbstractDeclarator* AbstractDeclaratorPtr;
	public:
		ParameterDeclaration( DeclarationSpecifiers* DeclarationSpecifiersPtr , AbstractDeclarator* AbstractDeclaratorPtr, Declarator* DeclaratorPtr ) :
				DeclarationSpecifiersPtr(DeclarationSpecifiersPtr) , AbstractDeclaratorPtr(AbstractDeclaratorPtr) , DeclaratorPtr(DeclaratorPtr) {}

		~ParameterDeclaration() {}

		void print_py(std::ofstream& file) ;

};









class ParameterList : public Node {

	private:
		ParameterDeclaration* ParameterDeclarationPtr;
		ParameterList* ParameterListPtr;
	public:
		ParameterList( ParameterDeclaration* ParameterDeclarationPtr , ParameterList* ParameterListPtr ) :
			ParameterDeclarationPtr(ParameterDeclarationPtr) , ParameterListPtr(ParameterListPtr) {}

		~ParameterList() {}

		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file) {

			if( ParameterListPtr != NULL) {
				
				ParameterListPtr->render_asm(file);
				parameter_no++;
			}
				
		
		}

};










class ParameterTypeList : public Node {
	private:
		ParameterList* ParameterListPtr;
		std::string* ELLIPSIS;
	public:
		ParameterTypeList(ParameterList* ParameterListPtr , std::string* ELLIPSIS) : ParameterListPtr(ParameterListPtr) , ELLIPSIS(ELLIPSIS) {}
		
		~ParameterTypeList() {}

		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file) {

			if( ParameterListPtr != NULL) {
				ParameterListPtr->render_asm(file);
			}
			 			
		
		}

};






class DirectDeclarator : public Node {

	private:
		std::string* IDENTIFIER;
		ConstantExpression* ConstantExpRession;
		ParameterTypeList* ParameterTypeLiSt;
		IdentifierList* IDentifierList;
		DirectDeclarator* DirectDeclaratorPtr;
		Declarator* DeclaratorPtr;

	public:

		DirectDeclarator( std::string* IDENTIFIER, ConstantExpression* ConstantExpRession, ParameterTypeList* ParameterTypeLiSt, IdentifierList* IDentifierList, DirectDeclarator* DirectDeclaratorPtr, Declarator* DeclaratorPtr) :
	
				IDENTIFIER(IDENTIFIER) , ConstantExpRession(ConstantExpRession), ParameterTypeLiSt(ParameterTypeLiSt), IDentifierList(IDentifierList),
				DirectDeclaratorPtr(DirectDeclaratorPtr) , DeclaratorPtr(DeclaratorPtr) {

										}

		void print_py(std::ofstream& file, bool initialized=false, bool function=false) ;



		void render_asm(std::ofstream& file, bool initialized=false, bool function=false) ;
	
		~DirectDeclarator() {}

};


		



class Declarator : public Node {

	private:
		Pointer* PoinTer;
		DirectDeclarator* DirectDecLarator;
		Declarator* DeclaratorPtr;

	public:
	
		Declarator(Pointer* PoinTer, DirectDeclarator* DirectDecLarator, Declarator* DeclaratorPtr) : PoinTer(PoinTer) , DirectDecLarator(DirectDecLarator)  , DeclaratorPtr(DeclaratorPtr) {}

		void print_py(std::ofstream& file, bool initialized=false, bool function=false) ;


		void render_asm(std::ofstream& file, bool initialized=false, bool function=false) ;

		~Declarator() {}



};








class Initializer : public Node {
	
	private:
		AssignmentExpression* AssignmentExpressionPtr;
		Initializer* InitializerListPtr;
	public:
		Initializer(AssignmentExpression* AssignmentExpressionPtr, Initializer* InitializerListPtr) : 
			AssignmentExpressionPtr(AssignmentExpressionPtr) , InitializerListPtr(InitializerListPtr) {}

		~Initializer() {}

		void print_py(std::ofstream& file) ;

	
		void render_asm(std::ofstream& file) {

			if(InitializerListPtr != NULL ) {
				InitializerListPtr->render_asm(file);
			}
			AssignmentExpressionPtr->render_asm(file);
		}
			

};








class InitDeclarator : public Node {

	private:
		Declarator* DecLarator;
		Initializer* InitiaLizer;

	public:
		InitDeclarator( Declarator* DecLarator, Initializer* InitiaLizer) : DecLarator(DecLarator)  ,InitiaLizer(InitiaLizer) {}

		void print_py(std::ofstream& file) ;

		~InitDeclarator() {}


		void render_asm(std::ofstream& file) {

			
			if( InitiaLizer != NULL ) {
				DecLarator->render_asm(file,true,function);	// The boolean variable was 'initialized' set to false by default
				InitiaLizer->render_asm(file);
			}
			else{
				DecLarator->render_asm(file,false,function);
			
			}
		}
};








class InitDeclaratorList : public Node {

	private:
		InitDeclarator* InitDecLarator;
		InitDeclaratorList* InitDeclaratorListPtr;

	public:

		InitDeclaratorList(InitDeclarator* InitDecLarator, InitDeclaratorList* InitDeclaratorListPtr) : InitDecLarator(InitDecLarator), InitDeclaratorListPtr(InitDeclaratorListPtr) {}

		~InitDeclaratorList() {}

		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file) {				//Traversing through all of the declarations in the program sequentially as they appear in source code

			if( InitDeclaratorListPtr != NULL) {
				InitDeclaratorListPtr->render_asm(file);
			}
			InitDecLarator->render_asm(file);
		}

};









class StorageClassSpecifiers : public Node {

	private:
		std::string* TYPES;

	public:
		
		StorageClassSpecifiers(std::string* TYPES) : TYPES(TYPES) {}

	
		void print_py(std::ofstream& file) ;

		~StorageClassSpecifiers() {}


		void render_asm(std::ofstream& file) {}
					 
					

};






		


class StructDeclarator : public Node { 
	
	private:
		ConstantExpression* CoNstantExpression;
		
	public:
		StructDeclarator( ConstantExpression* CoNstantExpression) : CoNstantExpression(CoNstantExpression) {}

		~StructDeclarator() {}

};








class StructDeclaratorList : public Node {
	
	private:
		StructDeclarator* StructDecLarator;
		
	public:
		StructDeclaratorList(StructDeclarator* StructDecLarator) : StructDecLarator(StructDecLarator) {}

		~StructDeclaratorList() {}

};








class StructDeclaration : public Node {

	private:
		SpecifierQualifierList* SpeciFierQualifierList;
		StructDeclaratorList* StrucTDeclaratorList;

	public:

		StructDeclaration( SpecifierQualifierList* SpeciFierQualifierList, StructDeclaratorList* StrucTDeclaratorList ) :
	
					SpeciFierQualifierList(SpeciFierQualifierList) , StrucTDeclaratorList(StrucTDeclaratorList) {}

		~StructDeclaration() {}

};









class StructDeclarationList : public Node {

	private:
		StructDeclaration* StrucTDeclaration;
	
	public:
		StructDeclarationList( StructDeclaration* StrucTDeclaration ) : StrucTDeclaration(StrucTDeclaration) {}

		~StructDeclarationList() {}

};







class StructOrUnion : public Node {

	private:
		std::string* TYPES;

	public:

		StructOrUnion(std::string* TYPES) : TYPES(TYPES) {}

		~StructOrUnion() {}

};








class StructOrUnionSpecifier : public Node {

	private:
		StructOrUnion* StructORUnion;
		std::string* IDENTIFIER;
		StructDeclarationList* StructDecLarationList;
	
	public:
		StructOrUnionSpecifier( StructOrUnion* StructORUnion, std::string* IDENTIFIER, StructDeclarationList* StructDecLarationList ) :

					StructORUnion(StructORUnion) , IDENTIFIER(IDENTIFIER), StructDecLarationList(StructDecLarationList) {}

		~StructOrUnionSpecifier() {}

};





class Enum : public Node {};
class EnumeratorList : public Node {};






class EnumSpecifier : public Node {

	private:
		Enum* ENum;
		EnumeratorList* ENumeratorList;
		std::string* IDENTIFIER;

	public:

		EnumSpecifier( Enum* ENum, EnumeratorList* ENumeratorList, std::string* IDENTIFIER) : ENum(ENum) , ENumeratorList(ENumeratorList), IDENTIFIER(IDENTIFIER) {}

		~EnumSpecifier() {}

};








class TypeSpecifier : public Node {

	private:
		std::string* TYPES;
		StructOrUnionSpecifier* StructORUnionSpeCifier;
		EnumSpecifier* EnumSpec;
		
	public:

		TypeSpecifier(std::string* TYPES) : TYPES(TYPES) {}

		TypeSpecifier(StructOrUnionSpecifier* StructORUnionSpeCifier) : StructORUnionSpeCifier(StructORUnionSpeCifier) {}

		TypeSpecifier(EnumSpecifier* EnumSpec) : EnumSpec(EnumSpec) {}


		void render_asm(std::ofstream& file) {
			std::string types = *TYPES;			// Require conversion to be used

				if (types=="char"){
					temp.word_size = 1;
				}
				else if (types=="short"){
					temp.word_size = 2;
				}
				else if (types=="int"){
					temp.word_size = 4;
				}	
				else if (types=="long"){
					temp.word_size = 4;
				}
				else if (types=="float"){
					temp.word_size = 4;
				}
				else if (types=="double"){
					temp.word_size = 8;
				}	
				else if (types=="signed"){
					temp.word_size = 4;
				}	
				else if (types=="unsigned"){
					temp.word_size = 4;
				}
		}

		~TypeSpecifier() {}

};








class TypeQualifier : public Node {

	private:
		std::string* TYPES;

	public:
		TypeQualifier( std::string* TYPES) : TYPES(TYPES) {} 


		~TypeQualifier() {}

};








class DeclarationSpecifiers : public Node{

	private:
		StorageClassSpecifiers* StorageClassSpec;
		TypeSpecifier* TypeSpec;
		TypeQualifier* TypeQuaLifier;

	public:

		DeclarationSpecifiers( StorageClassSpecifiers* StorageClassSpec, TypeSpecifier* TypeSpec, TypeQualifier* TypeQuaLifier) :

					StorageClassSpec(StorageClassSpec) , TypeSpec(TypeSpec), TypeQuaLifier(TypeQuaLifier) {}


		~DeclarationSpecifiers() {}


		void render_asm(std::ofstream& file) {

			if(StorageClassSpec != NULL) {
				//StorageClassSpec->render_asm(file);	 //TODO: may have to implement this
			}
			else if(TypeSpec != NULL) {
				TypeSpec->render_asm(file); 
			}
			else if(TypeQuaLifier != NULL) {
				//TypeQuaLifier->render_asm(file); //TODO: may have to implement this
			}
		}

};










class Declaration : public Node {

	private:

		DeclarationSpecifiers* DeclSpec;
		InitDeclaratorList* DeclList;

	public:

		Declaration(DeclarationSpecifiers* DeclSpec, InitDeclaratorList* DeclList ) : DeclSpec(DeclSpec) , DeclList(DeclList) {}



		void print_py(std::ofstream& file);

	
		void render_asm(std::ofstream& file) {

			DeclSpec->render_asm(file);  // Obtain size of the data type of the variable
			DeclList->render_asm(file);  // Obtain name and value of the variable

			file << std::endl << "\t.data";
			file << std::endl << "\t.globl\t" << temp.id;
			if( log2(temp.word_size) ){
				file << std::endl << "\t.align\t" << log2(temp.word_size);
			}
			file << std::endl << "\t.type\t" << temp.id << ", @object";
			file << std::endl << "\t.size\t" << temp.id << ", " << temp.word_size;
			file << std::endl << temp.id << ":";
			if( temp.word_size > 4 ){
				int maxValue = pow(2,32);					//max value that can be stored
				file << std::endl << "\t.word\t" << (temp.value / maxValue);
				file << std::endl << "\t.word\t" << (temp.value % maxValue);
			}
			else if(temp.word_size==4){
				file << std::endl << "\t.word\t" << temp.value;
			}
			else if(temp.word_size==2){
				file << std::endl << "\t.half\t" << temp.value;
			}
			else if(temp.word_size==1){
				file << std::endl << "\t.byte\t" << temp.value;
			}

			Variables.push_back(temp);

			temp.word_size = 0;
			temp.id = "";
			//temp.value = 0;

		}


		virtual ~Declaration() {}
 };










class JumpStatement : public Node {

	private:
		std::string* IDENTIFIER;
		AssignmentExpression* AssignmentExpressionPtr;
		std::string* JUMP_TYPE;
	public:
		JumpStatement( std::string* IDENTIFIER , AssignmentExpression* AssignmentExpressionPtr, std::string* JUMP_TYPE) : IDENTIFIER(IDENTIFIER) , AssignmentExpressionPtr(AssignmentExpressionPtr) , JUMP_TYPE(JUMP_TYPE) {}

		~JumpStatement() {}

		void print_py(std::ofstream& file) ;

};









class IterationStatement : public Node {

	private:
		AssignmentExpression* AssignmentExpressionPtr;
		Statement* StatementPtr;
		ExpressionStatement* ExpressionStatementPtr;
		ExpressionStatement* ExpressionStatementPtr2;
		std::string* ITERATIVE_TYPE;
		
	public:
		IterationStatement(AssignmentExpression* AssignmentExpressionPtr , Statement* StatementPtr, ExpressionStatement* ExpressionStatementPtr, ExpressionStatement* ExpressionStatementPtr2, std::string* ITERATIVE_TYPE) : AssignmentExpressionPtr(AssignmentExpressionPtr) , StatementPtr(StatementPtr) , ExpressionStatementPtr(ExpressionStatementPtr) , ExpressionStatementPtr2(ExpressionStatementPtr2) , ITERATIVE_TYPE(ITERATIVE_TYPE) {}

		~IterationStatement() {}

		void print_py(std::ofstream& file) ;

};
	



	



class SelectionStatement : public Node {

	private:
		AssignmentExpression* AssignmentExpressionPtr;
		Statement* StatementPtr;
		Statement* StatementPtr2;
		std::string* SELECTIVE_IF;
		std::string* SELECTIVE_ELSE;
		std::string* SELECTIVE_SWITCH;
	public:
		SelectionStatement(AssignmentExpression* AssignmentExpressionPtr , Statement* StatementPtr, Statement* StatementPtr2, std::string* SELECTIVE_IF, std::string* SELECTIVE_ELSE , std::string* SELECTIVE_SWITCH) : AssignmentExpressionPtr(AssignmentExpressionPtr) , StatementPtr(StatementPtr) , StatementPtr2(StatementPtr2) ,SELECTIVE_IF(SELECTIVE_IF) , 
			SELECTIVE_ELSE(SELECTIVE_ELSE) , SELECTIVE_SWITCH(SELECTIVE_SWITCH) {}

		~SelectionStatement() {}

		void print_py(std::ofstream& file,bool elseif=false) ;

		std::string* get_info() ;
		

};










class ExpressionStatement : public Node {

	private:
		AssignmentExpression* AssignmentExpressionPtr;
		
	public:
		ExpressionStatement(AssignmentExpression* AssignmentExpressionPtr) : AssignmentExpressionPtr(AssignmentExpressionPtr) {}

		~ExpressionStatement() {}

		void print_py(std::ofstream& file) ;

};










class DeclarationList : public Node {

	private:
		Declaration* DeclarationPtr;
		DeclarationList* DeclarationListPtr;

	public:
		DeclarationList(Declaration* DeclarationPtr, DeclarationList* DeclarationListPtr) : 	DeclarationPtr(DeclarationPtr) , DeclarationListPtr(DeclarationListPtr) {}

		~DeclarationList() {}

		void print_py(std::ofstream& file) ;

};
	








class LabeledStatement : public Node {
	
	private:
		std::string* IDENTIFIER;
		std::string* LABELED_TYPE;
		ConstantExpression* ConstantExpressionPtr;
		Statement* StatementPtr;
	
	public:
		LabeledStatement(std::string* IDENTIFIER , std::string* LABELED_TYPE, ConstantExpression* ConstantExpressionPtr , Statement* StatementPtr) :
		
			IDENTIFIER(IDENTIFIER) , ConstantExpressionPtr(ConstantExpressionPtr) , StatementPtr(StatementPtr) , LABELED_TYPE(LABELED_TYPE)  {}

		~LabeledStatement() {}

		void print_py(std::ofstream& file) {}
};








		


class Statement : public Node {
	
	private:
		LabeledStatement*  LabeledStatementPtr;
		CompoundStatement* CompoundStatementPtr;
		ExpressionStatement* ExpressionStatementPtr;
		
		IterationStatement* IterationStatementPtr;
		JumpStatement* JumpStatementPtr;
	public:
		SelectionStatement* SelectionStatementPtr;

	public:
		Statement( LabeledStatement*  LabeledStatementPtr , CompoundStatement* CompoundStatementPtr , ExpressionStatement* ExpressionStatementPtr , 
				SelectionStatement* SelectionStatementPtr , IterationStatement* IterationStatementPtr , JumpStatement* JumpStatementPtr ) :
				LabeledStatementPtr(LabeledStatementPtr) , CompoundStatementPtr(CompoundStatementPtr) , ExpressionStatementPtr(ExpressionStatementPtr) ,
				SelectionStatementPtr(SelectionStatementPtr) , IterationStatementPtr(IterationStatementPtr) , JumpStatementPtr(JumpStatementPtr) {}

		~Statement() {}

		void print_py(std::ofstream& file,bool elseif=false);	
	
		std::string* get_info() ;
				

};








class StatementList : public Node {

	private:
		Statement* StatementPtr;
		StatementList* StatementListPtr;

	public:
		StatementList(Statement* StatementPtr, StatementList* StatementListPtr) : StatementPtr(StatementPtr) , StatementListPtr(StatementListPtr) {}

		~StatementList() {}

		void print_py(std::ofstream& file) ;
				

};









class CompoundStatement : public Node {
	
	private:
		StatementList* StatementListPtr;
		DeclarationList* DeclarationListPtr;

	public:

		CompoundStatement( StatementList* StatementListPtr , DeclarationList* DeclarationListPtr) : StatementListPtr(StatementListPtr) , DeclarationListPtr(DeclarationListPtr) {}

		~CompoundStatement() {}

		void print_py(std::ofstream& file, bool initialized=false, bool function=true) ;

};









class FunctionDefinition : public Node {

	private:
		DeclarationSpecifiers* DeclarationSpecifiersPtr;  //get the return value type to be placed in $2
		Declarator* DeclaratorPtr;			  //get the label of the function to be written to the asm file
		DeclarationList* DeclarationListPtr;		 // get the number and type of the parameters to be passed ( so to adjust the stack poinyter)
		CompoundStatement* CompoundStatementPtr;	 // execute the instructions
	
	public:
		FunctionDefinition( DeclarationSpecifiers* DeclarationSpecifiersPtr, Declarator* DeclaratorPtr, DeclarationList* DeclarationListPtr, CompoundStatement* CompoundStatementPtr) :
	
				DeclarationSpecifiersPtr(DeclarationSpecifiersPtr), DeclaratorPtr(DeclaratorPtr), DeclarationListPtr(DeclarationListPtr), CompoundStatementPtr(CompoundStatementPtr) {}

		~FunctionDefinition() {}


		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file) {

			if( DeclarationSpecifiersPtr != NULL ) {
										//do-nothing because it is not significant in our case (only int/void)
			}

			if( DeclaratorPtr != NULL ) {				//handles printing function name
				
				DeclaratorPtr->render_asm(file,false,true);
			}

			/*if( DeclarationListPtr != NULL ) {   			//( functions having parameters )
				ParametrizedFunction = true;
				DeclarationListPtr->print_py(file);
			}

			if( CompoundStatementPtr != NULL ) {
			
				CompoundStatementPtr->print_py(file,false,true);
			}*/
			
			file << "\t.set\t macro" << std::endl;
			file << "\t.set\t reorder" << std::endl;
			file << "\t.end\t " << funct_id << std::endl;
			file << "\t.size\t " << funct_id << ", .-" << funct_id << std::endl;
			
				
		}


			
};


class ExternalDeclaration : public Node {
	
	private:

	FunctionDefinition* FunctionDef;
	Declaration* DecLaration;
	ExternalDeclaration* ExternalDeclarationPtr;
	std::string* PreprocessorPtr;

	public:
		ExternalDeclaration(FunctionDefinition* FunctionDef, Declaration* DecLaration, ExternalDeclaration* ExternalDeclarationPtr, std::string* PreprocessorPtr) : FunctionDef(FunctionDef),  DecLaration(DecLaration) , ExternalDeclarationPtr(ExternalDeclarationPtr) , PreprocessorPtr(PreprocessorPtr){}


		
		void print_py(std::ofstream& file) ;
		
		void render_asm(std::ofstream& file) {

			if( ExternalDeclarationPtr != NULL ) {
				ExternalDeclarationPtr->render_asm(file);

			}

			if ( DecLaration  == NULL && FunctionDef != NULL){
				function = true;
				file << std::endl;
				FunctionDef->render_asm(file);
				file << std::endl;
				function = false;
			}

			if ( FunctionDef  == NULL && DecLaration != NULL){
				function = false;
				file << std::endl;
				DecLaration->render_asm(file);			// This path is taken for global declarations that are not functions
				file << std::endl;
			}
		}
			

		 virtual ~ExternalDeclaration() {}

};








class TranslationUnit : public Node{

	private:

	
	ExternalDeclaration* ExternalDecl;

	public:

    		TranslationUnit(ExternalDeclaration* ExternalDecl) :  ExternalDecl(ExternalDecl) {}

		virtual void print_py(std::string file_name) const ;

		virtual void render_asm(std::string file_name) const {

			std::ofstream file;
			file.open(file_name.c_str());

			std::string new_file_name = "";

			for(int i(0); i < file_name.size(); ++i) {
				if(file_name[i] != '.') {
					new_file_name += file_name[i];
				}
				else{
					break;
				}
			}
			file << "\t.file 1 " << "\"" << new_file_name << ".c\"" << std::endl;
			file << "\t.section .mdebug.abi32" << std::endl;
			file << "\t.previous" <<std::endl;
			file << "\t.nan legacy" << std::endl;
			file << "\t.module fp=xx" << std::endl;
			file << "\t.module nooddspreg" << std::endl;
			file << "\t.abicalls" << std::endl;
			//file << "\t.text" << std::endl; // this may cause problems
			ExternalDecl->render_asm(file);
		
		}

		 virtual ~TranslationUnit() {}
};

inline void DirectDeclarator::render_asm(std::ofstream& file, bool initialized, bool function) {

	
			if( DirectDeclaratorPtr != NULL) {

				DirectDeclaratorPtr->render_asm(file,initialized,function);
			}

			if(!function) {

				if(IDENTIFIER != NULL){
					temp.id = *IDENTIFIER;

					if( !initialized ) {
	
						temp.value = 0;
					}
				}
	
				

			}
			
			else{
			if(function){
				if( IDENTIFIER != NULL ) {
					
					file << std::endl;
					file << "\t.align\t2" << std::endl; 
					file << "\t.globl\t" << *IDENTIFIER << std::endl;
					file << "\t.set\t" << "nomips16" << std::endl;
					file << "\t.set\t" << "nomicromips" << std::endl;
					file << "\t.ent\t" << *IDENTIFIER << std::endl;
					file << "\t.type\t" << *IDENTIFIER << "," << " @function" << std::endl;
					file << *IDENTIFIER << ":" << std::endl;
					funct_id = *IDENTIFIER;

				}
			
				if( ParameterTypeLiSt != NULL) {
					ParameterTypeLiSt->render_asm(file);
					file << "\t.set\tnoreorder" << std::endl;
					file << "\t.set\tnomacro" << std::endl;
					file << "\taddiu\t$sp,$sp,-"<< (4*parameter_no) << std::endl; 
					
				}
				/*else if( IDentifierList != NULL) {
					IDentifierList->print_py(file);
				}*/

			}

		}
}		



inline void Declarator::render_asm(std::ofstream& file, bool initialized, bool function) {

			if( DeclaratorPtr != NULL) {
				DeclaratorPtr->render_asm(file,initialized,function);
			}
			DirectDecLarator->render_asm(file,initialized,function);
		}





inline void PostFixExpression::render_asm(std::ofstream& file) {

			if(PostFixExpressionPtr != NULL) {

				PostFixExpressionPtr->render_asm(file);
			}

			if( PrimaryExpressionPtr != NULL ) {

				PrimaryExpressionPtr->render_asm(file);
			}
}


inline void PrimaryExpression::render_asm(std::ofstream& file)  {
			if( AssignmentExpressionPtr != NULL ) {

				AssignmentExpressionPtr->render_asm(file);
			}

			if( IDENTIFIER != NULL ) {

				for( int i(Variables.size()-1); i >= 0; i--){
					if(*IDENTIFIER == Variables[i].id){
						temp.value = Variables[i].value;
					}

				}
			}

			if( CONSTANT != NULL ) {
				std::string constant = *CONSTANT;
				temp.value = std::stod(constant);
				
			}

		}
inline void ConditionalExpression::render_asm(std::ofstream& file) {
			if( ExpressioN != NULL ) {
				ExpressioN->render_asm(file);
			}

			if( LogicalORExpression != NULL ) {
				LogicalORExpression->render_asm(file);
			}
		}

inline void AssignmentExpression::render_asm(std::ofstream& file)  {


			if(AssignmentExpressionPtr != NULL) {

				AssignmentExpressionPtr->render_asm(file);
			}

			if(UnaryExpressionPtr != NULL) {
		
				UnaryExpressionPtr->render_asm(file);			//TODO: This is for identifier names and values

			}
	
			else if(ConditionalExpressionPtr != NULL) {

				ConditionalExpressionPtr->render_asm(file);		//THIS IS FOR IF STATEMENTS/ LOGICAL / ARITHMETIC OPERATIONS / ASSIGNEMENTS

			}

		}



#endif
