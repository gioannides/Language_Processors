#ifndef ast_node_hpp
#define ast_node_hpp

#include <string>
#include <iostream>
#include <memory>
#include <fstream>
#include <vector>

class Node;
class ExternalDeclaration;
class Declaration;
class TranslationalUnit;
class Declaration;
class DeclarationList;


class DeclarationSpecifiers;
class TypeQualifier;
class TypeSpecifier;
class TranslationUnit;
class ConditionalExpression;
typedef Node* NodePtr;

static int count_globals = 0;				//Will count the number of global variables
static int counter_py(0);				//Will be used for indentation
static bool function = false;				//Are we inside a function?
static bool ParametrizedFunction = false;
static bool main_ = false;				//Will be used for emitting the main python code
static std::vector<std::string> GlobalVars; 		//Will be used to store the globals variables
static bool is_while = false;				//Identifies loops for indentation manners
static int parentheses = 0;
static bool elif = false;
static bool ParameterVariable = false;


class Node{

	public:


    		virtual  void print_C(std::ofstream& file) const  {
		}

		 virtual ~Node()  {}
};

class TranslationalUnit;
class FunctionDefinition;
class ExternalDeclaration;

class Statement;
class IterationStatement;
class LabeledStatement;
class SelectionStatement;
class StatementList;
class JumpStatement;
class ExpressionStatement;
class CompoundStatement;
class Declarator;

class Pointer;

class SpecifierQualifierList : public Node {};
class Init_Declaration_List : public Node {};
class InclusiveAndExpression : public Node {};
class Expression : public Node {};
class AssignmentExpression;
class CastExpression;

class DirectAbstractDeclarator;
class AbstractDeclarator;
class ParameterDeclaration;
class ParameterList;
class ParameterTypeList;
class IdentifierList;


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


};





class CastExpression : public Node {

	private:
		UnaryExpression* UNaryExpression;
		TypeName* TYpeName;

	public:
		CastExpression( UnaryExpression* UNaryExpression, TypeName* TYpeName) : UNaryExpression(UNaryExpression) , TYpeName(TYpeName) {}

		~CastExpression() {}

		void print_py(std::ofstream& file);

};




class MultiplicativeExpression : public Node {

	private:
		CastExpression* CaStExpression;
		std::string* OPERATOR;
		MultiplicativeExpression* MultiplicativeExpressionPtr;

	public:
		MultiplicativeExpression( CastExpression* CaStExpression, std::string* OPERATOR , MultiplicativeExpression* MultiplicativeExpressionPtr ) : CaStExpression(CaStExpression) , OPERATOR(OPERATOR) , MultiplicativeExpressionPtr(MultiplicativeExpressionPtr) {}

		~MultiplicativeExpression() {}

		void print_py(std::ofstream& file) {

			if(OPERATOR==NULL){
				CaStExpression->print_py(file);
			}
			else{ 
				MultiplicativeExpressionPtr->print_py(file);
				file <<*OPERATOR;
				CaStExpression->print_py(file);
				
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


		void print_py(std::ofstream& file) {

			if(OPERATOR==NULL){
				MultiplicativeExpressioN->print_py(file);
			}
			else{ 
				AdditiveExpressionPtr->print_py(file);
				file << *OPERATOR;
				MultiplicativeExpressioN->print_py(file);
				
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

		void print_py(std::ofstream& file) {

			if(OPERATOR==NULL){
				AdditiVeExpression->print_py(file);
			}
			else{ 
				ShiftExpressionPtr->print_py(file);
				file << *OPERATOR;
				AdditiVeExpression->print_py(file);
				
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

		void print_py(std::ofstream& file) {

			if(OPERATOR==NULL){
				SHiftExpression->print_py(file);
			}
			else{ 
				RelationalExpressionPtr->print_py(file);
				file << *OPERATOR;
				SHiftExpression->print_py(file);
				
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

		void print_py(std::ofstream& file) {

			if(OPERATOR==NULL){
				RElationalExpression->print_py(file);
			}
			else{ 
				EqualityExpressionPtr->print_py(file);
				file <<*OPERATOR;
				RElationalExpression->print_py(file);
				
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

		void print_py(std::ofstream& file) {

			if(BIT_AND==NULL){
				EqualitYExpression->print_py(file);
			}
			else{ 
				AndExpressionPtr->print_py(file);
				file << " " << "&" << " ";
				EqualitYExpression->print_py(file);
				
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

		void print_py(std::ofstream& file) {

			if(EXCL_OR==NULL){
				ANDexpression->print_py(file);
			}
			else{ 
				ExclusiveOrExpressionPtr->print_py(file);
				file << " " << "^" << " ";
				ANDexpression->print_py(file);
				
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

		void print_py(std::ofstream& file) {

			if(INC_OR==NULL){
				EXclusiveOrExpression->print_py(file);
			}
			else{ 
				InclusiveOrExpressionPtr->print_py(file);
				file << " " << "|" << " ";
				EXclusiveOrExpression->print_py(file);
				
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

		void print_py(std::ofstream& file) {
			if(AND_OP==NULL){
				INclusiveOrExpression->print_py(file);
			}
			else{ 
				LogicalAndExpressionPtr->print_py(file);
				file << " and ";
				INclusiveOrExpression->print_py(file);
				
			}

		}
};


		


class LogicalOrExpression : public Node {

	private:
		LogicalAndExpression* LogicalAndExpressionPtr;
		std::string* OR_OP;
		ConditionalExpression* ConditionalExpressionPtr;
		LogicalOrExpression* LogicalOrExpressionPtr;
	public:
		LogicalOrExpression(LogicalAndExpression* LogicalAndExpressionPtr, std::string* OR_OP, LogicalOrExpression* LogicalOrExpressionPtr) 
		: LogicalAndExpressionPtr(LogicalAndExpressionPtr), OR_OP(OR_OP), LogicalOrExpressionPtr(LogicalOrExpressionPtr) {}

		~LogicalOrExpression() {}

		void print_py(std::ofstream& file) {
			if(OR_OP==NULL){
				LogicalAndExpressionPtr->print_py(file);
			}
			else{ 
				LogicalOrExpressionPtr->print_py(file);
				file << " or ";
				LogicalAndExpressionPtr->print_py(file);
				
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
};


class IdentifierList : public Node {

	private:
		std::string* IDENTIFIER;
		IdentifierList* IdentifierListPtr;
	public:
		IdentifierList(std::string* IDENTIFIER , IdentifierList* IdentifierListPtr) : IDENTIFIER(IDENTIFIER) , IdentifierListPtr(IdentifierListPtr) {}

		void print_py(std::ofstream& file) {

			if( IdentifierListPtr != NULL) {
				IdentifierListPtr->print_py(file);
				file << ",";
			}

			file << *IDENTIFIER;					
		
		}


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

		void print_py(std::ofstream& file) {

			if( ParameterListPtr != NULL) {
				ParameterListPtr->print_py(file);
				file << ",";
			}

			ParameterDeclarationPtr->print_py(file);						
		
		}

};





class ParameterTypeList : public Node {
	private:
		ParameterList* ParameterListPtr;
		std::string* ELLIPSIS;
	public:
		ParameterTypeList(ParameterList* ParameterListPtr , std::string* ELLIPSIS) : ParameterListPtr(ParameterListPtr) , ELLIPSIS(ELLIPSIS) {}
		
		~ParameterTypeList() {}

		void print_py(std::ofstream& file) {

			if( ParameterListPtr != NULL) {
				ParameterListPtr->print_py(file);
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

		void print_py(std::ofstream& file, bool initialized=false, bool function=false) {


			if( DirectDeclaratorPtr != NULL) {

				DirectDeclaratorPtr->print_py(file,initialized,function);
			}
			
			//if(ParametrizedFunction) {
//
//				file << *IDENTIFIER << ",";
//				return;
//			}

			if(!function) {

				if(counter_py == 0 && !ParameterVariable ){
					GlobalVars.push_back(*IDENTIFIER);
				}
	
				for( int i(0); i<counter_py; i++) { file << "\t"; }
				if(!initialized && !ParameterVariable){
					file << *IDENTIFIER << "=0" << std::endl;
				}

				else if(!ParameterVariable){
					file << *IDENTIFIER << "=";
				}
				else{
					file << *IDENTIFIER;
					ParameterVariable = false;
				}
				

			}
			
			else{

				if( IDENTIFIER != NULL ) {
					if( *IDENTIFIER == "main") { main_ = true; }
				
					file << "def " << *IDENTIFIER << "(";

				}
			
				if( ParameterTypeLiSt != NULL) {
					ParameterTypeLiSt->print_py(file);
					
				}
				else if( IDentifierList != NULL) {
					IDentifierList->print_py(file);
				}

			}

		}


		~DirectDeclarator() {}

};


		



class Declarator : public Node {

	private:
		Pointer* PoinTer;
		DirectDeclarator* DirectDecLarator;
		Declarator* DeclaratorPtr;

	public:
	
		Declarator(Pointer* PoinTer, DirectDeclarator* DirectDecLarator, Declarator* DeclaratorPtr) : PoinTer(PoinTer) , DirectDecLarator(DirectDecLarator)  , DeclaratorPtr(DeclaratorPtr) {}

		void print_py(std::ofstream& file, bool initialized=false, bool function=false) {

			if( DeclaratorPtr != NULL) {
				DeclaratorPtr->print_py(file,initialized,function);
			}
			DirectDecLarator->print_py(file,initialized,function);
		}

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

		void print_py(std::ofstream& file) {
	
			if(InitializerListPtr!=NULL){
				InitializerListPtr->print_py(file);
			}
			AssignmentExpressionPtr->print_py(file);

		}
			

};




class InitDeclarator : public Node {

	private:
		Declarator* DecLarator;
		Initializer* InitiaLizer;

	public:
		InitDeclarator( Declarator* DecLarator, Initializer* InitiaLizer) : DecLarator(DecLarator)  ,InitiaLizer(InitiaLizer) {}

		void print_py(std::ofstream& file) {
			if( InitiaLizer == NULL ) {		
				DecLarator->print_py(file,false);
				file << std::endl;
			}			
			else{
				DecLarator->print_py(file,true);
				InitiaLizer->print_py(file);
				file << std::endl;
			}
				
		}

		~InitDeclarator() {}

};




class InitDeclaratorList : public Node {

	private:
		InitDeclarator* InitDecLarator;
		InitDeclaratorList* InitDeclaratorListPtr;

	public:

		InitDeclaratorList(InitDeclarator* InitDecLarator, InitDeclaratorList* InitDeclaratorListPtr) : InitDecLarator(InitDecLarator), InitDeclaratorListPtr(InitDeclaratorListPtr) {}

		~InitDeclaratorList() {}

		void print_py(std::ofstream& file) {
			if( InitDeclaratorListPtr != NULL){
				InitDeclaratorListPtr->print_py(file);
			}
			InitDecLarator->print_py(file);
		}

};






class StorageClassSpecifiers : public Node {

	private:
		std::string* TYPES;

	public:
		
		StorageClassSpecifiers(std::string* TYPES) : TYPES(TYPES) {}

		void print_C(std::ofstream& file) {
			file << *TYPES << " ";
		}
		void print_py(std::ofstream& file) {
			file << *TYPES << " ";
		}

		~StorageClassSpecifiers() {}

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

		void print_C(std::ofstream& file) {
			//not made
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



		void print_C(std::ofstream& file) {
			StorageClassSpec->print_C(file);
		}




		~DeclarationSpecifiers() {}

};








class Declaration : public Node {

	private:

		DeclarationSpecifiers* DeclSpec;
		InitDeclaratorList* DeclList;

	public:

		Declaration(DeclarationSpecifiers* DeclSpec, InitDeclaratorList* DeclList ) : DeclSpec(DeclSpec) , DeclList(DeclList) {}




		void print_C(std::ofstream& file) {
			DeclSpec->print_C(file);
		}



		void print_py(std::ofstream& file) {
			if(DeclList != NULL){
				DeclList->print_py(file);
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

		void print_py(std::ofstream& file) {
			
			for( int i(0); i<counter_py; i++) { file << "\t"; }
			file << *JUMP_TYPE << " ";
			if(AssignmentExpressionPtr != NULL) {
				AssignmentExpressionPtr->print_py(file);
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

		std::string* get_info() {
			return SELECTIVE_IF;
		}		 
		

};






class ExpressionStatement : public Node {

	private:
		AssignmentExpression* AssignmentExpressionPtr;
		
	public:
		ExpressionStatement(AssignmentExpression* AssignmentExpressionPtr) : AssignmentExpressionPtr(AssignmentExpressionPtr) {}

		~ExpressionStatement() {}

		void print_py(std::ofstream& file) {

			AssignmentExpressionPtr->print_py(file);
			file << std::endl;
		}

};


class DeclarationList : public Node {

	private:
		Declaration* DeclarationPtr;
		DeclarationList* DeclarationListPtr;

	public:
		DeclarationList(Declaration* DeclarationPtr, DeclarationList* DeclarationListPtr) : 	DeclarationPtr(DeclarationPtr) , DeclarationListPtr(DeclarationListPtr) {}

		~DeclarationList() {}

		void print_py(std::ofstream& file) {

				if( DeclarationListPtr != NULL) {
					
					DeclarationListPtr->print_py(file);

				}
				function = false;
				DeclarationPtr->print_py(file);

			}

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
	
		std::string* get_info() {
			return SelectionStatementPtr->get_info();
		}		 
				

};






class StatementList : public Node {

	private:
		Statement* StatementPtr;
		StatementList* StatementListPtr;

	public:
		StatementList(Statement* StatementPtr, StatementList* StatementListPtr) : StatementPtr(StatementPtr) , StatementListPtr(StatementListPtr) {}

		~StatementList() {}

		void print_py(std::ofstream& file) {

			if( StatementListPtr != NULL) {
				StatementListPtr->print_py(file);

			}
				StatementPtr->print_py(file);

				

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

};





class FunctionDefinition : public Node {

	private:
		DeclarationSpecifiers* DeclarationSpecifiersPtr;
		Declarator* DeclaratorPtr;
		DeclarationList* DeclarationListPtr;
		CompoundStatement* CompoundStatementPtr;
	
	public:
		FunctionDefinition( DeclarationSpecifiers* DeclarationSpecifiersPtr, Declarator* DeclaratorPtr, DeclarationList* DeclarationListPtr, CompoundStatement* CompoundStatementPtr) :
	
				DeclarationSpecifiersPtr(DeclarationSpecifiersPtr), DeclaratorPtr(DeclaratorPtr), DeclarationListPtr(DeclarationListPtr), CompoundStatementPtr(CompoundStatementPtr) {}

		~FunctionDefinition() {}


		void print_py(std::ofstream& file) {
		
			if( DeclarationSpecifiersPtr != NULL ) {
										//do-nothing because it is not significant in our case (only int)
			}

			if( DeclaratorPtr != NULL ) {				//handles global variables after printing function name
				
				DeclaratorPtr->print_py(file,false,true);
				if(DeclarationListPtr == NULL) {
					file << "):" << std::endl;					

					for( int i= 0; i < GlobalVars.size(); i++) {
						file << "\tglobal " << GlobalVars[i] << std::endl;
					}					
				}
			}

			if( DeclarationListPtr != NULL ) {   			//have not done this yet ( functions having parameters )
				ParametrizedFunction = true;
				DeclarationListPtr->print_py(file);
			}

			if( CompoundStatementPtr != NULL ) {
			
				CompoundStatementPtr->print_py(file,false,true);
			}
			
				
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


		void print_C(std::ofstream& file) {
			DecLaration->print_C(file);
		}
		void print_py(std::ofstream& file) {
		
			if( ExternalDeclarationPtr != NULL ) {
				ExternalDeclarationPtr->print_py(file);

			}

			if ( DecLaration  == NULL && FunctionDef != NULL){
				function = true;
				file << std::endl;
				FunctionDef->print_py(file);
				file << std::endl;
				function = false;
			}

			if ( FunctionDef  == NULL && DecLaration != NULL){
				file << std::endl;
				DecLaration->print_py(file);
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

    		 virtual void print_C(std::string file_name) const {
			
				
				std::ofstream file;
				file.open(file_name.c_str());
				ExternalDecl->print_C(file);
				file.close();
				

			}
		virtual void print_py(std::string file_name) const {
			
				
				std::ofstream file;
				file.open(file_name.c_str());
				ExternalDecl->print_py(file);

			if(main_){
				file << std::endl << std::endl << "if __name__ == " << "\"__main__\"" << ":"; 
   				file <<  std::endl << "\t\timport sys";
    				file <<  std::endl << "\t\tret=main()";
    				file << std::endl << "\t\tsys.exit(ret)";

			}

				file.close();
				

			}


		 virtual ~TranslationUnit() {}
};




inline void IterationStatement::print_py(std::ofstream& file) {

			if( *ITERATIVE_TYPE == "while" && AssignmentExpressionPtr != NULL && StatementPtr != NULL) {
				file << std::endl;
				is_while = true;
				for( int i(0); i<counter_py; i++) { file << "\t"; }
				file << "while(";
				AssignmentExpressionPtr->print_py(file);
				file << "):" << std::endl;
				counter_py++;
				StatementPtr->print_py(file);
				file << std:: endl;
				counter_py--;
				is_while = false;
			}
		 }


inline void SelectionStatement::print_py(std::ofstream& file,bool elseif) {
			if( SELECTIVE_IF != NULL && AssignmentExpressionPtr != NULL && StatementPtr != NULL && StatementPtr2 == NULL && SELECTIVE_ELSE == NULL && SELECTIVE_SWITCH == NULL) {
				
				elif = elseif;
				file << std::endl;
				for( int i(0); i<counter_py; i++) { file << "\t"; } 
				if(elseif == false){
					file << "if(";
					AssignmentExpressionPtr->print_py(file) ;
					file << "):" << std::endl;
				}
				else{
					file <<"elif(";
				       	AssignmentExpressionPtr->print_py(file) ;
					file << "):" << std::endl;
				}
				//counter_py++;
				StatementPtr->print_py(file);
				file << std:: endl;
				//counter_py--;
			}

			else if ( SELECTIVE_IF != NULL && AssignmentExpressionPtr != NULL && StatementPtr != NULL && StatementPtr2 != NULL && SELECTIVE_ELSE != NULL && SELECTIVE_SWITCH == NULL)			 {
				elif = elseif;
				file << std::endl;
				for( int i(0); i<counter_py; i++) { file << "\t"; }				
				if(elseif == false){

					file << "if(";
					AssignmentExpressionPtr->print_py(file) ;
					file << "):" << std::endl;
					file << std::endl;
					StatementPtr->print_py(file,true);				
					file << std::endl;	
				}
				else{
					file <<"elif(";
				       	AssignmentExpressionPtr->print_py(file) ;
					file << "):" << std::endl;
					file << std::endl;
					StatementPtr->print_py(file,true);				
					file << std::endl;	
				}			
				for( int i(0); i<counter_py; i++) { file << "\t"; }
				if(StatementPtr2->SelectionStatementPtr != NULL) {
					file << std::endl;
					StatementPtr2->print_py(file,true);				
					file << std::endl;	
				}
				else{
					file << "else:";
					file << std::endl;
					StatementPtr2->print_py(file,false);				
					file << std:: endl;
				}
				
				
			}


}




inline void Statement::print_py(std::ofstream& file, bool elseif) {

			

			if( LabeledStatementPtr != NULL ) {
		
				LabeledStatementPtr->print_py(file);
			}

			else if( CompoundStatementPtr != NULL ) {
				CompoundStatementPtr->print_py(file);

			}

			else if( ExpressionStatementPtr != NULL ) {

				ExpressionStatementPtr->print_py(file);
			}

			else if( SelectionStatementPtr != NULL ) {
				SelectionStatementPtr->print_py(file,elseif);

			}

			else if( IterationStatementPtr != NULL ) {

				IterationStatementPtr->print_py(file);

			}

			else if( JumpStatementPtr != NULL ) {

				JumpStatementPtr->print_py(file);

			}

		}				 



inline void CompoundStatement::print_py(std::ofstream& file, bool initialized, bool function) {
			
	
			counter_py++;
			if( StatementListPtr == NULL && DeclarationListPtr == NULL ) {
				for( int i(0); i<counter_py; i++) { file << "\t"; }
				file << "pass" << std::endl;
			}
			else if( StatementListPtr == NULL && DeclarationListPtr != NULL ) {
				DeclarationListPtr->print_py(file);
			}
			else if( StatementListPtr != NULL && DeclarationListPtr == NULL ) {
				StatementListPtr->print_py(file);
			}
			else if( StatementListPtr != NULL && DeclarationListPtr != NULL ) {
				DeclarationListPtr->print_py(file);
				StatementListPtr->print_py(file);
				
			}
			counter_py--;
		
			
}



inline void ConditionalExpression::print_py(std::ofstream& file) {

		if( ExpressioN == NULL ) {
			LogicalORExpression->print_py(file);
		}
		else {
		       //.....
		}
}


inline void AssignmentExpression::print_py(std::ofstream& file)  {

			

			if(UnaryExpressionPtr != NULL) {
		
				for( int i(0); i<counter_py; i++) { file << "\t"; }
				UnaryExpressionPtr->print_py(file);
				file << "=";

			}
	
			if(ConditionalExpressionPtr != NULL) {

				ConditionalExpressionPtr->print_py(file);

			}

			if(AssignmentExpressionPtr != NULL) {

				AssignmentExpressionPtr->print_py(file);
			}
			if(!function && !is_while && !elif && (parentheses==0)){
				file << std::endl;
			}

}

inline void PostFixExpression::print_py(std::ofstream& file)  {
		
		if(PostFixExpressionPtr !=NULL && PrimaryExpressionPtr==NULL && AssignmentExpressionPtr==NULL && OPERATOR==NULL && IDENTIFIER==NULL && ArgumentExpressionListPtr==NULL) 		{			
			for( int i(0); i<counter_py; i++) { file << "\t"; }
			PostFixExpressionPtr->print_py(file);
			file << "()";
		}
		else if( PrimaryExpressionPtr != NULL && PostFixExpressionPtr==NULL && AssignmentExpressionPtr==NULL && OPERATOR==NULL && IDENTIFIER==NULL && ArgumentExpressionListPtr==NULL) 			{		
				PrimaryExpressionPtr->print_py(file);
		}
			//else if( AssignmentExpressionPtr != NULL ) {
			//	AssignmentExpressionPtr->print_py(file);
			//}
		else if( PrimaryExpressionPtr == NULL && PostFixExpressionPtr!=NULL && AssignmentExpressionPtr==NULL && OPERATOR==NULL && IDENTIFIER==NULL && ArgumentExpressionListPtr!=NULL) 			{		
				for( int i(0); i<counter_py; i++) { file << "\t"; }
				PostFixExpressionPtr->print_py(file);
				file << "(";
				ArgumentExpressionListPtr->print_py(file);
				file << ")";
				function = false;
				
		}
		
			else if( OPERATOR != NULL && IDENTIFIER != NULL ) {
				file << " " << OPERATOR << " " << IDENTIFIER << " ";
			}
			else if( OPERATOR != NULL && IDENTIFIER == NULL) {
				file << " " << OPERATOR << " ";
			}
			
		}

inline void UnaryExpression::print_py(std::ofstream& file) {
			if(OPERATOR == NULL) {
				PostFixExpressionPtr->print_py(file);
			}
			else if ( CastExpressionPtr != NULL) {
				file << " " << *OPERATOR << " ";
				CastExpressionPtr->print_py(file);
			}

			

}


inline void CastExpression::print_py(std::ofstream& file) {

			if( UNaryExpression != NULL ){

				UNaryExpression->print_py(file);
			}
			else {
				//....
			}

		}

inline void ArgumentExpressionList::print_py(std::ofstream& file) {

		function = true;
		if( ArgumentExpressionListPtr != NULL) {
			ArgumentExpressionListPtr->print_py(file);
			file << ",";
		}
		AssignmentExpressionPtr->print_py(file);
		

}

inline void PrimaryExpression::print_py(std::ofstream& file) {

			if( AssignmentExpressionPtr != NULL ) {
				file << "(";
				parentheses++;
				AssignmentExpressionPtr->print_py(file);
				file << ")";
				parentheses--;
			}

			if(IDENTIFIER != NULL) {
		
				file << *IDENTIFIER;

			}
			else if( CONSTANT != NULL ) {
				file << *CONSTANT; 

			}
		
			else if( STRING_LITERAL != NULL) {
	
				file << " " << '"' << *STRING_LITERAL << '"' << " ";
			}
		
}


inline void ParameterDeclaration::print_py(std::ofstream& file) {

			if( DeclaratorPtr != NULL) {
				ParameterVariable = true;
				DeclaratorPtr->print_py(file);
			}					
		
		}

#endif
