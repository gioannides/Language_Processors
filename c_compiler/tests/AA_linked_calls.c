int c=1, w=2;


int foo(){

	short k=12+(w+=12);
	return k+c+w;
}
int goo(){

	char y = 'x';
	int r = c + w + y;
	return w+(!~(foo()+r*88));
}


int main()
{
	return goo();
}
