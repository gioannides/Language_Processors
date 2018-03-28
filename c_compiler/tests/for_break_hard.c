int main()
{
   int i = 0;
   int j = 0;
   int x = 0;
	for(i; i <= 10; i++){

		if(i==9){
			break;
		}
		else{
			for(j=0;j<=10;j++){
				x+=1;
				if(j==9){
					break;
				}
			}
			
			
		}
	}
	return x;
}
