


char foo(char x){

	if(x<=9){
		x+=1;
		foo(x);
	}
return x;
}

int main(){

	char x = 10;

	

	return ((foo(x)?foo(3):foo(14)));

}

