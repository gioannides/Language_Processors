double atof(const char* str);

double ATOF(){

	char str[4] = { '3','.','1','4','\000'};
	return atof(str);
}
