int main(){
    
    int y = 456;
    int x = 123;

    int z = ((x = (x==12)), (x * y));  
    return x+z+y;                                                            
} 
