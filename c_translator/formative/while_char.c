int s = 87;




int f(int y){

	while(s != 0){
		y=y-1;
		s = s-1;
	}
	return s+y;

}



int main()
{
	int x=9;
	char y = 8;
	char t = 's';

	while( x != 35){


		if(x < 30)
			y = y +1;
			t = 'w';
		if(x==32)
			y=y+f(y)+f(4)+f(y)+f(4)+f(y)+f(4);
		else{
			if(t=='w'){
				y=y+3;
			}
			else{
				y=y+90;
			}
		}

		x=x+1;

	}


return y;

	
}




