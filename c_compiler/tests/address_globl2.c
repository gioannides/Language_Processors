int y = 8;

int main(){

	
	int* x = &y;
	int** z = &x;
	int*** h = &z;

	return ***(h);
}
