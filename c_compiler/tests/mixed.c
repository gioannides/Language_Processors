
int x = 0;

int main(){
int i = 0;;;;;
do{

for(i;i<100;++i){

	if( i <= 25){

		x+=1;

	}
	else{

		while( i > 25 && i <50){
	
			if(i<40?1:0){
			
				x+=1;
				i++;

			}
			else{
				x-=1;
				i++;

			}
			continue;
			x+=2;

		}
	}

}

x+=2;
}while(x < 10);
return x;
}


