# Started CodeGen:
	ast.ast_node.hpp , inside the TranslationUnit and traversing through function definition
problems :
1) we might run out of registers
2) for enum and globals test "%"
3) mixed2 -> IS OK. WE FORGOT FUNCTION DECLARATIONS
4) pointers -> Evaluate LHS and then store the RHS into the LHS
5) arrays
6) weird_recursion -> The problem is on line 37 and 46 of the .s file, when changed to lw -> no SEG FAULT
7) Im still testing floats

