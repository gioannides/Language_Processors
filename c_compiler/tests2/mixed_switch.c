


int main(){
	
	int x = 8;
	int y = 9;
	int z = 88;
	switch(x){

		case 4:
			switch(z){

				case 10:
					z= 8;
					x = 9;
					break;
				case 12:
					z= 90;
					x = 9;
					break;
				case 9:
					x= 100;

			}
			
			
		
		case 8:

			
			switch(y){

				case 9:
					switch(x){

						case 7:
							x= 56;
							break;
						case 8:
							 x+=3;
							break;
					}


				switch(z){

					case 7:
						z= 8;
						break;
					case 88:
						if(x){
							return 51;
						}
				}

				case 10:
					return 8;
				case 12:
					return 90;
				case 45:
					return 100;

			}
			
			x= 3;
			return x;
		case 9:
			x= 7;
			return x;

		default:
			x= 98;
			return x;
			
			
	}

}

