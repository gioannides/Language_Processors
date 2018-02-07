#include "ast.hpp"
#include <iostream>
#include <string>

int main()
{
    const Statement *ast=parseAST();

    ast->print(std::cout);
    std::cout<<std::endl;

    return 0;
}