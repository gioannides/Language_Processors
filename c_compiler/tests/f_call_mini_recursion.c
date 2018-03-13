int f(int x, int y)
{
	if(y<x)
	{
		return f(y+1, x);
	}
	else 
		return y+x;
}
int main()
{
	int a=3;
	int b=5;
	return f(a,b);
}