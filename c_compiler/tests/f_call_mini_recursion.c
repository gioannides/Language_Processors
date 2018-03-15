int f(int x, int y)
{
	int r;
	
	r = (1 + 3);
	if(y>x)
	{
		return f(y-1, x);
	}
	else 
		return r;
}
int main()
{
	int a=3;
	int b=5;
	return f(a,b);
}