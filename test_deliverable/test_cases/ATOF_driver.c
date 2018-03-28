#include <stdlib.h>
#include <string.h>
#include <stdio.h>


double ATOF(const char* str);

int main() {

	double result = 3.14;
	
	if(ATOF("3.14") == result){
		return 0;
	}
	
	return 1;	

}
