#include "ast_node.hpp"

static bool IterStmntORSelctStmnt = false;	//Is needed for the same reason as count;
static int count=0;				//Is needed in order to print statements within loops/if/else that have no curcly braces

inline void MultiplicativeExpression::print_py(std::ofstream& file) {

			if(OPERATOR==NULL){
				CaStExpression->print_py(file);
			}
			else{ 
				MultiplicativeExpressionPtr->print_py(file);
				file <<*OPERATOR;
				CaStExpression->print_py(file);
				
			}

		}



inline void AdditiveExpression::print_py(std::ofstream& file) {

			if(OPERATOR==NULL){
				MultiplicativeExpressioN->print_py(file);
			}
			else{ 
				AdditiveExpressionPtr->print_py(file);
				file << *OPERATOR;
				MultiplicativeExpressioN->print_py(file);
				
			}

		}




inline void ShiftExpression::print_py(std::ofstream& file) {

			if(OPERATOR==NULL){
				AdditiVeExpression->print_py(file);
			}
			else{ 
				ShiftExpressionPtr->print_py(file);
				file << *OPERATOR;
				AdditiVeExpression->print_py(file);
				
			}

		}




inline void RelationalExpression::print_py(std::ofstream& file) {

			if(OPERATOR==NULL){
				SHiftExpression->print_py(file);
			}
			else{ 
				RelationalExpressionPtr->print_py(file);
				file << *OPERATOR;
				SHiftExpression->print_py(file);
				
			}


		}



inline void EqualityExpression::print_py(std::ofstream& file) {

			if(OPERATOR==NULL){
				RElationalExpression->print_py(file);
			}
			else{ 
				EqualityExpressionPtr->print_py(file);
				file <<*OPERATOR;
				RElationalExpression->print_py(file);
				
			}

		}


inline void AndExpression::print_py(std::ofstream& file) {

			if(BIT_AND==NULL){
				EqualitYExpression->print_py(file);
			}
			else{ 
				AndExpressionPtr->print_py(file);
				file << " " << "&" << " ";
				EqualitYExpression->print_py(file);
				
			}

		}



inline void ExclusiveOrExpression::print_py(std::ofstream& file) {

			if(EXCL_OR==NULL){
				ANDexpression->print_py(file);
			}
			else{ 
				ExclusiveOrExpressionPtr->print_py(file);
				file << " " << "^" << " ";
				ANDexpression->print_py(file);
				
			}

		}
		


inline void InclusiveOrExpression::print_py(std::ofstream& file) {

			if(INC_OR==NULL){
				EXclusiveOrExpression->print_py(file);
			}
			else{ 
				InclusiveOrExpressionPtr->print_py(file);
				file << " " << "|" << " ";
				EXclusiveOrExpression->print_py(file);
				
			}

		}



inline void LogicalAndExpression::print_py(std::ofstream& file) {
			if(AND_OP==NULL){
				INclusiveOrExpression->print_py(file);
			}
			else{ 
				LogicalAndExpressionPtr->print_py(file);
				file << " and ";
				INclusiveOrExpression->print_py(file);
				
			}

		}


inline void LogicalOrExpression::print_py(std::ofstream& file) {
			if(OR_OP==NULL){
				LogicalAndExpressionPtr->print_py(file);
			}
			else{ 
				LogicalOrExpressionPtr->print_py(file);
				file << " or ";
				LogicalAndExpressionPtr->print_py(file);
				
			}
		}


inline void IdentifierList::print_py(std::ofstream& file) {

			if( IdentifierListPtr != NULL) {
				IdentifierListPtr->print_py(file);
				file << ",";
			}

			file << *IDENTIFIER;					
		
		}



inline void ParameterList::print_py(std::ofstream& file) {

			if( ParameterListPtr != NULL) {
				ParameterListPtr->print_py(file);
				file << ",";
			}

			ParameterDeclarationPtr->print_py(file);						
		
		}




inline void ParameterTypeList::print_py(std::ofstream& file) {

			if( ParameterListPtr != NULL) {
				ParameterListPtr->print_py(file);
			}			
		
		}


inline void DirectDeclarator::print_py(std::ofstream& file, bool initialized, bool function) {


			if( DirectDeclaratorPtr != NULL) {

				DirectDeclaratorPtr->print_py(file,initialized,function);
			}

			if(!function) {							//This handles initializing variables, and identifying the global ones by the level of indentation of
											// counter_py
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
			
			else{								//This is handling functions and printing the main part of a standard python program

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



inline void Declarator::print_py(std::ofstream& file, bool initialized, bool function) {

			if( DeclaratorPtr != NULL) {
				DeclaratorPtr->print_py(file,initialized,function);
			}
			DirectDecLarator->print_py(file,initialized,function);
		}



inline void Initializer::print_py(std::ofstream& file) {
	
			if(InitializerListPtr!=NULL){
				InitializerListPtr->print_py(file);
			}
			AssignmentExpressionPtr->print_py(file);

		}




inline void InitDeclarator::print_py(std::ofstream& file) {
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





inline void InitDeclaratorList::print_py(std::ofstream& file) {
			if( InitDeclaratorListPtr != NULL){
				InitDeclaratorListPtr->print_py(file);
			}
			InitDecLarator->print_py(file);
		}




inline void StorageClassSpecifiers::print_py(std::ofstream& file) {
			file << *TYPES << " ";
		}


inline void Declaration::print_py(std::ofstream& file) {
			if(DeclList != NULL){
				DeclList->print_py(file);
			}
		}



inline void JumpStatement::print_py(std::ofstream& file) {
			
			for( int i(0); i<counter_py; i++) { file << "\t"; }
			file << *JUMP_TYPE << " ";
			if(AssignmentExpressionPtr != NULL) {
				AssignmentExpressionPtr->print_py(file);
			}

		}





inline std::string* SelectionStatement::get_info() {				//can be used for else if = elif
			return SELECTIVE_IF;
		}		 
		




inline void ExpressionStatement::print_py(std::ofstream& file) {

			AssignmentExpressionPtr->print_py(file);
			file << std::endl;
		}




inline void DeclarationList::print_py(std::ofstream& file) {

				if( DeclarationListPtr != NULL) {
					
					DeclarationListPtr->print_py(file);

				}
				function = false;
				DeclarationPtr->print_py(file);

			}



inline std::string* Statement::get_info() {
			return SelectionStatementPtr->get_info();
		}		 


inline void StatementList::print_py(std::ofstream& file) {

			if( StatementListPtr != NULL) {
				StatementListPtr->print_py(file);

			}
				StatementPtr->print_py(file);

				

		}






inline void FunctionDefinition::print_py(std::ofstream& file) {
		
			if( DeclarationSpecifiersPtr != NULL ) {
										//do-nothing because it is not significant in our case (only int/void)
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

			if( DeclarationListPtr != NULL ) {   			//( functions having parameters )
				ParametrizedFunction = true;
				DeclarationListPtr->print_py(file);
			}

			if( CompoundStatementPtr != NULL ) {
			
				CompoundStatementPtr->print_py(file,false,true);
			}
			
				
		}






inline void ExternalDeclaration::print_py(std::ofstream& file) {
		
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





inline void TranslationUnit::print_py(std::string file_name) const {
			
				
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








inline void IterationStatement::print_py(std::ofstream& file) {

			IterStmntORSelctStmnt = true;
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

			IterStmntORSelctStmnt = true;
			if( SELECTIVE_IF != NULL && AssignmentExpressionPtr != NULL && StatementPtr != NULL && StatementPtr2 == NULL && SELECTIVE_ELSE == NULL && SELECTIVE_SWITCH == NULL) {
				
				

				
					
				
				for( int i(0); i<counter_py; i++) { file << "\t"; } 
				if(elseif == false){
					file << "if(";
					AssignmentExpressionPtr->print_py(file) ;
					file << "):" << std::endl;
				}
				/*else{
					file <<"elif(";
				       	AssignmentExpressionPtr->print_py(file) ;
					file << "):" << std::endl;
				}*/
				IterStmntORSelctStmnt = true;
				StatementPtr->print_py(file);
				file << std:: endl;
			
			}

			else if ( SELECTIVE_IF != NULL && AssignmentExpressionPtr != NULL && StatementPtr != NULL && StatementPtr2 != NULL && SELECTIVE_ELSE != NULL && SELECTIVE_SWITCH == NULL)			 {
				elif = elseif;
				
				for( int i(0); i<counter_py && !elseif; i++) { file << "\t"; }				
				if(elseif == false){

					file << "if(";
					AssignmentExpressionPtr->print_py(file) ;
					file << "):" << std::endl;
					file << std::endl;
					IterStmntORSelctStmnt = true;
					StatementPtr->print_py(file,true);				
					file << std::endl;	
				}
				else{
					file <<"elif(";
				       	AssignmentExpressionPtr->print_py(file) ;
					file << "):" << std::endl;
					file << std::endl;
					IterStmntORSelctStmnt = true;
					StatementPtr->print_py(file,true);				
					file << std::endl;	
				}			
				for( int i(0); i<counter_py; i++) { file << "\t"; }
				if(StatementPtr2->SelectionStatementPtr != NULL ) {
					//IterStmntORSelctStmnt = true;
					StatementPtr2->print_py(file,true);				
					file << std::endl;	
				}
				else{
					file << "else:";
					file << std::endl;
					IterStmntORSelctStmnt = true;
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
				if(IterStmntORSelctStmnt ) { counter_py++; IterStmntORSelctStmnt=false; count++;}
				ExpressionStatementPtr->print_py(file);
				if(!IterStmntORSelctStmnt ) { counter_py-=count; count=0;}
			}

			else if( SelectionStatementPtr != NULL ) {
				if(IterStmntORSelctStmnt ) { counter_py++;IterStmntORSelctStmnt=false; count++;}
				SelectionStatementPtr->print_py(file,elseif);
				if(!IterStmntORSelctStmnt ) { counter_py-=count; count=0;}

			}

			else if( IterationStatementPtr != NULL ) {
				if(IterStmntORSelctStmnt ) { counter_py++; IterStmntORSelctStmnt=false; count++;}
				IterationStatementPtr->print_py(file);
				if(!IterStmntORSelctStmnt ) { counter_py-=count; count=0;}

			}

			else if( JumpStatementPtr != NULL ) {
				if(IterStmntORSelctStmnt ) { counter_py++; IterStmntORSelctStmnt=false; count++;}
				JumpStatementPtr->print_py(file);
				if(!IterStmntORSelctStmnt ) { counter_py-=count; count=0;}

			}

		}				 



inline void CompoundStatement::print_py(std::ofstream& file, bool initialized, bool function) {
			
			IterStmntORSelctStmnt = false;
	
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
			if(!function && !is_while && !elif && (parentheses==0) && !IterStmntORSelctStmnt){
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

