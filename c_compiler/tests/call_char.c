int kl(char x, char y){
  char d = 0;
  while (y!=0){
    d += x;
    y -= 1 ;
  }
  return d;
}

int main(){
  char x = 5;
  char y = 7;
  return kl(x,y);
}
