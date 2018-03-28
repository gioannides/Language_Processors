

int main(){
 
int i = 0;
int found = 0;
short x = 23;
	for(i;i<=100 && !found; i++){

		if(x < 45){
		
			x+=1;
		
		}
		
		else if(x > 45 && x < 60){

			continue;

		}

		else{

			found = 1;
		}

	}

	return x+=(~found)+8*sizeof(x+=(~found));

}
