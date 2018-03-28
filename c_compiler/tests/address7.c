int main(){


char** x;
char* z;
char y = 9;
x = &z;
z=&y;

**x = 7;

return **x + *z;

}
