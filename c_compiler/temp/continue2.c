int main()                    
{     
      int y = 0;
    int x;
    for (x = 0; x < 10; x++) {
        if (x == 5)
        {
            continue;
        }
        y = y + x;
    }

return y;                                 
} 
