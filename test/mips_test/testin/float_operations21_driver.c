float f();

int main(){
   float x = 15.88;
	float y = 0.455;
	unsigned z = 4;
	for(z<18;z++;){
		if(z>=x){
			break;
		}
		else{
			y+=z;
		}
	}
	
    return y == f();
}
