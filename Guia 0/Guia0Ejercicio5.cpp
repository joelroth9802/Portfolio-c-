#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float muj, hom, total;
	cout << "Ingrese el total de la población: ";
	cin >> total;
	cout << "Ingrese la cantidad de mujeres: ";
	cin >> muj;
	muj = (muj/total)*100;
	hom = 100 - muj;
	cout << "------------------------------------" << endl;
	cout << "Porcentaje de mujeres: " << muj << " %" << endl;
	cout << "Porcentaje de hombres: " << hom << " %";
	return 0;
}

