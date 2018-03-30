int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}


int main(){

	return fib(6) + fib(7);

}

/*taken from the internet and modified to a test case
https://www.programmingsimplified.com/c-program-generate-fibonacci-series */
