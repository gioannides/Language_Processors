int a=1, b=2;
int f()
{
	return b;
}
int g()
{
	return f()+f();
}
int main()
{
	return g();
}