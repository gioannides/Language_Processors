# Started CodeGen:
	ast.ast_node.hpp , inside the TranslationUnit and traversing through function definition
problems :
1) we might run out of registers
2) logical_or and logical_and left to do 
3) short circuit : (1 || x++ || x++)
4) shadowing : every {} is a new scope
5) for(int i);