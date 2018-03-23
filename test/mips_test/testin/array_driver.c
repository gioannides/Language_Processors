
char a[10];                                     
char arr[10]={(1+2*3)|1,(1+2*3)^1,(1+2*3)+1,4,3};
char b={1};                                  
int operations();

int main(){                                     
	int i=0;    
	for(i; i<9; i++){                       
		if(a[0]!=1){                               
			a[0]=1;
		}                               
		if(a[1]!=1)                     
		{                         
		  a[1]=1;                 
		}                               
		if(i>1)                        
		{            
		  a[i]=a[i-1]+a[i-2];     
		}     
		b+=a[i];                          
	}            
	int result = b+a[a[2]]; 

	if(result == operations()){
		return 30;
	}
	else{
		return 75;  
	}                        
}
