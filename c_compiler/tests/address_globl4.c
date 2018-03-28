float y = 8;

int main(){

	
	float* x = &y;
	float** z = &x;
	float*** h = &z;

	return ***(h);
}
