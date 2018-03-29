int main()
{
   int n=9;
   int reverse = 0;
 
  
 
   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n = n/10;
   }
 
  
 
   return 0;
}

/*https://www.programmingsimplified.com/c/source-code/c-program-reverse-number*/
