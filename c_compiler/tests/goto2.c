int x = 1;
int main(){

	start:if(x < 6){

		x+=5;
		goto start;
	}

	return x;
}
