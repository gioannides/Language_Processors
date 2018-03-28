int f(int a)
{
    return a + a;
}

int x(int a, int b, int c, int d)
{
    return a + b + c + d;
}

int main(int a1, int b1, int c1, int d1)
{
	int a=1, b=2, c=3, d=4;
    return x(f(a), f(b), f(c), f(d));
}