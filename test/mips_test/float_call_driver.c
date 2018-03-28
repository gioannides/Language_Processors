float f(float a,float b, float c, float d);

int main()
{
	float a=1.3;
	float b=0.442;
	float c=3.45;
	float d=4.566;
    	if( f(a,b,c,d) == (a+b*c/d)){
		return 0;
	}
	return 75;
}
