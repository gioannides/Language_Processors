
int f(int x)
{
  if(x>1){
    return x*f(x-1);
  }else{
    return x;
  }
}



int main(){

	int x = 32;

	if(x < 32) {
		return f(67);
	}

	else {

		return 0;

	}


}


