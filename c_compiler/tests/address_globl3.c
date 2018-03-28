short y = 8;

int main(){

	
	short* x = &y;
	short** z = &x;
	short*** h = &z;

	return ***(h);
}
