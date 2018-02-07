#ifndef AST_HPP
#define AST_HPP


#include <iostream>
#include <string>

class Statement
{
public:
	int val;
    std::string id;
	//Expression* left;
	//Expression* right;
    Statement(std::string* idi): id(*idi)
    {}
    ~Statement()
    {}

    //! Tell and expression to print itself to the given stream
    void print(std::ostream &dst)
    {
        dst << "int " << id << ";";
        std::cout << dst; 
    }

    //! Evaluate the tree using the given mapping of variables to numbers
};

#endif