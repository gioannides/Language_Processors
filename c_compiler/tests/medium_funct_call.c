int f(int a)
{
    return a + a;
}

int x(int a, int b, int c, int d)
{
    return a + b + c + d;
}

int main()
{
    return x(f(1), f(2), f(3), f(4));
}
