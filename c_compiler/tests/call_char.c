int mult(char a, char b){
  char c = 0;
  while (a!=0){
    c = c + b;
    a = a - 1;
  }
  return c;
}

int main(){
  char a = 5;
  char b = 7;
  return mult(a,b);
}