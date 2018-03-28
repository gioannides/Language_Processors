float operations(float a, float b);

int main(){
	float a = 40.456;
	float b = 0.345;

	float result = 0;
	int i = 20;
	switch(i){
	
		case 1:
			result = b;
			break;
		
		case 2:
		
			result = a;
			break;
	
		case 3:

			result = a+b;
			break;

		default:

			result = 4.56;
			break;


	}	


	if(result == operations(a,b)){
		return 0;
	}
	return 75;
}



