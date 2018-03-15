int main(){
  int j = 0;
int i;
  for (i;i<10;i++) {
    if (i==5){
      continue;
    }
    j += i;
  }
  return j;
}
