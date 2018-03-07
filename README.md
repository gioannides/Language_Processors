# Started CodeGen:
	ast.ast_node.hpp , inside the TranslationUnit and traversing through function definition
problems :
1) global: int x = const op const op ... 
2) word.size = 1 for chars // need lb, sb
3) int x, y=5; both are 0 instead of 0 and 5
4) we might run out of registers
5) test x=y=i=const
6) logical_or and logical_and left to do 