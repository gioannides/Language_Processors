float divide(float a, float b);

int main(){
	float a = 40.456;
	float b = 2.345;
	float result = a/b;
	if(result == divide(a,b)){
		return 0;
	}
	return 75;
}
