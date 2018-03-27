
int array[35];
int main(){
 int x = 45;
int i;

int* p = &array[0];
	for(i=0; i < 35; i++){
	
		array[i] = ++i;

	}

	for(i=0; i < 35; i++){
	
		x+=array[i] ;

	}


return *(p);

}
