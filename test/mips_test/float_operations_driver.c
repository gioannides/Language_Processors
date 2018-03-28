float f();

int main(){
   float x = 3.456;
	float y = 0.455;
	float z = 0;
	if( y > 0 || x != 3.456){
		z = x+y;
	}
	else{
		z = 56;
	}
    return z == f();
}
