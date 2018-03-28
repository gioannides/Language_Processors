int main(){

	int y = 3;
	int* x = &y;
	int** z = &x;
	int*** h = &z;

	return ***(h);
}
