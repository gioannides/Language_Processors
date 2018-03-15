                  
int x = 5;

int main()
{  int y = 0;
    int x = 0 - 9;
    while (x < 5) {
        x = x + 1;
        if (x == 1) {
            continue;
        }
        y = y + x;
    }
    return y;
} 
