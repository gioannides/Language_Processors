int main(){

	float y = 3;
	float* x = &y;
	float** z = &x;
	float*** h = &z;

	return ***(h);
}
