int main(){


short** x;
short* z;
short y = 9;
x = &z;
z=&y;

**x = 7;

return **x + *z;

}
