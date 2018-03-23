float add(float a, float b);

int main(){
	float a = 4.456;
	float b = 3.345;
	float result = a+b;
	if(result == add(a,b)){
		return 30;
	}
	return 75;
}
