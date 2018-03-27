
short array[35];
int main(){
 short x = 45;
short i;

short* p = &array[0];
	for(i=0; i < 35; i++){
	
		array[i] = i;

	}

	for(i=0; i < 35; i++){
	
		x+=array[i] ;

	}


return *(p)+x;

}
