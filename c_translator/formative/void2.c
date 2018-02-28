int z=98;


void p(int x, int y, int e)
{
    z = x+y+z*x*y;
}

int main()
{
    p(3,5,7);
    return z;
}

