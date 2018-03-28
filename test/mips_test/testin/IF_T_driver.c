int IF_T(int i);


int main() {

	int i = 1;
	for(i; i < 30; i++){
		if(IF_T(i) != i){
			return 1;
		}
	}
	
	return 0;
}
