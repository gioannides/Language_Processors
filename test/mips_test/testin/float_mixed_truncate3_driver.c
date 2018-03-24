int operations(float a, float b, float c);

int main(){
	float a = 40.456;
	float b = 2.345;
	float  c = 3;
	int result = a+=b+=c;
	if(result == operations(a,b,c)){
		return 30;
	}
	return 75;
}
