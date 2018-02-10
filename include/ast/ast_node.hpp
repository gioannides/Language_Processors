#ifndef ast_node_hpp
#define ast_node_hpp

#include <string>
#include <iostream>


#include <memory>

class Node;


typedef const Node *ExpressionPtr;

class Node
{

private:
	std::string type,var;

public:
    Node(std::string typ, std::string id) : type(typ), var(id) {}
   

    //! Tell and expression to print itself to the given stream
    void print(std::ostream &dst) const {

		dst << type << " " << var << ";";

    //! Evaluate the tree using the given mapping of variables to numbers
	}
};


#endif
