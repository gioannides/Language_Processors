int g=10;
int main()
{
	int a=1;
	int b=2;
	int c= (a=4+b)+(b+=2+7+8)-(g-=10-g+a)+(a+=8*b/a^b)+a+b-g%3;
	return a+b+c+g;
}