int factorial(int n)
{
    if(n<(1+1)){
        return 1;
    }else{
        return factorial(n-1)+factorial(n-2);
    }
}

int main()
{
    return factorial(4)-factorial(2)-factorial(1)-factorial(0);
}

