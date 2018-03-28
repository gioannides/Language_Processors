int foo(int a,int b, int c, int d);
int foo2();

int globl = 45;

int main(){
    short y;
    y = foo(1,3*7+foo2(),4,7*4+1);
    return 7*y;
}

int foo2(){
  return globl;
}


int foo(int a,int b, int c, int d){
  return (a+b+c+d);
}

