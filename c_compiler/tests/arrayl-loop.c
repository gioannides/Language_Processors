int main(){

	int t = 0;
	int x[200];
	int sum = 0;

	while( t < 200){
		t++;
		x[t] = t;

	}

	for(;;){

		if(t==200){
			break;
		}
		else{
			sum+=x[t];
			t++;
		}
	}

	return sum;
}
