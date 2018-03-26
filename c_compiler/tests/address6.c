int main(){


int** x;
int* z;
int y = 9;
x = &z;
z=&y;

**x = 7;

return **x;

}
