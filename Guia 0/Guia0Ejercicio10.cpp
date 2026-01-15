#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float pulg, alto;
	int ancho;
	cout << "Ingrese la cantidad de pulgadas del televisor: ";
	cin >> pulg;
	cout << "Ingrese el alto de la pantalla expresado en cm: ";
	cin >> alto;
	pulg *= 2.54;
	ancho = sqrt(pow(pulg,2) - pow(alto,2));
	cout << "--------------------------------------------------" << endl;
	cout << "El ancho del televisor es de: " << ancho << " cm";
	return 0;
}
