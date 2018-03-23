int a=1, b=2;
int f()
{
	int d=93+(a+=90);
	return b+d+a;
}
int g()
{
	char cha = 'x';
	return b*(!(f()+9))+a+cha;
}
int main()
{
	return g();
}