int main(){
	
	int x = 8;
	int y = 9;
	int z = 88;
	switch(x){

		
		case 1:
			switch(y){
				case 9:
					return 42;
				case 88:
					return 23;
			}
			x=21;
			return;
		case 2:
			x=55;
			return;
		case 4:
			x=66;
			return;
		case 8:
			x=87;
			return;
	}

return x;
}

