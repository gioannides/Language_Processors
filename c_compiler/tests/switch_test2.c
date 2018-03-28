int main(){
	
	int x = 8;
	int y = 9;
	int z = 88;
	switch(x){

		case 1:
			x+=3;
			y+=45;
			z+=(y+x);
			break;
		case 2:
			x+=31;
			y+=23;
			z+=(y+x);
			break;
		case 5:
			x+=55;
			y+=78;
			z+=(y+x);
			break;
		case 7:
			x+=444;
			y+=1;
			z+=(y+x);
			break;
		case 8:
			x+=22;
			y+=11;
			z+=(y+x);
			break;
		default:
			x+=222;
			y+=222;
			z+=(y+x);
			break;
}
return x+y+z;
}

