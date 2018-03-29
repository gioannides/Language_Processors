int main()
{
	int * p;
	int b[25];
	int i = 0;
	for(i<=24;i++;){

		b[i] = i;

	}

	p = &b;

	return *(p+1);

}
