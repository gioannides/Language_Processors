int g = 456;


int main() {

	int* po = &g;
	int** pk = &po;
	**pk = *po + 32;


	return g;


}
