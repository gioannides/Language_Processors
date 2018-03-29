
int x = 0;

int main(){
int iqq = 0;;;;;
do{

for(iqq;iqq<100;++iqq){

	if( iqq <= 25){

		x+=1;

	}
	else{

		while( iqq > 12 && iqq <33){
	
			if(iqq<122?1:0){
			
				x+=1;
				iqq++;

			}
			else{
				x-=1;
				iqq++;

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


