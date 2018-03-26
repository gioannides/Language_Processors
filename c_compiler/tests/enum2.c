

int main(){
 enum x { RED=9+3*6, GREEN= 9/3, BLUE=0};

	enum x y;
	y = RED+1;
	
	return RED+GREEN+y+BLUE;
}
