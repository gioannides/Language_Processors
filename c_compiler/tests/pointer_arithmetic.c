int main(){

	char y = 'b';
	char* x = &y;
	*(x) = y;
	return *(x);
}
