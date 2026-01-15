#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float largo, alto, area;
	cout << "Ingrese el alto de la pared: ";
	cin >> alto;
	cout << "Ingrese el largo de la pared: ";
	cin >> largo;
	area = alto*largo;
	area *= 0.5;
	cout << "-------------------------------" << endl;
	cout << "La cantidad de arena que se necesitan es de: " << area << " cm cúbicos";
	return 0;
}

