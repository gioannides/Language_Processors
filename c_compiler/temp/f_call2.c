int f(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k)
{
    return (a + b) * c + (d + (e * f)) + a * g + h * i + j + k;
}

int main()
{ 
	f(1, 2, 3, 2, 2, 1, 2, 1, 3, 4, 3);
    return f(1+2+4, 2, 3, 2, 2, 1, 2, 1, 3, 4, 3);
}