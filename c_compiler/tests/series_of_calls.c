int foo();
int foo2();
int foo3();
int foo4();
int foo5();



int main(){

return foo();

}


int foo(){

return foo2();

}

int foo2() {

return foo3();

}


int foo3(){

return foo4() + foo5();

}

int foo4(){

return foo5()+1;

}

int foo5(){

	return 89;

}

