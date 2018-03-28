float NOTEQUAL(float x);

int main(){
	
	float x = 10;
	float x_temp = x;
	while( x_temp > 5){

		x_temp= x_temp - 1;


	}
	float result = x_temp;
	if(result == NOTEQUAL(x)){
		return 0;
	}
	return 75;
}
