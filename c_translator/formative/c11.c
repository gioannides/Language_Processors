int geo(int n)
{
    int acc=0;
    int t=n;
    while(t<n){
        acc=acc+t;
    }
    return acc;
}

int main()
{
    return geo(4)+geo(3)+geo(2);
}

