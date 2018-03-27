
unsigned array[35];
int main(){
 unsigned x = 45;
unsigned i;

unsigned* p = &array[0];
	for(i=0; i < 35; i++){
	
		array[i] = ++i;

	}

	for(i=0; i < 35; i++){
	
		x+=array[i] ;

	}


return *(p);

}
