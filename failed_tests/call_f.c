int a=1;
int b=2;
int c=3;
int d=4;
int f(int a2)
{
    return a2 + a2;
}

int x(int a1, int b1, int c1, int d1)
{
    return a1 + b1 + c1 + d1;
}

int main()
{
    return x(f(a), f(b), f(c), f(d));
}