#ifndef ast_node_hpp
#define ast_node_hpp

#include <string>
#include <iostream>


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
		char* SPECIFIER;
		char* IDENTIFIER;

	public:	

		GlobalDeclaration( char* _SPECIFIER, char* _IDENTIFIER) : SPECIFIER(_SPECIFIER), IDENTIFIER(_IDENTIFIER) {}

		GlobalDeclaration( char* _SPECIFIER) : SPECIFIER(_SPECIFIER) {}


		~GlobalDeclaration() {}

	
		virtual void print(std::ostream &dst)  const {

        		dst << SPECIFIER << " " << IDENTIFIER  ;
		}


};

class StorageSpecifierDecl : public GlobalDeclaration  {


	public:
		StorageSpecifierDecl ( char* _SPECIFIER, char* _IDENTIFIER ) : GlobalDeclaration(_SPECIFIER,_IDENTIFIER) {
		
			
		}

		StorageSpecifierDecl ( char* _SPECIFIER ) : GlobalDeclaration(_SPECIFIER) {
		
			
		}


		~StorageSpecifierDecl() {}

};


class TypeSpecifierDecl : public GlobalDeclaration {

	public:
		TypeSpecifierDecl ( char* _SPECIFIER, char* _IDENTIFIER ) : GlobalDeclaration(_SPECIFIER,_IDENTIFIER) {

		}

		TypeSpecifierDecl ( char* _SPECIFIER) : GlobalDeclaration(_SPECIFIER) {

		}

		~TypeSpecifierDecl() {}
};



#endif
