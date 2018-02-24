
int r=1;

int main(){
	
	

int i = 0;
while (i < 10) {
    int j = 0;
    while (j < 10) {
        j = j+1;
	r = r * j * i;
    }
    i = i +1;
}

return r;

}
