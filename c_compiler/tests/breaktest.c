int main(){
 int i;
 int x = 5;
	switch(x){

		case 1:
			for(i=0;i<10;i++){
				x+=2;
			}
			break;
		case 2:
			x = 45;
			break;

		default:
			x=12;
	}

	return x;
}
