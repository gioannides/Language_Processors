int f(int a)
{
    return a + a;
}

int x(int a, int b, int c, int d)
{
    return a + b + c + d;
}

int main(int a, int b, int c, int d)
{
    return x(f(a), f(b), f(c), f(d));
}