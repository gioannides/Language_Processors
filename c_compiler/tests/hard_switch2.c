
int main(){
	
	int x = 8;
	int y = 9;
	int z = 88;
	switch(x){

		case 4:
			switch(z){

				case 10:
					return 8;
				case 12:
					return 90;
				case 9:
					x= 100;

			}
			
			
		
		case 8:
			switch(y){
					switch(x){

						case 7:
							return y;
						case 8:
							  x=3;
							  break;
					}


				case 10:
					return z;
				case 12:
					return y;
				case 9:
					return 9;

			}
			
			
		case 9:
			x= 7;
			return 0;

		default:
			x= 98;
			return x;
			
			
	}

}

