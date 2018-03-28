char g = 'a';


int main() {

	char* po = &g;
	char** pk = &po;
	**pk = *po + 32;


	return g;


}
