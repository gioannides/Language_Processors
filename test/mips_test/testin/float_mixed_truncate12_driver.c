int operations(float a, float b);

int main(){
	float a = 40.456;
	float b = 0.345;

	int result = ((a&&b)||++b);



	if(result == operations(a,b)){
		return 0;
	}
	return 75;
}



