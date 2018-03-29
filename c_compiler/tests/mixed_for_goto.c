int* p=99;

int main(){

	int x = 0;
	for(;;){
		if( x == 99)
			break;
		else
			x++;
	}
goto end;
return x+1;

end: return x;
}

