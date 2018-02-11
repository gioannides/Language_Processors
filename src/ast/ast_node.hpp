#ifndef ast_node_hpp
#define ast_node_hpp

#include <string>
#include <iostream>

#include "printList.hpp"
#include <memory>

class Node;



typedef Node* NodePtr;

class Node{

	public:

    	//! Tell and expression to print itself to the given stream
    		virtual void print(std::ostream &dst) const=0;

		~Node() {}
};


class GlobalDeclaration : public Node {

	private:
		std::string* SPECIFIER=0;
		std::string* IDENTIFIER=0;

	public:	

		GlobalDeclaration( std::string* _SPECIFIER, std::string* _IDENTIFIER) : SPECIFIER(_SPECIFIER), IDENTIFIER(_IDENTIFIER) {}

		GlobalDeclaration( std::string* _SPECIFIER) : SPECIFIER(_SPECIFIER) {}


		~GlobalDeclaration() {}

	
		virtual void print(std::ostream &dst)  const {

        		dst << *SPECIFIER << " " << *IDENTIFIER << ";" ;
		}


};

class StorageSpecifierDecl : public GlobalDeclaration  {


	public:
		StorageSpecifierDecl ( std::string* _SPECIFIER, std::string* _IDENTIFIER ) : GlobalDeclaration(_SPECIFIER,_IDENTIFIER) {
		
			
		}

		StorageSpecifierDecl ( std::string* _SPECIFIER ) : GlobalDeclaration(_SPECIFIER) {
		
			
		}


		~StorageSpecifierDecl() {}

};


class TypeSpecifierDecl : public GlobalDeclaration {

	public:
		TypeSpecifierDecl ( std::string* _SPECIFIER, std::string* _IDENTIFIER ) : GlobalDeclaration(_SPECIFIER,_IDENTIFIER) {

		}

		TypeSpecifierDecl ( std::string* _SPECIFIER) : GlobalDeclaration(_SPECIFIER) {

		}

		~TypeSpecifierDecl() {}
};



/*									FUNCTIONS					*/

class Function : public Node {

	private:
		std::string* SPECIFIER=NULL;
		std::string* IDENTIFIER=NULL;
		listPtr PARAMETERS = NULL;
		std::string out;

	public:

	/* FUNCTION DECL*/
	Function( std::string* _SPECIFIER, std::string* _IDENTIFIER, listPtr _PARAMETERS) :  SPECIFIER(_SPECIFIER) , IDENTIFIER(_IDENTIFIER), PARAMETERS(_PARAMETERS) {}

	/* FUNCTION DEF */
	/*NOT IMPLEMENTED YET */

	virtual void print(std::ostream &dst)  const {

			if(PARAMETERS != NULL && SPECIFIER != NULL ) {
		
				
				std::string test = PrintAList(PARAMETERS,out);
        			dst << *SPECIFIER << " " << *IDENTIFIER << "(" << test << ");" ;
		
			}
		
			else if (SPECIFIER != NULL && PARAMETERS == NULL) {

				dst << *SPECIFIER << " " << *IDENTIFIER << "();" ;

			}

			else if ( SPECIFIER == NULL && PARAMETERS == NULL){
			
				dst << *IDENTIFIER << "();" ;
				
			}

			else if ( SPECIFIER == NULL && PARAMETERS != NULL){

				std::string test = PrintAList(PARAMETERS,out);			
				dst << *IDENTIFIER << "(" << test << ");" ;
				
			}
	}
						


};


class StorageSpecFunctDeclCall : public Function {

	private:
		listPtr PARAMETERS=NULL;
		std::string* SPECIFIER=NULL;

	public:
		StorageSpecFunctDeclCall( std::string* _SPECIFIER, std::string* _IDENTIFIER, listPtr _PARAMETERS) : Function( _SPECIFIER,  _IDENTIFIER, _PARAMETERS) {}


		~StorageSpecFunctDeclCall() {}

};


class TypeSpecFunctDeclCall : public Function {

	private:
		listPtr PARAMETERS=NULL;
		std::string* SPECIFIER=NULL;

	public:
		TypeSpecFunctDeclCall( std::string* _SPECIFIER, std::string* _IDENTIFIER, listPtr _PARAMETERS) : Function( _SPECIFIER,  _IDENTIFIER, _PARAMETERS) {}


		~TypeSpecFunctDeclCall() {}

};
#endif
