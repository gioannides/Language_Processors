float EQUAL(float a, float b, int x);

int main(){
	float a = 40.456;
	float b = 2.345;
	unsigned x = 3;
	float result = a+=x+=b;
	if(result == EQUAL(a,b,x)){
		return 30;
	}
	return 75;
}