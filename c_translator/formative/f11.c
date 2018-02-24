int main()
{
	int y;
	int x=5;
	y=((x+x-x)/x)*x; 
	while(y<25) {

		if( y < 15 ) {

			y = y +1;
		}
		else if( y ==15) {

			y = y+5;
		}
	
		else{

			y = y+5;
			return (y&7);

		}
	
	}
}
