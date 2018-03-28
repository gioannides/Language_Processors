int multiplyNumbers(int n)
{
    if (n >= 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}


int main()
{
    int n=3;

    return multiplyNumbers(n);
    
}


//taken from the internet and modified to a test case
