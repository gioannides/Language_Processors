float operations(float a, float b);

int main(){
	float a = 40.456;
	float a_temp = a;
	float b = 2.345;
	float result = a_temp/=b;
	if(result == operations(a,b)){
		return 0;
	}
	return 75;
}



