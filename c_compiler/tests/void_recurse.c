
int x = 823;


void f(int x){

	if(x<=9){
		x+=1;
		f(x);
	}

}

int main(){

	int x = 0;

	f(x);

	return x;

}

