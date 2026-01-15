#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]) {
	int mm, dd, aa;
	cout << "Ingrese fecha formato MM/DD/AA: ";
	cin >> mm >> dd >> aa;
	aa += 2000;
	printf("Fecha formato DD/MM/AAAA: %d/%d/%d",dd,mm,aa);
	return 0;
}

