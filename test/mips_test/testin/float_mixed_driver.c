float EQUAL(float a, float b, float x);

int main(){
	float a = 40.456;
	float b = 2.345;
	float b_temp = b;
	float x = 3;
	float x_temp = x;
	float a_temp = a;
	float result = a_temp+=b_temp+=x_temp;
	if(result == EQUAL(a,b,x)){
		return 0;
	}
	return 75;
}
