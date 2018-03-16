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
						
						file << std::endl << "\tmflo\t$" << contxt.Regs;
						
					}
					else if(  *OPERATOR == "/" ){
						if(contxt.is_unsigned){
							file << std::endl << "\tdivu\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						else{
							file << std::endl << "\tdiv\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						
						file << std::endl << "\tmflo\t$" << contxt.Regs;
						
					}
					else if(  *OPERATOR == "%" ){
						if(contxt.is_unsigned) {
							file << std::endl << "\tdivu\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						else{
							file << std::endl << "\tdiv\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						
						file << std::endl << "\tmfhi\t$" << contxt.Regs;
						
					}
					
				}
				contxt.Regs--;
			}

		}





inline void AdditiveExpression::render_asm(std::ofstream& file,Context& contxt) {


			if(OPERATOR==NULL && MultiplicativeExpressioN != NULL){
				MultiplicativeExpressioN->render_asm(file,contxt);
			}
			else if(AdditiveExpressionPtr != NULL && !contxt.reading  && MultiplicativeExpressioN != NULL && OPERATOR != NULL) { 
				
				
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

			if(OPERATOR==NULL && AdditiVeExpression != NULL){
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

			if(OPERATOR==NULL && SHiftExpression != NULL){
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

			if(OPERATOR==NULL && RElationalExpression != NULL){
				RElationalExpression->render_asm(file,contxt);
			}
			else if(EqualityExpressionPtr != NULL && !contxt.reading && RElationalExpression != NULL && OPERATOR != NULL){ 
				EqualityExpressionPtr->render_asm(file,contxt);
				contxt.Regs++;	
				RElationalExpression->render_asm(file,contxt);
				if (contxt.function){
					
					if( *OPERATOR == "==" ){
						file << std::endl << "\tseq\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;						
						
					}
					else if(  *OPERATOR == "!=" ){
						file << std::endl << "\txor\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;						
						file << std::endl << "\tsltu\t$" << contxt.Regs << ", $0, $" << contxt.Regs;
						
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

			if(BIT_AND==NULL && EqualitYExpression != NULL){
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

			if(EXCL_OR==NULL && ANDexpression != NULL){
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

			if(INC_OR==NULL && EXclusiveOrExpression != NULL){
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

			if(AND_OP==NULL && INclusiveOrExpression != NULL){
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

			if(OR_OP==NULL && LogicalAndExpressionPtr != NULL){
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
			if( AssignmentExpressionPtr != NULL){
				contxt.rhs_of_expression=true;
				AssignmentExpressionPtr->render_asm(file,contxt);
				contxt.rhs_of_expression=false;
				
			}
		}
inline void ArgumentExpressionList::render_asm(std::ofstream& file,Context& contxt)
{
	if(ArgumentExpressionListPtr!=NULL)
			{
				ArgumentExpressionListPtr->render_asm(file, contxt);
			}
			contxt.argument_no++;
			//contxt.rhs_of_expression=true;
			AssignmentExpressionPtr->render_asm(file, contxt);
			//contxt.rhs_of_expression=false;

}

inline void PostFixExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(PostFixExpressionPtr != NULL) {
				if(OPERATOR != NULL && IDENTIFIER == NULL) {
					contxt.AssignmentOperator = *OPERATOR;
					contxt.lhs_of_assignment=true;
				PostFixExpressionPtr->render_asm(file,contxt);
				contxt.lhs_of_assignment=false;
					//file << "\n # this is the problem" << *OPERATOR;
				}
				
				if(OPERATOR == NULL && AssignmentExpressionPtr == NULL && PrimaryExpressionPtr == NULL && IDENTIFIER == NULL)
				{ 	int offset = 0;
					int i = 0, j = 0;
					if(!contxt.reading)
					{
						for(i=contxt.Variables.size()-1; i>=0; i--) 
						{
							for (j=contxt.Scopes.size()-1; j>=0; j--)
							{
								if(contxt.Variables[i].scope == contxt.Scopes[j]) 
								{
									offset = contxt.Variables[i].offset;				
									i = -1;
									j = -1;
								}
							}
						}
						for(i=1; i<=25; i++)
						{
							file << "\n\tsw\t$" << i << ", " << offset-(i*4) << "($sp)";
						}
					}
					contxt.is_function_call=true;
					//contxt.lhs_of_assignment=true;
				PostFixExpressionPtr->render_asm(file,contxt);
				//contxt.lhs_of_assignment=false;
					if(ArgumentExpressionListPtr != NULL){
					    contxt.argument_no = 0;
						ArgumentExpressionListPtr->render_asm(file, contxt);
						contxt.argument_no = 0;
						//file << "the problem comes now!";
					}
					if(!contxt.reading && contxt.Scopes.size()){
						file << "\n\t.option pic";
						file << std::endl << "\tjal " << contxt.Scopes[contxt.Scopes.size()-1];
						file << std::endl << "\tnop";
						contxt.Scopes.pop_back();
					}
					if(!contxt.reading){
						file << "\n\tmove\t$25, $2"; 
						for(i=1; i<25; i++)
						{
							file << "\n\tlw\t$" << i << ", " << offset-(i*4) << "($sp)";
						}
						file << "\n\tmove\t$" << contxt.Regs+1 << ", $25"; 
					}
				}
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
		int i(0), j;				//must initialize the index i outside so it is accessible throughout here
		if(contxt.is_function_call)
		{
			for (int i=0; i<contxt.functions_declared.size(); i++)
			{
			//std::cout << "\n\n\n merge!\n\n";
			 	if(contxt.functions_declared[i].name==*IDENTIFIER)
			 	{	//std::cout << "aici;";
				 	contxt.Scopes.push_back(*IDENTIFIER);
				 }
			}
			contxt.is_function_call=false;
		}
		else
		{ 
			if(contxt.Variables.size()&&contxt.Scopes.size())
			{
			for(i=contxt.Variables.size()-1; i>=0; i--) {
				for (j=contxt.Scopes.size()-1; j>=0; j--)
				{
					if(contxt.Variables[i].scope == contxt.Scopes[j] && *IDENTIFIER == contxt.Variables[i].id) 
					{
						found_0nothing_1local_2globl = 1;	//means that we found a local variable in the function of that name					
						good_index=i;
						i = -1;
						j = -1;
					}
					if(contxt.Variables[good_index].DataType == "unsigned") { //[0] this might cause problems
						contxt.is_unsigned = true;
					}										
				}
			  }
			}
			if(!found_0nothing_1local_2globl ) {
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
			if(found_0nothing_1local_2globl)
			{
				if(contxt.AssignmentOperator != "df" && contxt.AssignmentOperator != "=")
				{
					AssignmentOperator(file,good_index,contxt,found_0nothing_1local_2globl);				
				}
			}
			if(found_0nothing_1local_2globl==1){
				

				if(contxt.Variables[good_index].word_size==1) {
					file << std::endl << "\tsb\t$" << contxt.Regs+1 << "," << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id;
				}				
				else{
					file << std::endl << "\tsw\t$" << contxt.Regs+1 << "," << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n";
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
				file << std::endl << "#VARIABLE : " << *IDENTIFIER << "NOT DECLARED!!!\n";
			}
		}
		else //if(contxt.rhs_of_expression)
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
				file << std::endl << "#VARIABLE : " << *IDENTIFIER << "NOT DECLARED!!!\n";
			}
			
			// if(contxt.argument_no)
			// {
			// 	int ki=0;
			// 	while(ki<contxt.Variables.size())
			// 	{
			// 		if(contxt.Scopes[contxt.Scopes.size()-1]==contxt.Variables[ki].scope)
			// 		{
			// 			if(contxt.Variables[ki+contxt.argument_no-1].word_size==1) 
			// 			{
			// 				file << std::endl << "\tsb\t$" << contxt.Regs+1 << ", " << contxt.Variables[ki+contxt.argument_no-1].param_offset << "($sp) #" << contxt.Variables[ki+contxt.argument_no-1].id;
			// 			}				
			// 			else
			// 			{
			// 				file << std::endl << "\tsw\t$" << contxt.Regs+1 << ", " << contxt.Variables[ki+contxt.argument_no-1].param_offset << "($sp) #" << contxt.Variables[ki+contxt.argument_no-1].id << "\n";
			// 			}
			// 			ki=contxt.Variables.size();
			// 		}
			// 		ki++;
			// 	}

		}	// }
		}
	}
	else if( CONSTANT != NULL && !contxt.reading ) 
	{	
					//this constant is involved in expressions
		
		int temp=0;
		
		if( (*CONSTANT).find_first_of("'")==0 && contxt.variable.word_size == 1){
			char tmp2;
			tmp2 = (*CONSTANT)[1];
			temp = int(tmp2);

		}
		else {
		 	temp = (std::stod(*CONSTANT));
		}				
		if(contxt.UnaryOperators.size() != 0){
			if(contxt.UnaryOperators[contxt.UnaryOperators.size()-1] == '-' && !contxt.function) 
			{			
				temp = (-1) * temp;
				contxt.UnaryOperators.pop_back();
							
			}
			else if(contxt.UnaryOperators[contxt.UnaryOperators.size()-1] == '~'  && !contxt.function) 
			{				
				
				temp = ~temp;
				contxt.UnaryOperators.pop_back();
							
			}
			else if(contxt.UnaryOperators[contxt.UnaryOperators.size()-1] == '!'  && !contxt.function) 
			{	
				temp = !temp;
				contxt.UnaryOperators.pop_back();		
							
			}
		}			
		contxt.variable.value = temp;

		if(!contxt.reading && contxt.function) //&& contxt.rhs_of_expression)
		{
			file <<  std::endl << "\tli\t$" << contxt.Regs+1 << ", " << temp;
			
		}
		else if (!contxt.reading && !contxt.function) //&& contxt.rhs_of_expression)
		{
			if(contxt.global_value==0)
				contxt.global_value= temp;
			else 
				contxt.current_value= temp;
		}
		
		}
				
		// if(contxt.argument_no)
		// 	{
		// 		int ki=0;
		// 		while(ki<contxt.Variables.size())
		// 		{
		// 			if(contxt.Scopes[contxt.Scopes.size()-1]==contxt.Variables[ki].scope)
		// 			{
		// 				if(contxt.Variables[ki+contxt.argument_no-1].word_size==1) 
		// 				{
		// 					file << std::endl << "\tsb\t$" << contxt.Regs+1 << ", " << contxt.Variables[ki+contxt.argument_no-1].param_offset << "($sp) #" << contxt.Variables[ki+contxt.argument_no-1].id;
		// 				}				
		// 				else
		// 				{
		// 					file << std::endl << "\tsw\t$" << contxt.Regs+1 << ", " << contxt.Variables[ki+contxt.argument_no-1].param_offset << "($sp) #" << contxt.Variables[ki+contxt.argument_no-1].id << "\n";
		// 				}
		// 				ki=contxt.Variables.size();
		// 			}
		// 			ki++;
		// 		}
		// 	}
	//}
	else if( IDENTIFIER != NULL && contxt.reading && contxt.function)
	{	for (int i=0; i<contxt.functions_declared.size(); i++)
		{
			//std::cout << "\n\n\n merge!\n\n";
			 if(contxt.functions_declared[i].name==*IDENTIFIER)
			 {	//std::cout << "aici;";
			 	//contxt.Scopes.push_back(*IDENTIFIER);
			 	if(contxt.max_offset<contxt.functions_declared[i].paramters_size){
					//std::cout <<"\n update max_offset: " << contxt.functions_declared[i].paramters_size << "\n";
					contxt.max_offset=contxt.functions_declared[i].paramters_size;
					break;
				} 	
			//	std::cout << "\n" <<  contxt.functions_declared[i].paramters_size << " " <<  contxt.functions_declared[i].name << "\n"; 
			//	for(int j=0; j<contxt.Scopes.size(); j++)
			//	{
			//		std::cout << contxt.Scopes[j] << " ";
			// 	}
			// 	std::cout << "\n";
			 }
		}
	}

}
					
inline void ConditionalExpression::render_asm(std::ofstream& file,Context& contxt) {

			std::string label_id = labelGen(contxt);
			std::string ELSE = "$ELSE" + label_id;
			std::string IF = "$IF" + label_id;
			std::string END = "$END" + label_id;

			
			if( LogicalORExpression != NULL && ExpressioN == NULL && ConditionalExpressionPtr == NULL) {
				LogicalORExpression->render_asm(file,contxt);
			}
			else if (LogicalORExpression != NULL && ExpressioN != NULL && ConditionalExpressionPtr != NULL) {
				
				contxt.rhs_of_expression = true;
				LogicalORExpression->render_asm(file,contxt);
				contxt.rhs_of_expression = false;				
				file << std::endl << "\tbeq\t$2,$0," << ELSE;
				file << std::endl << "\tnop";
				file << std::endl << IF << ":";
				contxt.rhs_of_expression = true;
				ExpressioN->render_asm(file,contxt);
				contxt.rhs_of_expression = false;
				file << "\n\tb " << END;
				file << std::endl << "\tnop";
				file << std::endl << ELSE << ":";
				contxt.rhs_of_expression = true;
				ConditionalExpressionPtr->render_asm(file,contxt);
				contxt.rhs_of_expression = false;
				file << "\n\tb " << END;
				file << std::endl << "\tnop";
			}
			file << std::endl << END << ":";
}
				
inline void AssignmentExpression::render_asm(std::ofstream& file, Context& contxt)  {
			
			if(AssignmentExpressionPtr != NULL) {
				contxt.rhs_of_expression = true;
				AssignmentExpressionPtr->render_asm(file,contxt);
				contxt.rhs_of_expression = false;
			}
			if(UnaryExpressionPtr != NULL && AssignmentOperator != NULL) { //!contxt.reading
				
				contxt.AssignmentOperator = *AssignmentOperator;	
				contxt.lhs_of_assignment = true;
				UnaryExpressionPtr->render_asm(file,contxt);			//TODO: This is for identifier names and values
				contxt.lhs_of_assignment = false;
				contxt.AssignmentOperator = "df";
				
			}				
			else if(ConditionalExpressionPtr != NULL) {
				ConditionalExpressionPtr->render_asm(file,contxt);		//THIS IS FOR IF STATEMENTS/ LOGICAL / ARITHMETIC OPERATIONS / ASSIGNEMENTS
			}
			if(contxt.argument_no)
			{
				int ki=0;
				while(ki<contxt.Variables.size())
				{
					if(contxt.Scopes.size() && contxt.Scopes[contxt.Scopes.size()-1]==contxt.Variables[ki].scope)
					{
						if(contxt.Variables[ki+contxt.argument_no-1].word_size==1) 
						{
							file << std::endl << "\tsb\t$" << contxt.Regs+1 << ", " << contxt.Variables[ki+contxt.argument_no-1].param_offset << "($sp) #" << contxt.Variables[ki+contxt.argument_no-1].id;
						}				
						else
						{
							file << std::endl << "\tsw\t$" << contxt.Regs+1 << ", " << contxt.Variables[ki+contxt.argument_no-1].param_offset << "($sp) #" << contxt.Variables[ki+contxt.argument_no-1].id << "\n";
						}
						ki=contxt.Variables.size();
					}
					ki++;
				}
			}
		}



inline void UnaryExpression::render_asm(std::ofstream& file, Context& contxt)  {
		
		if(PostFixExpressionPtr != NULL) {
				PostFixExpressionPtr->render_asm(file,contxt);
		}
	
		if(CastExpressionPtr != NULL && !contxt.reading) {

				if(!contxt.function){
					if(UnaryOperatorPtr != NULL){
						contxt.UnaryOperators.push_back(UnaryOperatorPtr->render_asm(file,contxt));
					}
				}

				CastExpressionPtr->render_asm(file,contxt);

				if(contxt.function && !contxt.reading){
					
					if(UnaryOperatorPtr->render_asm(file,contxt) == '~'){
					file << std::endl << "\tnor\t$" << contxt.Regs+1 << ",$0,$" << contxt.Regs+1 << " #~";
					
					}
					else if(UnaryOperatorPtr->render_asm(file,contxt) == '!') {
					file << std::endl << "\tsltu\t$" << contxt.Regs+1 << ",$" << contxt.Regs+1 << ",1";
					file << std::endl << "\tandi\t$" << contxt.Regs+1 << ",$" << contxt.Regs+1 << ",0x00FF" << " #!";
					
					
					}
					else if(UnaryOperatorPtr->render_asm(file,contxt) == '-') {
					file << std::endl << "\tsub\t$" << contxt.Regs+1 << ",$0,$" << contxt.Regs+1 << "#-"; 
					
					}
				}
				
		}
				
		else if( UnaryExpressionPtr != NULL && !contxt.reading){
			 if( *OPERATOR == "--"){
				contxt.AssignmentOperator = "--";
				contxt.lhs_of_assignment = true;
				UnaryExpressionPtr->render_asm(file,contxt);
				contxt.lhs_of_assignment = false;
			}
			else if( *OPERATOR == "++"){
				contxt.AssignmentOperator = "++";
				contxt.lhs_of_assignment = true;
				UnaryExpressionPtr->render_asm(file,contxt);
				contxt.lhs_of_assignment = false;					
			}	
		}
}

inline char UnaryOperator::render_asm(std::ofstream& file, Context& contxt) {
		char temp = (*UNARYOPERATOR)[0];
		return temp;
}	
		



inline void PrimaryExpression::AssignmentOperator(std::ofstream& file, int good_index, Context& contxt, int f) {
	contxt.Regs++;
	if(f==1){

		if(contxt.Variables[good_index].word_size==1) {
			file << std::endl << "\tlb\t$" << contxt.Regs+1 << ", " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id;
		}				
		else{
			file << std::endl << "\tlw\t$" << contxt.Regs+1 << ", " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n";
		}
	}
	else if(f==2)
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
	}
	if(contxt.AssignmentOperator == "*="){
		if(contxt.is_unsigned){
			file << std::endl << "\tmultu\t$" << contxt.Regs << ",$" << contxt.Regs+1;
			file << std::endl << "\tmflo\t$" << contxt.Regs;
		}
		else{
			file << std::endl << "\tmult\t$" << contxt.Regs << ",$" << contxt.Regs+1;
			file << std::endl << "\tmflo\t$" << contxt.Regs;
			}
	}
	else if(contxt.AssignmentOperator == "/="){
			if(contxt.is_unsigned){
							file << std::endl << "\tdivu\t$" << contxt.Regs+1 << ",$" << contxt.Regs;
							file << std::endl << "\tmflo\t$"<< contxt.Regs;
						}
						else{
							file << std::endl << "\tdiv\t$" << contxt.Regs+1 << ",$" << contxt.Regs;
							file << std::endl << "\tmflo\t$"<< contxt.Regs;
						}
					}
					else if(contxt.AssignmentOperator == "%="){
						if(contxt.is_unsigned){
							file << std::endl << "\tdivu\t$" << contxt.Regs+1 << ",$" << contxt.Regs;
							file << std::endl << "\tmfhi\t$"<< contxt.Regs;
						}
						else{
							file << std::endl << "\tdiv\t$" << contxt.Regs+1 << ",$" << contxt.Regs;
							file << std::endl << "\tmfhi\t$"<< contxt.Regs;
						}
					}
					else if(contxt.AssignmentOperator == "+="){
						// if(contxt.is_unsigned){
						// 	file << std::endl << "\taddu\t$2,$3,$2";
						// }
						// else{
						// 	file << std::endl << "\tadd\t$2,$3,$2";
						// }
						if(contxt.is_unsigned){
							file << std::endl << "\taddu\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						else{
							file << std::endl << "\tadd\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
					}
					else if(contxt.AssignmentOperator == "-="){
						if(contxt.is_unsigned){
							file << std::endl << "\tsubu\t$" << contxt.Regs <<", $" << contxt.Regs+1 << ", $" << contxt.Regs;
						}
						else{
							file << std::endl << "\tsub\t$" << contxt.Regs <<", $" << contxt.Regs+1 << ", $" << contxt.Regs;
						}
					}
					else if(contxt.AssignmentOperator == "<<="){

						file << std::endl << "\tsllv\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
					}
					else if(contxt.AssignmentOperator == ">>="){
						if(contxt.is_unsigned){
							file << std::endl << "\tsrlv\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
						else{
							file << std::endl << "\tsrav\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
						}
					}
					else if(contxt.AssignmentOperator == "&="){
						
							file << std::endl << "\tand\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
					
						}
					else if(contxt.AssignmentOperator == "^="){
						
							file << std::endl << "\txor\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
					
						}
					else if(contxt.AssignmentOperator == "|="){
						
							file << std::endl << "\tor\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
					
						}
					else if(contxt.AssignmentOperator == "++"){
						
						file << std::endl << "\taddiu\t$" << contxt.Regs <<", $" << contxt.Regs+1 << ",1";
						
					}
					else if(contxt.AssignmentOperator == "--"){
						
						file << std::endl << "\taddiu\t$" << contxt.Regs <<", $" << contxt.Regs+1 << ",-1";
						
					}
					contxt.AssignmentOperator = "df";
					contxt.Regs--;
			}
