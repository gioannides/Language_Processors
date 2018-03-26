float subtract(float a, float b, int x);

int main(){
	float a = 40.456;
	float b = 2.345;
	int x = 3;
	float result = a-b-x;
	if(result == subtract(a,b,x)){
		return 0;
	}
	return 75;
}
