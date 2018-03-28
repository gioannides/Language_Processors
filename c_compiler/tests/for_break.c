int main()
{
    int x;
    int y = 0;
    for(x = -10; x < 10; x = x + 1)
    {
        if (x) {
            break;
        }
        y = y + x;
    }
    return y;
}
