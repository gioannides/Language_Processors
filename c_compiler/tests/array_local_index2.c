
int a[100];
int main()
{
	int i=12;
	int j=0;
	for(j;j<28;j++)
	{
		a[j]=j;
	}
	return a[a[i]+i-10];
}