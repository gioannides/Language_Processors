int f(int a, int b)
{
    return a + b;
}

int main()
{
	int g=1,h=1,i=1,j=1,k=4;
    return g+h+f(g+6*2-7, h)+k+j;

}