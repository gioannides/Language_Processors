
int f(int x)
{
  return x*x;
}

int c = 98;

int main(){

	int x = 32;

	if(x < 32) {
		if( c == 98){
			return f(c) + f(c-1) + f(c-2) + f(c-3);
		}
	}

	else {

		return 0;

	}


}


