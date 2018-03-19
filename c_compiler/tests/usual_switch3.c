int main(){
	
	int x = 8;
	int y = 9;
	int z = 88;
	switch(x){
	
		switch(y){
			case 4:
				return 0;
		}

		case 1:
			x=21;
			break;
		case 2:
			x=55;
			return x;
		case 4:
			x=66;
			return x;
		case 8:
			x=87;
			return x;
	}

}

