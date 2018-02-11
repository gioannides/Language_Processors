#ifndef PRINT_A_LIST_HPP
#define PRINT_A_LIST_HPP


#include <string>
#include <iostream>


struct list{
	std::string data_type;
        std::string identifier;
	list* next;
};

typedef list* listPtr;


static std::string PrintAList(listPtr hdList, std::string test){
	if(hdList == NULL){
		return test;
	}

	if(hdList->next == NULL) {
		test += hdList->data_type + " " + hdList->identifier;
		return test;
	}
		
	else{
		test += hdList->data_type + ", " + hdList->identifier;
		PrintAList(hdList->next,test);
	}
}


#endif
