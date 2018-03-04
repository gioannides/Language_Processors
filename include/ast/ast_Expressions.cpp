#include "ast_node.hpp"




inline void CastExpression::render_asm(std::ofstream& file,Context& contxt) {

			if( UNaryExpression != NULL){
				
				UNaryExpression->render_asm(file,contxt);
			}

		}


inline void MultiplicativeExpression::render_asm(std::ofstream& file,Context& contxt) {

			
			if(OPERATOR==NULL && CaStExpression != NULL){
				CaStExpression->render_asm(file,contxt);
			}
			else if(MultiplicativeExpressionPtr != NULL && CaStExpression != NULL && OPERATOR != NULL){ 
				MultiplicativeExpressionPtr->render_asm(file,contxt);
				
				CaStExpression->render_asm(file,contxt);
				
			}

		}





inline void AdditiveExpression::render_asm(std::ofstream& file,Context& contxt) {


			if(!contxt.reading){
				if( AdditiveExpressionPtr != NULL){
					contxt.op_name="add";
					AdditiveExpressionPtr->render_asm(file,contxt);
				}

				if( MultiplicativeExpressioN != NULL ) {
					MultiplicativeExpressioN->render_asm(file,contxt);
				}

				if(AdditiveExpressionPtr!=NULL){
					file << std::endl << "\tadd\t $2, $2, $3\n";
				}
			}

			if(OPERATOR==NULL && contxt.reading && MultiplicativeExpressioN != NULL){
				MultiplicativeExpressioN->render_asm(file,contxt);
			}
			else if(AdditiveExpressionPtr != NULL && MultiplicativeExpressioN != NULL && OPERATOR != NULL) { 
				AdditiveExpressionPtr->render_asm(file,contxt);
				
				MultiplicativeExpressioN->render_asm(file,contxt);
				
			}

		}





inline void ShiftExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OPERATOR==NULL && AdditiVeExpression != NULL){
				AdditiVeExpression->render_asm(file,contxt);
			}
			else if(ShiftExpressionPtr != NULL && AdditiVeExpression != NULL && OPERATOR != NULL){ 
				ShiftExpressionPtr->render_asm(file,contxt);
				
				AdditiVeExpression->render_asm(file,contxt);
				
			}

		}



inline void RelationalExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OPERATOR==NULL && SHiftExpression != NULL){
				SHiftExpression->render_asm(file,contxt);
			}
			else if(RelationalExpressionPtr != NULL && SHiftExpression != NULL && OPERATOR != NULL){ 
				RelationalExpressionPtr->render_asm(file,contxt);
				
				SHiftExpression->render_asm(file,contxt);
				
			}


		}


inline void EqualityExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OPERATOR==NULL && RElationalExpression != NULL){
				RElationalExpression->render_asm(file,contxt);
			}
			else if(EqualityExpressionPtr != NULL && RElationalExpression != NULL && OPERATOR != NULL){ 
				EqualityExpressionPtr->render_asm(file,contxt);
				
				RElationalExpression->render_asm(file,contxt);
				
			}

		}

inline void AndExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(BIT_AND==NULL && EqualitYExpression != NULL){
				EqualitYExpression->render_asm(file,contxt);
			}
			else if(AndExpressionPtr != NULL && EqualitYExpression != NULL && BIT_AND != NULL){ 
				AndExpressionPtr->render_asm(file,contxt);
				
				EqualitYExpression->render_asm(file,contxt);
				
			}

		}



inline void ExclusiveOrExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(EXCL_OR==NULL && ANDexpression != NULL){
				ANDexpression->render_asm(file,contxt);
			}
			else if(ExclusiveOrExpressionPtr != NULL && ANDexpression != NULL && EXCL_OR != NULL) { 
				ExclusiveOrExpressionPtr->render_asm(file,contxt);
				
				ANDexpression->render_asm(file,contxt);
				
			}

		}


inline void InclusiveOrExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(INC_OR==NULL && EXclusiveOrExpression != NULL){
				EXclusiveOrExpression->render_asm(file,contxt);
			}
			else if(InclusiveOrExpressionPtr != NULL && EXclusiveOrExpression != NULL && INC_OR != NULL) { 
				InclusiveOrExpressionPtr->render_asm(file,contxt);
				
				EXclusiveOrExpression->render_asm(file,contxt);
				
			}

		}

inline void LogicalAndExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(AND_OP==NULL && INclusiveOrExpression != NULL){
				INclusiveOrExpression->render_asm(file,contxt);
			}
			else if(LogicalAndExpressionPtr != NULL && INclusiveOrExpression != NULL && AND_OP != NULL) { 
				LogicalAndExpressionPtr->render_asm(file,contxt);
				
				INclusiveOrExpression->render_asm(file,contxt);
				
			}

		}



inline void LogicalOrExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OR_OP==NULL && LogicalAndExpressionPtr != NULL){
				LogicalAndExpressionPtr->render_asm(file,contxt);
			}
			else if( LogicalAndExpressionPtr != NULL && LogicalAndExpressionPtr != NULL && OR_OP != NULL){ 
				LogicalOrExpressionPtr->render_asm(file,contxt);
				
				LogicalAndExpressionPtr->render_asm(file,contxt);
				
			}
		}
			


inline void ExpressionStatement::render_asm(std::ofstream& file,Context& contxt){
			AssignmentExpressionPtr->render_asm(file,contxt);
		}


inline void PostFixExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(PostFixExpressionPtr != NULL) {

				PostFixExpressionPtr->render_asm(file,contxt);
			}

			if( PrimaryExpressionPtr != NULL ) {

				PrimaryExpressionPtr->render_asm(file,contxt);
			}
}


inline void PrimaryExpression::render_asm(std::ofstream& file,Context& contxt)  {

		
			if( AssignmentExpressionPtr != NULL ) {

				AssignmentExpressionPtr->render_asm(file,contxt);
			}

			

			if( IDENTIFIER != NULL ) {				//this identifier is involved in expressions
				
				int offset=0;           //this will contain the offset of var *IDENTIFIER
							//process offset here
				if(contxt.lhs_of_assignment){

					file << std::endl << "\tsw\t $2, " << offset << "($sp)";
					contxt.value_in_R2=0;
					contxt.lhs_of_assignment=0;
				}
				if(contxt.rhs_of_expression){

					file <<  std::endl << "\tlw\t";
					if(contxt.value_in_R2){
						file << "$3, " << offset << "($sp)";
					}
					else{
						contxt.value_in_R2=1; 
						file << "$2, " << offset << "($sp)"; 
					}
				}
			}

			if( CONSTANT != NULL ) {				//this constant is involved in expressions
				std::string tmp ;
				if(contxt.negative) {				
					tmp = "-" + *CONSTANT;
					contxt.negative = false;
				}
				else {
					tmp = "-" + *CONSTANT;
				}				
				char tmp2;
				if(tmp.find_first_of("'")==0) {
					tmp2 = tmp[1];
					contxt.variable.value = int(tmp2);
				}			
				else{
					contxt.variable.value = std::stol(tmp);
				}

				//file << std::endl << rhs_of_expression;	//we might need to reverse the order of the if statements
				if(contxt.rhs_of_expression){
					file <<  std::endl << "\tli\t";
					if(contxt.value_in_R2)
						file << "$3, " << *CONSTANT;
					else {
						contxt.value_in_R2=1;
						file << "$2, " << *CONSTANT; 
					}
				}

			}
		}				
	

		
inline void ConditionalExpression::render_asm(std::ofstream& file,Context& contxt) {
			

			if (ExpressioN != NULL) {

				ExpressioN->render_asm(file,contxt);
			}

			if( LogicalORExpression != NULL) {
				LogicalORExpression->render_asm(file,contxt);
			}

}
				

inline void AssignmentExpression::render_asm(std::ofstream& file, Context& contxt)  {

			file << "\n" << "reading : "  << contxt.reading << "\n";
			if(AssignmentExpressionPtr != NULL) {
				file << "what is going on here?\n";
				contxt.rhs_of_expression=1;
				AssignmentExpressionPtr->render_asm(file,contxt);
				contxt.rhs_of_expression=0;
			}
			if(UnaryExpressionPtr != NULL) {
				contxt.lhs_of_assignment=1;
				UnaryExpressionPtr->render_asm(file,contxt);			//TODO: This is for identifier names and values

			}				
			else if(ConditionalExpressionPtr != NULL) {
				file << "what is going on here?\n";
				ConditionalExpressionPtr->render_asm(file,contxt);		//THIS IS FOR IF STATEMENTS/ LOGICAL / ARITHMETIC OPERATIONS / ASSIGNEMENTS

			}

		}


inline void UnaryExpression::render_asm(std::ofstream& file, Context& contxt)  {
		
			if(OPERATOR == NULL) {
				PostFixExpressionPtr->render_asm(file,contxt);
			}
			else if ( CastExpressionPtr != NULL) {
				
				contxt.negative = true;
				CastExpressionPtr->render_asm(file,contxt);
			}
		}
