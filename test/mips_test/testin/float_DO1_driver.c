float operations(float a, float b);

int main(){
	float a = 40.1233;
	float b = 0.345;

	float a_temp = a;
	float result = 0;
	float i = 20.8;
	do{

		result+=(a_temp*b);
		a_temp--;

	}while( (a_temp)>b && (b<a_temp) );


	if(result == operations(a,b)){
		return 0;
	}
	return 75;
}



