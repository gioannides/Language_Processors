                  
int x = 5;

int main()
{ 
    int y=0;
    int	z = 0;
    int x = 1;
    while (x < 3) {
        x+= 1;
        if (x++ < 2) {
		if( z == 0){
			continue;
		}
            continue;
        }
	
        y+=x;
    }
    return y;
} 
