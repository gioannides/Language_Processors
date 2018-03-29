void foo(int * pointer);

int main(){

int* p=0;
int j = 88;

p=&j;
foo(p);

return j;
}


void foo( int * pointer) {

	int x = 0;
	for(;;){
		if( x == 99)
			break;
		else
			x++;
	}

	*pointer = x;
	
}
