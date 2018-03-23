float operations(float a, float b, float x);

int main(){
	float a = 40.456;
	float b = 2.345;
	float x = 3;
	float result = a+=x;
	if(result == operations(a,b,x)){
		return 30;
	}
	return 75;
}
