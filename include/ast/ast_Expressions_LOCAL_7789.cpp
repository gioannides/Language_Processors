#include "ast_node.hpp"




inline void CastExpression::render_asm(std::ofstream& file,Context& contxt) {

			if( UNaryExpression != NULL){
				
				UNaryExpression->render_asm(file,contxt);
			}

		}


inline void MultiplicativeExpression::render_asm(std::ofstream& file,Context& contxt) {

			
			if(OPERATOR==NULL && !contxt.reading && CaStExpression != NULL){
				CaStExpression->render_asm(file,contxt);
			}
			else if(MultiplicativeExpressionPtr != NULL && !contxt.reading && CaStExpression != NULL && OPERATOR != NULL){ 
				MultiplicativeExpressionPtr->render_asm(file,contxt);				
				CaStExpression->render_asm(file,contxt);
				if (contxt.function){
					if( *OPERATOR == "*" ){
						if(contxt.is_unsigned){
							file << std::endl << "\tmultu\t$2, $3";
						}
						else{
							file << std::endl << "\tmult\t$2, $3";
						}
						file << std::endl << "\tmfhi\t$3";
						file << std::endl << "\tmflo\t$2";
						contxt.is_unsigned = false;
					}
					else if(  *OPERATOR == "/" ){
						if(contxt.is_unsigned){
							file << std::endl << "\tdivu\t$2, $3";
						}
						else{
							file << std::endl << "\tdiv\t$2, $3";
						}
						file << std::endl << "\tdiv\t$2, $3";
						file << std::endl << "\tmflo\t$2";
						contxt.is_unsigned = false;
					}
					else if(  *OPERATOR == "%" ){
						if(contxt.is_unsigned) {
							file << std::endl << "\tdivu\t$2, $3";
						}
						else{
							file << std::endl << "\tdiv\t$2, $3";
						}
						file << std::endl << "\tdiv\t$2, $3";
						file << std::endl << "\tmfhi\t$2";
						contxt.is_unsigned = false;
					}
				}
			}

		}





inline void AdditiveExpression::render_asm(std::ofstream& file,Context& contxt) {


			if(OPERATOR==NULL && !contxt.reading && MultiplicativeExpressioN != NULL){
				MultiplicativeExpressioN->render_asm(file,contxt);
			}
			else if(AdditiveExpressionPtr != NULL && !contxt.reading  && MultiplicativeExpressioN != NULL && OPERATOR != NULL) { 
				contxt.op_name="add";
				
				AdditiveExpressionPtr->render_asm(file,contxt);				
				MultiplicativeExpressioN->render_asm(file,contxt);
				if (contxt.function){
					if( *OPERATOR == "+" ){
						if(contxt.is_unsigned){
							file << std::endl << "\taddu\t$2, $2, $3";
						}
						else{
							file << std::endl << "\tadd\t$2, $2, $3";
						}
						contxt.is_unsigned = false;
					}
					else if(  *OPERATOR == "-" ){
						if(contxt.is_unsigned) {
							file << std::endl << "\tsubu\t$2, $2, $3";
						}
						else{
							file << std::endl << "\tsub\t$2, $2, $3";
						}
						contxt.is_unsigned = false;
					}
				}
				
			}

		}





inline void ShiftExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OPERATOR==NULL && !contxt.reading && AdditiVeExpression != NULL){
				AdditiVeExpression->render_asm(file,contxt);
			}
			else if(ShiftExpressionPtr != NULL && !contxt.reading && AdditiVeExpression != NULL && OPERATOR != NULL){ 
				ShiftExpressionPtr->render_asm(file,contxt);				
				AdditiVeExpression->render_asm(file,contxt);
				if (contxt.function){
					if( *OPERATOR == "<<" ){
						file << std::endl << "\tsllv\t$2, $2, $3";
					}
					else if(  *OPERATOR == ">>" ){
						if(contxt.is_unsigned){
							file << std::endl << "\tsrlv\t$2, $2, $3";
						}
						else{
							file << std::endl << "\tsrav\t$2, $2, $3";
						}
						contxt.is_unsigned = false;
					}

				
				}

			}
	}



inline void RelationalExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OPERATOR==NULL && !contxt.reading && SHiftExpression != NULL){
				SHiftExpression->render_asm(file,contxt);
			}
			else if(RelationalExpressionPtr != NULL && !contxt.reading && SHiftExpression != NULL && OPERATOR != NULL){ 
				RelationalExpressionPtr->render_asm(file,contxt);
				
				SHiftExpression->render_asm(file,contxt);
				if (contxt.function){
					if( *OPERATOR == "<" ){
						if(contxt.is_unsigned){
							file << std::endl << "\tsltu\t$2, $2, $3";
						}
						else{
							file << std::endl << "\tslt\t$2, $2, $3";
						}
					}
					else if(  *OPERATOR == ">" ){
						if(contxt.is_unsigned){
							file << std::endl << "\tsgtu\t$2, $2, $3";
						}
						else{
							file << std::endl << "\tsgt\t$2, $2, $3";
						}
					}
					else if( *OPERATOR == "<=" ){
						if(contxt.is_unsigned) {
							file << std::endl << "\tsleu\t$2, $2, $3";
						}
						else{
							file << std::endl << "\tsle\t$2, $2, $3";
						}
					}
					else if(  *OPERATOR == ">=" ){
						if(contxt.is_unsigned){
							file << std::endl << "\tsgeu\t$2, $2, $3";
						}
						else{
							file << std::endl << "\tsge\t$2, $2, $3";
						}
					}
					contxt.is_unsigned = false;
				}
				
			}


		}


inline void EqualityExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OPERATOR==NULL && !contxt.reading && RElationalExpression != NULL){
				RElationalExpression->render_asm(file,contxt);
			}
			else if(EqualityExpressionPtr != NULL && !contxt.reading && RElationalExpression != NULL && OPERATOR != NULL){ 
				EqualityExpressionPtr->render_asm(file,contxt);
				
				RElationalExpression->render_asm(file,contxt);
				if (contxt.function){
					if( *OPERATOR == "==" ){
						file << std::endl << "\txor\t$2, $2, $3";						
						file << std::endl << "\tsltu\t$2, $2,$3";
					}
					else if(  *OPERATOR == "!=" ){
						file << std::endl << "\txor\t$2, $2, $3";						
						file << std::endl << "\tsltu\t$2, $0, $2";
					}
					contxt.is_unsigned = false;
				}
				
			}

		}

inline void AndExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(BIT_AND==NULL && !contxt.reading && EqualitYExpression != NULL){
				EqualitYExpression->render_asm(file,contxt);
			}
			else if(AndExpressionPtr != NULL && !contxt.reading && EqualitYExpression != NULL && BIT_AND != NULL){ 
				AndExpressionPtr->render_asm(file,contxt);
				
				EqualitYExpression->render_asm(file,contxt);
				if (contxt.function){
					file << std::endl << "\tand\t$2, $2, $3";
					contxt.is_unsigned = false;
				}
			}

		}



inline void ExclusiveOrExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(EXCL_OR==NULL && !contxt.reading && ANDexpression != NULL){
				ANDexpression->render_asm(file,contxt);
			}
			else if(ExclusiveOrExpressionPtr != NULL && !contxt.reading && ANDexpression != NULL && EXCL_OR != NULL) { 
				ExclusiveOrExpressionPtr->render_asm(file,contxt);
				
				ANDexpression->render_asm(file,contxt);
				if (contxt.function && !contxt.reading){
					file << std::endl << "\txor\t$2, $2, $3";
					contxt.is_unsigned = false;
				}
			}

		}


inline void InclusiveOrExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(INC_OR==NULL && !contxt.reading && EXclusiveOrExpression != NULL){
				EXclusiveOrExpression->render_asm(file,contxt);
			}
			else if(InclusiveOrExpressionPtr != NULL && !contxt.reading && EXclusiveOrExpression != NULL && INC_OR != NULL) { 
				InclusiveOrExpressionPtr->render_asm(file,contxt);
				
				EXclusiveOrExpression->render_asm(file,contxt);
				if (contxt.function){
					file << std::endl << "\tor\t$2, $2, $3";
					contxt.is_unsigned = false;
				}
				
			}

		}

inline void LogicalAndExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(AND_OP==NULL && !contxt.reading && INclusiveOrExpression != NULL){
				INclusiveOrExpression->render_asm(file,contxt);
			}
			else if(LogicalAndExpressionPtr != NULL && !contxt.reading && INclusiveOrExpression != NULL && AND_OP != NULL) { 
				LogicalAndExpressionPtr->render_asm(file,contxt);
				
				INclusiveOrExpression->render_asm(file,contxt);
				if (contxt.function){
					// NOT IMPLEMENTED
				}
				
			}

		}



inline void LogicalOrExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OR_OP==NULL && !contxt.reading && LogicalAndExpressionPtr != NULL){
				LogicalAndExpressionPtr->render_asm(file,contxt);
			}
			else if( LogicalAndExpressionPtr != NULL && !contxt.reading && LogicalAndExpressionPtr != NULL && OR_OP != NULL){ 
				LogicalOrExpressionPtr->render_asm(file,contxt);
				
				LogicalAndExpressionPtr->render_asm(file,contxt);
				if (contxt.function){
					// NOT IMPLEMENTED
				}
				
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

		
			if( AssignmentExpressionPtr != NULL && !contxt.reading ) {

				AssignmentExpressionPtr->render_asm(file,contxt);
			}

			else if( IDENTIFIER != NULL && !contxt.reading && contxt.function) {			//this identifier is involved in expressions
			
				int found_0nothing_1local_2globl = 0;	
				int good_index=0;			//this will determine whether the variable wanted is a global or a local
				int i(0);				//must initialize the index i outside so it is accessible throughout here
				
				for(i=0; i<contxt.Variables.size(); i++) {
					
					if(contxt.Variables[i].scope == contxt.funct_id && *IDENTIFIER == contxt.Variables[i].id) {
						found_0nothing_1local_2globl = 1;	//means that we found a local variable in the function of that name					
						good_index=i;
						i = contxt.Variables.size();
						if(contxt.Variables[good_index].DataType == "unsigned") {
							contxt.is_unsigned = true;
						}						
					}
				}
				if(!found_0nothing_1local_2globl) {
						for(i=0; i<contxt.Variables.size(); i++) {
							if(contxt.Variables[i].scope == "global" && *IDENTIFIER == contxt.Variables[i].id) {
								found_0nothing_1local_2globl=2;
								good_index = i;
								i = contxt.Variables.size();
								if(contxt.Variables[good_index].DataType == "unsigned") {
									contxt.is_unsigned = true;
								}
							}
						
						}
				}   			
					
				if(contxt.lhs_of_assignment){
					if(found_0nothing_1local_2globl==1) {
						contxt.value_in_R2=false;
						file << std::endl << "\tsw\t$2," << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n";
						if(contxt.Variables[good_index].DataType == "unsigned") {
							contxt.is_unsigned = true;
						}
					}
					else if(found_0nothing_1local_2globl==2) {
						contxt.value_in_R2=false;
						
						file << std::endl << "\tsw\t$2, " << "%" << "got(" << contxt.Variables[good_index].id << ")($gp)";
						if(contxt.Variables[good_index].DataType == "unsigned") {
							contxt.is_unsigned = true;
						}
					}			
					else{
						file << std::endl << "VARIABLE : " << *IDENTIFIER << "NOT DECLARED!!!\n";
					}
						
				}
				else if(contxt.rhs_of_expression){
					if(contxt.value_in_R2){
						if(found_0nothing_1local_2globl==1) {
							file << std::endl << "\tlw\t$3, " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id;
							
							if(contxt.Variables[good_index].DataType == "unsigned") {
								contxt.is_unsigned = true;
								
							}
						}
						else if(found_0nothing_1local_2globl==2) {
							
							file << std::endl << "\tlw\t$3, " << "%" << "got(" << contxt.Variables[good_index].id << ")($gp)";
							if(contxt.Variables[good_index].DataType == "unsigned") {
								contxt.is_unsigned = true;
	
							}
			
						}
					}
					else{ 
						if(found_0nothing_1local_2globl==1) {
							
							contxt.value_in_R2=true; 
							file << std::endl << "\tlw\t$2, " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id;
							if(contxt.Variables[good_index].DataType == "unsigned") {
								contxt.is_unsigned = true;

							}
						}
						else if(found_0nothing_1local_2globl==2) {
							contxt.value_in_R2=true; 
							
							file << std::endl << "\tlw\t$2, " << "%" << "got(" << contxt.Variables[good_index].id << ")($gp)";
							if(contxt.Variables[good_index].DataType == "unsigned") {
								contxt.is_unsigned = true;

							}
							
						}
						else{
							file << std::endl << "VARIABLE : " << *IDENTIFIER << " NOT DECLARED!!!\n";
						}
					}
				}
			}

			else if( CONSTANT != NULL && !contxt.reading ) {				//this constant is involved in expressions
				std::string tmp ;
				if(contxt.negative) {				
					tmp = "-" + *CONSTANT;
					contxt.negative = false;					
				}
				else {
					tmp = *CONSTANT;
				}				
				char tmp2;
				if(tmp.find_first_of("'")==0 && contxt.variable.word_size == 1) {
					tmp2 = tmp[1];
					contxt.variable.value = int(tmp2);
				}			
				else{
					contxt.variable.value = std::stol(tmp);
				}

				
				if(contxt.rhs_of_expression && !contxt.reading && contxt.function){
					file <<  std::endl << "\tli\t";
					if(contxt.value_in_R2)
						file << "$3, " << *CONSTANT;
					else {
						contxt.value_in_R2=true;
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

			
			if(AssignmentExpressionPtr != NULL) {
				
				contxt.rhs_of_expression = true;
				AssignmentExpressionPtr->render_asm(file,contxt);
				contxt.rhs_of_expression = false;
			}
			if(UnaryExpressionPtr != NULL) {
				std::cout << "\nlhs_of_assignment should be 0, it is:" << contxt.lhs_of_assignment <<"\n"  ;
				contxt.lhs_of_assignment = true;
				UnaryExpressionPtr->render_asm(file,contxt);			//TODO: This is for identifier names and values
				std::cout << "\nlhs_of_assignment should be 1, it is:" << contxt.lhs_of_assignment <<"\n"  ;
				contxt.lhs_of_assignment = false;

			}				
			else if(ConditionalExpressionPtr != NULL) {
				
				ConditionalExpressionPtr->render_asm(file,contxt);		//THIS IS FOR IF STATEMENTS/ LOGICAL / ARITHMETIC OPERATIONS / ASSIGNEMENTS

			}

		}


inline void UnaryExpression::render_asm(std::ofstream& file, Context& contxt)  {
		
			if(OPERATOR == NULL) {
				PostFixExpressionPtr->render_asm(file,contxt);
			}
			else if ( CastExpressionPtr != NULL) {  //assigning meaning eg. & , - , + 
				
				if( *OPERATOR == "-"){
					contxt.negative = true;  
				}
				CastExpressionPtr->render_asm(file,contxt);
			}
		}
