
int hcf(int n1, int n2)
{
    if (n2 != 0){
       return hcf(n2, n1%n2);
    }
    else{ 
       return n1;
    }
}

int main()
{
   int n1 = 35;
   int n2 = 12;
 
   return hcf(n1,n2);
 
}

