#include <string>
#include <iostream>


#include <memory>


struct list{
	std::string data_type;
        std::string identifier;
	list* next;
};

typedef list* listPtr;


void PrintAList(listPtr hdList, std::string& test){
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
