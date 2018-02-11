#include <string>
#include <iostream>


#include <memory>
#include "printList.hpp"




static void PrintAList(listPtr hdList, std::string& test){
	if(hdList == NULL){
		return ;
	}

	if(hdList->next==NULL) {
		test += hdList->data_type + " " + hdList->identifier;
		PrintAList(hdList->next,test);
	}
		
	else{
		test += hdList->data_type + ", " + hdList->identifier;
		PrintAList(hdList->next,test);
	}
}
