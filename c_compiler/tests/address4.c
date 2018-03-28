int main(){

	short y = 3;
	short* x = &y;
	short** z = &x;
	short*** h = &z;

	return ***(h);
}
