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





class PrimaryExpression : public Node {
	
	public:
		std::string* IDENTIFIER;
		std::string* CONSTANT;
		std::string* STRING_LITERAL;
		Expression* AssignmentExpressionPtr;
	public:
		PrimaryExpression(std::string* IDENTIFIER, std::string* CONSTANT, std::string* STRING_LITERAL, Expression* AssignmentExpressionPtr) :

			IDENTIFIER(IDENTIFIER) , CONSTANT(CONSTANT) , STRING_LITERAL(STRING_LITERAL) , AssignmentExpressionPtr(AssignmentExpressionPtr) {}

		~PrimaryExpression() {}

		void print_py(std::ofstream& file);

		void render_asm(std::ofstream& file,Context& contxt) ; 

		void AssignmentOperator(std::ofstream& file, int good_index, Context& contxt, int f) ; //For CodeGen
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
		void render_asm(std::ofstream& file,Context& contxt);
		/*{
			if(ArgumentExpressionListPtr!=NULL)
			{
				ArgumentExpressionListPtr->render_asm(file, contxt);
			}
			AssignmentExpressionPtr->render_asm(file, contxt);
		}*/

};




class PostFixExpression : public Node {

	public:
		PrimaryExpression* PrimaryExpressionPtr;
		Expression* AssignmentExpressionPtr;
		ArgumentExpressionList* ArgumentExpressionListPtr;
		PostFixExpression* PostFixExpressionPtr;
		std::string* IDENTIFIER;
		std::string* OPERATOR;
		
	public:
		PostFixExpression(PostFixExpression* PostFixExpressionPtr, PrimaryExpression* PrimaryExpressionPtr, Expression* AssignmentExpressionPtr, ArgumentExpressionList* ArgumentExpressionListPtr, std::string* IDENTIFIER, std::string* OPERATOR) :
	
				PrimaryExpressionPtr(PrimaryExpressionPtr), AssignmentExpressionPtr(AssignmentExpressionPtr) , ArgumentExpressionListPtr(ArgumentExpressionListPtr) , IDENTIFIER(IDENTIFIER) , OPERATOR(OPERATOR) , PostFixExpressionPtr(PostFixExpressionPtr) {}


		~PostFixExpression() {}

		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file,Context& contxt); 
};

		
class UnaryOperator: public Node{

	private:
		std::string* UNARYOPERATOR;
	public:
		UnaryOperator(std::string* UNARYOPERATOR) : UNARYOPERATOR(UNARYOPERATOR) {}

		char render_asm(std::ofstream& file, Context& contxt);
	
		std::string* print_py();

		~UnaryOperator() {}

};


class UnaryExpression : public Node {
	
	public:
		PostFixExpression* PostFixExpressionPtr;
		std::string* OPERATOR;
		CastExpression* CastExpressionPtr;
		UnaryExpression* UnaryExpressionPtr;
		UnaryOperator* UnaryOperatorPtr;
		TypeName* TypeNamePtr;
	public:


		UnaryExpression(PostFixExpression* PostFixExpressionPtr, std::string* OPERATOR, UnaryOperator* UnaryOperatorPtr, CastExpression* CastExpressionPtr, UnaryExpression* UnaryExpressionPtr,TypeName* TypeNamePtr) :
			PostFixExpressionPtr(PostFixExpressionPtr) , OPERATOR(OPERATOR) , CastExpressionPtr(CastExpressionPtr), UnaryExpressionPtr(UnaryExpressionPtr) , TypeNamePtr(TypeNamePtr) , UnaryOperatorPtr(UnaryOperatorPtr) {}

		~UnaryExpression() {}

		void print_py(std::ofstream& file); 

		void render_asm(std::ofstream& file,Context& contxt) ; 

};

class CastExpression : public Node {

	private:
		UnaryExpression* UNaryExpression;
		TypeName* TYpeName;
		CastExpression* CastExpressionPtr;

	public:
		CastExpression( UnaryExpression* UNaryExpression, TypeName* TYpeName) : UNaryExpression(UNaryExpression) , TYpeName(TYpeName) {}

		CastExpression( UnaryExpression* UNaryExpression, TypeName* TYpeName , CastExpression* CastExpressionPtr ) : UNaryExpression(UNaryExpression) , TYpeName(TYpeName) , CastExpressionPtr(CastExpressionPtr) {}

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
		Expression* ExpressioN;
		ConditionalExpression* ConditionalExpressionPtr;

	public:

		ConditionalExpression( LogicalOrExpression* LogicalORExpression, Expression* ExpressioN, ConditionalExpression* ConditionalExpressionPtr) : LogicalORExpression(LogicalORExpression),  ExpressioN(ExpressioN) , ConditionalExpressionPtr(ConditionalExpressionPtr) {}

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



class Expression : public Node{
	
	private:
		AssignmentExpression* AssignmentExpressionPtr;
		Expression* ExpressionPtr;

	public:
		Expression(AssignmentExpression* AssignmentExpressionPtr , Expression* ExpressionPtr) : AssignmentExpressionPtr(AssignmentExpressionPtr) , ExpressionPtr(ExpressionPtr) {}


		~Expression() {}


		void print_py(std::ofstream& file) {

			if(ExpressionPtr != NULL) {

				ExpressionPtr->print_py(file);
			}

			else{
				AssignmentExpressionPtr->print_py(file);
			}

		}




		void render_asm(std::ofstream& file,Context& contxt) {

			if(ExpressionPtr != NULL) {

				ExpressionPtr->render_asm(file,contxt);
			}

			else{
				AssignmentExpressionPtr->render_asm(file,contxt);
			}
		}

};





class ConstantExpression : public Node {



	private:
		ConditionalExpression* ConditionalExpressionPtr;

	public:
		ConstantExpression( ConditionalExpression* ConditionalExpressionPtr ) : ConditionalExpressionPtr(ConditionalExpressionPtr) {}

		
		void render_asm(std::ofstream& file, Context& contxt) {

			if(ConditionalExpressionPtr != NULL){

				ConditionalExpressionPtr->render_asm(file,contxt);
			}

		}


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

		void render_asm(std::ofstream& file,Context& contxt); 

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
				//std::cout << "parameter type list detected" << std::endl;
				ParameterListPtr->render_asm(file,contxt);	
			}
			if(ParameterDeclarationPtr!=NULL){
				contxt.parameter = true;
				ParameterDeclarationPtr->render_asm(file,contxt);
				contxt.parameter = false;
			}
			//contxt.variable.offset = 0; // reset the offset before you enter another parameter list
			
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
			contxt.variable.offset = 0;
			if( ParameterListPtr != NULL) {
				//std::cout << " go to parameter list" << std::endl;
				 // reset the offset before you enter another parameter list
				ParameterListPtr->render_asm(file,contxt);
				contxt.funcion_temp.paramters_size = contxt.variable.offset;
				//std:: cout <<"\t\t\t" << 	contxt.variable.offset;
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
		int round1_square2_closed3=0;

	public:
		std::string* IDENTIFIER;

		DirectDeclarator( std::string* IDENTIFIER, ConstantExpression* ConstantExpRession, ParameterTypeList* ParameterTypeLiSt, IdentifierList* IDentifierList, DirectDeclarator* DirectDeclaratorPtr, Declarator* DeclaratorPtr, int round1_square2_closed3) :
	
				IDENTIFIER(IDENTIFIER) , ConstantExpRession(ConstantExpRession), ParameterTypeLiSt(ParameterTypeLiSt), IDentifierList(IDentifierList),
				DirectDeclaratorPtr(DirectDeclaratorPtr) , DeclaratorPtr(DeclaratorPtr) , round1_square2_closed3(round1_square2_closed3){

				}

		void print_py(std::ofstream& file, bool initialized=false, bool function=false) ;



		void render_asm(std::ofstream& file,Context& contxt) ;
	
		~DirectDeclarator() {}
};


		



class Declarator : public Node {

	public:
		Pointer* PointerPtr;
		DirectDeclarator* DirectDecLarator;
		Declarator* DeclaratorPtr;

	public:
	
		Declarator(Pointer* PointerPtr, DirectDeclarator* DirectDecLarator, Declarator* DeclaratorPtr) : PointerPtr(PointerPtr) , DirectDecLarator(DirectDecLarator)  , DeclaratorPtr(DeclaratorPtr) {}

		void print_py(std::ofstream& file, bool initialized=false, bool function=false) ;


		void render_asm(std::ofstream& file,Context& contxt) ;

		~Declarator() {}



};



class InitializerList : public Node{

	private:
		InitializerList* InitializerListPtr;
		Initializer* InitializerPtr;

	public:
		InitializerList(InitializerList* InitializerListPtr , Initializer* InitializerPtr) : InitializerListPtr(InitializerListPtr) , InitializerPtr(InitializerPtr) {}


		~InitializerList() {}


		void render_asm(std::ofstream& file,Context& contxt) ;


		void print_py(std::ofstream& file) ;


};
		




class Initializer : public Node {
	
	private:
		AssignmentExpression* AssignmentExpressionPtr;
		InitializerList* InitializerListPtr;
	public:
		Initializer(AssignmentExpression* AssignmentExpressionPtr, InitializerList* InitializerListPtr) : 
			AssignmentExpressionPtr(AssignmentExpressionPtr) , InitializerListPtr(InitializerListPtr) {}

		~Initializer() {}

		void print_py(std::ofstream& file) ;

	
		void render_asm(std::ofstream& file,Context& contxt) {
			
			if(InitializerListPtr != NULL ) {
				InitializerListPtr->render_asm(file,contxt);
			}
			
			if( AssignmentExpressionPtr != NULL) {
				contxt.no_of_initial_values++;
				AssignmentExpressionPtr->render_asm(file,contxt);
				if(!contxt.function && !contxt.function_dec) {
				 	
				
				if( contxt.variable.word_size > 4 ){					
					file << std::endl << "\t.double\t" << contxt.variable.value ; 	//TODO: Convert to IEEE-754 for FLOAT and DOUBLE
				}
				else if( (contxt.variable.word_size==4) && contxt.variable.DataType!="float"){
					file << std::endl << "\t.word\t" << contxt.eval[contxt.Regs+1]; //contxt.variable.value;
				}
				else if( (contxt.variable.word_size==4) && contxt.variable.DataType=="float"){
					file << std::endl << "\t.float\t" << contxt.eval_f[contxt.Regs+1]; //contxt.variable.value;
					contxt.float_ = false;
				}
				else if(contxt.variable.word_size==2){
					file << std::endl << "\t.half\t" << contxt.variable.value;
				}
				else if(contxt.variable.word_size==1){
					file << std::endl << "\t.byte\t" << contxt.eval[contxt.Regs+1];
				}
				        // reset the value of the global
				for(int i=contxt.Regs; i<=20; i++)
				{
					file << "\n#" << contxt.eval[i];
					contxt.eval[i] = 0; 
				}
				
				
				}
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
			if(contxt.reading) { //this is predicting total stack frame for all paramters/local declarations in function body
					//contxt.variable.offset = contxt.totalStackArea;
					contxt.totalStackArea += 4;// contxt.variable.word_size;
					//file << "\nonly golbals get here " << contxt.totalStackArea << "\n";

				}

				if(!contxt.reading){ //this is execution

					contxt.StackOffset += 4;//contxt.variable.word_size;
					contxt.variable.offset = contxt.StackOffset-4;//contxt.variable.word_size;
					contxt.variable.offset = contxt.totalStackArea - contxt.variable.offset - 8; 
				}
			
			if( InitiaLizer != NULL && DecLarator != NULL) 
			{
				contxt.initialized = true;
				
				/*for(int i=0; i<contxt.Variables.size(); i++) {	//Predict the signedness of LHS, made DirectDeclarator members public...
					std::cout << contxt.Variables[i].id << contxt.Variables[i].DataType << std::endl;				
					if(*(DecLarator->DirectDecLarator->IDENTIFIER) == contxt.Variables[i].id) {
						if(contxt.Variables[i].DataType == "unsigned") {
							contxt.is_unsigned = true;
						}
					}
				}*/
				if(contxt.function||contxt.function_dec){			
				
				InitiaLizer->render_asm(file,contxt);
				
				contxt.lhs_of_assignment = true;
				DecLarator->render_asm(file,contxt);	// The boolean variable was 'initialized' set to false by default
				contxt.lhs_of_assignment = false;
				}
				else 
				{
					//file << std::endl << "# global initialized" << std::endl;
					contxt.no_of_initial_values=0;							
					//contxt.lhs_of_assignment = true;
					DecLarator->render_asm(file,contxt); 
					//contxt.lhs_of_assignment = false;

					contxt.no_array_elements = contxt.eval[contxt.Regs+1];
					if(!contxt.no_array_elements)
						contxt.no_array_elements=1;
					file << std::endl << "\n\t.data";
					file << std::endl << "\t.globl\t" << contxt.variable.id;
					if( log2(contxt.variable.word_size) )
					{
						file << std::endl << "\t.align\t" << log2(contxt.variable.word_size);
					}
					file << std::endl << "\t.type\t" << contxt.variable.id << ", @object";
					file << std::endl << "\t.size\t" << contxt.variable.id << ", " << contxt.variable.word_size*contxt.no_array_elements;
					file << std::endl << contxt.variable.id << ":";
				
					//contxt.rhs_of_expression = true;
					InitiaLizer->render_asm(file,contxt); // print .word in here
					//contxt.rhs_of_expression = false;
					if(contxt.no_array_elements-contxt.no_of_initial_values>0){
						file << std::endl << "\t.space\t" << (contxt.no_array_elements-contxt.no_of_initial_values)*contxt.variable.word_size;
					}
				}
				contxt.initialized = false;
				
			}
			else if(DecLarator != NULL &&  InitiaLizer == NULL){
				//file << std::endl << "# global not initialized" << std::endl;
				contxt.initialized = false;
				contxt.lhs_of_assignment=true;
				DecLarator->render_asm(file,contxt);
				contxt.lhs_of_assignment=false;
				if(!contxt.function&&!contxt.function_dec){
					contxt.no_of_initial_values=1;	
					contxt.no_array_elements = contxt.eval[contxt.Regs+1];
					if(!contxt.no_array_elements)
						contxt.no_array_elements=1;
					file << std::endl << "\n\t.data";
					file << std::endl << "\t.globl\t" << contxt.variable.id;
					if( log2(contxt.variable.word_size) )
					{
						file << std::endl << "\t.align\t" << log2(contxt.variable.word_size);
					}
					file << std::endl << "\t.type\t" << contxt.variable.id << ", @object";
					file << std::endl << "\t.size\t" << contxt.variable.id << ", " << contxt.variable.word_size*contxt.no_array_elements;
					file << std::endl << contxt.variable.id << ":";
				if( contxt.variable.word_size > 4 ){					
					file << std::endl << "\t.double\t" << 0 ; 	//TODO: Convert to IEEE-754 for FLOAT and DOUBLE
				}
				else if( (contxt.variable.word_size==4) && contxt.variable.DataType!="float"){
					file << std::endl << "\t.word\t" << 0; //contxt.variable.value;
				}
				else if( (contxt.variable.word_size==4) && contxt.variable.DataType=="float"){
					file << std::endl << "\t.float\t" << 0; //contxt.variable.value;
					contxt.float_ = false;
				}
				else if(contxt.variable.word_size==2){
					file << std::endl << "\t.half\t" << 0;
				}
				else if(contxt.variable.word_size==1){
					file << std::endl << "\t.byte\t" << 0;
				}
				        // reset the value of the global
				for(int i=contxt.Regs; i<=20; i++)
				{
					//file << "\n#" << contxt.eval[i];
					contxt.eval[i] = 0; 
				}
					//file << std::endl << contxt.variable.id << ":";
					if(contxt.no_array_elements-contxt.no_of_initial_values>0){
						file << std::endl << "\t.space\t" << (contxt.no_array_elements-contxt.no_of_initial_values)*contxt.variable.word_size;
					}
				}
			}
			contxt.is_unsigned = false;
			contxt.float_ = false;
		}
	
};



class InitDeclarationList : public Node {

	private:
		InitDeclarationList* InitDeclarationListPtr;
		InitDeclarator* InitDeclaratorPtr;

	public:
		InitDeclarationList( InitDeclarationList* InitDeclarationListPtr, InitDeclarator* InitDeclaratorPtr) : InitDeclarationListPtr(InitDeclarationListPtr) , InitDeclaratorPtr(InitDeclaratorPtr) {}

		~InitDeclarationList() {}



		void render_asm(std::ofstream& file, Context& contxt) {

			if( InitDeclarationListPtr != NULL ) {

				InitDeclarationListPtr->render_asm(file,contxt);
			}

			InitDeclaratorPtr->render_asm(file,contxt);
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
			

		}

};









class StorageClassSpecifiers : public Node {

	private:
		std::string* TYPES;

	public:
		
		StorageClassSpecifiers(std::string* TYPES) : TYPES(TYPES) {}

	
		void print_py(std::ofstream& file) ;

		~StorageClassSpecifiers() {}


		void render_asm(std::ofstream& file,Context& contxt) {
			if(TYPES != NULL){

				if(*TYPES == "extern"){
					contxt.variable.StorageClass = "extern";	
				}

				else if( *TYPES == "static"){
					contxt.variable.StorageClass = "static";

				}
				
				else if(*TYPES == "register"){
					contxt.variable.StorageClass = "register";
				}

				else if(*TYPES == "typedef"){
					contxt.typedefs_ = true;
				}

			}
		

		}
};

/* NEW STUFF */


class StructDeclarator : public Node {

	private:
		Declarator* DeclaratorPtr;
		ConstantExpression* ConstantExpressionPtr;
	
	public:
		StructDeclarator( Declarator* DeclaratorPtr , ConstantExpression* ConstantExpressionPtr ) : DeclaratorPtr(DeclaratorPtr) , ConstantExpressionPtr(ConstantExpressionPtr) {}

		~StructDeclarator() {}

};


class StructDeclaratorList : public Node {

	private:
		StructDeclarator* StructDeclaratorPtr;
		StructDeclaratorList* StructDeclaratorListPtr;

	public:
		StructDeclaratorList(StructDeclarator* StructDeclaratorPtr , StructDeclaratorList* StructDeclaratorListPtr) :
			StructDeclaratorPtr(StructDeclaratorPtr) , StructDeclaratorListPtr(StructDeclaratorListPtr) {}

		~StructDeclaratorList() {}

};




class SpecifierQualifierList : public Node {

	private:
		TypeSpecifier* TypeSpecifierPtr;
		SpecifierQualifierList* SpecifierQualifierListPtr;
		TypeQualifier* TypeQualifierPtr;

	public:
		SpecifierQualifierList(TypeSpecifier* TypeSpecifierPtr , SpecifierQualifierList* SpecifierQualifierListPtr , TypeQualifier* TypeQualifierPtr) :
				TypeSpecifierPtr(TypeSpecifierPtr) , SpecifierQualifierListPtr(SpecifierQualifierListPtr) , TypeQualifierPtr(TypeQualifierPtr) {}


		~SpecifierQualifierList() {}
	
		void render_asm(std::ofstream& file, Context& contxt) ; 

};



class TypeQualifierList : public Node {


	private:
		TypeQualifier* TypeQualifierPtr;
		TypeQualifierList* TypeQualifierListPtr;

	public:
		TypeQualifierList( TypeQualifier* TypeQualifierPtr , TypeQualifierList* TypeQualifierListPtr) : TypeQualifierPtr(TypeQualifierPtr) , TypeQualifierListPtr(TypeQualifierListPtr) {}


		~TypeQualifierList() {}


};
		




class Pointer : public Node {

	private:
		Pointer* PointerPtr;
		TypeQualifierList* TypeQualifierListPtr;

	public:
		Pointer( Pointer* PointerPtr , TypeQualifierList* TypeQualifierPtr ) : PointerPtr(PointerPtr) , TypeQualifierListPtr(TypeQualifierListPtr) {}

		~Pointer() {}

		void render_asm(std::ofstream& file, Context& contxt){

			if(PointerPtr == NULL && TypeQualifierListPtr == NULL){

				contxt.PointerCounter++;
				contxt.variable.word_size = 4;

			}

			else if(PointerPtr != NULL && TypeQualifierListPtr == NULL){

				contxt.PointerCounter++;
				contxt.variable.word_size = 4;
				PointerPtr->render_asm(file,contxt);
			}

		}

};

class StructDeclaration : public Node {

	private:
		SpecifierQualifierList* SpecifierQualifierListPtr;
		StructDeclaratorList* StructDeclaratorListPtr;

	public:

		StructDeclaration( SpecifierQualifierList* SpecifierQualifierListPtr, StructDeclaratorList* StructDeclaratorListPtr ) :
	
					SpecifierQualifierListPtr(SpecifierQualifierListPtr) , StructDeclaratorListPtr(StructDeclaratorListPtr) {}

		~StructDeclaration() {}

};









class StructDeclarationList : public Node {

	private:
		StructDeclaration* StructDeclarationPtr;
		StructDeclarationList* StructDeclarationListPtr;
	
	public:
		StructDeclarationList( StructDeclaration* StrucTDeclaration , StructDeclarationList* StructDeclarationListPtr) : StructDeclarationPtr(StructDeclarationPtr) , StructDeclarationListPtr(StructDeclarationListPtr) {}

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





class Enumerator : public Node {

	private:
		std::string* IDENTIFIER;
		ConstantExpression* ConstantExpressionPtr;

	public:
		Enumerator(std::string* IDENTIFIER , ConstantExpression* ConstantExpressionPtr) : IDENTIFIER(IDENTIFIER) , ConstantExpressionPtr(ConstantExpressionPtr) {}

		~Enumerator() {}

		void render_asm(std::ofstream& file, Context& contxt){
			if(ConstantExpressionPtr != NULL && !contxt.reading){
				
				
				contxt.enum_constant = true;
				ConstantExpressionPtr->render_asm(file,contxt);
				contxt.enum_constant = false;
				if(contxt.EnumOperands.size())
				{
					contxt.EnumCounter = contxt.EnumOperands[contxt.EnumOperands.size()-1];
					contxt.EnumTemp.value = contxt.EnumOperands[contxt.EnumOperands.size()-1];
					contxt.EnumTemp.IDENTIFIER = *IDENTIFIER;
					contxt.Enum.push_back(contxt.EnumTemp);	
					
					//std::cout << "\n" << contxt.EnumCounter << "\n";
					//std::cout << contxt.EnumTemp.value << " " <<  contxt.EnumTemp.IDENTIFIER   << std::endl;
					for (int i=0; i<=contxt.EnumOperands.size(); i++){
						contxt.EnumOperands[i]=0;
					}
				}				
			}
			else if( ConstantExpressionPtr == NULL && !contxt.reading)
			{	

				contxt.EnumTemp.IDENTIFIER = *IDENTIFIER;
				contxt.EnumTemp.value = contxt.EnumCounter;
				//std::cout << contxt.EnumCounter << std::endl;
				//contxt.EnumCounter++;
				contxt.Enum.push_back(contxt.EnumTemp);	
			}
			//contxt.EnumTemp.EnumList.push_back(contxt.EnumValuesTemp);			
		}
};



class EnumeratorList : public Node {

	private:
		Enumerator* EnumeratorPtr;
		EnumeratorList* EnumeratorListPtr;

	public:
		EnumeratorList(Enumerator* EnumeratorPtr , EnumeratorList* EnumeratorListPtr) : EnumeratorPtr(EnumeratorPtr) , EnumeratorListPtr(EnumeratorListPtr) {}

		~EnumeratorList() {}


		void render_asm(std::ofstream& file, Context& contxt){ 

			if(EnumeratorListPtr != NULL && !contxt.reading){
				EnumeratorListPtr->render_asm(file,contxt);
				
			}
			
			if( EnumeratorPtr != NULL && !contxt.reading){
				
				EnumeratorPtr->render_asm(file,contxt);
				//std::cout << "\n" << contxt.EnumCounter << "\n";
				contxt.EnumCounter++;
							
			}
			
			
		}

};






class EnumSpecifier : public Node {

	private:
		
		EnumeratorList* ENumeratorList;
		std::string* IDENTIFIER;

	public:

		EnumSpecifier( EnumeratorList* ENumeratorList, std::string* IDENTIFIER) : ENumeratorList(ENumeratorList), IDENTIFIER(IDENTIFIER) {}

		~EnumSpecifier() {}

		void render_asm(std::ofstream& file, Context& contxt){ 
			contxt.EnumCounter = 0;
			if( IDENTIFIER == NULL )
			{
				if(contxt.function)
				{
					contxt.EnumTemp.ScopeID = contxt.funct_id;
				}
				else
				{	
					contxt.EnumTemp.ScopeID = "global";
				}
				ENumeratorList->render_asm(file,contxt);
			//	contxt.Enum.push_back(contxt.EnumTemp);				
			}
			else if( IDENTIFIER != NULL && ENumeratorList == NULL){
				contxt.variable.id = *IDENTIFIER;
				contxt.variable.DataType = "int";
				contxt.variable.word_size = 4;
				if(contxt.function){
					contxt.variable.scope = contxt.funct_id;
				}
				else{
					contxt.variable.scope = "global";
				}
				contxt.variable.value = 0;
				contxt.variable.Pointer = false;
			}
			else if( IDENTIFIER != NULL && ENumeratorList != NULL)
			{
				if(contxt.function){
					contxt.EnumTemp.ScopeID = contxt.funct_id;
				}
				else{	
					contxt.EnumTemp.ScopeID = "global";
				}
				ENumeratorList->render_asm(file,contxt);
				
				//std::cout << contxt.EnumValuesTemp.IDENTIFIER << " " << contxt.EnumValuesTemp.value << std::endl;
			}
			
			
		}
};
 

class TypeName : public Node {

	private:
		SpecifierQualifierList* SpecifierQualifierListPtr;
		AbstractDeclarator* AbstractDeclaratorPtr;

	public:
		TypeName(SpecifierQualifierList* SpecifierQualifierListPtr , AbstractDeclarator* AbstractDeclaratorPtr) : SpecifierQualifierListPtr(SpecifierQualifierListPtr) , AbstractDeclaratorPtr(AbstractDeclaratorPtr) {}

		~TypeName() {}

		void render_asm(std::ofstream& file,Context& contxt){
		
			if(SpecifierQualifierListPtr != NULL){

				SpecifierQualifierListPtr->render_asm(file,contxt);
			}
			/*else if(AbstractDeclaratorPtr != NULL){
				AbstractDeclaratorPtr->render_asm(file,contxt);		TODO: IMPLEMENT IT
			}*/
		}


};


/* END OF NEW STUFF */


class TypeSpecifier : public Node {

	private:
		std::string* TYPES;
		StructOrUnionSpecifier* StructOrUnionSpecifierPtr;
		EnumSpecifier* EnumSpecifierPtr;
		
	public:

		TypeSpecifier(std::string* TYPES, StructOrUnionSpecifier* StructOrUnionSpecifierPtr,EnumSpecifier* EnumSpecifierPtr ) : TYPES(TYPES) , StructOrUnionSpecifierPtr(StructOrUnionSpecifierPtr) , EnumSpecifierPtr(EnumSpecifierPtr) {}


		void render_asm(std::ofstream& file,Context& contxt) {

			if(contxt.functionReturnType && !contxt.sizeof_ && !contxt.typedefs_ && !contxt.Cast){

					contxt.functionReturnTypetemp = *TYPES;


				}



			else if( TYPES != NULL && !contxt.sizeof_ && !contxt.typedefs_ && contxt.Cast){
					std::string types = *TYPES;			

					
					if (types=="char"){
						contxt.CastType = "char"; 
					}
					else if (types=="short"){
						contxt.CastType = "short";	
					}
					else if (types=="int"){
						contxt.CastType = "int";	
					}	
					else if (types=="long"){
						contxt.CastType = "long";	
					}
					else if (types=="float"){
						contxt.CastType = "float";	
					}
					else if (types=="double"){
						contxt.CastType = "double";	
					}	
					else if (types=="signed"){
						contxt.CastType = "signed";	
					}	
					else if (types=="unsigned"){
						contxt.CastType = "unsigned";
					}
				}

			else if( EnumSpecifierPtr != NULL && !contxt.sizeof_ && !contxt.Cast){
				contxt.enum_constant = true;
				EnumSpecifierPtr->render_asm(file,contxt);
				contxt.enum_constant = false;
			}

			
			else if( TYPES != NULL && !contxt.sizeof_ && !contxt.typedefs_  && !contxt.Cast ){
				std::string types = *TYPES;			// Require conversion to be used
				contxt.variable.PointerLevels = contxt.PointerCounter;
				contxt.variable.PointerLevelsTemp = contxt.PointerCounter;
				contxt.PointerCounter = 0;
				if (types=="char"){
					if(!contxt.variable.Pointer){
						contxt.variable.word_size = 1;				///it should be size=1, you need lb and sb
					}
					contxt.variable.DataType = "char";
				}
				else if (types=="short"){
					if(!contxt.variable.Pointer){
						contxt.variable.word_size = 2;				///it should be size=1, you need lb and sb
					}
					contxt.variable.DataType = "short";
				}
				else if (types=="int"){
					if(!contxt.variable.Pointer){
						contxt.variable.word_size = 4;				///it should be size=1, you need lb and sb
					}
					contxt.variable.DataType = "int";
				}	
				else if (types=="long"){
					if(!contxt.variable.Pointer){
						contxt.variable.word_size = 8;				///it should be size=1, you need lb and sb
					}
					contxt.variable.DataType = "long";
				}
				else if (types=="float"){
					if(!contxt.variable.Pointer){
						contxt.variable.word_size = 4;				///it should be size=1, you need lb and sb
					}
					contxt.variable.DataType = "float";
					contxt.float_ = true;
				}
				else if (types=="double"){
					if(!contxt.variable.Pointer){
						contxt.variable.word_size = 8;				///it should be size=1, you need lb and sb
					}
					contxt.variable.DataType = "double";
				}	
				else if (types=="signed"){
					if(!contxt.variable.Pointer){
						contxt.variable.word_size = 4;				///it should be size=1, you need lb and sb
					}
					contxt.variable.DataType = "signed";
				}	
				else if (types=="unsigned"){
					if(!contxt.variable.Pointer){
						contxt.variable.word_size = 4;				///it should be size=1, you need lb and sb
					}
					contxt.variable.DataType = "unsigned";
					contxt.is_unsigned = true;
				}
			}
				
				
				
				else if( TYPES != NULL && !contxt.sizeof_ && contxt.typedefs_  && !contxt.Cast){
					std::string types = *TYPES;			

					if (types=="char"){
						contxt.TypeDef.TypeSpec = "char";
					}
					else if (types=="short"){
						contxt.TypeDef.TypeSpec = "short";	
					}
					else if (types=="int"){
						contxt.TypeDef.TypeSpec = "int";	
					}	
					else if (types=="long"){
						contxt.TypeDef.TypeSpec = "long";	
					}
					else if (types=="float"){
						contxt.TypeDef.TypeSpec = "float";	
					}
					else if (types=="double"){
						contxt.TypeDef.TypeSpec = "double";	
					}	
					else if (types=="signed"){
						contxt.TypeDef.TypeSpec = "signed";	
					}	
					else if (types=="unsigned"){
						contxt.TypeDef.TypeSpec = "unsigned";
					}
				}

				// if(contxt.reading) { //this is predicting total stack frame for all paramters/local declarations in function body
				// 	//contxt.variable.offset = contxt.totalStackArea;
				// 	contxt.totalStackArea += contxt.variable.word_size;
				// 	//file << "\nonly golbals get here " << contxt.totalStackArea << "\n";

				// }

				// if(!contxt.reading){ //this is execution

				// 	contxt.StackOffset += contxt.variable.word_size;
				// 	contxt.variable.offset = contxt.StackOffset-contxt.variable.word_size;
				// }

			//}
			else if(contxt.sizeof_ && TYPES != NULL && !contxt.Cast){
					if(*TYPES == "int"){
						contxt.SizeOf = 4;
					}
					else if(*TYPES == "float"){
						contxt.SizeOf = 4;
					}
					else if(*TYPES == "char"){
						contxt.SizeOf = 1;
					}
					else if(*TYPES == "short"){
						contxt.SizeOf = 2;
					}
					else if(*TYPES == "long"){
						contxt.SizeOf = 8;
					}
					else if(*TYPES == "unsigned"){
						contxt.SizeOf = 4;
					}
					else if(*TYPES == "signed"){
						contxt.SizeOf = 4;
					}
					else if(*TYPES == "double"){
						contxt.SizeOf = 8;
					}
					else if(*TYPES == "void"){
						contxt.SizeOf = 1;
					}
					else if ((*TYPES).find("short") != std::string::npos) {
    						contxt.SizeOf = 2;
					}
					else if ((*TYPES).find("long") != std::string::npos) {
    						contxt.SizeOf = 8;
					}
					else if ((*TYPES).find("double") != std::string::npos) {
    						contxt.SizeOf = 8;
					}
					else if ((*TYPES).find("int") != std::string::npos) {
    						contxt.SizeOf = 8;
					}				
				

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

		void render_asm(std::ofstream& file, Context& Contxt) {

			if(TYPES != NULL && contxt.sizeof_){

				if(*TYPES == "const"){
					contxt.SizeOf = 4;
				}
				else if(*TYPES == "volatile"){
					contxt.SizeOf = 4;
				}
			}
		}

};








class DeclarationSpecifiers : public Node{

	private:
		StorageClassSpecifiers* StorageClassSpec;
		TypeSpecifier* TypeSpec;
		TypeQualifier* TypeQuaLifier;
		DeclarationSpecifiers* DeclarationSpecifiersPtr;

	public:

		DeclarationSpecifiers( StorageClassSpecifiers* StorageClassSpec, TypeSpecifier* TypeSpec, TypeQualifier* TypeQuaLifier, DeclarationSpecifiers* DeclarationSpecifiersPtr) :

					StorageClassSpec(StorageClassSpec) , TypeSpec(TypeSpec), TypeQuaLifier(TypeQuaLifier) , DeclarationSpecifiersPtr(DeclarationSpecifiersPtr) {}


		~DeclarationSpecifiers() {}


		void render_asm(std::ofstream& file,Context& contxt) {

			if(StorageClassSpec != NULL && DeclarationSpecifiersPtr == NULL) {
				StorageClassSpec->render_asm(file,contxt);	 //TODO: may have to implement this
				if(contxt.typedefs_){
					contxt.TypeAssoc.push_back(contxt.TypeDef);
					contxt.typedefs_ = false;
				}		
			}
			else if(StorageClassSpec != NULL && DeclarationSpecifiersPtr != NULL) {
				
				DeclarationSpecifiersPtr->render_asm(file,contxt);
				StorageClassSpec->render_asm(file,contxt);				
					
			}			
			else if(TypeSpec != NULL && DeclarationSpecifiersPtr == NULL) {
				
				TypeSpec->render_asm(file,contxt);
			}
			else if(TypeSpec != NULL && DeclarationSpecifiersPtr != NULL) {
				
				DeclarationSpecifiersPtr->render_asm(file,contxt);
					
				TypeSpec->render_asm(file,contxt); 
				
			}
			else if(TypeQuaLifier != NULL && DeclarationSpecifiersPtr == NULL) {
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
			if(contxt.function_dec)
			{
				contxt.funcion_temp.returnType=contxt.functionReturnTypetemp; 
				contxt.funcion_temp.name=contxt.funct_id;
				contxt.functions_declared.push_back(contxt.funcion_temp);
				contxt.funcion_temp.paramters_size=0;
				contxt.function_dec=false;
				contxt.function=false;
				file << std::endl << "# function declaration";
				if(contxt.Scopes.size()>0){
					contxt.Scopes.pop_back(); //assign the variable the scope it is in
				}
				else 
				{
					//std::cout << "PROBLEMS with Scopes" << std::endl;
				}
			}

			
			
		}
	


		virtual ~Declaration() {}
 };


class JumpStatement : public Node {

	public:
		std::string* IDENTIFIER;
		Expression* AssignmentExpressionPtr;
		std::string* JUMP_TYPE;
	public:
		JumpStatement( std::string* IDENTIFIER , Expression* AssignmentExpressionPtr, std::string* JUMP_TYPE) : IDENTIFIER(IDENTIFIER) , AssignmentExpressionPtr(AssignmentExpressionPtr) , JUMP_TYPE(JUMP_TYPE) {}

		~JumpStatement() {}

		void print_py(std::ofstream& file) ;


		void render_asm(std::ofstream& file,Context& contxt) {
			if( IDENTIFIER != NULL && JUMP_TYPE != NULL && *JUMP_TYPE == "goto" && AssignmentExpressionPtr == NULL && !contxt.reading) {
				file << std::endl << "\tb\t" << *IDENTIFIER << "_" << contxt.funct_id  << std::endl;
				file << std::endl << "\tnop";
			}

			else if( IDENTIFIER == NULL && JUMP_TYPE != NULL && *JUMP_TYPE == "continue"  && AssignmentExpressionPtr == NULL && !contxt.reading) {

						if( contxt.TestConditionContinue != NULL){
							contxt.rhs_of_expression = true;
							contxt.TestConditionContinue->render_asm(file,contxt);
							contxt.rhs_of_expression = false;
						}
						if(contxt.LoopHeader.size() != 0 && contxt.ContinueTracker.size() != 0){
							file << "\n\tb " << contxt.LoopHeader[contxt.LoopHeader.size()-1];
							//contxt.ContinueTracker.pop_back();
							file << std::endl << "\tnop";
						}			
			}			
			else if( IDENTIFIER == NULL && JUMP_TYPE != NULL && *JUMP_TYPE == "break" && AssignmentExpressionPtr == NULL && !contxt.reading) {

				if( contxt.LastScope.size() != 0 && contxt.BreakTracker.size() != 0){
					file << std::endl << "\tb\t" << contxt.LastScope[contxt.LastScope.size()-1];		//The label of the loopend
					//contxt.BreakTracker.pop_back();
					file << std::endl << "\tnop";
				}
			}
			else if( IDENTIFIER == NULL && JUMP_TYPE != NULL && *JUMP_TYPE == "return" && !contxt.reading) {				
			

				if( AssignmentExpressionPtr != NULL){
					contxt.rhs_of_expression = true;
					AssignmentExpressionPtr->render_asm(file,contxt);
					contxt.rhs_of_expression = false;
				}
				for(int i(0); i < contxt.functions_declared.size() && !contxt.reading; i++){
	
					if(contxt.functions_declared[i].returnType == "float" && contxt.functions_declared[i].name == contxt.funct_id ){
						if( AssignmentExpressionPtr != NULL && !contxt.reading){
							if( contxt.regType[contxt.Regs+1] != 'f'){
								file << std::endl << "\tmtc1\t$" << contxt.Regs+1 << ",$f" << contxt.Regs+1;		// MAY CAUSE PROBLEMS
							}
							file << std::endl << "\tmov.s\t$f0," << "$f" << contxt.Regs+1;
						}
							file << std::endl << "\tmove\t$sp,$fp";
							file << std::endl << "\tlw\t$31," << contxt.totalStackArea-4 <<"($sp)";
							file << std::endl << "\tlw\t$fp," << contxt.totalStackArea << "($sp)";
							file << std::endl << "\taddiu\t$sp,$sp," << contxt.totalStackArea + 4;
							file << std::endl << "\tj\t$31" << std::endl;
							file << std::endl << "\tnop" << std::endl;
							break;
						}
					else if(contxt.functions_declared[i].returnType != "float" && contxt.functions_declared[i].name == contxt.funct_id ){
						if( AssignmentExpressionPtr != NULL && !contxt.reading){
							if( contxt.regType[contxt.Regs+1] == 'f'){
								file << std::endl << "\t.set macro";
								file << std::endl << "\ttrunc.w.s\t$f" << contxt.Regs+1 << ",$f" << contxt.Regs+1 << ",$" << contxt.Regs+1;
								file << std::endl << "\t.set nomacro";
								file << std::endl << "\tmfc1\t$2," << "$f" << contxt.Regs+1;			// MAY CAUSE PROBLEMS
								file << std::endl << "\tnop" << std::endl;
							}
							file << std::endl << "\tmove\t$2," << "$" << contxt.Regs+1;
						}
						file << std::endl << "\tmove\t$sp,$fp";
						file << std::endl << "\tlw\t$31," << contxt.totalStackArea-4 <<"($sp)";
						file << std::endl << "\tlw\t$fp," << contxt.totalStackArea << "($sp)";
						file << std::endl << "\taddiu\t$sp,$sp," << contxt.totalStackArea + 4;
						file << std::endl << "\tj\t$31" << std::endl;
						file << std::endl << "\tnop" << std::endl;
						break;
					}
				}
		
			}
		}
};

class IterationStatement : public Node {

	private:
		Expression* AssignmentExpressionPtr; //EXPRESSION = ASSIGNMENT_EXPRESSION
		Statement* StatementPtr;
		ExpressionStatement* ExpressionStatementPtr;
		ExpressionStatement* ExpressionStatementPtr2;
		std::string* ITERATIVE_TYPE;
		
	public:
		IterationStatement(Expression* AssignmentExpressionPtr , Statement* StatementPtr, ExpressionStatement* ExpressionStatementPtr, ExpressionStatement* ExpressionStatementPtr2, std::string* ITERATIVE_TYPE) : AssignmentExpressionPtr(AssignmentExpressionPtr) , StatementPtr(StatementPtr) , ExpressionStatementPtr(ExpressionStatementPtr) , ExpressionStatementPtr2(ExpressionStatementPtr2) , ITERATIVE_TYPE(ITERATIVE_TYPE) {}

		~IterationStatement() {}

		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file, Context& contxt) ;
};



	
class SelectionStatement : public Node {

	public:
		Expression* AssignmentExpressionPtr;
		Statement* StatementPtr;
		Statement* StatementPtr2;
		std::string* SELECTIVE_IF;
		std::string* SELECTIVE_ELSE;
		std::string* SELECTIVE_SWITCH;
	public:
		SelectionStatement(Expression* AssignmentExpressionPtr , Statement* StatementPtr, Statement* StatementPtr2, std::string* SELECTIVE_IF, std::string* SELECTIVE_ELSE , std::string* SELECTIVE_SWITCH) : AssignmentExpressionPtr(AssignmentExpressionPtr) , StatementPtr(StatementPtr) , StatementPtr2(StatementPtr2) ,SELECTIVE_IF(SELECTIVE_IF) , 
			SELECTIVE_ELSE(SELECTIVE_ELSE) , SELECTIVE_SWITCH(SELECTIVE_SWITCH) {}

		~SelectionStatement() {}

		void print_py(std::ofstream& file,bool elseif=false) ;

		void render_asm(std::ofstream& file, Context& contxt) ;

		std::string* get_info() ;
};






class ExpressionStatement : public Node {

	private:
		Expression* AssignmentExpressionPtr;
		
	public:
		ExpressionStatement(Expression* AssignmentExpressionPtr) : AssignmentExpressionPtr(AssignmentExpressionPtr) {}

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

		void render_asm(std::ofstream& file,Context& contxt) ;
		
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

		void render_asm(std::ofstream& file,Context& contxt);

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
			std::string label_id = labelGen(contxt);
			std::string scope = "SCOPE" + label_id;
			contxt.Scopes.push_back(scope);
			//std::cout << "where are the scopes?";
			//print_scopes(contxt, file);
			if(DeclarationListPtr != NULL && StatementListPtr == NULL) {

				DeclarationListPtr->render_asm(file,contxt);
			}
			if(StatementListPtr != NULL && DeclarationListPtr == NULL ) {
				//if(!contxt.reading){
					StatementListPtr->render_asm(file,contxt);
				//}
			}
			if(StatementListPtr != NULL && DeclarationListPtr != NULL ) {
				
				DeclarationListPtr->render_asm(file,contxt);
				//if(!contxt.reading){
					StatementListPtr->render_asm(file,contxt);
				//}
			}	
			if(contxt.Scopes.size()>0){
					contxt.Scopes.pop_back(); //assign the variable the scope it is in
				}
				else 
				{
					std::cout << "PROBLEMS with Scopes" << std::endl;
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
			
			contxt.function_dec=false;
			if( DeclarationSpecifiersPtr != NULL ) {
				contxt.functionReturnType = true;
				DeclarationSpecifiersPtr->render_asm(file,contxt);			//check the return type
				contxt.functionReturnType = false;
			}
			contxt.funcion_temp.returnType=contxt.functionReturnTypetemp; 

			if( DeclaratorPtr != NULL ) {				//function_def.name and function_def.no_parameters are assigned here
				
				contxt.protect = false; //protect overwriting currennt scope global/function
				//contxt.max_offset = 0;
				DeclaratorPtr->render_asm(file,contxt);
				//std::cout << "end of declarator" << std::endl;
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
			//contxt.Scopes.push_back(contxt.funct_id);
			//contxt.funcion_temp.returnType=contxt.functionReturnTypetemp; 
			contxt.funcion_temp.name=contxt.funct_id;
			contxt.functions_declared.push_back(contxt.funcion_temp);
			contxt.funcion_temp.paramters_size=0;
			if( DeclarationListPtr != NULL ) {   			//( functions having const-correctness for example )
				//DeclarationListPtr->render_asm(file,contxt);
			}
			//std::cout << "start of compund" << contxt.funct_id << std::endl;
			if( CompoundStatementPtr != NULL ) { // function_def.area is calculated here
				contxt.totalStackArea = 12+104+44;
				contxt.reading = true;						// this flag is used to prevent writing asm on file<< while reading ahead
				CompoundStatementPtr->render_asm(file,contxt);  // ...(file,initialized,function)
				contxt.reading = false;
			}
			contxt.is_function_call=false;	
			//std:: cout << "\nmax_offset" << contxt.max_offset << " " <<  contxt.funct_id <<"\n";
			contxt.totalStackArea+=contxt.max_offset;
			contxt.max_offset=16;
			//print_scopes(contxt, file);
			if(contxt.Scopes.size()>=1){
				for (int k=0; k<contxt.Variables.size(); k++)
				{	for (int j=contxt.Scopes.size()-1; j>=0; j--)
					{			
						if(contxt.Scopes[j]==contxt.Variables[k].scope)
						{
							contxt.Variables[k].param_offset = contxt.Variables[k].offset-4;
							contxt.Variables[k].offset += contxt.totalStackArea;
						}
					}
				}
			}		
			//contxt.function_def.name = contxt.funct_id;
			//contxt.function_def.no_parameters = no_parameters; // private var in ParameterList
			//no_parameters = 0;
			//contxt.function_def.area = contxt.totalStackArea;
			
			//contxt.functions.push_back(contxt.function_def);
			file << "\t.set noreorder" << std::endl;
			file << "\t.set nomacro" << std::endl;
			
			file << "\taddiu $sp,$sp,-"<< contxt.totalStackArea+4;
			file << std::endl << "\tsw $fp," << contxt.totalStackArea << "($sp)";
			file << std::endl << "\tsw $31," << contxt.totalStackArea-4 <<"($sp)";
			file << std::endl << "\tmove $fp,$sp\n";
			// file << std::endl << "\tlui $28,%hi(__gnu_local_gp)";
			// file << std::endl << "\taddiu $28,$28,%lo(__gnu_local_gp)";

			
			int floatt=0;
			for(int i=0; i<contxt.Variables.size(); i++)
			{
				if(contxt.Variables[i].param_offset==0 && contxt.Variables[i].scope==contxt.funct_id && contxt.Variables[i].DataType == "float")
				{
					floatt++;
				}
				if(floatt==1 && contxt.Variables[i].param_offset==4 && contxt.Variables[i].scope==contxt.funct_id && contxt.Variables[i].DataType == "float")
				{
					floatt++;	
				}
			}
			if(floatt)
			{
				file << std::endl << "\tswc1\t$f12," <<  contxt.totalStackArea + 4*(4-3) << "($sp)"; 
			}
			if(floatt==2)
			{
				file << std::endl << "\tswc1 $f14, " << contxt.totalStackArea + 4*(5-3) << "($sp)"; 
			}

			
			for(int i=4+floatt; i<=7; i++) //shift by 4 all the parameters
			{
				file << std::endl << "\tsw $" << i <<  "," << contxt.totalStackArea + 4*(i-3) << "($sp)"; 
			}

			contxt.variable.offset=contxt.totalStackArea-4;
			if( CompoundStatementPtr != NULL ) {
				//contxt.reading = false;
				CompoundStatementPtr->render_asm(file,contxt);
				//contxt.reading = false;
			}

			file << std::endl << "\tmove $sp,$fp";
			file << std::endl << "\tlw $31," << contxt.totalStackArea-4 <<"($sp)";
			file << std::endl << "\tlw $fp," << contxt.totalStackArea << "($sp)";
			file << std::endl << "\taddiu $sp,$sp," << contxt.totalStackArea + 4;
			file << std::endl << "\tj $31" << std::endl;
			file << std::endl << "\tnop" << std::endl;
			file << "\t.set macro" << std::endl;
			file << "\t.set reorder" << std::endl;
			file << "\t.end " << contxt.funct_id << std::endl;
			file << "\t.size " << contxt.funct_id << ", .-" << contxt.funct_id << std::endl;
			//contxt.totalStackArea = 8;
			//print_variables(contxt, file);
			if(contxt.Scopes.size()>0){
					contxt.Scopes.pop_back(); //assign the variable the scope it is in
				}
				else 
				{
					//std::cout << "PROBLEMS with Scopes" << std::endl;
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


		
		void print_py(std::ofstream& file) ;
		
		void render_asm(std::ofstream& file,Context& contxt) {

			if( ExternalDeclarationPtr != NULL ) {
				//std::cout << "\nExternalDec!" << std::endl;; 
				ExternalDeclarationPtr->render_asm(file,contxt);
			}

			if ( DecLaration  == NULL && FunctionDef != NULL){
				contxt.function = true;
				file << std::endl;
				contxt.StackOffset = 0;
				contxt.protect=true; 
				//std::cout << "\nFunctDef" << std::endl;
				FunctionDef->render_asm(file,contxt);
				contxt.protect=false;
				contxt.StackOffset = 0; 				//reset the stack offset for other functions
				file << std::endl;
				contxt.function = false;
			}

			if ( FunctionDef  == NULL && DecLaration != NULL){
				contxt.function = false;
				file << std::endl;
				//std::cout << "\nDeclaration" << std::endl;
				DecLaration->render_asm(file,contxt);			// This path is taken for global declarations that are not functions
				file << std::endl;
			}
			//std::cout << "\nhow?" << std::endl;
		}
			

		 virtual ~ExternalDeclaration() {}

};








class TranslationUnit : public Node{

	private:

	
	ExternalDeclaration* ExternalDecl;
	TranslationUnit* TranslationUnitPtr;

	public:

    		TranslationUnit(ExternalDeclaration* ExternalDecl, TranslationUnit* TranslationUnitPtr) :  ExternalDecl(ExternalDecl) , TranslationUnitPtr(TranslationUnitPtr){}

		virtual void print_py(std::string file_name) const ;
		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file, Context& contxt) {

			if(TranslationUnitPtr != NULL){
				TranslationUnitPtr->render_asm(file,contxt);
			}
			if( ExternalDecl != NULL){
				ExternalDecl->render_asm(file,contxt);
			}
		}

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
			if(TranslationUnitPtr != NULL){
				TranslationUnitPtr->render_asm(file,contxt);
			}
			if( ExternalDecl != NULL){
				ExternalDecl->render_asm(file,contxt);
			}
			
			// for (int i=0; i<contxt.functions_declared.size(); i++)
			// {
			// 	std::cout << contxt.functions_declared[i].name << " - " << contxt.functions_declared[i].paramters_size; 
			// }
			 // print_scopes(contxt,file);
			 // print_variables(contxt,file);
			//print_declared(contxt, file);
		}

		 virtual ~TranslationUnit() {}
};







inline void DeclarationList::render_asm(std::ofstream& file,Context& contxt) {
				
			if(DeclarationListPtr != NULL) {
				DeclarationListPtr->render_asm(file,contxt);
			}
			DeclarationPtr->render_asm(file,contxt);
}


inline void DirectDeclarator::render_asm(std::ofstream& file,Context& contxt) {

			if(contxt.function)
			{
				round1_square2_closed3=0;
			}
			if(round1_square2_closed3) 
			{
				//file << std::endl << *BracketPtr << " llooooookkkk heereee";

				if(round1_square2_closed3==1) //this is a  function declaration
				{
					round1_square2_closed3=0;
					contxt.function=true;	//we are in a function
					contxt.function_dec=true;	//we are declaring a function
					//contxt.funct_id=*(DirectDeclaratorPtr->IDENTIFIER);	
					DirectDeclaratorPtr->render_asm(file,contxt); //this will: contxt.funct_id=*IDENTIFIER
					round1_square2_closed3=0;
				}
				if(round1_square2_closed3==2)
				{
					DirectDeclaratorPtr->render_asm(file, contxt);
					round1_square2_closed3=0;
				
					contxt.count_array_initializers=0;
					if(ConstantExpRession!=NULL)
					{
						ConstantExpRession->render_asm(file,contxt);
						contxt.no_array_elements=contxt.eval[contxt.Regs+1];
					}
				}
			}else if( DirectDeclaratorPtr != NULL) {
				//std::cout << "print this once" << std::endl; 
				DirectDeclaratorPtr->render_asm(file,contxt);
			}
			if( ParameterTypeLiSt != NULL) 
				{
					//std::cout << "go to parameter type list" << std::endl;
					ParameterTypeLiSt->render_asm(file,contxt);
				}
	
			if( IDENTIFIER != NULL && contxt.typedefs_){
				contxt.TypeDef.DummyName = *IDENTIFIER;
				return;

			}		
			
			
			if((!contxt.function && IDENTIFIER != NULL && !contxt.reading && !contxt.protect)) 			//if we are not in a function then this must be a global declaration
			{
				//std::cout << "it shouldn't be global!" << std::endl;
				contxt.variable.id = *IDENTIFIER;
				if( !contxt.initialized ) {				//if it is not initialized then set it to 0
					contxt.variable.value = 0;
				}
				contxt.variable.scope = "global";			//set the variable's scope as global to be saved in the bindings struct
				if(contxt.Variables.size()==0){
					contxt.Variables.push_back(contxt.variable);

				}
				else if(contxt.Variables.size()>0 && contxt.Variables[contxt.Variables.size()-1].id!=*IDENTIFIER)
				{	
					contxt.Variables.push_back(contxt.variable);
				}  
				//print_variables(contxt,file);
			}
			else if((contxt.function && IDENTIFIER != NULL && !contxt.reading)||contxt.parameter) //for parameters and local functions
			{		//if we are in a function and the identifier is not null and protect flag is off
				
				if( !contxt.protect && !contxt.parameter)// we only push the id of the functions that are defined 
				{				//then this is a function name we are reading					
					contxt.funct_id = *IDENTIFIER;		//obtain the scope we are currently in	
					contxt.Scopes.push_back(contxt.funct_id);
				}
				else
				{
					if(contxt.variable.StorageClass == "extern"){
						contxt.variable.scope = "global";
					}
					else{
						if(contxt.Scopes.size()>0){
							contxt.variable.scope = contxt.Scopes[contxt.Scopes.size()-1]; //assign the variable the scope it is in
						}
						
					}
					contxt.variable.id = *IDENTIFIER;	//if the portect flag is on then we are already inside the function , not reading the function name
					if( !contxt.initialized ) 
					{			//if the local declaration is not initialized, set it to 0
						contxt.variable.value = 0;
					}
					contxt.Variables.push_back(contxt.variable);
				}
			}
				int found_local = 0;	
				int good_index = 0;		//this will determine whether the variable wanted is a global or a local
				int i, j;				//must initialize the index i outside so it is accessible throughout here
				if(contxt.Variables.size()>0&&contxt.Scopes.size()>0)
				{
					for (j=contxt.Scopes.size()-1; j>=0; j--)
					{
						for(i=contxt.Variables.size()-1; i>=0; i--) {
							if(contxt.Variables[i].scope == contxt.Scopes[j] && IDENTIFIER!=NULL && *IDENTIFIER == contxt.Variables[i].id) 
							{
								good_index = i;
								contxt.good_i = good_index;
								found_local = 1;		//means that we found a local variable in the function of that name												good_index=i;
								i = -1;
								j = -1;						
							}
						}
					}
				}
				if(!found_local) 
				{
					for(i=0; i<contxt.Variables.size(); i++) 
					{
						if(contxt.Variables[i].scope == "global" && IDENTIFIER!=NULL && *IDENTIFIER == contxt.Variables[i].id) 
						{
							found_local=2;
							good_index = i;
							contxt.good_i = good_index;
							i = contxt.Variables.size();
						}
					}
				}   	
				if(contxt.lhs_of_assignment  && !contxt.reading && contxt.function){
					if(found_local==1) 
					{ //local
						if(contxt.initialized)
						{
							store_locals(contxt, file, good_index);
						}
						else 
						{
							if(contxt.Variables[good_index].word_size==1)
							{
								file << std::endl << "\tsb\t$0, " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n";
							}
							else if( contxt.Variables[good_index].word_size==4 && !contxt.float_)
							{
								file << std::endl << "\tsw\t$0, " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n"; 
							}
							else if( contxt.Variables[good_index].word_size==2 && !contxt.float_)
							{
								file << std::endl << "\tsh\t$0, " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n"; 
							}
							else if( contxt.Variables[good_index].word_size==4 && contxt.float_)
							{
								file << std::endl << "\tswc1\t$0, " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n"; 
							}
							
						}
					}
					else if(found_local==2) 
					{ //global
						store_globals(contxt, file, good_index);
					}	
								
					else
					{
						if(IDENTIFIER!=NULL){
							file << std::endl << "#VARIABLE : " << *IDENTIFIER << "NOT DECLARED!!!\n";
						}
					}
				}		
				

					

				
				
					
					/*else if( IDentifierList != NULL) {
						IDentifierList->render_asm(file);
					}*/

			

	}



inline void ParameterDeclaration::render_asm(std::ofstream& file, Context& contxt)  {
			//std::cout << "parameter declaration" << std::endl;
			if( DeclarationSpecifiersPtr != NULL) {
				
				DeclarationSpecifiersPtr->render_asm(file,contxt);
				
			}

			if( DeclaratorPtr != NULL) {
				contxt.variable.offset += 4;//contxt.variable.word_size;
				DeclaratorPtr->render_asm(file,contxt);
			}
			
		}	


inline void Declarator::render_asm(std::ofstream& file,Context& contxt) {
			if(  PointerPtr != NULL && DirectDecLarator != NULL){
				
				contxt.variable.Pointer = true;
				PointerPtr->render_asm(file,contxt);
				DirectDecLarator->render_asm(file,contxt);
				contxt.variable.Pointer = false;
				contxt.variable.PointerLevels = 0;
				contxt.variable.PointerLevelsTemp = 0;
				
			}
			
			else if( DirectDecLarator != NULL && PointerPtr == NULL){
						
				DirectDecLarator->render_asm(file,contxt);
			}
		}

inline void Statement::render_asm(std::ofstream& file,Context& contxt) {
		
			if( LabeledStatementPtr != NULL && !contxt.reading) {				//TODO: DO IT
				LabeledStatementPtr->render_asm(file,contxt);
			}
			else if( CompoundStatementPtr != NULL) {
				CompoundStatementPtr->render_asm(file,contxt);
			}
		if( !contxt.ReadingSwitch){
			if( ExpressionStatementPtr != NULL) {		
				ExpressionStatementPtr->render_asm(file,contxt);
			}
			else if( IterationStatementPtr != NULL && !contxt.reading) {
				IterationStatementPtr->render_asm(file,contxt);
			}
			else if( JumpStatementPtr != NULL) {
				JumpStatementPtr->render_asm(file,contxt);
			}
			else if( SelectionStatementPtr != NULL ) {			//TODO: SWITCH / CASE
				SelectionStatementPtr->render_asm(file,contxt);
			}
		}
	}


inline void IterationStatement::render_asm(std::ofstream& file, Context& contxt) {
			
			std::string label_id = labelGen(contxt);
			std::string WHILE = "$WHILE" + label_id;
			std::string DO = "$DO" + label_id;
			std::string END = "$END" + label_id;
			std::string FOR = "$FOR" + label_id;
			std::string BEGIN_ = "$BEGIN" + label_id;
			std::string BEGIN_2 = "$BEGIN2_" + label_id;


			if( ITERATIVE_TYPE != NULL && *ITERATIVE_TYPE == "while" && AssignmentExpressionPtr != NULL && StatementPtr != NULL) {
				contxt.BreakCounter++;
				contxt.ContinueCounter++;

				file << std::endl << BEGIN_ << ":";
				
				contxt.LoopHeader.push_back(BEGIN_2);
				contxt.ContinueTracker.push_back(contxt.ContinueCounter);

				contxt.rhs_of_expression = true;
				contxt.TestConditionContinue = AssignmentExpressionPtr; //In case of a continue
				AssignmentExpressionPtr->render_asm(file,contxt);
				contxt.rhs_of_expression = false;
				if(!contxt.reading)	{
					if(contxt.regType[contxt.Regs+1] == 'f'){
						file << std::endl << BEGIN_2 << ":" << "\tli.s\t$f1,0";
						
						file << std::endl << "\tc.eq.s\t$f" << contxt.Regs+1 << ",$f1";
						file << std::endl << "\tnop";
						file << std::endl << "\tbc1t\t" << END;
						file << std::endl << "\tnop";
					}
					else{				
						file << std::endl << BEGIN_2 << ":" << "\tbeq\t$" << contxt.Regs+1 << ",$0," << END;
						file << std::endl << "\tnop";
					}
				}
				file << std::endl << WHILE << ":";

				contxt.LastScope.push_back(END);
				contxt.BreakTracker.push_back(contxt.BreakCounter);

				StatementPtr->render_asm(file,contxt);
				if(!contxt.reading)	{
					if(contxt.regType[contxt.Regs+1] == 'f'){
						file << "\n\tb " << BEGIN_;
						file << std::endl << "\tnop";					
					}
					else{
						file << "\n\tb " << BEGIN_;
						file << std::endl << "\tnop";
					}
				}
				contxt.LoopHeader.pop_back();
				contxt.LastScope.pop_back();
				file << std::endl << END << ":";

				
				contxt.BreakCounter--;
				contxt.ContinueCounter--;
				

			}

			else if( ITERATIVE_TYPE != NULL && *ITERATIVE_TYPE == "do" && AssignmentExpressionPtr != NULL && StatementPtr != NULL){

				contxt.ContinueCounter++;
				contxt.BreakCounter++;

				file << std::endl << DO << ":";
				contxt.LoopHeader.push_back(BEGIN_2);
				contxt.ContinueTracker.push_back(contxt.ContinueCounter);

				contxt.LastScope.push_back(END);
				contxt.BreakTracker.push_back(contxt.BreakCounter);

				StatementPtr->render_asm(file,contxt);
				contxt.rhs_of_expression = true;
				contxt.TestConditionContinue = AssignmentExpressionPtr; //In case of a continue
				AssignmentExpressionPtr->render_asm(file,contxt);
				contxt.rhs_of_expression = false;
				if(!contxt.reading)	
				{
					if(contxt.regType[contxt.Regs+1] == 'f'){
						file << std::endl << BEGIN_2 << ":" << "\tli.s\t$f1,0";
						
						file << std::endl << "\tc.eq.s\t$f" << contxt.Regs+1 << ",$f1";
						file << std::endl << "\tnop";
						file << std::endl << "\tbc1t\t" << END;
						file << std::endl << "\tnop";
					}
					else{
						file << std::endl << BEGIN_2 << ":" << "\tbeq\t$" << contxt.Regs+1 <<",$0," << END;
						file << std::endl << "\tnop";
					}			
					file << "\n\tb " << DO;
					file << std::endl << "\tnop";
					file << std::endl << END << ":";
				}
				contxt.LoopHeader.pop_back();
				contxt.LastScope.pop_back();
				
				contxt.BreakCounter--;
				contxt.ContinueCounter--;
				
			}

			else if( ITERATIVE_TYPE != NULL && *ITERATIVE_TYPE == "for" && ExpressionStatementPtr != NULL && ExpressionStatementPtr2 != NULL && AssignmentExpressionPtr == NULL && StatementPtr != NULL){
				contxt.ContinueCounter++;
				contxt.BreakCounter++;

				ExpressionStatementPtr->render_asm(file,contxt);
				file << std::endl << FOR << ":";

				contxt.LoopHeader.push_back(BEGIN_2);
				contxt.ContinueTracker.push_back(contxt.ContinueCounter);

				contxt.rhs_of_expression = true;
				ExpressionStatementPtr2->render_asm(file,contxt);
				contxt.rhs_of_expression = false;
				if(!contxt.reading)	{

					if(contxt.regType[contxt.Regs+1] == 'f'){
						file << std::endl << BEGIN_2 << ":" << "\tli.s\t$f1,0";
						
						file << std::endl << "\tc.eq.s\t$f" << contxt.Regs+1 << ",$f1";
						file << std::endl << "\tnop";
						file << std::endl << "\tbc1t\t" << END;
						file << std::endl << "\tnop";
					}
					else{
						file << std::endl << BEGIN_2 << ":" << "\tbeq\t$" << contxt.Regs+1 <<",$0," << END;
						file << std::endl << "\tnop";
					}
				}

				contxt.LastScope.push_back(END);
				contxt.BreakTracker.push_back(contxt.BreakCounter);

				StatementPtr->render_asm(file,contxt);				
				if(!contxt.reading)	{
					file << "\n\tb " << FOR;
					file << std::endl << "\tnop";
				}
				contxt.LoopHeader.pop_back();
				contxt.LastScope.pop_back();			
				file << std::endl << END << ":";
				contxt.BreakCounter--;
				contxt.ContinueCounter--;
				
			}

			else if(ITERATIVE_TYPE != NULL && *ITERATIVE_TYPE == "for" && ExpressionStatementPtr != NULL && ExpressionStatementPtr2 != NULL && AssignmentExpressionPtr != NULL && StatementPtr != NULL){
				contxt.ContinueCounter++;
				contxt.BreakCounter++;
				ExpressionStatementPtr->render_asm(file,contxt);

				contxt.LastScope.push_back(END);
				contxt.BreakTracker.push_back(contxt.BreakCounter);

				file << std::endl << FOR << ":";

				contxt.LoopHeader.push_back(BEGIN_2);
				contxt.ContinueTracker.push_back(contxt.ContinueCounter);

				contxt.rhs_of_expression = true;
				ExpressionStatementPtr2->render_asm(file,contxt);
				contxt.rhs_of_expression = false;
				if(!contxt.reading)	{
					if(contxt.regType[contxt.Regs+1] == 'f'){
						file << std::endl << BEGIN_2 << ":" << "\tli.s\t$f1,0";
						
						file << std::endl << "\tc.eq.s\t$f" << contxt.Regs+1 << ",$f1";
						file << std::endl << "\tnop";
						file << std::endl << "\tbc1t\t" << END;
						file << std::endl << "\tnop";
					}
					else{
						file << std::endl << BEGIN_2 << ":" << "\tbeq\t$" << contxt.Regs+1 <<",$0," << END;
						file << std::endl << "\tnop";
					}				
				}
				contxt.TestConditionContinue = AssignmentExpressionPtr; //In case of a continue
				StatementPtr->render_asm(file,contxt);
				
				contxt.rhs_of_expression = true;
				
				AssignmentExpressionPtr->render_asm(file,contxt);
				contxt.rhs_of_expression = false;
				if(!contxt.reading){
					file << "\n\tb " << FOR;
					file << std::endl << "\tnop";
				}
				contxt.LoopHeader.pop_back();
				contxt.LastScope.pop_back();
				file << std::endl << END << ":";
				contxt.BreakCounter--;
				contxt.ContinueCounter--;
				
			}
			//file << std::endl << END << ":"; 
		
		}





inline void SelectionStatement::render_asm(std::ofstream& file, Context& contxt) {
		
			std::string label_id = labelGen(contxt);
			std::string ELSE = "$ELSE" + label_id;
			std::string IF = "$IF" + label_id;
			std::string END = "$END" + label_id;
			std::string SWITCH = "$SWITCH" + label_id;
			

			if( SELECTIVE_IF != NULL && SELECTIVE_SWITCH == NULL && SELECTIVE_ELSE == NULL && AssignmentExpressionPtr != NULL && StatementPtr != NULL && StatementPtr2 == NULL) {
				
				contxt.rhs_of_expression = true;
				AssignmentExpressionPtr->render_asm(file,contxt);
				contxt.rhs_of_expression = false;
				if(!contxt.reading)	{
					if(contxt.regType[contxt.Regs+1] == 'f'){
						file << std::endl << "\tli.s\t$f1,0";
						
						file << std::endl << "\tc.eq.s\t$f" << contxt.Regs+1 << ",$f1";
						file << std::endl << "\tnop";
						file << std::endl << "\tbc1t\t" << END;
						file << std::endl << "\tnop";
					}
					else{
						file << std::endl << "\tbeq\t$" << contxt.Regs+1 <<",$0," << END;
						file << std::endl << "\tnop";
					}
				}
				file << std::endl << IF << ":";
				StatementPtr->render_asm(file,contxt);
			        file << std::endl << END << ":"; 
			}
			
			
			else if( SELECTIVE_IF != NULL && SELECTIVE_SWITCH == NULL && SELECTIVE_ELSE != NULL && AssignmentExpressionPtr != NULL && StatementPtr != NULL && StatementPtr2 != NULL) {
				contxt.rhs_of_expression = true;
				AssignmentExpressionPtr->render_asm(file,contxt);
				contxt.rhs_of_expression = false;
				if(!contxt.reading)	{
					if(contxt.regType[contxt.Regs+1] == 'f'){
						file << std::endl << "\tli.s\t$f1,0";						
						file << std::endl << "\tc.eq.s\t$f" << contxt.Regs+1 << ",$f1";
						file << std::endl << "\tnop";
						file << std::endl << "\tbc1t\t" << ELSE;
						file << std::endl << "\tnop";
					}
					else{
						file << std::endl << "\tbeq\t$" << contxt.Regs+1 <<",$0," << ELSE;
						file << std::endl << "\tnop";
					}
				}
				file << std::endl << IF << ":";
				StatementPtr->render_asm(file,contxt);
				if(!contxt.reading)	{
					file << "\n\tb " << END;
					file << std::endl << "\tnop";
				}
				file << std::endl << ELSE << ":";
				StatementPtr2->render_asm(file,contxt);
				file << std::endl << END << ":"; 
			}
						

			else if( SELECTIVE_IF == NULL && SELECTIVE_SWITCH != NULL && SELECTIVE_ELSE == NULL && AssignmentExpressionPtr != NULL && StatementPtr != NULL && StatementPtr2 == NULL) {					
					
				
							
					
					contxt.SwitchControl++;
					contxt.BreakCounter++;
					contxt.LastScope.push_back(END);

				if( contxt.SwitchControl == 1 || contxt.inCase){

					
					
					contxt.rhs_of_expression = true;
					AssignmentExpressionPtr->render_asm(file,contxt);
					contxt.rhs_of_expression = false;			

					contxt.BreakTracker.push_back(contxt.BreakCounter);
					contxt.Regs++;
					contxt.ReadingSwitch = true;
					
					StatementPtr->render_asm(file,contxt);
					if( contxt.LastScope.size() != 0 && contxt.BreakTracker.size() != 0 && contxt.ReadingSwitch){
						file << std::endl << "\tb\t" << contxt.LastScope[contxt.LastScope.size()-1];		//The label of the loopend
						//contxt.BreakTracker.pop_back();
						file << std::endl << "\tnop";
					}
					contxt.ReadingSwitch = false;
					contxt.Regs--;			

					
					
					
					
					contxt.EndSwitchLoop.push_back(SWITCH);
					contxt.Regs++;
					StatementPtr->render_asm(file,contxt);
					contxt.Regs--;
					
					
					
					
				}
				

				
				contxt.LastScope.pop_back();
				file << std::endl << END << ":";
			
					
					
				if(contxt.SwitchControl!=0){
					contxt.SwitchControl--;
				}
					contxt.BreakCounter--;
					
				
					
			}
			//if(contxt.LastScope.size() > 0 && !contxt.ReadingSwitch && contxt.VectorSize >= contxt.Cases.size() && contxt.VectorSize != 0){
			//	file << std::endl << contxt.LastScope[contxt.LastScope.size()-1] << ":";
			//}
			//contxt.inCase = false;
				
		
		}


inline void LabeledStatement::render_asm(std::ofstream& file,Context& contxt) {

		
				
				

			if( LABELED_TYPE != NULL && ConstantExpressionPtr != NULL && *LABELED_TYPE == "case" && StatementPtr != NULL) {
				
				if(!contxt.ReadingSwitch){
					
					if( contxt.Cases.size() != 0 && contxt.VectorSize < contxt.Cases.size()){
						for(int i(0); i < contxt.Cases.size(); i++){

							if(contxt.Cases[i].ConstantTemp == ConstantExpressionPtr){
								file <<  std::endl << contxt.Cases[i].CaseID << ":";
								contxt.VectorSize++;
								break;
							}

						}
						
						
						StatementPtr->render_asm(file,contxt);
					}					
					
					
				}
				else if(contxt.ReadingSwitch){
					
					contxt.inCase = true;
					std::string label_id = labelGen(contxt);	
					std::string CASE = "$CASE" + label_id ;
					
						contxt.SwitchTemp.ConstantTemp = ConstantExpressionPtr;
						contxt.SwitchTemp.CaseID = CASE;

						contxt.rhs_of_expression = true;
						ConstantExpressionPtr->render_asm(file,contxt); //li in register 3
						contxt.rhs_of_expression = false;

						if(contxt.regType[contxt.Regs+1] == 'f'){					
							file << std::endl << "\tc.eq.s\t$f" << contxt.Regs << ",$f" << contxt.Regs+1;
							file << std::endl << "\tnop";
							file << std::endl << "\tbc1t\t" << CASE;
							file << std::endl << "\tnop";
						}
						else{
							file << std::endl << "\tbeq\t$" << contxt.Regs << ",$" << contxt.Regs+1 << "," << CASE;  //beq
						}
						contxt.Cases.push_back(contxt.SwitchTemp);
						file << std::endl << "\tnop";				//nop
					contxt.SwitchControl = 0;
					contxt.inCase = false;
					
					
				}
				
				
			}


			else if( LABELED_TYPE == NULL && ConstantExpressionPtr == NULL && IDENTIFIER != NULL && StatementPtr != NULL && !contxt.ReadingSwitch) {

				
				file << std::endl << *IDENTIFIER << "_" << contxt.funct_id << ":" << std::endl;
				StatementPtr->render_asm(file,contxt);
				
			}
		

			else if( LABELED_TYPE != NULL && ConstantExpressionPtr == NULL && *LABELED_TYPE == "default" && StatementPtr != NULL) {				
				
				if(!contxt.ReadingSwitch){
					
					if( contxt.Cases.size() != 0 && contxt.VectorSize < contxt.Cases.size()){
						for(int i(0); i < contxt.Cases.size(); i++){

							if(contxt.Cases[i].ConstantTemp == NULL){
								file <<  std::endl << contxt.Cases[i].CaseID << ":";
								contxt.VectorSize++;
								break;
							}

						}
						
						
						StatementPtr->render_asm(file,contxt);
					}					
					
					
				}
				else if(contxt.ReadingSwitch){
					
					contxt.inCase = true;
					std::string label_id = labelGen(contxt);	
					std::string DEFAULT = "$DEFAULT" + label_id ;
					
						contxt.SwitchTemp.ConstantTemp = NULL;
						contxt.SwitchTemp.CaseID = DEFAULT;


						file << std::endl << "\tb\t" << DEFAULT;  //beq

						contxt.Cases.push_back(contxt.SwitchTemp);
						file << std::endl << "\tnop";				//nop
					contxt.SwitchControl = 0;
					contxt.inCase = false;
					
				}
					
			}
			

		}


inline void SpecifierQualifierList::render_asm(std::ofstream& file, Context& contxt) {

			if(TypeSpecifierPtr != NULL && SpecifierQualifierListPtr == NULL && TypeQualifierPtr == NULL){
				TypeSpecifierPtr->render_asm(file,contxt);
			}
			else if(TypeSpecifierPtr != NULL && SpecifierQualifierListPtr != NULL && TypeQualifierPtr == NULL){
				TypeSpecifierPtr->render_asm(file,contxt);
				SpecifierQualifierListPtr->render_asm(file,contxt);				
			}
			else if(TypeSpecifierPtr == NULL && SpecifierQualifierListPtr != NULL && TypeQualifierPtr != NULL){		
				TypeQualifierPtr->render_asm(file,contxt);
				SpecifierQualifierListPtr->render_asm(file,contxt);				
			}
			else if(TypeSpecifierPtr == NULL && SpecifierQualifierListPtr == NULL && TypeQualifierPtr != NULL){
				TypeQualifierPtr->render_asm(file,contxt);				
			}
		}


inline void InitializerList::render_asm(std::ofstream& file,Context& contxt) {

			if( InitializerListPtr != NULL){
			
				InitializerListPtr->render_asm(file,contxt);
			}

			if( InitializerPtr != NULL) {
	
				InitializerPtr->render_asm(file,contxt);
			
			}

		}


#endif