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
				contxt.Regs++;			
				CaStExpression->render_asm(file,contxt);
				if(!contxt.function){
					if( *OPERATOR == "*" ){
						contxt.global_value = contxt.global_value*contxt.current_value;
						contxt.current_value = 0;
					}
					else if(*OPERATOR == "/"){
						contxt.global_value = contxt.global_value/contxt.current_value;
						contxt.current_value = 0;
					}
					else if (*OPERATOR == "%")
					{
						contxt.global_value = contxt.global_value%contxt.current_value;
						contxt.current_value = 0;
					}
				}
				if (contxt.function){
					if( *OPERATOR == "*" ){
						if(contxt.is_unsigned){
							file << std::endl << "\tmultu\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						else{
							file << std::endl << "\tmult\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						//file << std::endl << "\tmfhi\t$3";
						file << std::endl << "\tmflo\t$" << contxt.Regs;
						//contxt.is_unsigned = false;
					}
					else if(  *OPERATOR == "/" ){
						if(contxt.is_unsigned){
							file << std::endl << "\tdivu\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						else{
							file << std::endl << "\tdiv\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						
						file << std::endl << "\tmflo\t$" << contxt.Regs;
						//contxt.is_unsigned = false;
					}
					else if(  *OPERATOR == "%" ){
						if(contxt.is_unsigned) {
							file << std::endl << "\tdivu\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						else{
							file << std::endl << "\tdiv\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						
						file << std::endl << "\tmfhi\t$" << contxt.Regs;
						//contxt.is_unsigned = false;
					}
				}
				contxt.Regs--;
			}

		}





inline void AdditiveExpression::render_asm(std::ofstream& file,Context& contxt) {


			if(OPERATOR==NULL && !contxt.reading && MultiplicativeExpressioN != NULL){
				MultiplicativeExpressioN->render_asm(file,contxt);
			}
			else if(AdditiveExpressionPtr != NULL && !contxt.reading  && MultiplicativeExpressioN != NULL && OPERATOR != NULL) { 
				contxt.op_name="add";
				
				AdditiveExpressionPtr->render_asm(file,contxt);				
				contxt.Regs++;
				MultiplicativeExpressioN->render_asm(file,contxt);
				if(!contxt.function){
					if( *OPERATOR == "+" ){
						contxt.global_value+=contxt.current_value;
						contxt.current_value=0;
					}
					else if(*OPERATOR == "-"){
						contxt.global_value-=contxt.current_value;
						contxt.current_value=0;
					}
				}
				if (contxt.function){

					if( *OPERATOR == "+" ){
						if(contxt.is_unsigned){
							file << std::endl << "\taddu\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						else{
							file << std::endl << "\tadd\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
					}
					else if(  *OPERATOR == "-" ){
						if(contxt.is_unsigned) {
							file << std::endl << "\tsubu\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						else{
							file << std::endl << "\tsub\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
					}

				}
				contxt.Regs--;
			}

		}





inline void ShiftExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OPERATOR==NULL && !contxt.reading && AdditiVeExpression != NULL){
				AdditiVeExpression->render_asm(file,contxt);
			}
			else if(ShiftExpressionPtr != NULL && !contxt.reading && AdditiVeExpression != NULL && OPERATOR != NULL){ 
				ShiftExpressionPtr->render_asm(file,contxt);				
				contxt.Regs++;
				AdditiVeExpression->render_asm(file,contxt);
				
				if(!contxt.function){
					if( *OPERATOR == "<<" ){
						contxt.global_value = contxt.global_value << contxt.current_value;
						contxt.current_value=0;
					}
					else if(*OPERATOR == ">>"){
						contxt.global_value = contxt.global_value >> contxt.current_value;
						contxt.current_value=0;
					}
				}
				if (contxt.function){
					if( *OPERATOR == "<<" ){
						file << std::endl << "\tsllv\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
					}
					else if(  *OPERATOR == ">>" ){
						if(contxt.is_unsigned){
							file << std::endl << "\tsrlv\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
						}
						else{
							file << std::endl << "\tsrav\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
						}
					}
				}
				contxt.Regs--;
			}
	}



inline void RelationalExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OPERATOR==NULL && !contxt.reading && SHiftExpression != NULL){
				SHiftExpression->render_asm(file,contxt);
			}
			else if(RelationalExpressionPtr != NULL && !contxt.reading && SHiftExpression != NULL && OPERATOR != NULL){ 
				RelationalExpressionPtr->render_asm(file,contxt);
				contxt.Regs++;
				SHiftExpression->render_asm(file,contxt);
				if (contxt.function){
					if( *OPERATOR == "<" ){
						if(contxt.is_unsigned){
							file << std::endl << "\tsltu\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
						}
						else{
							file << std::endl << "\tslt\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
						}
					}
					else if(  *OPERATOR == ">" ){
						if(contxt.is_unsigned){
							file << std::endl << "\tsgtu\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
						}
						else{
							file << std::endl << "\tsgt\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
						}
					}
					else if( *OPERATOR == "<=" ){
						if(contxt.is_unsigned) {
							file << std::endl << "\tsleu\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
						}
						else{
							file << std::endl << "\tsle\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
						}
					}
					else if(  *OPERATOR == ">=" ){
						if(contxt.is_unsigned){
							file << std::endl << "\tsgeu\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
						}
						else{
							file << std::endl << "\tsge\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
						}
					}
				}
				if(!contxt.function){
					if( *OPERATOR == "<" ){
						contxt.global_value = contxt.global_value < contxt.current_value;
					}
					else if(*OPERATOR == ">"){
						contxt.global_value = contxt.global_value > contxt.current_value;
					}
					else if(*OPERATOR == "<=")
					{
						contxt.global_value = contxt.global_value <= contxt.current_value;
					}
					else if(*OPERATOR == ">=")
					{
						contxt.global_value = contxt.global_value >= contxt.current_value;
					}
					contxt.current_value =0;
				}

				contxt.Regs--;
				
			}


		}


inline void EqualityExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OPERATOR==NULL && !contxt.reading && RElationalExpression != NULL){
				RElationalExpression->render_asm(file,contxt);
			}
			else if(EqualityExpressionPtr != NULL && !contxt.reading && RElationalExpression != NULL && OPERATOR != NULL){ 
				EqualityExpressionPtr->render_asm(file,contxt);
				contxt.Regs++;	
				RElationalExpression->render_asm(file,contxt);
				if (contxt.function){
					if( *OPERATOR == "==" ){
						file << std::endl << "\tseq\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;						
						//file << std::endl << "\tsltu\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
					}
					else if(  *OPERATOR == "!=" ){
						file << std::endl << "\txor\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;						
						file << std::endl << "\tsltu\t$" << contxt.Regs << ", $0, $" << contxt.Regs;
						//file << std::endl << "\tsltu\t$2, $0, $2";
					}
				}
				else 
				{
					if(*OPERATOR == "==")
					{
						contxt.global_value = contxt.global_value == contxt.current_value;
					}
					else if(*OPERATOR == "!=")
					{
						contxt.global_value = contxt.global_value != contxt.current_value;  
					}
				}
				contxt.Regs--;
				
			}

		}

inline void AndExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(BIT_AND==NULL && !contxt.reading && EqualitYExpression != NULL){
				EqualitYExpression->render_asm(file,contxt);
			}
			else if(AndExpressionPtr != NULL && !contxt.reading && EqualitYExpression != NULL && BIT_AND != NULL){ 
				AndExpressionPtr->render_asm(file,contxt);
				contxt.Regs++;
				EqualitYExpression->render_asm(file,contxt);
				if (contxt.function){
					file << std::endl << "\tand\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
				}
				else 
				{
					contxt.global_value = contxt.global_value & contxt.current_value;
					contxt.current_value = 0;
				}
				contxt.Regs--;
			}
		}



inline void ExclusiveOrExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(EXCL_OR==NULL && !contxt.reading && ANDexpression != NULL){
				ANDexpression->render_asm(file,contxt);
			}
			else if(ExclusiveOrExpressionPtr != NULL && !contxt.reading && ANDexpression != NULL && EXCL_OR != NULL) { 
				ExclusiveOrExpressionPtr->render_asm(file,contxt);
				contxt.Regs++;
				ANDexpression->render_asm(file,contxt);
				if (contxt.function){
					file << std::endl << "\txor\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs + 1;

				}
				else 
				{
					contxt.global_value = contxt.global_value ^ contxt.current_value;
					contxt.current_value = 0;
				}
				contxt.Regs--;
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
					file << std::endl << "\tor\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs + 1;
					//contxt.is_unsigned = false;
				}
				else 
				{
					contxt.global_value = contxt.global_value | contxt.current_value;
					contxt.current_value = 0;
				}
			}

		}

inline void LogicalAndExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(AND_OP==NULL && !contxt.reading && INclusiveOrExpression != NULL){
				INclusiveOrExpression->render_asm(file,contxt);
			}
			else if(LogicalAndExpressionPtr != NULL && !contxt.reading && INclusiveOrExpression != NULL && AND_OP != NULL) { 
				LogicalAndExpressionPtr->render_asm(file,contxt);
				contxt.Regs++;
				INclusiveOrExpression->render_asm(file,contxt);
				if (contxt.function){

					file <<  std::endl << "\tsne\t$"  << contxt.Regs  << ",$0,$" << contxt.Regs;
					file<<   std::endl << "\tsne\t$" << contxt.Regs+1 << ",$0,$" << contxt.Regs+1;
					file<<   std::endl << "\tand\t$" << contxt.Regs <<  ",$" << contxt.Regs << ",$" << contxt.Regs+1;
					
				}
				else 
				{
					contxt.global_value = contxt.global_value && contxt.current_value;
					contxt.current_value = 0;
				}
				contxt.Regs--;
				
			}

		}



inline void LogicalOrExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OR_OP==NULL && !contxt.reading && LogicalAndExpressionPtr != NULL){
				LogicalAndExpressionPtr->render_asm(file,contxt);
			}
			else if( LogicalAndExpressionPtr != NULL && !contxt.reading && LogicalAndExpressionPtr != NULL && OR_OP != NULL){ 
				LogicalOrExpressionPtr->render_asm(file,contxt);
				contxt.Regs++;
				LogicalAndExpressionPtr->render_asm(file,contxt);
				if (contxt.function){
					
					file <<  std::endl << "\tsne\t$"  << contxt.Regs  << ",$0,$" << contxt.Regs;
					file<<   std::endl << "\tsne\t$" << contxt.Regs+1 << ",$0,$" << contxt.Regs+1;
					file<<   std::endl << "\tor\t$" << contxt.Regs <<  ",$" << contxt.Regs << ",$" << contxt.Regs+1;
					
				}
				else 
				{
					contxt.global_value = contxt.global_value || contxt.current_value;
					contxt.current_value = 0;
				}
				contxt.Regs--;
				
			}
		}
			


inline void ExpressionStatement::render_asm(std::ofstream& file,Context& contxt){
			contxt.rhs_of_expression=true;
			AssignmentExpressionPtr->render_asm(file,contxt);
			contxt.rhs_of_expression=false;
		}


inline void PostFixExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(PostFixExpressionPtr != NULL) {

				PostFixExpressionPtr->render_asm(file,contxt);
			}

			if( PrimaryExpressionPtr != NULL ) {

				PrimaryExpressionPtr->render_asm(file,contxt);
			}
}


inline void PrimaryExpression::render_asm(std::ofstream& file,Context& contxt)  
{
	if( AssignmentExpressionPtr != NULL && !contxt.reading ) 
	{
		AssignmentExpressionPtr->render_asm(file,contxt);
	}
	else if( IDENTIFIER != NULL && !contxt.reading && contxt.function)			//this identifier is involved in expressions
	{
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
			if(found_0nothing_1local_2globl==1)  
			{

				if(contxt.AssignmentOperator != "="){

					AssignmentOperator(file,good_index,contxt);				
				}

				if(contxt.Variables[good_index].word_size==1) 
				{
					file << std::endl << "\tsb\t$2, " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id;
				}				
				else
				{
					file << std::endl << "\tsw\t$2," << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n";
				}

				if(contxt.Variables[good_index].DataType == "unsigned") {
					contxt.is_unsigned = true;
				}
			}					
			else if(found_0nothing_1local_2globl==2) {
				file << std::endl << "\tlui\t$" << contxt.Regs+2 << ", %hi(" << contxt.Variables[good_index].id << ")";
				if(contxt.Variables[good_index].word_size==1) {
					file << std::endl << "\tsb\t$" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+2 << ")";
				}
				else{
					file << std::endl << "\tsw\t$" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+2 << ")";
				}
				if(contxt.Variables[good_index].DataType == "unsigned") {
					contxt.is_unsigned = true;
				}
			}			
			else{
				file << std::endl << "VARIABLE : " << *IDENTIFIER << "NOT DECLARED!!!\n";
			}
		}
		else if(contxt.rhs_of_expression)
		{
		 	if(found_0nothing_1local_2globl==1) 
		 	{
				if(contxt.Variables[good_index].word_size==1)  
				{
					file << std::endl << "\tlb\t$" << contxt.Regs+1 << ", " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id;
				}
				else
				{
					file << std::endl << "\tlw\t$" << contxt.Regs+1 << ", " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id;
				}		
				if(contxt.Variables[good_index].DataType == "unsigned") 
				{
					contxt.is_unsigned = true;			
				}
		    }
     	    else if(found_0nothing_1local_2globl==2) 
			{
				file << std::endl << "\tlui\t$" << contxt.Regs+1 << ", %hi(" << contxt.Variables[good_index].id << ")";
				if(contxt.Variables[good_index].word_size==1) 
				{
					file << std::endl << "\tlb\t$" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+1 << ")";
				}
				else
				{
					file << std::endl << "\tlw\t$" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($"<< contxt.Regs+1 << ")";                            	
   				}
    			if(contxt.Variables[good_index].DataType == "unsigned") 
       			{
					contxt.is_unsigned = true;
				}
			}		
			else
			{
				file << std::endl << "VARIABLE : " << *IDENTIFIER << "NOT DECLARED!!!\n";
			}
		}
	}
	else if( CONSTANT != NULL && !contxt.reading ) 
	{				//this constant is involved in expressions
		std::string tmp ;
		if(contxt.negative) 
		{				
			tmp = "-" + *CONSTANT;
			contxt.negative = false;					
		}
		else 
		{
			tmp = *CONSTANT;
		}				
		char tmp2;
		if(tmp.find_first_of("'")==0 && contxt.variable.word_size == 1) 
		{
			tmp2 = tmp[1];
			contxt.variable.value = int(tmp2);
			tmp = std::to_string(int(tmp2));
		}			
		else
		{
			contxt.variable.value = std::stol(tmp);
		}
		if(contxt.rhs_of_expression && !contxt.reading && contxt.function)
		{
			file <<  std::endl << "\tli\t$" << contxt.Regs+1 << ", " << tmp;
		}
		else if (contxt.rhs_of_expression && !contxt.reading && !contxt.function)
		{
			if(contxt.global_value==0)

				contxt.global_value=std::stod(tmp);
			else 
				contxt.current_value=std::stod(tmp);

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
			if(UnaryExpressionPtr != NULL && AssignmentOperator != NULL) {

				contxt.AssignmentOperator = *AssignmentOperator;	
				contxt.lhs_of_assignment = true;
				UnaryExpressionPtr->render_asm(file,contxt);			//TODO: This is for identifier names and values
				contxt.lhs_of_assignment = false;
				contxt.AssignmentOperator = "";
				
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



inline void PrimaryExpression::AssignmentOperator(std::ofstream& file, int good_index, Context& contxt) {
	if(contxt.Variables[good_index].word_size==1) {
		file << std::endl << "\tlb\t$3, " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id;
	}				
	else{
		file << std::endl << "\tlw\t$3," << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n";
	}
	if(contxt.AssignmentOperator == "*="){
		if(contxt.is_unsigned){
			file << std::endl << "\tmultu\t$2,$3";
			file << std::endl << "\tmflo\t$2";
		}
		else{
			file << std::endl << "\tmult\t$2,$3";
			file << std::endl << "\tmflo\t$2";
			}
	}
	else if(contxt.AssignmentOperator == "/="){
			if(contxt.is_unsigned){
							file << std::endl << "\tdivu\t$2,$3";
							file << std::endl << "\tmflo\t$2";
						}
						else{
							file << std::endl << "\tdiv\t$2,$3";
							file << std::endl << "\tmflo\t$2";
						}
					}
					else if(contxt.AssignmentOperator == "%="){
						if(contxt.is_unsigned){
							file << std::endl << "\tdivu\t$2,$3";
							file << std::endl << "\tmfhi\t$2";
						}
						else{
							file << std::endl << "\tdiv\t$2,$3";
							file << std::endl << "\tmfhi\t$2";
						}
					}
					else if(contxt.AssignmentOperator == "+="){
						if(contxt.is_unsigned){
							file << std::endl << "\taddu\t$2,$3,$2";
						}
						else{
							file << std::endl << "\tadd\t$2,$3,$2";
						}
					}
					else if(contxt.AssignmentOperator == "-="){
						if(contxt.is_unsigned){
							file << std::endl << "\tsubu\t$2,$3,$2";
						}
						else{
							file << std::endl << "\tsub\t$2,$3,$2";
						}
					}
					else if(contxt.AssignmentOperator == "<<="){

						file << std::endl << "\tsllv\t$2,$3,$2";

					}
					else if(contxt.AssignmentOperator == ">>="){
						if(contxt.is_unsigned){
							file << std::endl << "\tsrlv\t$2,$3,$2";
						}
						else{
							file << std::endl << "\tsrav\t$2,$3,$2";
						}
					}
					else if(contxt.AssignmentOperator == "&="){
						
							file << std::endl << "\tand\t$2,$3,$2";
					
						}
					else if(contxt.AssignmentOperator == "^="){
						
							file << std::endl << "\txor\t$2,$3,$2";
					
						}
					else if(contxt.AssignmentOperator == "|="){
						
							file << std::endl << "\tor\t$2,$3,$2";
					
						}
			}

	
