Andrei:

I havent broken anything, the thing compiles but i get segmenatio fault if i try to translate anything other than what we tried in the morning. This means I just messed up somewhere and I am dereferencing a NULL pointer in the print_py() functions.

When you see the ast_node.hpp, you will notice that there are some 'inline' definitions of functions. This is the equivalent of having a separate .cpp and .hpp file for function method declarations but all done in one file. I searched it on the internet. If i had not declared those that way I would had to make a .cpp file which i dont know how to link to the .hpp in the makefile. They are needed bcause some classes need to make use of functions which are defined in classes that are declared after those. Eg. class A wants to use a method from class B, and class A was defined in line 6, and class B was defined in line 34. Using inline this is possible.

I have made most of the AST structure. I havent touched loops and statements. I still need help on some stuff on whether we need to declare evrything as pointer or have a vector of pointers to statments. Right now I have pointers everywhere, no vectors. I am not sure how to use them. I know its a really big file but you need to read it and understand otherwise i'll have to finish the whole thing by myself. Do it now that there still is time.
