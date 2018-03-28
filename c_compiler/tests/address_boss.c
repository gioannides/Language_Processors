int main(){


int **** x;
int **** y;
int *** k;

int ** p;

int * z;
int result = 9;
int u = 89;
int j = 78;

z = &u;
p = &z;
z = &j;

k = &p;
y=&k;
x=y;
****x = (****y + 88) / 2;


result = **p + *z + 2*(****x + ****y);

return result;
}
