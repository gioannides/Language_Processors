#include "ast_node.hpp"
#include "stdint.h"

inline void CastExpression::render_asm(std::ofstream& file,Context& contxt) {

			if( UNaryExpression != NULL){
				UNaryExpression->render_asm(file,contxt);
			}
			else if(CastExpressionPtr != NULL && TYpeName != NULL && UNaryExpression == NULL){

				contxt.Cast = true;
				TYpeName->render_asm(file,contxt);				
				CastExpressionPtr->render_asm(file,contxt);
				contxt.Cast = false;

			}
		}

inline void MultiplicativeExpression::render_asm(std::ofstream& file,Context& contxt) {

			
			if(OPERATOR==NULL && CaStExpression != NULL){
				
				CaStExpression->render_asm(file,contxt);
				//postfix_ops(contxt, file);
				
				

			}
			else if(MultiplicativeExpressionPtr != NULL && !contxt.reading && CaStExpression != NULL && OPERATOR != NULL){ 
				MultiplicativeExpressionPtr->render_asm(file,contxt);
				contxt.Regs++;			
				CaStExpression->render_asm(file,contxt);
				
				if(contxt.enum_constant){
					//postfix_ops(contxt, file);
					if( *OPERATOR == "*" ){
						if(contxt.EnumOperands.size()>=2){
							int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] * contxt.EnumOperands[contxt.EnumOperands.size()-2];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
					}
					else if(*OPERATOR == "/"){
						if(contxt.EnumOperands.size()>=2){
							int result =  contxt.EnumOperands[contxt.EnumOperands.size()-2] / contxt.EnumOperands[contxt.EnumOperands.size()-1];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
					}
					else if (*OPERATOR == "%")
					{
						if(contxt.EnumOperands.size()>=2){
							int result =  contxt.EnumOperands[contxt.EnumOperands.size()-2] % contxt.EnumOperands[contxt.EnumOperands.size()-1];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
						
					}
					
				}

				if((!contxt.function  && !contxt.sizeof_ && !contxt.enum_constant)){
					//postfix_ops(contxt, file);
					if( *OPERATOR == "*" ){
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs]*contxt.eval[contxt.Regs+1];
						contxt.eval_f[contxt.Regs] = contxt.eval_f[contxt.Regs] * contxt.eval_f[contxt.Regs+1];
					}
					else if(*OPERATOR == "/"){
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs]/contxt.eval[contxt.Regs+1];
						contxt.eval_f[contxt.Regs] = contxt.eval_f[contxt.Regs] / contxt.eval_f[contxt.Regs+1];
					}
					else if (*OPERATOR == "%")
					{
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs]%contxt.eval[contxt.Regs+1];
						
					}
					
				}
				if (contxt.function  && !contxt.sizeof_ && !contxt.enum_constant){
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
					if( *OPERATOR == "*" ){
						if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u' ){
							file << std::endl << "\tmultu\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
							file << std::endl << "\tmflo\t$" << contxt.Regs;
							contxt.regType[contxt.Regs]='u';
							contxt.regType[contxt.Regs+1]='u';
						}
						else if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
							file << std::endl << "\tmul.s\t$f" << contxt.Regs << ",$f" << contxt.Regs << ",$f" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='f';
							contxt.regType[contxt.Regs+1]='f';
						}	
						else{
							file << std::endl << "\tmult\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
							file << std::endl << "\tmflo\t$" << contxt.Regs;
							contxt.regType[contxt.Regs]='i';
							contxt.regType[contxt.Regs+1]='i';
						}						
						
					}
					else if(  *OPERATOR == "/" ){
						if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u'){
							file << std::endl << "\tdivu\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
							file << std::endl << "\tmflo\t$" << contxt.Regs;
							contxt.regType[contxt.Regs]='u';
							contxt.regType[contxt.Regs+1]='u';
						}
						else if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
							file << std::endl << "\tdiv.s\t$f" << contxt.Regs << ",$f" << contxt.Regs << ",$f" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='f';
							contxt.regType[contxt.Regs+1]='f';
						}
						else{
							file << std::endl << "\tdiv\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
							file << std::endl << "\tmflo\t$" << contxt.Regs;
							contxt.regType[contxt.Regs]='i';
							contxt.regType[contxt.Regs+1]='i';
						}
						
					}
					else if(  *OPERATOR == "%" ){
						if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u') {
							file << std::endl << "\tdivu\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
							contxt.regType[contxt.Regs]='u';
							contxt.regType[contxt.Regs+1]='u';
						}
						else{
							file << std::endl << "\tdiv\t$" << contxt.Regs << ", $" << contxt.Regs + 1;
							contxt.regType[contxt.Regs]='i';
							contxt.regType[contxt.Regs+1]='u';
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
				//postfix_ops(contxt, file);

			}
			else if(AdditiveExpressionPtr != NULL && !contxt.reading  && MultiplicativeExpressioN != NULL && OPERATOR != NULL) { 
				
				
				AdditiveExpressionPtr->render_asm(file,contxt);	
				contxt.Regs++;
				MultiplicativeExpressioN->render_asm(file,contxt);
				if(contxt.enum_constant){
					if( *OPERATOR == "+" ){
						if(contxt.EnumOperands.size()>=2){
							int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] + contxt.EnumOperands[contxt.EnumOperands.size()-2];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
						
					}
					else if(*OPERATOR == "-"){
						if(contxt.EnumOperands.size()>=2){
							int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] - contxt.EnumOperands[contxt.EnumOperands.size()-2];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
					}
				}
				if((!contxt.function  && !contxt.sizeof_ && !contxt.enum_constant)){
					//postfix_ops(contxt, file);
					if( *OPERATOR == "+" ){
						contxt.eval[contxt.Regs]+=contxt.eval[contxt.Regs+1];
						contxt.eval[contxt.Regs+1]=0;
						contxt.eval_f[contxt.Regs]+=contxt.eval_f[contxt.Regs+1];
						contxt.eval_f[contxt.Regs+1]=0;
						
					}
					else if(*OPERATOR == "-"){
						contxt.eval[contxt.Regs]-=contxt.eval[contxt.Regs+1];
						contxt.eval[contxt.Regs+1]=0;
						contxt.eval_f[contxt.Regs]-=contxt.eval_f[contxt.Regs+1];
						contxt.eval_f[contxt.Regs+1]=0;
					}
				}
				if (contxt.function  && !contxt.sizeof_ && !contxt.enum_constant){
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
					if( *OPERATOR == "+" ){

						if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u' ){
							file << std::endl << "\taddu\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
							contxt.regType[contxt.Regs]='u';
							contxt.regType[contxt.Regs+1]='u';
						}
						else if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
							file << std::endl << "\tadd.s\t$f" << contxt.Regs << ",$f" << contxt.Regs << ",$f" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='f';
							contxt.regType[contxt.Regs+1]='f';
						}						
						else{
							file << std::endl << "\tadd\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
							contxt.regType[contxt.Regs]='i';
							contxt.regType[contxt.Regs+1]='i';
						}
					}
					else if(  *OPERATOR == "-" ){
						if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u') {
							file << std::endl << "\tsubu\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
							contxt.regType[contxt.Regs]='u';
							contxt.regType[contxt.Regs+1]='u';
						}
						else if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
							file << std::endl << "\tsub.s\t$f" << contxt.Regs << ",$f" << contxt.Regs << ",$f" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='f';
							contxt.regType[contxt.Regs+1]='f';

						}
						else{
							file << std::endl << "\tsub\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
							contxt.regType[contxt.Regs]='i';
							contxt.regType[contxt.Regs+1]='i';
						}
					}
					
				}
				contxt.Regs--;
			}

		}






inline void ShiftExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OPERATOR==NULL && AdditiVeExpression != NULL){
				AdditiVeExpression->render_asm(file,contxt);
				//postfix_ops(contxt, file);

			}
			else if(ShiftExpressionPtr != NULL && !contxt.reading && AdditiVeExpression != NULL && OPERATOR != NULL){ 
				ShiftExpressionPtr->render_asm(file,contxt);				
				contxt.Regs++;
				AdditiVeExpression->render_asm(file,contxt);

				if(contxt.enum_constant){
					if( *OPERATOR == "<<" ){
						if(contxt.EnumOperands.size()>=2){
							int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] << contxt.EnumOperands[contxt.EnumOperands.size()-2];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
						
					}
					else if(*OPERATOR == ">>"){
						if(contxt.EnumOperands.size()>=2){
							int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] >> contxt.EnumOperands[contxt.EnumOperands.size()-2];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
					}
				}
								
				if((!contxt.function  && !contxt.sizeof_ && !contxt.enum_constant)){
					//postfix_ops(contxt, file);
					if( *OPERATOR == "<<" ){
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs] << contxt.eval[contxt.Regs+1];
						contxt.eval[contxt.Regs+1]=0;
					}
					else if(*OPERATOR == ">>"){
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs] >> contxt.eval[contxt.Regs+1];
						contxt.eval[contxt.Regs+1]=0;
					}
				}
				if (contxt.function  && !contxt.sizeof_ && !contxt.enum_constant){
					
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
					if( *OPERATOR == "<<" ){
						file << std::endl << "\tsllv\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
						contxt.regType[contxt.Regs]='i';
						contxt.regType[contxt.Regs+1]='i';
					}
					else if(  *OPERATOR == ">>" ){
	
						if(contxt.regType[contxt.Regs] == 'u' || contxt.regType[contxt.Regs+1] == 'u'){
							file << std::endl << "\tsrlv\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='u';
							contxt.regType[contxt.Regs+1]='u';
						}
						else{
							file << std::endl << "\tsrav\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='i';
							contxt.regType[contxt.Regs+1]='i';
						}
					}
					
				}
				contxt.Regs--;
			}
	}




inline void RelationalExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OPERATOR==NULL && SHiftExpression != NULL){
				SHiftExpression->render_asm(file,contxt);
				//postfix_ops(contxt, file);

			}
			else if(RelationalExpressionPtr != NULL && !contxt.reading && SHiftExpression != NULL && OPERATOR != NULL){ 
				RelationalExpressionPtr->render_asm(file,contxt);
				contxt.Regs++;
				SHiftExpression->render_asm(file,contxt);
				
				if (contxt.function  && !contxt.sizeof_ && !contxt.enum_constant){
					//postfix_ops(contxt, file);
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);	
					if( *OPERATOR == "<" ){
						if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u'){
							file << std::endl << "\tsltu\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='u';
						}
						else if(contxt.float_){
							std::string label_id = labelGen(contxt);
							std::string END = "$ENDLT" + label_id;
							std::string NOT_LESS = "$NOT_LT" + label_id;

							file << std::endl << "\tc.lt.s\t$f" << contxt.Regs << ",$f" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='f';
							contxt.regType[contxt.Regs+1]='f';
							file << std::endl << "\tbc1f\t" << NOT_LESS;
							file << std::endl << "\tnop" << std::endl;
							file << std::endl << "\tli.s\t$f" << contxt.Regs << ",1";
							contxt.regType[contxt.Regs]='f';
							file << std::endl << "\tb\t" << END;
							file << std::endl << "\tnop\t";
							file << std::endl << NOT_LESS << ":";
							file << std::endl << "\tmtc1\t$0,$f" << contxt.Regs;
							contxt.regType[contxt.Regs]='f';
							file << std::endl << "\tnop" << std::endl;
							file << std::endl << END << ":";

						}
						else{
							file << std::endl << "\tslt\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='i';
						}
					}
					else if(  *OPERATOR == ">" ){
						if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u'){
							file << std::endl << "\tsgtu\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='u';
						}
						else if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
							std::string label_id = labelGen(contxt);
							std::string END = "$ENDGT" + label_id;
							std::string NOT_GREATER = "$NOT_GT" + label_id;

							file << std::endl << "\tc.lt.s\t$f" << contxt.Regs+1 << ",$f" << contxt.Regs;
							contxt.regType[contxt.Regs]='f';
							contxt.regType[contxt.Regs+1]='f';
							file << std::endl << "\tbc1f\t" << NOT_GREATER;
							file << std::endl << "\tnop" << std::endl;
							file << std::endl << "\tli.s\t$f" << contxt.Regs << ",1";
							contxt.regType[contxt.Regs]='f';
							file << std::endl << "\tb\t" << END;
							file << std::endl << "\tnop\t";
							file << std::endl << NOT_GREATER << ":";
							file << std::endl << "\tmtc1\t$0,$f" << contxt.Regs;
							contxt.regType[contxt.Regs]='f';
							file << std::endl << "\tnop" << std::endl;
							file << std::endl << END << ":";

						}
						else{
							file << std::endl << "\tsgt\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='i';
						}
					}
					else if( *OPERATOR == "<=" ){
						if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u') {
							file << std::endl << "\tsleu\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='u';
						}
						else if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
							std::string label_id = labelGen(contxt);
							std::string END = "$ENDLE" + label_id;
							std::string NOT_LE = "$NOT_LE" + label_id;

							file << std::endl << "\tc.le.s\t$f" << contxt.Regs << ",$f" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='f';
							contxt.regType[contxt.Regs+1]='f';
							file << std::endl << "\tbc1f\t" << NOT_LE;
							file << std::endl << "\tnop" << std::endl;
							contxt.regType[contxt.Regs]='f';
							file << std::endl << "\tli.s\t$f" << contxt.Regs << ",1";
							contxt.regType[contxt.Regs]='f';
							file << std::endl << "\tb\t" << END;
							file << std::endl << "\tnop\t";
							file << std::endl << NOT_LE << ":";
							file << std::endl << "\tmtc1\t$0,$f" << contxt.Regs;
							contxt.regType[contxt.Regs]='f';
							file << std::endl << "\tnop" << std::endl;
							file << std::endl << END << ":";

						}
						else{
							file << std::endl << "\tsle\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='i';
						}
					}
					else if(  *OPERATOR == ">=" ){
						if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u'){
							file << std::endl << "\tsgeu\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='u';
						}
						else if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
							std::string label_id = labelGen(contxt);
							std::string END = "$ENDGE" + label_id;
							std::string NOT_GE = "$NOT_GE" + label_id;

							file << std::endl << "\tc.le.s\t$f" << contxt.Regs+1 << ",$f" << contxt.Regs;
							contxt.regType[contxt.Regs]='f';
							contxt.regType[contxt.Regs+1]='f';
							file << std::endl << "\tbc1f\t" << NOT_GE;
							file << std::endl << "\tnop" << std::endl;
							file << std::endl << "\tli.s\t$f" << contxt.Regs << ",1";
							contxt.regType[contxt.Regs]='f';
							file << std::endl << "\tb\t" << END;
							file << std::endl << "\tnop\t";
							file << std::endl << NOT_GE << ":";
							file << std::endl << "\tmtc1\t$0,$f" << contxt.Regs;
							contxt.regType[contxt.Regs]='f';
							file << std::endl << "\tnop" << std::endl;
							file << std::endl << END << ":";

						}
						else{
							file << std::endl << "\tsge\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='i';
						}
					}
					
				}
				if(contxt.enum_constant){
					if( *OPERATOR == "<" ){
						
						if(contxt.EnumOperands.size()>=2){
							int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] < contxt.EnumOperands[contxt.EnumOperands.size()-2];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
					}
					
						
					else if(*OPERATOR == ">"){
						if(contxt.EnumOperands.size()>=2){
							int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] > contxt.EnumOperands[contxt.EnumOperands.size()-2];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
						
					}
					else if(*OPERATOR == "<=")
					{
						if(contxt.EnumOperands.size()>=2){
							int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] <= contxt.EnumOperands[contxt.EnumOperands.size()-2];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
						
					}
					else if(*OPERATOR == ">=")
					{
						if(contxt.EnumOperands.size()>=2){
							int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] >= contxt.EnumOperands[contxt.EnumOperands.size()-2];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
						
					}
					//contxt.enumeval[contxt.Regs+1] =0;
					//contxt.enumeval[contxt.Regs] = 0;
				}
				if((!contxt.function  && !contxt.sizeof_ && !contxt.enum_constant)){
					if( *OPERATOR == "<" ){
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs] < contxt.eval[contxt.Regs+1];
						contxt.eval_f[contxt.Regs] = contxt.eval_f[contxt.Regs] < contxt.eval_f[contxt.Regs+1];
					}
					else if(*OPERATOR == ">"){
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs] > contxt.eval[contxt.Regs+1];
						contxt.eval_f[contxt.Regs] = contxt.eval_f[contxt.Regs] > contxt.eval_f[contxt.Regs+1];
					}
					else if(*OPERATOR == "<=")
					{
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs] <= contxt.eval[contxt.Regs+1];
						contxt.eval_f[contxt.Regs] = contxt.eval_f[contxt.Regs] <= contxt.eval_f[contxt.Regs+1];
					}
					else if(*OPERATOR == ">=")
					{
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs] >= contxt.eval[contxt.Regs+1];
						contxt.eval_f[contxt.Regs] = contxt.eval_f[contxt.Regs] >= contxt.eval_f[contxt.Regs+1];
					}
					contxt.eval[contxt.Regs+1] =0;
					contxt.eval_f[contxt.Regs] = 0;
				}
				contxt.Regs--;
				
			}


		}



inline void EqualityExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OPERATOR==NULL && RElationalExpression != NULL){
				RElationalExpression->render_asm(file,contxt);
				//postfix_ops(contxt, file);
			}
			else if(EqualityExpressionPtr != NULL && !contxt.reading && RElationalExpression != NULL && OPERATOR != NULL){ 
				EqualityExpressionPtr->render_asm(file,contxt);
				contxt.Regs++;	
				RElationalExpression->render_asm(file,contxt);

					if(*OPERATOR == "==" && contxt.enum_constant)
					{
						if(contxt.EnumOperands.size()>=2){
							int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] == contxt.EnumOperands[contxt.EnumOperands.size()-2];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
					}
						
					
					else if(*OPERATOR == "!="  && contxt.enum_constant)
					{
					
						if(contxt.EnumOperands.size()>=2){
							int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] != contxt.EnumOperands[contxt.EnumOperands.size()-2];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
					}
					
				
				if (contxt.function  && !contxt.sizeof_ && !contxt.enum_constant){
					//postfix_ops(contxt, file);
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);	
					if( *OPERATOR == "==" ){
						if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
							std::string label_id = labelGen(contxt);
							std::string END = "$ENDEQ" + label_id;
							std::string NOT_EQ = "$NOT_EQ" + label_id;

							file << std::endl << "\tc.eq.s\t$f" << contxt.Regs << ",$f" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='f';
							contxt.regType[contxt.Regs+1]='f';
							file << std::endl << "\tbc1f\t" << NOT_EQ;
							file << std::endl << "\tnop" << std::endl;
							
							file << std::endl << "\tli.s\t$f" << contxt.Regs << ",1";
							contxt.regType[contxt.Regs]='f';
							file << std::endl << "\tb\t" << END;
							file << std::endl << "\tnop\t";
							file << std::endl << NOT_EQ << ":";
							file << std::endl << "\tmtc1\t$0,$f" << contxt.Regs;
							contxt.regType[contxt.Regs]='f';
							file << std::endl << "\tnop" << std::endl;
							file << std::endl << END << ":";

						}
						else{
							file << std::endl << "\tseq\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='i';
							contxt.regType[contxt.Regs+1]='i';
						}						
						
					}
					else if(  *OPERATOR == "!=" ){

						if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
							std::string label_id = labelGen(contxt);
							std::string END = "$ENDEQ" + label_id;
							std::string _EQ = "$_EQ" + label_id;

							file << std::endl << "\tc.eq.s\t$f" << contxt.Regs << ",$f" << contxt.Regs+1;
							contxt.regType[contxt.Regs]='f';
							contxt.regType[contxt.Regs+1]='f';
							file << std::endl << "\tbc1t\t" << _EQ;
							file << std::endl << "\tnop" << std::endl;
						
							file << std::endl << "\tli.s\t$f" << contxt.Regs << ",1";
							contxt.regType[contxt.Regs]='f';
							file << std::endl << "\tb\t" << END;
							file << std::endl << "\tnop\t";
							file << std::endl << _EQ << ":";
							file << std::endl << "\tmtc1\t$0,$f" << contxt.Regs;
							contxt.regType[contxt.Regs]='f';
							file << std::endl << "\tnop" << std::endl;
							file << std::endl << END << ":";

						}
						else{
							file << std::endl << "\txor\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs+1;						
							file << std::endl << "\tsltu\t$" << contxt.Regs << ", $0, $" << contxt.Regs;
							contxt.regType[contxt.Regs]='i';
							contxt.regType[contxt.Regs+1]='i';
						}
						
					}
					
				}
				else 
				{
					if(*OPERATOR == "=="  && ((!contxt.sizeof_ && !contxt.enum_constant)))
					{
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs] == contxt.eval[contxt.Regs+1];
						contxt.eval_f[contxt.Regs] = contxt.eval_f[contxt.Regs] == contxt.eval_f[contxt.Regs+1];
					}
					else if(*OPERATOR == "!="  && ((!contxt.sizeof_ && !contxt.enum_constant)))
					{
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs] != contxt.eval[contxt.Regs+1];
						contxt.eval_f[contxt.Regs] = contxt.eval_f[contxt.Regs] != contxt.eval_f[contxt.Regs+1]; 
					}
				}
				contxt.Regs--;
				
			}

		}

inline void AndExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(BIT_AND==NULL && EqualitYExpression != NULL){
				EqualitYExpression->render_asm(file,contxt);
				//postfix_ops(contxt, file);
			}
			else if(AndExpressionPtr != NULL && !contxt.reading && EqualitYExpression != NULL && BIT_AND != NULL){ 
				AndExpressionPtr->render_asm(file,contxt);
				
				contxt.Regs++;
				EqualitYExpression->render_asm(file,contxt);
				if(contxt.enum_constant){
					if(contxt.EnumOperands.size()>=2){
						int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] & contxt.EnumOperands[contxt.EnumOperands.size()-2];
						contxt.EnumOperands.pop_back();
						contxt.EnumOperands.pop_back();
						contxt.EnumOperands.push_back(result);
					}
				}
				if (contxt.function  && !contxt.sizeof_ && !contxt.enum_constant){
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
					file << std::endl << "\tand\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
					//postfix_ops(contxt, file);
					contxt.regType[contxt.Regs]='i';
					contxt.regType[contxt.Regs+1]='i';
				}
				else 
				{
					if(!contxt.sizeof_ && !contxt.enum_constant){
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs] & contxt.eval[contxt.Regs+1];
					}
					
					
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
				if(contxt.enum_constant){
					if(contxt.EnumOperands.size()>=2){
						int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] ^ contxt.EnumOperands[contxt.EnumOperands.size()-2];
						contxt.EnumOperands.pop_back();
						contxt.EnumOperands.pop_back();
						contxt.EnumOperands.push_back(result);
					}
				}
				if (contxt.function  && !contxt.sizeof_ && !contxt.enum_constant){
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
					file << std::endl << "\txor\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs + 1;
					contxt.regType[contxt.Regs]='i';
					contxt.regType[contxt.Regs+1]='i';
				}
				else 
				{
					if(!contxt.sizeof_ && !contxt.enum_constant){
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs] ^ contxt.eval[contxt.Regs+1];
					}
					
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
				contxt.Regs++;
				EXclusiveOrExpression->render_asm(file,contxt);
				if(contxt.enum_constant){
					if(contxt.EnumOperands.size()>=2){
						int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] | contxt.EnumOperands[contxt.EnumOperands.size()-2];
						contxt.EnumOperands.pop_back();
						contxt.EnumOperands.pop_back();
						contxt.EnumOperands.push_back(result);
					}
				}
				if (contxt.function && !contxt.sizeof_ && !contxt.enum_constant )
				{
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
					file << std::endl << "\tor\t$" << contxt.Regs << ", $" << contxt.Regs << ", $" << contxt.Regs + 1;
					
					contxt.regType[contxt.Regs]='i';
					contxt.regType[contxt.Regs+1]='i';
					
				}
				else 
				{
					if(!contxt.sizeof_ && !contxt.enum_constant){
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs] | contxt.eval[contxt.Regs+1];
					}
				}
				contxt.Regs--;
			}
		}

inline void LogicalAndExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(AND_OP==NULL && INclusiveOrExpression != NULL){
				INclusiveOrExpression->render_asm(file,contxt);
				
			}
			
			else if(LogicalAndExpressionPtr != NULL && !contxt.reading && INclusiveOrExpression != NULL && AND_OP != NULL) { 
				LogicalAndExpressionPtr->render_asm(file,contxt);
				std::string SHORTCIRCUIT, label_id;
				label_id = labelGenLogical(contxt);
				SHORTCIRCUIT = "$SHORTCIRCUIT_AND" + label_id;
				if(contxt.function){
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
					if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
						label_id = labelGenLogical(contxt);
						std::string NOT_0 = "$NOT_0" + label_id;
						std::string DONE = "$DONE_" + label_id;
						std::string LT_THAN1 = "$LT_THAN1" + label_id;

						file << std::endl << "\tli.s\t" << "$f1" << ",0";
						file << std::endl << "\tc.eq.s\t$f" << contxt.Regs+1 << ",$f1";
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << "\tbc1f\t" << NOT_0;
						file << std::endl << "\tnop\t";
						file << std::endl << "\tb\t" << DONE;
						file << std::endl << "\tnop\t";
						file << std::endl << NOT_0 << ":";
						file << std::endl << "\tli.s\t" << "$f1" << ",1";
						file << std::endl << "\tc.lt.s\t$f" << contxt.Regs+1 << ",$f1";
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << "\tbc1t\t" << LT_THAN1;
						file << std::endl << "\tnop\t";
						file << std::endl << "\tb\t" << DONE;
						file << std::endl << "\tnop\t";
						file << std::endl << LT_THAN1 << ":";
						file << std::endl << "\tli.s\t" << "$f" << contxt.Regs+1 << ",1";
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << DONE << ":";
						file << std::endl << "\tcvt.w.s\t$f" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << "\tmfc1\t" <<"$" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
						contxt.regType[contxt.Regs+1]='f';
						file<<   std::endl << "\tnop\t";
					}
					file << std::endl << "\tsne $" << contxt.Regs+1 << ",$0,$" << contxt.Regs+1;
					contxt.regType[contxt.Regs+1]='i';
					file << std::endl << "\tbeq $0,$" << contxt.Regs+1 << "," << SHORTCIRCUIT;
					contxt.regType[contxt.Regs+1]='i';  
					file<<   std::endl << "\tnop\t";}
				contxt.Regs++;
				INclusiveOrExpression->render_asm(file,contxt);
				
				if(contxt.enum_constant){
					if(contxt.EnumOperands.size()>=2){
						int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] && contxt.EnumOperands[contxt.EnumOperands.size()-2];
						contxt.EnumOperands.pop_back();
						contxt.EnumOperands.pop_back();
						contxt.EnumOperands.push_back(result);
					}
				}
				if (contxt.function && !contxt.sizeof_ && !contxt.enum_constant)
				{
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
					if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
						label_id = labelGenLogical(contxt);
						std::string NOT_0 = "$NOT_0" + label_id;
						std::string DONE = "$DONE_" + label_id;
						std::string LT_THAN1 = "$LT_THAN1" + label_id;

						file << std::endl << "\tli.s\t" << "$f1" << ",0";
						file << std::endl << "\tc.eq.s\t$f" << contxt.Regs+1 << ",$f1";
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << "\tbc1f\t" << NOT_0;
						file << std::endl << "\tnop\t";
						file << std::endl << "\tb\t" << DONE;
						file << std::endl << "\tnop\t";
						file << std::endl << NOT_0 << ":";
						file << std::endl << "\tli.s\t" << "$f1" << ",1";
						file << std::endl << "\tc.lt.s\t$f" << contxt.Regs+1 << ",$f1";
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << "\tbc1t\t" << LT_THAN1;
						file << std::endl << "\tnop\t";
						file << std::endl << "\tb\t" << DONE;
						file << std::endl << "\tnop\t";
						file << std::endl << LT_THAN1 << ":";
						file << std::endl << "\tli.s\t" << "$f" << contxt.Regs+1 << ",1";
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << DONE << ":";
						file << std::endl << "\tcvt.w.s\t$f" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << "\tmfc1\t" <<"$" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
						contxt.regType[contxt.Regs+1]='f';
						file<<   std::endl << "\tnop\t";
					}		
					file<<   std::endl << "\tsne $" << contxt.Regs+1 << ",$0,$" << contxt.Regs+1;
					file<< std::endl << "\tand $" << contxt.Regs << ",$" << contxt.Regs << ",$" << contxt.Regs+1;
					contxt.regType[contxt.Regs]='i';
					contxt.regType[contxt.Regs+1]='i';
				}
				else 
				{
					if(!contxt.sizeof_ && !contxt.enum_constant){
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs] && contxt.eval[contxt.Regs+1];
						contxt.eval_f[contxt.Regs] = contxt.eval_f[contxt.Regs] && contxt.eval_f[contxt.Regs+1];
					}
				}
				contxt.Regs--;
				file << std::endl << SHORTCIRCUIT << ":";			
			}
		}


inline void LogicalOrExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(OR_OP==NULL && LogicalAndExpressionPtr != NULL){
				LogicalAndExpressionPtr->render_asm(file,contxt);
				postfix_ops(contxt, file);
			}
			
			else if( LogicalAndExpressionPtr != NULL && !contxt.reading && LogicalAndExpressionPtr != NULL && OR_OP != NULL){ 
				LogicalOrExpressionPtr->render_asm(file,contxt);
				
				std::string SHORTCIRCUIT, PASS, label_id;
				label_id = labelGenLogical(contxt);
				SHORTCIRCUIT = "$SHORTCIRCUIT_OR" + label_id;
				if(contxt.function){

					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
					if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
						label_id = labelGenLogical(contxt);
						std::string NOT_0 = "$NOT_0" + label_id;
						std::string DONE = "$DONE_" + label_id;
						std::string LT_THAN1 = "$LT_THAN1" + label_id;

						file << std::endl << "\tli.s\t" << "$f1" << ",0";
						file << std::endl << "\tc.eq.s\t$f" << contxt.Regs+1 << ",$f1";
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << "\tbc1f\t" << NOT_0;
						file << std::endl << "\tnop\t";
						file << std::endl << "\tb\t" << DONE;
						file << std::endl << "\tnop\t";
						file << std::endl << NOT_0 << ":";
						file << std::endl << "\tli.s\t" << "$f1" << ",1";
						file << std::endl << "\tc.lt.s\t$f" << contxt.Regs+1 << ",$f1";
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << "\tbc1t\t" << LT_THAN1;
						file << std::endl << "\tnop\t";
						file << std::endl << "\tb\t" << DONE;
						file << std::endl << "\tnop\t";
						file << std::endl << LT_THAN1 << ":";
						file << std::endl << "\tli.s\t" << "$f" << contxt.Regs+1 << ",1";
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << DONE << ":";
						file << std::endl << "\tcvt.w.s\t$f" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << "\tmfc1\t" <<"$" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
						contxt.regType[contxt.Regs+1]='f';
						file<<   std::endl << "\tnop\t";
					}				
					file <<  std::endl << "\tsne $"  << contxt.Regs+1  << ",$0,$" << contxt.Regs+1;
					file<<   std::endl << "\tbne $" << contxt.Regs+1 << ",$0," << SHORTCIRCUIT;
					contxt.regType[contxt.Regs+1]='i';
					file<<   std::endl << "\tnop\t";}
				contxt.Regs++;
				LogicalAndExpressionPtr->render_asm(file,contxt);
				if(contxt.enum_constant){
					if(contxt.EnumOperands.size()>=2){
						int result =  contxt.EnumOperands[contxt.EnumOperands.size()-1] || contxt.EnumOperands[contxt.EnumOperands.size()-2];
						contxt.EnumOperands.pop_back();
						contxt.EnumOperands.pop_back();
						contxt.EnumOperands.push_back(result);
					}
				}
				if (contxt.function && !contxt.sizeof_ && !contxt.enum_constant){
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
					
					if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
						label_id = labelGenLogical(contxt);
						std::string NOT_0 = "$NOT_0" + label_id;
						std::string DONE = "$DONE_" + label_id;
						std::string LT_THAN1 = "$LT_THAN1" + label_id;

						file << std::endl << "\tli.s\t" << "$f1" << ",0";
						file << std::endl << "\tc.eq.s\t$f" << contxt.Regs+1 << ",$f1";
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << "\tbc1f\t" << NOT_0;
						file << std::endl << "\tnop\t";
						file << std::endl << "\tb\t" << DONE;
						file << std::endl << "\tnop\t";
						file << std::endl << NOT_0 << ":";
						file << std::endl << "\tli.s\t" << "$f1" << ",1";
						file << std::endl << "\tc.lt.s\t$f" << contxt.Regs+1 << ",$f1";
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << "\tbc1t\t" << LT_THAN1;
						file << std::endl << "\tnop\t";
						file << std::endl << "\tb\t" << DONE;
						file << std::endl << "\tnop\t";
						file << std::endl << LT_THAN1 << ":";
						file << std::endl << "\tli.s\t" << "$f" << contxt.Regs+1 << ",1";
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << DONE << ":";
						file << std::endl << "\tcvt.w.s\t$f" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
						contxt.regType[contxt.Regs+1]='f';
						file << std::endl << "\tmfc1\t" <<"$" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
						contxt.regType[contxt.Regs+1]='f';
						file<<   std::endl << "\tnop\t";
					}
					file<<   std::endl << "\tsne $" << contxt.Regs+1 << ",$0,$" << contxt.Regs+1;
					postfix_ops(contxt, file);
					file<< std::endl << "\tor $" << contxt.Regs << ",$" << contxt.Regs << ",$" << contxt.Regs+1;
					contxt.regType[contxt.Regs]='i';
					contxt.regType[contxt.Regs+1]='i';	
				}
				else 
				{
					if(!contxt.sizeof_ && !contxt.enum_constant){
						contxt.eval[contxt.Regs] = contxt.eval[contxt.Regs] || contxt.eval[contxt.Regs+1];
						contxt.eval_f[contxt.Regs] = contxt.eval_f[contxt.Regs] || contxt.eval_f[contxt.Regs+1];
					}				
				}
				contxt.Regs--;
				file <<  std::endl << SHORTCIRCUIT << ":";
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
			contxt.argument_no[contxt.argument_no.size()-1]++;
			//contxt.rhs_of_expression=true;
			AssignmentExpressionPtr->render_asm(file, contxt);
			//contxt.rhs_of_expression=false;

}


inline void PostFixExpression::render_asm(std::ofstream& file,Context& contxt) {

			if(PostFixExpressionPtr != NULL) 
			{
				if(OPERATOR != NULL && IDENTIFIER == NULL) 
				{
					contxt.AssignmentOperator = *OPERATOR;

					if(!contxt.reading)
					{
						contxt.is_postfix= true;
					}					
					PostFixExpressionPtr->render_asm(file,contxt);
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
						if (offset<=0 || offset > contxt.totalStackArea-4){
							offset=116;
						}
						for(i=1; i<25; i++)
						{
							file << "\n\tsw $" << i << ", " << offset-(i*4) << "($sp)";
						}
						//file << "\n\tsw $31," << offset-(i*4) << "($sp)"; 
					}
					contxt.nested_function_calls++;
					contxt.is_function_call=true;
					
					
					PostFixExpressionPtr->render_asm(file,contxt);
					
					int search=0;
					for ( search=0; search<contxt.functions_declared.size(); search++)
					{
						if(contxt.functions_declared[search].name == contxt.Scopes[contxt.Scopes.size()-1])
						{
							break;
						}
					}
					int off;
					if(contxt.functions_declared[search].paramters_size > 16)
					{	
						off = contxt.functions_declared[search].paramters_size;
					}
						else 
					{
						off = 16;
					}

					if(contxt.nested_function_calls>1 && !contxt.reading)
					{
						file << std::endl << "\taddiu $sp, $sp, -" << off;
						for(i=contxt.Variables.size()-1; i>=0; i--) {
							for (j=contxt.Scopes.size()-1; j>=0; j--)
							{
								if(contxt.Variables[i].scope == contxt.Scopes[j])
								{									
									contxt.Variables[i].offset += off;
								}
							}
						}
					}
					
					if(ArgumentExpressionListPtr != NULL){
					    contxt.argument_no.push_back(0);
						ArgumentExpressionListPtr->render_asm(file, contxt);
						contxt.argument_no.pop_back();
						//file << "the problem comes now!";
					}
					

					if(!contxt.reading && contxt.Scopes.size()){
						file << "\n\t.option pic";
						// file << std::endl << "\tlui\t$" << contxt.Regs+1 << ", %hi(" << contxt.Variables[good_index].id << ")";
						// file << std::endl << "\tlw\t$" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($"<< contxt.Regs+1 << ")";                            	
						file <<  std::endl << "\tla $25," << contxt.Scopes[contxt.Scopes.size()-1];
						file << std::endl << "\tjalr $25";
						//file << std::endl << "\tjal " << contxt.Scopes[contxt.Scopes.size()-1];
						file << std::endl << "\tnop";
						contxt.Scopes.pop_back();
					}
					if(contxt.nested_function_calls>1 && !contxt.reading)
					{
						file << std::endl << "\taddiu $sp, $sp, " << off;
						for(i=contxt.Variables.size()-1; i>=0; i--) {
							for (j=contxt.Scopes.size()-1; j>=0; j--)
							{
								if(contxt.Variables[i].scope == contxt.Scopes[j])
								{									
									contxt.Variables[i].offset -= off;
								}
							}
						}
					}
					if(!contxt.reading){
						file << "\n\tmove\t$25, $2"; 
						for(i=1; i<25; i++)
						{
							file << "\n\tlw $" << i << "," << offset-(i*4) << "($sp)";
						}
						//file << "\n\tlw $31," << offset-(i*4) << "($sp)"; 
						file << "\n\tmove $" << contxt.Regs+1 << ", $25"; 
					}
					contxt.nested_function_calls--;
				}
				if(AssignmentExpressionPtr != NULL){
					contxt.is_array=true;
					bool temp_lhs=contxt.lhs_of_assignment;
					contxt.lhs_of_assignment=0;
					if(!contxt.reading){
						file << std::endl << "\tsw $25, " << contxt.totalStackArea << "($sp)";
						file << std::endl << "\tmove $25, $0"; 
					}
					contxt.Regs++;
					AssignmentExpressionPtr->render_asm(file,contxt);
					contxt.lhs_of_assignment=temp_lhs;
					if(!contxt.reading){
					file << std:: endl <<"\tmove $25, $" << contxt.Regs+1; // move the value of the 
					}//multiply $25 by word size here;--------------------------------------------
					contxt.Regs--;
					//contxt.global_offset=contxt.eval[contxt.Regs+1];
					//for(int i=0; i<7; i++){
					//	file << std::endl << "# " << contxt.eval[i];
					//}
					contxt.nested_arrays++;
					
					PostFixExpressionPtr->render_asm(file,contxt);
					
					if(!contxt.reading){
					file << std::endl << "\tlw $25, " << contxt.totalStackArea << "($sp)";
					}
					contxt.nested_arrays--;
					contxt.is_array=false;

				}
			}
			if( PrimaryExpressionPtr != NULL ) {

				PrimaryExpressionPtr->render_asm(file,contxt);
				
			}
}
inline void PrimaryExpression::render_asm(std::ofstream& file,Context& contxt)  
{
	/*if(IDENTIFIER!=NULL)
	{
		file << "# id" << *IDENTIFIER << "- f_call" << contxt.is_function_call << "- reading" << contxt.reading << "- function" << contxt.function << "- SizeOf:" << contxt.sizeof_ << "- lhs_of_assignment:" << contxt.lhs_of_assignment << "\n";
	}*/
	if( AssignmentExpressionPtr != NULL && !contxt.reading ) 
	{
		AssignmentExpressionPtr->render_asm(file,contxt);		
	}
	else if( IDENTIFIER != NULL && !contxt.reading && contxt.function)			//this identifier is involved in expressions
	{
		if(contxt.sizeof_){
			findSize(contxt,*IDENTIFIER);
		}

		if(contxt.Regs>=24 && !contxt.sizeof_)
		{
			std::cout << std::endl << "buy more registers!" << std::endl; 
		}
		int found_0nothing_1local_2globl = 0;	
		int good_index=0;			//this will determine whether the variable wanted is a global or a local
		int i(0), j;				//must initialize the index i outside so it is accessible throughout here
		if(contxt.is_function_call && !contxt.sizeof_)
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
			if(contxt.Variables.size()&&contxt.Scopes.size() && !contxt.sizeof_ && !contxt.enum_constant)
			{
			for(i=contxt.Variables.size()-1; i>=0; i--) {
				for (j=contxt.Scopes.size()-1; j>=0; j--)
				{
					if(contxt.Variables[i].scope == contxt.Scopes[j] && *IDENTIFIER == contxt.Variables[i].id) 
					{
						found_0nothing_1local_2globl = 1;	//means that we found a local variable in the function of that name					
						good_index=i;
						contxt.good_i = good_index;
						i = -1;
						j = -1;
					}
					if(contxt.Variables[good_index].DataType == "unsigned") { //[0] this might cause problems
						contxt.is_unsigned = true;
					}
					if(contxt.Variables[good_index].DataType == "float") {
						contxt.float_ = true;
					}										
				}
			  }
			}
			if(!found_0nothing_1local_2globl && !contxt.sizeof_ && !contxt.enum_constant) {
				for(i=0; i<contxt.Variables.size(); i++) {
					if(contxt.Variables[i].scope == "global" && *IDENTIFIER == contxt.Variables[i].id) {
						found_0nothing_1local_2globl=2;
						good_index = i;
						contxt.good_i = good_index;
						i = contxt.Variables.size();
						if(contxt.Variables[good_index].DataType == "unsigned") {
							contxt.is_unsigned = true;
						}
						if(contxt.Variables[good_index].DataType == "float") {
							contxt.float_ = true;
						}
					}	
				}
		  	} 
			if(found_0nothing_1local_2globl && contxt.is_array)
			{
				file << std::endl << "\tli $24, " << contxt.Variables[good_index].word_size;
				
				file << std::endl << "\tmul $25,$24,$25";
			}	  		
			if(contxt.lhs_of_assignment && !contxt.sizeof_ && !contxt.enum_constant )
			{
				//file << "# lhs_of_assignment is set\n";
				if(found_0nothing_1local_2globl)
				{
					if(contxt.AssignmentOperator != "df" && contxt.AssignmentOperator != "=")
					{
						AssignmentOperator(file,good_index,contxt,found_0nothing_1local_2globl);				
					}
				}
				if(found_0nothing_1local_2globl==1)
				{
					store_locals(contxt, file, good_index);
				}					
				else if(found_0nothing_1local_2globl==2) 
				{
					store_globals(contxt, file, good_index);
				}			
				else
				{
						
					//else{
						//file << std::endl << "#VARIABLE : " << *IDENTIFIER << "NOT DECLARED!!!\n";
					//}
				}
			}
			else
			{

			 	if(found_0nothing_1local_2globl==1 && !contxt.sizeof_ && !contxt.enum_constant) 
			 	{
			 		load_locals(contxt, file, good_index);
					if(contxt.Cast){
						CastToType(file,contxt,*IDENTIFIER);
					}			
			  	}
     		   		 else if(found_0nothing_1local_2globl==2 && !contxt.sizeof_ && !contxt.enum_constant) 
				{
					load_globals(contxt, file, good_index);
					if(contxt.Cast){
						CastToType(file,contxt,*IDENTIFIER);
					}
			
				}		
				else
					
				{	if(!contxt.enum_constant){	
						bool found = false;
						for( int i(0); i < contxt.Enum.size(); i++){
							//std::cout <<  contxt.Enum[i].ScopeID << " " <<  contxt.Enum[i].IDENTIFIER << " " <<  contxt.Enum[i].value << std::endl;
							if(contxt.Enum[i].IDENTIFIER == *IDENTIFIER && contxt.Enum[i].ScopeID == contxt.funct_id){
								file <<  std::endl << "\tli\t$" << contxt.Regs+1 << ", " << contxt.Enum[i].value;
								contxt.regType[contxt.Regs+1]='i';
								found = true;
								break;
							}
						}
						if(!found){
							for( int i(0); i < contxt.Enum.size(); i++){
								if(contxt.Enum[i].IDENTIFIER == *IDENTIFIER && contxt.Enum[i].ScopeID == "global"){
									file <<  std::endl << "\tli\t$" << contxt.Regs+1 << ", " << contxt.Enum[i].value;
									contxt.regType[contxt.Regs+1]='i';
									found = true;
									break;
								}
							}
						}
					}

				}

			}
					
					//}    
						

						if(!contxt.sizeof_){
							//file << std::endl << "#VARIABLE : " << *IDENTIFIER << "NOT DECLARED!!!\n";
						}
				}		
		}	
		
	
	else if( CONSTANT != NULL && !contxt.reading ) 
	{	

	
		
		char tmp2;
		int64_t temp;
		float temp_f;
		bool is_char = false;

		if((*CONSTANT) == "'\\n'"){
			tmp2 = '\n';
			is_char = true;
		}
		else if((*CONSTANT) == "'\\r'"){
			tmp2 = '\r';
			is_char = true;
		}
		else if((*CONSTANT) == "'\\v'"){
			tmp2 = '\v';
			is_char = true;
		}
		else if((*CONSTANT) == "'\\t'"){
			tmp2 = '\t';
			is_char = true;
		}
		else if((*CONSTANT) == "'\\f'"){
			tmp2 = '\f';
			is_char = true;
		}
		else if((*CONSTANT) == "'\\b'"){
			tmp2 = '\b';
			is_char = true;
		}
		else if((*CONSTANT) == "'\\a'"){
			tmp2 = '\a';
			is_char = true;
		}
			
		if(is_char){
			temp = (int)tmp2;
			temp_f = (int)tmp2;
			if(contxt.sizeof_){
				if(contxt.SizeOf < 8){
					contxt.SizeOf = 4;
					return;
				}
			}
		}
			

		if( (*CONSTANT).find_first_of("'")==0 /*&& contxt.variable.word_size == 1*/ && !is_char)
		{
			tmp2 = (*CONSTANT)[1];
			temp = (int)tmp2;
			temp_f = (int)tmp2;
			is_char = true;
			if(contxt.sizeof_){
				contxt.SizeOf = 4;
				return;
			}

		}
		else if(!is_char){
			
			temp_f = (std::stod(*CONSTANT));
		 	temp = (std::stod(*CONSTANT));
			if(contxt.sizeof_){
				if((std::floor(std::stod(*CONSTANT))) != std::stod(*CONSTANT)){
					contxt.SizeOf = 8;
					return;
				}
				else{
					if(contxt.SizeOf < 8){
						contxt.SizeOf = 4;
						return;
					}
				}
			}
		}
		
		if(contxt.function && contxt.UnaryOperators.size() != 0 && contxt.variable.DataType != "float")
		{
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
		if(contxt.enum_constant){
			
			contxt.EnumOperands.push_back(temp);	
			
		}
		if(contxt.variable.DataType != "float" && !contxt.enum_constant){			
			contxt.variable.value = temp;
		}
		else if(contxt.variable.DataType == "float" && !contxt.enum_constant){
			contxt.variable.value = temp_f;
		}
		
		if(is_char){		
			file <<  std::endl << "\tli\t$" << contxt.Regs+1 << ", " << temp;
			contxt.regType[contxt.Regs+1]='i';
		}
					

		if(!contxt.reading && contxt.function && !is_char && !contxt.enum_constant) 
		{	
			if(contxt.variable.DataType == "float" || (std::floor(std::stod(*CONSTANT))) != std::stod(*CONSTANT)){
				file <<  std::endl << "\tli.s\t$f" << contxt.Regs+1 << ", " << temp_f; //TODO: CHECK OK
				contxt.regType[contxt.Regs+1]='f';
			}
			else if(contxt.variable.DataType != "float" || (std::floor(std::stod(*CONSTANT))) == std::stod(*CONSTANT)){
				file <<  std::endl << "\tli\t$" << contxt.Regs+1 << ", " << temp;
				contxt.regType[contxt.Regs+1]='i';
			}
			
		}
		if ((!contxt.reading && !contxt.function && !contxt.enum_constant))
		{
			//file << std::endl << "# this is where you start evaluating " << temp ;
			contxt.eval[contxt.Regs+1]=temp;
			contxt.eval_f[contxt.Regs+1] = temp_f;
		}
		
	}
				
	else if( IDENTIFIER != NULL && contxt.reading && contxt.function && !contxt.sizeof_)
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
			if(contxt.function){
				file << std::endl << END << ":";
			}
			
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
			if(contxt.argument_no.size()>=1 && contxt.argument_no[contxt.argument_no.size()-1])
			{
				file << "\n# merge\n";
				int ki=0;
				while(ki<contxt.Variables.size())
				{
					if(contxt.Scopes.size()-contxt.nested_function_calls && contxt.Scopes[contxt.Scopes.size()-contxt.nested_function_calls]==contxt.Variables[ki].scope)
					{ 
						int u=contxt.argument_no[contxt.argument_no.size()-1]-1;
						//file << std::endl << "\tsw\t$" << contxt.Regs+1 << ", " << (contxt.argument_no-1)*4 << "($sp) #";
						if((ki+u)>=0 && contxt.Variables[ki+u].word_size==1) 
						{
							file << std::endl << "\tsw\t$" << contxt.Regs+1 << ", " << u*4 << "($sp) #" << contxt.Variables[ki+u].id << " " << (u)*4;		
							contxt.regType[contxt.Regs+1]='c';
						}				
						else if((ki+u)>=0 && contxt.Variables[ki+u].word_size==4 && contxt.Variables[ki+u].DataType != "float")
						{ 	
							file << std::endl << "\tsw\t$" << contxt.Regs+1 << ", " << (u)*4 << "($sp) #" << contxt.Variables[ki+u].id << " " << (u)*4 << "\n";	
							contxt.regType[contxt.Regs+1]='i';
						}
						else if((ki+u)>=0 && contxt.Variables[ki+u].word_size==2 && contxt.Variables[ki+u].DataType != "float")
						{ 	
							file << std::endl << "\tsw\t$" << contxt.Regs+1 << ", " << u*4 << "($sp) #" << contxt.Variables[ki+u].id << " " << (u)*4 << "\n";	
							contxt.regType[contxt.Regs+1]='i';
						}
						else if((ki+u)>=0 && contxt.Variables[ki+u].word_size==4 && contxt.Variables[ki+u].DataType == "float")
						{
							file << std::endl << "\tswc1\t$f" << contxt.Regs+1 << ", " << (u)*4 << "($sp) #" << contxt.Variables[ki+u].id << " " << u*4 << "\n";	
							contxt.regType[contxt.Regs+1]='f';
						}
						
						if(u<4)
						{
							if((ki+u)>=0 && contxt.regType[u+4] != 'f'/*&& contxt.Variables[ki+contxt.argument_no-1].DataType != "float"*/)
							{
								file << std::endl << "\tmove\t$" << u+4 << ", $" << contxt.Regs+1 << " #load parameter " << u+1; 
							}
							else 
							{
								file << std::endl << "\tmov.s\t$f" << u+4 << ", $f" << contxt.Regs+1 << " #load parameter " << u+1; 
							}
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
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
					file << std::endl << "\tnor\t$" << contxt.Regs+1 << ",$0,$" << contxt.Regs+1 << " #~";
					contxt.regType[contxt.Regs+1]='i';
					}
					else if(UnaryOperatorPtr->render_asm(file,contxt) == '!') {
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
					file << std::endl << "\tsltu\t$" << contxt.Regs+1 << ",$" << contxt.Regs+1 << ",1";
					file << std::endl << "\tandi\t$" << contxt.Regs+1 << ",$" << contxt.Regs+1 << ",0x00FF" << " #!";
					contxt.regType[contxt.Regs+1]='i';
					
					
					}
					else if(UnaryOperatorPtr->render_asm(file,contxt) == '-') {
					typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
					file << std::endl << "\tsub\t$" << contxt.Regs+1 << ",$0,$" << contxt.Regs+1 << "#-"; 
					contxt.regType[contxt.Regs+1]='i';
					}
					else if(UnaryOperatorPtr->render_asm(file,contxt) == '&') {
						if(contxt.Variables[contxt.good_i].scope != "global"){
							if(contxt.Variables[contxt.good_i].DataType != "float"){
								file << std::endl << "\taddiu $" << contxt.Regs+1 << ", $sp, " << contxt.Variables[contxt.good_i].offset << "# memory address " << contxt.Variables[contxt.good_i].id;
							contxt.regType[contxt.Regs+1]='u';
							}
							else{
								file << std::endl << "\taddiu $" << contxt.Regs+1 << ", $sp, " << contxt.Variables[contxt.good_i].offset << "# memory address " << contxt.Variables[contxt.good_i].id;
							contxt.regType[contxt.Regs+1]='u';
							}
						}
						else{
							 file << std::endl << "\tlui\t$" << contxt.Regs+1 << ",%hi" << "(" << contxt.Variables[contxt.good_i].id << ")"; 
							file << std::endl << "\taddiu $" << contxt.Regs+1 << ", %lo(" << contxt.Variables[contxt.good_i].id << ")" << "# memory address " << contxt.Variables[contxt.good_i].id;
							contxt.regType[contxt.Regs+1]='u';

						}
						
					}
					else if(UnaryOperatorPtr->render_asm(file,contxt) == '*')
					{
							
						if(contxt.Variables[contxt.good_i].DataType == "char" && contxt.Variables[contxt.good_i].PointerLevels==0){
							file << std::endl << "\tlb $" << contxt.Regs+1 <<  ", 0($" << contxt.Regs+1 << ") # dereferencing pointer " <<  contxt.Variables[contxt.good_i].id;
							contxt.regType[contxt.Regs+1]='c';
						}
						else if(contxt.Variables[contxt.good_i].DataType == "short" && contxt.Variables[contxt.good_i].PointerLevels==0){
							file << std::endl << "\tlh $" << contxt.Regs+1 <<  ", 0($" << contxt.Regs+1 << ") # dereferencing pointer " <<  contxt.Variables[contxt.good_i].id;
							contxt.regType[contxt.Regs+1]='i';
						}
						else if(contxt.Variables[contxt.good_i].DataType == "int" || contxt.Variables[contxt.good_i].DataType =="unsigned" || contxt.Variables[contxt.good_i].DataType =="signed" || contxt.Variables[contxt.good_i].PointerLevels > 0 ){
							file << std::endl << "\tlw $" << contxt.Regs+1 <<  ", 0($" << contxt.Regs+1 << ") # dereferencing pointer " <<  contxt.Variables[contxt.good_i].id;
							contxt.Variables[contxt.good_i].PointerLevels=contxt.Variables[contxt.good_i].PointerLevels-1;
							contxt.regType[contxt.Regs+1]='i';
						}
					 	
						else if(contxt.Variables[contxt.good_i].DataType == "float" && contxt.Variables[contxt.good_i].PointerLevels==0){
							
							file << std::endl << "\tlwc1 $f" << contxt.Regs+1 <<  ", 0($" << contxt.Regs+1 << ") # dereferencing pointer " <<  contxt.Variables[contxt.good_i].id;
							contxt.regType[contxt.Regs+1]='f';
						}
						
					}

				}
				else
				{
					if(!contxt.enum_constant){
						if(UnaryOperatorPtr->render_asm(file,contxt) == '~'){
							contxt.eval[contxt.Regs+1] = ~contxt.eval[contxt.Regs+1];
						}
						else if(UnaryOperatorPtr->render_asm(file,contxt) == '!') {
							contxt.eval[contxt.Regs+1] = !contxt.eval[contxt.Regs+1];
						}
						else if(UnaryOperatorPtr->render_asm(file,contxt) == '-') {
							contxt.eval[contxt.Regs+1] = -contxt.eval[contxt.Regs+1];
						}
					}
					else if(contxt.enum_constant){
						if(UnaryOperatorPtr->render_asm(file,contxt) == '~'){
							if(contxt.EnumOperands.size()>=2){
							int result =  ~contxt.EnumOperands[contxt.EnumOperands.size()-1];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
						}
						else if(UnaryOperatorPtr->render_asm(file,contxt) == '!') {
							if(contxt.EnumOperands.size()>=2){
							int result =  !contxt.EnumOperands[contxt.EnumOperands.size()-1];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
						}
						else if(UnaryOperatorPtr->render_asm(file,contxt) == '-') {
							if(contxt.EnumOperands.size()>=2){
							int result =  -1 * contxt.EnumOperands[contxt.EnumOperands.size()-1];
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.pop_back();
							contxt.EnumOperands.push_back(result);
						}
						}
					}
				
				}
		}
				
		if( UnaryExpressionPtr != NULL && !contxt.reading && TypeNamePtr == NULL){
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
			else if( *OPERATOR == "sizeof"){
				contxt.AssignmentOperator = "sizeof";
				contxt.sizeof_=true;
				UnaryExpressionPtr->render_asm(file,contxt);
				contxt.sizeof_=false;
				file <<  std::endl << "\tli\t$" << contxt.Regs+1 << ", " << contxt.SizeOf;
				contxt.regType[contxt.Regs+1]='i';
				contxt.SizeOf = 0;
							
			}		
		}
		if( OPERATOR != NULL && !contxt.reading && TypeNamePtr != NULL){
			
				contxt.AssignmentOperator = "sizeof";
				contxt.sizeof_=true;
				TypeNamePtr->render_asm(file,contxt);
				contxt.sizeof_=false;
				file <<  std::endl << "\tli\t$" << contxt.Regs+1 << ", " << contxt.SizeOf;
				contxt.regType[contxt.Regs+1]='i';
				contxt.SizeOf = 0;			
					
		}
}

inline char UnaryOperator::render_asm(std::ofstream& file, Context& contxt) {
		char temp = (*UNARYOPERATOR)[0];
		return temp;
}	
		



inline void PrimaryExpression::AssignmentOperator(std::ofstream& file, int good_index, Context& contxt, int f) {
if(!contxt.sizeof_){
	typePromotion(contxt.Regs,contxt.Regs+1,file,contxt);
	contxt.Regs++;
	if(f==1){

		load_locals(contxt, file, good_index);
	}
	else if(f==2)
	{
		load_globals(contxt, file, good_index);
	}
	if(contxt.AssignmentOperator == "*="){
		if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u'){
			file << std::endl << "\tmultu\t$" << contxt.Regs << ",$" << contxt.Regs+1;
			file << std::endl << "\tmflo\t$" << contxt.Regs;
			contxt.regType[contxt.Regs]='u';
			contxt.regType[contxt.Regs+1]='i';
		}
		else if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
			file << std::endl << "\tmul.s\t$f" << contxt.Regs << ",$f" << contxt.Regs << ",$f" << contxt.Regs+1;
			contxt.regType[contxt.Regs]='f';
			contxt.regType[contxt.Regs+1]='f';
		}
		else {
			file << std::endl << "\tmult\t$" << contxt.Regs << ",$" << contxt.Regs+1;
			file << std::endl << "\tmflo\t$" << contxt.Regs;
			contxt.regType[contxt.Regs]='i';
			contxt.regType[contxt.Regs+1]='i';
		}
		
	}
	else if(contxt.AssignmentOperator == "/="){
			if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u'){
				file << std::endl << "\tdivu\t$" << contxt.Regs+1 << ",$" << contxt.Regs;
				file << std::endl << "\tmflo\t$"<< contxt.Regs;
				contxt.regType[contxt.Regs]='u';
				contxt.regType[contxt.Regs+1]='i';
						}
			else if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
				file << std::endl << "\tdiv.s\t$f" << contxt.Regs << ",$f" << contxt.Regs+1 << ",$f" << contxt.Regs;
				contxt.regType[contxt.Regs]='f';
				contxt.regType[contxt.Regs+1]='f';
			}					
			else{
				file << std::endl << "\tdiv\t$" << contxt.Regs+1 << ",$" << contxt.Regs;
				file << std::endl << "\tmflo\t$"<< contxt.Regs;
				contxt.regType[contxt.Regs]='i';
				contxt.regType[contxt.Regs+1]='i';
			}
	}
	else if(contxt.AssignmentOperator == "%="){
			if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u'){
				file << std::endl << "\tdivu\t$" << contxt.Regs+1 << ",$" << contxt.Regs;
				file << std::endl << "\tmfhi\t$"<< contxt.Regs;
				contxt.regType[contxt.Regs]='u';
				contxt.regType[contxt.Regs+1]='i';
			}
			else{
				file << std::endl << "\tdiv\t$" << contxt.Regs+1 << ",$" << contxt.Regs;
				file << std::endl << "\tmfhi\t$"<< contxt.Regs;
				contxt.regType[contxt.Regs]='i';
				contxt.regType[contxt.Regs+1]='i';
			}
	}
	else if(contxt.AssignmentOperator == "+="){
			if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u'){
				file << std::endl << "\taddu\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
				contxt.regType[contxt.Regs]='u';
				contxt.regType[contxt.Regs+1]='u';
			}
			else if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
				file << std::endl << "\tadd.s\t$f" << contxt.Regs << ",$f" << contxt.Regs << ",$f" << contxt.Regs+1;
				contxt.regType[contxt.Regs]='f';
				contxt.regType[contxt.Regs+1]='f';
			}	
			else{
				file << std::endl << "\tadd\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
				contxt.regType[contxt.Regs]='i';
				contxt.regType[contxt.Regs+1]='i';
			}
	}
	else if(contxt.AssignmentOperator == "-="){
			if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u'){
				file << std::endl << "\tsubu\t$" << contxt.Regs <<", $" << contxt.Regs+1 << ", $" << contxt.Regs;
				contxt.regType[contxt.Regs]='u';
				contxt.regType[contxt.Regs+1]='i';
			}
			else if(contxt.regType[contxt.Regs]=='f' || contxt.regType[contxt.Regs+1]=='f'){
				file << std::endl << "\tsub.s\t$f" << contxt.Regs << ",$f" << contxt.Regs+1 << ",$f" << contxt.Regs;
				contxt.regType[contxt.Regs]='f';
				contxt.regType[contxt.Regs+1]='f';
			}	
			else{
				file << std::endl << "\tsub\t$" << contxt.Regs <<", $" << contxt.Regs+1 << ", $" << contxt.Regs;
				contxt.regType[contxt.Regs]='i';
				contxt.regType[contxt.Regs+1]='i';
			}
	}
	else if(contxt.AssignmentOperator == "<<="){
			file << std::endl << "\tsllv\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
			contxt.regType[contxt.Regs]='i';
	}
	else if(contxt.AssignmentOperator == ">>="){
			if(contxt.regType[contxt.Regs]=='u' || contxt.regType[contxt.Regs+1]=='u'){
				file << std::endl << "\tsrlv\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
				contxt.regType[contxt.Regs]='u';
				
			}
			else{
				file << std::endl << "\tsrav\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
				contxt.regType[contxt.Regs]='i';
				
			}
	}
	else if(contxt.AssignmentOperator == "&="){
			file << std::endl << "\tand\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
			contxt.regType[contxt.Regs]='i';
			contxt.regType[contxt.Regs+1]='i';
	}
	else if(contxt.AssignmentOperator == "^="){
			file << std::endl << "\txor\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
			contxt.regType[contxt.Regs]='i';
			contxt.regType[contxt.Regs+1]='i';
	}
	else if(contxt.AssignmentOperator == "|="){
			file << std::endl << "\tor\t$" << contxt.Regs <<", $" << contxt.Regs << ", $" << contxt.Regs + 1;
			contxt.regType[contxt.Regs]='i';
			contxt.regType[contxt.Regs+1]='i';
	}
	else if(contxt.AssignmentOperator == "++"){
			if(contxt.regType[contxt.Regs+1] == 'f' || contxt.regType[contxt.Regs]=='f'  ){
				file << std::endl << "\tli.s\t$f" << contxt.Regs << ",1";
				contxt.regType[contxt.Regs]='f';
				file << std::endl << "\tadd.s\t$f" << contxt.Regs << ",$f" << contxt.Regs << ",$f" << contxt.Regs+1;
				contxt.regType[contxt.Regs+1]='f';
			}
			else{	
				file << std::endl << "\taddiu\t$" << contxt.Regs <<", $" << contxt.Regs+1 << ",1";
				contxt.regType[contxt.Regs]='i';
				contxt.regType[contxt.Regs+1]='i';
			}
	}
	else if(contxt.AssignmentOperator == "--"){
			if(contxt.regType[contxt.Regs+1] == 'f' || contxt.regType[contxt.Regs]=='f'  ){
				file << std::endl << "\tli.s\t$f" << contxt.Regs << ",1";
				contxt.regType[contxt.Regs+1]='f';
				file << std::endl << "\tsub.s\t$f" << contxt.Regs << ",$f" << contxt.Regs+1 << ",$f" << contxt.Regs;
				contxt.regType[contxt.Regs]='f';
			}
			else{	
				file << std::endl << "\taddiu\t$" << contxt.Regs <<", $" << contxt.Regs+1 << ",-1";
				contxt.regType[contxt.Regs]='i';
				contxt.regType[contxt.Regs+1]='i';
			}						
	}
			contxt.AssignmentOperator = "df";
			contxt.Regs--;
}
}
