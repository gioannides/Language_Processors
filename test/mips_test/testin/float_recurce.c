
float operations(int a, float b){
	if(a != 0){
		return    b + operations(a-1,b) ;
	}
	else{
		return 1;
	}
}
