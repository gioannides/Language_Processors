float operations(float a, float b);

int main(){
	float a = 40.456;
	float a_temp = a;
	float b = 345.6;
	float b_temp = b;

	float result = (b_temp<=a_temp);


	if(result == operations(a,b)){
		return 0;
	}
	return 75;
}



