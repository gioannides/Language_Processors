int main(){

typedef int sugar;
typedef sugar salt;

  sugar k = 0;
  salt kkk=0;

  for (kkk<10;kkk++;) {

    if (kkk==5){
      continue;
    }

    k += kkk;
  }

  return k+kkk;
}
