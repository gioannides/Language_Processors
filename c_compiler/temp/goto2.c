int main()                    
{     int x = 0;
    int y = 0;

    start: x = x + 1;
    if (x < 10) {
        y = y + x;
        goto start;
    }

    return y;                
} 
