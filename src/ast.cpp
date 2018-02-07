#include "ast.hpp"
#include <string>

#include <iostream>
int main()
{
    const Statement *ast;

    ast->print(std::cout);
    std::cout<<std::endl;

    return 0;
}