# Started CodeGen:
	ast.ast_node.hpp , inside the TranslationUnit and traversing through function definition
problems :
1) we might run out of registers
//2) logical_or and logical_and left to do 
//3) short circuit : (1 || x++ || x++) 
//4) int , float global var = 1+2*3^2;      
//6) unary operators globals not working // !,~,- 'a'
7) switch case

load parameters and store arguments;
8) function declarations (they should be skipped)
9) global declarations and function definition (global functions don't get updated in function calls)
10) loading arguments for function calls where the function was not defined(allocate 4 words byy default, use argument no rather then param_offset)
11) f(g(9)); f,g two functions


int totalStackArea = 12+104;
int max_offset = 16;
//in function def:
for(int i=4; i<=7; i++) //shift by 4 all the parameters
{
	file << std::endl << "\tsw $" << i <<  ", " << contxt.totalStackArea + 4*(i-3) << "($sp)"; 
}
if(contxt.argument_flag)
{
	file << std::endl << "\tsw $" << contxt.Regs+1 << ", " << (contxt.argument_no-1)*4 << "($sp) #argument no: " << contxt.argument_no;
}

12)set values to 0
a[a[1]];
save restore $25
set to 0 after each op