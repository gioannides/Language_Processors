int foo(int x, int y){
	int r=99;
	
	r += (10 + 30);
	if(y>x){
		return foo(y-1, x);
	}
	else 
		return r;
}
int main(){

	int x=88;
	int y=21;
	return foo(y,x);
}
