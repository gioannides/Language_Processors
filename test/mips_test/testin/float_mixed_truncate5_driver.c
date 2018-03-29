float operations(float a, float b);

int main(){
	float a = 2.1;
	float b = 2.3;
	float temp = a;
	
	float result = temp-=b;
	if(result == operations(a,b)){
		return 0;
	}
	return 75;
}



