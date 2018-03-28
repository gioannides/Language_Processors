int u = 22;
int main(){

	redo:if(u <= 32){
		u+=5;
		goto redo;
	}

	return u;
}
