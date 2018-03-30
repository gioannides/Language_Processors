int a[5];

int f(){
	a[3] = 221;
}

int main(){
	f();
	return a[3];
}
