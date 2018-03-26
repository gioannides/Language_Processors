float operations(float a, float b);

int main(){
	float a = 40.456;
	float b = 0.345;

	float result = 0;
	float i = 0;
	for(i; i  < 10; ++i){

		result+=(a*b);

	}


	if(result == operations(a,b)){
		return 0;
	}
	return 75;
}



