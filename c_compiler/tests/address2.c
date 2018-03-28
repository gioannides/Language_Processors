int main(){

	char y = 3;
	char* x = &y;
	char** z = &x;
	char*** h = &z;

	return ***(h);
}
