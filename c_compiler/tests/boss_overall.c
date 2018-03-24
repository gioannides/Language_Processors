int f(int a, int b);
int g(int c, int d);
int main()
{
	int v1=3;
	int v2=2;
	if(!!(v1<=v2))
	{
		return f(v1, g(v2, v2));
	}
	else 
	{
	 	return g(f(v1,v2), g( f( f(v1,v1) ,v2) ,v1) );
	}
	return 1;
}

int f(int a, int b)
{
	return a+b;
}
int g(int c, int d)
{
	return c*d;
}