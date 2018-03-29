int x = 45;
int y = 85;

int foo()
{
	return ~x;
}
int goo()
{
	return -(foo()+foo());
}
int main()
{
	return goo();
}
