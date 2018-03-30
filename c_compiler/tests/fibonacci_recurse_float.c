float fibonacci_recursive(float n)
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

	float a = 8;
	return fibonacci_recursive(a);

}


/*taken from the internet and modified to a test case
https://stackoverflow.com/questions/2170276/calculating-fibonacci-numbers-recursively-in-c  credits to Jack*/
