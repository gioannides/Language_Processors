#include "ast.hpp"

int main(){
    const Node *ast=parseAST();

    ast->print(std::cout);

    return 0;
}
