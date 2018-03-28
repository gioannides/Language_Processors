int foo(int x);
int foo2(int x1, int x2);
int foo3(int x3, int x4, int x5);



int main() {

	return foo(foo2(foo3(1,2,3),foo3(4,5,6)));


}

int foo(int x){

	return 2*x;

}


int foo2(int x1, int x2) {

	return x1+x2;
}


int foo3(int x3, int x4, int x5){

	return x3+x4+x5;

}
