char y = 8;

int main(){

	
	char* x = &y;
	char** z = &x;
	char*** h = &z;

	return ***(h);
}
