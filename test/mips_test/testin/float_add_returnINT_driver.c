int add(float a, float b);

int main(){
	float a = 4.456;
	float b = 3.345;
	int result = a+b;
	if(result == add(a,b)){
		return 0;
	}
	return 75;
}
