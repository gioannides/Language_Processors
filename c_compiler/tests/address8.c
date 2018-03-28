int main(){


unsigned ** x;
unsigned* z;
unsigned y = 9;
x = &z;
z=&y;

**x = 7;

return **x + *z;

}
