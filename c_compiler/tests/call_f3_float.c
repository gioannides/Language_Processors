float f(float a)
{
    return a + a;
}

int x(float a, float b, float c, float d)
{
    return a + b + c + d;
}

int main()
{
	float a=1; 
	float b=2;
	float c=3;
	float d=4;
    return x(f(a), f(b), f(c), f(d));
}
