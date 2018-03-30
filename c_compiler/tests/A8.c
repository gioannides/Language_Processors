

int main(){
	typedef int* intPtr;

	int x = 5;
	intPtr pp = &x;


	return *pp;
}
