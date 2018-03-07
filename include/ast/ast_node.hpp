#ifndef ast_node_hpp
#define ast_node_hpp

#include <string>
#include <iostream>
#include <memory>
#include <fstream>
#include <vector>
#include <cmath>

#include "class_forward_declarations.hpp"

static Context contxt;

class SpecifierQualifierList : public Node {};
class Init_Declaration_List : public Node {};
class InclusiveAndExpression : public Node {};
class TypeName : public Node {};



class Pointer : public Node {

	private:
		Pointer* PointerPtr;
		TypeQualifier* TypeQualifierPtr;

	public:
		Pointer( Pointer* PointerPtr , TypeQualifier* TypeQualifierPtr ) : PointerPtr(PointerPtr) , TypeQualifierPtr(TypeQualifierPtr) {}

		~Pointer() {}

};




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

		void render_asm(std::ofstream& file,Context& contxt) ; 
		
		

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

		void render_asm(std::ofstream& file,Context& contxt); 

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


		void render_asm(std::ofstream& file,Context& contxt) ; 


};

class CastExpression : public Node {

	private:
		UnaryExpression* UNaryExpression;
		TypeName* TYpeName;

	public:
		CastExpression( UnaryExpression* UNaryExpression, TypeName* TYpeName) : UNaryExpression(UNaryExpression) , TYpeName(TYpeName) {}

		~CastExpression() {}

		void print_py(std::ofstream& file);

		void render_asm(std::ofstream& file,Context& contxt) ;
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

		void render_asm(std::ofstream& file,Context& contxt) ;
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

		void render_asm(std::ofstream& file,Context& contxt) ;

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

		void render_asm(std::ofstream& file,Context& contxt) ;


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

		void render_asm(std::ofstream& file,Context& contxt);


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

		void render_asm(std::ofstream& file,Context& contxt) ;

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

		
		void render_asm(std::ofstream& file,Context& contxt) ;


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

		void render_asm(std::ofstream& file,Context& contxt) ;

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

		void render_asm(std::ofstream& file,Context& contxt);
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

		void render_asm(std::ofstream& file,Context& contxt) ;
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

		void render_asm(std::ofstream& file,Context& contxt) ;
			
			
};

class ConditionalExpression : public Node {

	private:
		LogicalOrExpression* LogicalORExpression;
		AssignmentExpression* ExpressioN;

	public:

		ConditionalExpression( LogicalOrExpression* LogicalORExpression, AssignmentExpression* ExpressioN) : LogicalORExpression(LogicalORExpression),  ExpressioN(ExpressioN) {}

		~ConditionalExpression() {}

		void print_py(std::ofstream& file);

		void render_asm(std::ofstream& file,Context& contxt) ;
			

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


		void render_asm(std::ofstream& file,Context& contxt) ; 
};






class ConstantExpression : public Node {

	private:
		ConditionalExpression* ConditionalExpressionPtr;

	public:
		ConstantExpression( ConditionalExpression* ConditionalExpressionPtr ) : ConditionalExpressionPtr(ConditionalExpressionPtr) {}

		~ConstantExpression() {}

};




class IdentifierList : public Node {

	private:
		std::string* IDENTIFIER;
		IdentifierList* IdentifierListPtr;
	public:
		IdentifierList(std::string* IDENTIFIER , IdentifierList* IdentifierListPtr) : IDENTIFIER(IDENTIFIER) , IdentifierListPtr(IdentifierListPtr) {}

		void print_py(std::ofstream& file) ;


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

		void render_asm(std::ofstream& file,Context& contxt) ; 

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

		void render_asm(std::ofstream& file,Context& contxt) {

			if( ParameterListPtr != NULL) {
				
				ParameterListPtr->render_asm(file,contxt);
				
			}
			ParameterDeclarationPtr->render_asm(file,contxt);
			
			
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

		void render_asm(std::ofstream& file,Context& contxt) {

			if( ParameterListPtr != NULL) {
				ParameterListPtr->render_asm(file,contxt);
			}
			 			
		
		}

};


class DeclarationList : public Node {

	private:
		Declaration* DeclarationPtr;
		DeclarationList* DeclarationListPtr;

	public:
		DeclarationList(Declaration* DeclarationPtr, DeclarationList* DeclarationListPtr) : 	DeclarationPtr(DeclarationPtr) , DeclarationListPtr(DeclarationListPtr) {}

		~DeclarationList() {}

		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file,Context& contxt); 

};



class DirectDeclarator : public Node {

	private:
		
		ConstantExpression* ConstantExpRession;
		ParameterTypeList* ParameterTypeLiSt;
		IdentifierList* IDentifierList;
		DirectDeclarator* DirectDeclaratorPtr;
		Declarator* DeclaratorPtr;

	public:
		std::string* IDENTIFIER;

		DirectDeclarator( std::string* IDENTIFIER, ConstantExpression* ConstantExpRession, ParameterTypeList* ParameterTypeLiSt, IdentifierList* IDentifierList, DirectDeclarator* DirectDeclaratorPtr, Declarator* DeclaratorPtr) :
	
				IDENTIFIER(IDENTIFIER) , ConstantExpRession(ConstantExpRession), ParameterTypeLiSt(ParameterTypeLiSt), IDentifierList(IDentifierList),
				DirectDeclaratorPtr(DirectDeclaratorPtr) , DeclaratorPtr(DeclaratorPtr) {

										}

		void print_py(std::ofstream& file, bool initialized=false, bool function=false) ;



		void render_asm(std::ofstream& file,Context& contxt) ;
	
		~DirectDeclarator() {}

};


		



class Declarator : public Node {

	public:
		Pointer* PoinTer;
		DirectDeclarator* DirectDecLarator;
		Declarator* DeclaratorPtr;

	public:
	
		Declarator(Pointer* PoinTer, DirectDeclarator* DirectDecLarator, Declarator* DeclaratorPtr) : PoinTer(PoinTer) , DirectDecLarator(DirectDecLarator)  , DeclaratorPtr(DeclaratorPtr) {}

		void print_py(std::ofstream& file, bool initialized=false, bool function=false) ;


		void render_asm(std::ofstream& file,Context& contxt) ;

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

	
		void render_asm(std::ofstream& file,Context& contxt) {

			if(InitializerListPtr != NULL ) {
				InitializerListPtr->render_asm(file,contxt);
			}

			if( AssignmentExpressionPtr != NULL) {
				
				AssignmentExpressionPtr->render_asm(file,contxt);
			}
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


		void render_asm(std::ofstream& file,Context& contxt) {

			
			if( InitiaLizer != NULL && DecLarator != NULL) {
				contxt.initialized = true;
				
				/*for(int i=0; i<contxt.Variables.size(); i++) {	//Predict the signedness of LHS, made DirectDeclarator members public...
					std::cout << contxt.Variables[i].id << contxt.Variables[i].DataType << std::endl;				
					if(*(DecLarator->DirectDecLarator->IDENTIFIER) == contxt.Variables[i].id) {
						if(contxt.Variables[i].DataType == "unsigned") {
							contxt.is_unsigned = true;
						}
					}
				}*/

				
				contxt.rhs_of_expression = true;
				InitiaLizer->render_asm(file,contxt);
				contxt.rhs_of_expression = false;

				contxt.lhs_of_assignment = true;
				DecLarator->render_asm(file,contxt);	// The boolean variable was 'initialized' set to false by default
				contxt.lhs_of_assignment = false;
				
				contxt.initialized = false;
				
			}
			else if(DecLarator != NULL &&  InitiaLizer == NULL){
				contxt.initialized = false;
				contxt.lhs_of_assignment=true;
				DecLarator->render_asm(file,contxt);
				contxt.lhs_of_assignment=false;
				//contxt.is_unsigned = false;
			}
			contxt.is_unsigned = false;
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

		void render_asm(std::ofstream& file,Context& contxt) {		//Traversing through all of the declarations in the program sequentially as they appear in source code

			if( InitDeclaratorListPtr != NULL) {
				InitDeclaratorListPtr->render_asm(file,contxt);
				
			}
			InitDecLarator->render_asm(file,contxt);
			if(!contxt.function) {
				 	
				file << std::endl << "\t.data";
				file << std::endl << "\t.globl\t" << contxt.variable.id;
				if( log2(contxt.variable.word_size) ){
					file << std::endl << "\t.align\t" << log2(contxt.variable.word_size);
				}
				file << std::endl << "\t.type\t" << contxt.variable.id << ", @object";
				file << std::endl << "\t.size\t" << contxt.variable.id << ", " << contxt.variable.word_size;
				file << std::endl << contxt.variable.id << ":";
				if( contxt.variable.word_size > 4 ){					
					file << std::endl << "\t.double\t" << contxt.variable.value ; 	//TODO: Convert to IEEE-754 for FLOAT and DOUBLE
				}
				else if( (contxt.variable.word_size==4) && !contxt.float_){
					file << std::endl << "\t.word\t" << contxt.variable.value;
				}
				else if( (contxt.variable.word_size==4) && contxt.float_){
					file << std::endl << "\t.float\t" << contxt.variable.value;
					contxt.float_ = false;
				}
				else if(contxt.variable.word_size==2){
					file << std::endl << "\t.half\t" << contxt.variable.value;
				}
				else if(contxt.variable.word_size==1){
					file << std::endl << "\t.byte\t" << contxt.variable.value;
				}
				
			}

		}

};









class StorageClassSpecifiers : public Node {

	private:
		std::string* TYPES;

	public:
		
		StorageClassSpecifiers(std::string* TYPES) : TYPES(TYPES) {}

	
		void print_py(std::ofstream& file) ;

		~StorageClassSpecifiers() {}


		void render_asm(std::ofstream& file,Context& contxt) {}
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


		void render_asm(std::ofstream& file,Context& contxt) {
			std::string types = *TYPES;			// Require conversion to be used

				if (types=="char"){
					contxt.variable.word_size = 4;				///it should be size=1, you need lb and sb
					contxt.variable.DataType = "char";
					contxt.is_char = true;
				}
				else if (types=="short"){
					contxt.variable.word_size = 2;
					contxt.variable.DataType = "short";
				}
				else if (types=="int"){
					contxt.variable.word_size = 4;
					contxt.variable.DataType = "int";
				}	
				else if (types=="long"){
					contxt.variable.word_size = 4;
					contxt.variable.DataType = "long";
				}
				else if (types=="float"){
					contxt.variable.word_size = 4;
					contxt.variable.DataType = "float";
					contxt.float_ = true;
				}
				else if (types=="double"){
					contxt.variable.word_size = 8;
					contxt.variable.DataType = "double";
				}	
				else if (types=="signed"){
					contxt.variable.word_size = 4;
					contxt.variable.DataType = "signed";
				}	
				else if (types=="unsigned"){
					contxt.variable.word_size = 4;
					contxt.variable.DataType = "unsigned";
					contxt.is_unsigned = true;
				}

				if(contxt.reading) { //this is predicting total stack frame for all paramters/local declarations in function body
					contxt.variable.offset = contxt.totalStackArea;
					contxt.totalStackArea += contxt.variable.word_size;
					//file << "\nonly golbals get here " << contxt.totalStackArea << "\n";

				}

				if(!contxt.reading){ //this is execution

					contxt.StackOffset += contxt.variable.word_size;
					contxt.variable.offset = contxt.StackOffset-contxt.variable.word_size;
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


		void render_asm(std::ofstream& file,Context& contxt) {

			if(StorageClassSpec != NULL) {
				//StorageClassSpec->render_asm(file,contxt);	 //TODO: may have to implement this
			}
			else if(TypeSpec != NULL) {
				TypeSpec->render_asm(file,contxt); 
			}
			else if(TypeQuaLifier != NULL) {
				//TypeQuaLifier->render_asm(file,contxt); //TODO: may have to implement this
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

	
		void render_asm(std::ofstream& file,Context& contxt) {

			DeclSpec->render_asm(file,contxt);  // Obtain size of the data type of the variable

			if( DeclList != NULL) {
				DeclList->render_asm(file,contxt);  // Obtain name and value of the variable
			}
			
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


		void render_asm(std::ofstream& file,Context& contxt) {
			if( IDENTIFIER != NULL && JUMP_TYPE != NULL && *JUMP_TYPE == "goto" && AssignmentExpressionPtr == NULL) {
				file << std::endl << "\tj\t" << *IDENTIFIER;
				file << std::endl << "\tnop";
			}
			/*else if( IDENTIFIER != NULL && JUMP_TYPE != NULL && *JUMP_TYPE == "continue") {
				file << std::endl << "\tj\t"  << //The label of the loop
				file << std::endl << "\tnop";
			}*/
			/*else if( IDENTIFIER != NULL && JUMP_TYPE != NULL && *JUMP_TYPE == "break") {
				file << std::endl << "\tj\t" << //The label of the loopend
				file << std::endl << "\tnop";
			}*/
			else if( IDENTIFIER == NULL && JUMP_TYPE != NULL && *JUMP_TYPE == "return" && AssignmentExpressionPtr != NULL) {
				contxt.rhs_of_expression = true;
				AssignmentExpressionPtr->render_asm(file,contxt);
				contxt.rhs_of_expression = false;
		}
	}
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

		void render_asm(std::ofstream& file, Context& contxt){
			file << "\nIterationStatement ~line1420\n";
		}
};
	
class SelectionStatement : public Node {

	public:
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

		void render_asm(std::ofstream& file,Context& contxt) ;
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
	
	public:
		LabeledStatement*  LabeledStatementPtr;
		CompoundStatement* CompoundStatementPtr;
		ExpressionStatement* ExpressionStatementPtr;
		
		IterationStatement* IterationStatementPtr;
		JumpStatement* JumpStatementPtr;
	
		SelectionStatement* SelectionStatementPtr;

	public:
		Statement( LabeledStatement*  LabeledStatementPtr , CompoundStatement* CompoundStatementPtr , ExpressionStatement* ExpressionStatementPtr , 
				SelectionStatement* SelectionStatementPtr , IterationStatement* IterationStatementPtr , JumpStatement* JumpStatementPtr ) :
				LabeledStatementPtr(LabeledStatementPtr) , CompoundStatementPtr(CompoundStatementPtr) , ExpressionStatementPtr(ExpressionStatementPtr) ,
				SelectionStatementPtr(SelectionStatementPtr) , IterationStatementPtr(IterationStatementPtr) , JumpStatementPtr(JumpStatementPtr) {}

		~Statement() {}

		void print_py(std::ofstream& file,bool elseif=false);	
	
		std::string* get_info() ;

		void render_asm(std::ofstream& file,Context& contxt) ;

};

class StatementList : public Node {

	private:
		Statement* StatementPtr;
		StatementList* StatementListPtr;

	public:
		StatementList(Statement* StatementPtr, StatementList* StatementListPtr) : StatementPtr(StatementPtr) , StatementListPtr(StatementListPtr) {}

		~StatementList() {}

		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file,Context& contxt) {

			if( StatementListPtr != NULL){
				StatementListPtr->render_asm(file,contxt);
			}
			StatementPtr->render_asm(file,contxt);
		}
};

class CompoundStatement : public Node {
	
	private:
		StatementList* StatementListPtr;
		DeclarationList* DeclarationListPtr;

	public:

		CompoundStatement( StatementList* StatementListPtr , DeclarationList* DeclarationListPtr) : StatementListPtr(StatementListPtr) , DeclarationListPtr(DeclarationListPtr) {}

		~CompoundStatement() {}

		void print_py(std::ofstream& file, bool initialized=false, bool function=true) ;

		void render_asm(std::ofstream& file,Context& contxt) {

			if(DeclarationListPtr != NULL && StatementListPtr == NULL) {

				DeclarationListPtr->render_asm(file,contxt);
			}
			if(StatementListPtr != NULL && DeclarationListPtr == NULL ) {
				if(!contxt.reading){
					StatementListPtr->render_asm(file,contxt);
				}
			}
			if(StatementListPtr != NULL && DeclarationListPtr != NULL ) {
				
				DeclarationListPtr->render_asm(file,contxt);
				if(!contxt.reading){
					StatementListPtr->render_asm(file,contxt);
				}
			}	
		}
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

		void render_asm(std::ofstream& file, Context& contxt) {

			if( DeclarationSpecifiersPtr != NULL ) {
										//check the return type
			}

			if( DeclaratorPtr != NULL ) {				//handles printing function name
				
				contxt.protect = false; //protect overwriting currennt scope global/function
				
				DeclaratorPtr->render_asm(file,contxt);
				file << std::endl;
				file << "\t.text" << std::endl;
				file << "\t.align\t2" << std::endl; 
				file << "\t.globl\t" << contxt.funct_id << std::endl;
				file << "\t.set\t" << "nomips16" << std::endl;
				file << "\t.set\t" << "nomicromips" << std::endl;
				file << "\t.ent\t" << contxt.funct_id << std::endl;
				file << "\t.type\t" << contxt.funct_id << "," << " @function" << std::endl;
				file << contxt.funct_id << ":" << std::endl;
				contxt.protect = true;
			}

			if( DeclarationListPtr != NULL ) {   			//( functions having const-correctness for example )
				//DeclarationListPtr->render_asm(file,contxt);
			}

			if( CompoundStatementPtr != NULL ) {
				contxt.reading = true;						// this flag is used to prevent writing asm on file<< while reading ahead
				CompoundStatementPtr->render_asm(file,contxt);  // ...(file,initialized,function)
				contxt.reading = false;
			}

			file << "\t.set\tnoreorder" << std::endl;
			file << "\t.set\tnomacro" << std::endl;
			
			file << "\taddiu\t$sp,$sp,-"<< contxt.totalStackArea+4;
			file << std::endl << "\tsw\t$fp," << contxt.totalStackArea << "($sp)";
			file << std::endl << "\tmove\t$fp,$sp\n";

			if( CompoundStatementPtr != NULL ) {
				contxt.reading = false;
				CompoundStatementPtr->render_asm(file,contxt);
				contxt.reading = false;
			}

			file << std::endl << "\tmove\t$sp,$fp";
			file << std::endl << "\tlw\t$fp," << contxt.totalStackArea << "($sp)";
			file << std::endl << "\taddiu\t$sp,$sp," << contxt.totalStackArea + 4;
			file << std::endl << "\tj\t$31" << std::endl;
			file << std::endl << "\tnop" << std::endl;
			file << "\t.set\t macro" << std::endl;
			file << "\t.set\t reorder" << std::endl;
			file << "\t.end\t " << contxt.funct_id << std::endl;
			file << "\t.size\t " << contxt.funct_id << ", .-" << contxt.funct_id << std::endl;		
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
		
		void render_asm(std::ofstream& file,Context& contxt) {

			if( ExternalDeclarationPtr != NULL ) {
				ExternalDeclarationPtr->render_asm(file,contxt);

			}

			if ( DecLaration  == NULL && FunctionDef != NULL){
				contxt.function = true;
				file << std::endl;
				contxt.StackOffset = 0;
				contxt.protect=true; 
				FunctionDef->render_asm(file,contxt);
				contxt.protect=false;
				contxt.StackOffset = 0; 				//reset the stack offset for other functions
				file << std::endl;
				contxt.function = false;
			}

			if ( FunctionDef  == NULL && DecLaration != NULL){
				contxt.function = false;
				file << std::endl;
				DecLaration->render_asm(file,contxt);			// This path is taken for global declarations that are not functions
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
					break;
				}
			}
			file << "\t.file 1 " << "\"" << new_file_name << ".c\"" << std::endl;
			file << "\t.section .mdebug.abi32" << std::endl;
			file << "\t.previous" <<std::endl;
			file << "\t.nan legacy" << std::endl;
			file << "\t.module fp=32" << std::endl;
			file << "\t.module nooddspreg" << std::endl;
			file << "\t.abicalls" << std::endl;
			
			ExternalDecl->render_asm(file,contxt);
		
		}

		 virtual ~TranslationUnit() {}
};







inline void DeclarationList::render_asm(std::ofstream& file,Context& contxt) {
				
			if(DeclarationListPtr != NULL) {
				DeclarationListPtr->render_asm(file,contxt);
			}
			DeclarationPtr->render_asm(file,contxt);
}


inline void Statement::render_asm(std::ofstream& file,Context& contxt) {

			if( JumpStatementPtr != NULL) {
				JumpStatementPtr->render_asm(file,contxt);
			}
			if( IterationStatementPtr != NULL){
				IterationStatementPtr->render_asm(file,contxt);
			}
			if( CompoundStatementPtr != NULL){
				CompoundStatementPtr->render_asm(file,contxt);
			}
			if( ExpressionStatementPtr != NULL){
				ExpressionStatementPtr->render_asm(file,contxt);
			}

		}

inline void DirectDeclarator::render_asm(std::ofstream& file,Context& contxt) {

	
			if( DirectDeclaratorPtr != NULL) {

				DirectDeclaratorPtr->render_asm(file,contxt);
			}
			if(contxt.function && IDENTIFIER !=NULL && !contxt.reading && !contxt.protect){
					contxt.funct_id=*IDENTIFIER;
			}

			 if(!contxt.function && IDENTIFIER != NULL && !contxt.reading && !contxt.protect) 			//if we are not in a function then this must be a global declaration
			{
				contxt.variable.id = *IDENTIFIER;
				
				if( !contxt.initialized ) {				//if it is not initialized then set it to 0
					contxt.variable.value = 0;
				}
				contxt.variable.scope = "global";			//set the variable's scope as global to be saved in the bindings struct
				
				if(contxt.Variables.size()==0){
					contxt.Variables.push_back(contxt.variable);				
				}
				else if(contxt.Variables[contxt.Variables.size()-1].id!=*IDENTIFIER)
					{	
						contxt.Variables.push_back(contxt.variable);
					}
			}

			
			
			
			else if(contxt.function && IDENTIFIER != NULL && !contxt.reading){		//if we are in a function and the identifier is not null and protect flag is off

					if( !contxt.protect) {				//then this is a function name we are reading
					
						contxt.funct_id = *IDENTIFIER;		//obtain the scope we are currently in
						
					}

					else{
						contxt.variable.scope = contxt.funct_id; //assign the variable the scope it is in
						contxt.variable.id = *IDENTIFIER;	//if the portect flag is on then we are already inside the function , not reading the function name
					}
	
					if( !contxt.initialized ) {			//if the local declaration is not initialized, set it to 0
	
						contxt.variable.value = 0;
					}
					contxt.Variables.push_back(contxt.variable);  
					
				}
				int found_local= 0;	
				int good_index=0;		//this will determine whether the variable wanted is a global or a local
				int i;				//must initialize the index i outside so it is accessible throughout here
				
				for(i=0; i<contxt.Variables.size(); i++) {
					
					if(contxt.Variables[i].scope == contxt.funct_id && *IDENTIFIER == contxt.Variables[i].id) {
						found_local = 1;		//means that we found a local variable in the function of that name					
						good_index=i;
						i = contxt.Variables.size();						
					}
				}
				if(!found_local) {
						for(i=0; i<contxt.Variables.size(); i++) {
							if(contxt.Variables[i].scope == "global" && *IDENTIFIER == contxt.Variables[i].id) {
								found_local=2;
								good_index = i;
								i = contxt.Variables.size();


							}
						}
				}   	
				if(contxt.lhs_of_assignment  && !contxt.reading && contxt.function){
					if(found_local==1) {
						//contxt.value_in_R2=false;
						if(contxt.Variables[good_index].value != 0){
							/*if(contxt.is_char){
								file << std::endl << "\tsb\t$2, " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n";
contxt.is_char = false;
							}
							else{*/
								file << std::endl << "\tsw\t$2, " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n";
							
						}
						else {
							/*if(contxt.is_char){
								file << std::endl << "\tsb\t$0, " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n";
contxt.is_char = false;
							}
							else{*/
								file << std::endl << "\tsw\t$0, " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n"; 
							
						}
					}

				
					else if(found_local==2) {
						file << std::endl << "\tlui\t$2" << ", %hi(" << contxt.Variables[good_index].id << ")";
						/*if(contxt.is_char) {
							file << std::endl << "\tsb\t$2" << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+2 << ")";
							contxt.is_char = false;
						}
						else{*/
							file << std::endl << "\tsw\t$2" << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+2 << ")";
							
					}	
								
					else{
						file << std::endl << "VARIABLE : " << *IDENTIFIER << "NOT DECLARED!!!\n";
					}
			}		
				

					if( ParameterTypeLiSt != NULL) {
						ParameterTypeLiSt->render_asm(file,contxt);
					
					}

				
				
					
					/*else if( IDentifierList != NULL) {
						IDentifierList->render_asm(file);
					}*/

			

	}


inline void ParameterDeclaration::render_asm(std::ofstream& file, Context& contxt)  {

			if( DeclarationSpecifiersPtr != NULL) {
				
				DeclarationSpecifiersPtr->render_asm(file,contxt);
				
			}

			if( DeclaratorPtr != NULL) {
				
				DeclaratorPtr->render_asm(file,contxt);
				
			}
			
		}	



inline void Declarator::render_asm(std::ofstream& file,Context& contxt) {

			if( DeclaratorPtr != NULL) {
				DeclaratorPtr->render_asm(file,contxt);
			}
			DirectDecLarator->render_asm(file,contxt);
		}



#endif
