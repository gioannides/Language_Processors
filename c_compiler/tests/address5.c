int main(){

	int y = 90;
	int* x;
	int* u;
	int** c;
	x = &y;
	u = x;
	c = &u;
	return *x + *u + **c;
}
