
int operations(){
	int i=0;    
	for(i; i<9; i++){                       
		if(a[0]!=1){                               
			a[0]=1;  }                               
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
	return b+a[a[2]];       
}
