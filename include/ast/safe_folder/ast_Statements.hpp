 
#pragma once

//#ifndef STATEMENTS_HPP
//#define STATEMENTS_HPP

//#include "ast_node.hpp"
//#include "ast_Expressions.hpp"
//#include "class_forward_declarations.hpp"
#include <string>
#include <iostream>
#include <memory>
#include <fstream>
#include <vector>
#include <cmath>



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

			

		}
							

};



class ExpressionStatement : public Node {

	private:
		AssignmentExpression* AssignmentExpressionPtr;
		
	public:
		ExpressionStatement(AssignmentExpression* AssignmentExpressionPtr) : AssignmentExpressionPtr(AssignmentExpressionPtr) {}

		~ExpressionStatement() {}

		void print_py(std::ofstream& file) ;

		void render_asm(std::ofstream& file, Context& contxt);

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

		void render_asm(std::ofstream& file,Context& contxt) ;
};



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

inline void CompoundStatement::render_asm(std::ofstream& file,Context& contxt) {

			if(DeclarationListPtr != NULL && StatementListPtr == NULL) {

				DeclarationListPtr->render_asm(file,contxt);
			}

			if(StatementListPtr != NULL && DeclarationListPtr == NULL ) {

				StatementListPtr->render_asm(file,contxt);
			}

			if(StatementListPtr != NULL && DeclarationListPtr != NULL ) {
				
				DeclarationListPtr->render_asm(file,contxt);
				if(!contxt.reading){
					StatementListPtr->render_asm(file,contxt);
				}
			}
			
		}


inline void ExpressionStatement::render_asm(std::ofstream& file, Context& contxt){
			AssignmentExpressionPtr->render_asm(file,contxt);
		}

//#endif
