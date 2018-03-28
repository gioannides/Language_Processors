
float operations(float a, float b){
	float result = 0;
	do{

		result+=(a*b);
		a--;

	}while( (a)>b && (b<a) );

return result;
}
