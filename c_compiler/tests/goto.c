int x = 8;

int main(){
	int x = 9;
	if(x==9){
		goto x;
	}
	return 8;
	x: return x;
}
