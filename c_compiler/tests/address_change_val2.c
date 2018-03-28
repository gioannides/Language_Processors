short g = 65;


int main() {

	short* po = &g;
	short** pk = &po;
	**pk = *po + 32;


	return g;


}
