#ifndef AST_HPP
#define AST_HPP
#include <string>
#include <iostream>

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
    void print(std::ostream &dst) const
    {
        dst << "int " << id << ";";
        std::cout << dst; 
    }

    //! Evaluate the tree using the given mapping of variables to numbers
    
    

};

//extern const Statement *ast=parseAST();

#endif