char f(char a)
{
    return a + a;
}

char x(char a, char b, char c, char d)
{
    return a + b + c + d;
}

int main()
{
	char a=1; 
	char b=2;
	char c=3;
	char d=4;
    return x(f(a), f(b), f(c), f(d));
}
