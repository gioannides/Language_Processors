
int call(int a, int b);


int main() {
	int a = 122;
	int b = 23;

	if( call(1,2) != a+b){
		return 78;
	}
	else{
		return 45;
	}

}

int call(int a, int b){

	return a+b;

}


