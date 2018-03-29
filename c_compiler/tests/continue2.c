int main()                    
{     
    int y = 0;
    int x=0;
    for (x < 10; x++;) {
        if (x == 5){
            continue;
        }
        y += (y + x);
    }

return y;                                 
} 
