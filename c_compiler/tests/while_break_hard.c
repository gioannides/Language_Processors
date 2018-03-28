int main()
{
    int z = 0;

    int x = 20;
    while (x)
    {
        int y = 20;
        while(y)
        {
            if (y < 10)
            {
                break;
            }
            z = z + y;
            y = y - 1;
        }

        if (x < 10)
        {
            break;
        }
        x = x - 1;
    }
	return x+z;
}


