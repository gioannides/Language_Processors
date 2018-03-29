
int call(int x, int y);


int main() {
	int x = 122;
	int y = 23;

	if( call(10,20) != x+y){
		return 78;
	}
	else{
		return 45;
	}

}

int call(int x, int y){

	return x+y;

}


