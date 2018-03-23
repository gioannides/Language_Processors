int f();
int g();
int h();
int j();



int main(){

return f();

}


int f(){

return g();

}

int g() {

return h();

}


int h(){

return j()+1;

}

int j(){

return '\n';

}

