#include "../include/ast.hpp"




int main(int argc, char* argv[]){

    	if (argc == 5){

		std::string argument = argv[1];

		if( argument == "--translate" ) {

			argument = argv[3];

			if( argument == "-o" ) {
		 		const TranslationUnit* ast = parseAST(argv[2],argv[4]);
				std::string file_name = argv[4];
				char Last_letter = file_name[file_name.size()-1];
				if( Last_letter == 'y' ){
					ast->print_py(file_name);
					return 0;
				}

				else {
					return 0;

				}
				
			}
		}

		else if( argument == "-S" ) {

			argument = argv[3];

			if( argument == "-o" ) {
		 		const TranslationUnit* ast = parseAST(argv[2],argv[4]);
				std::string file_name = argv[4];
				char Last_letter = file_name[file_name.size()-1];
				if( Last_letter == 's' ){
					ast->render_asm(file_name);
					return 0;
				}
			}
		}

	}	
	return -1;
  
}
