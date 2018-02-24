int fibonacci_recursive(int n)
{
    if (n == 0) 
    {
        return 0;
     } 
     if (n == 1) {
           return 1;
     }
     return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}


int main(){

	int x = 9;
	return fibonacci_recursive(x);

}

