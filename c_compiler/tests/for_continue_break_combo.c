int main(){
int x = 0;
int i = 0;
for(i;i<100;++i){
	x+=1;
	if(i > 25 && i < 50){
		continue;
		 x++;
	}
	else if( i>50 || i < 65){
		x--;
	}
	if(i == 98){
		if(x!=0){
			break;
		}
		continue;
	}
}

return x+i;
}
