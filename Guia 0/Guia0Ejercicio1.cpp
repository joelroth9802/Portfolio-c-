#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anio, anioact;
	cout << "Ingrese año de nacimiento: ";
	cin >> anio;
	cout << "Ingrese año actual: ";
	cin >> anioact;
	anio = anioact - anio;
	cout << "-------------------------------"<<endl;
	cout << "Su edad es de: "<<anio<<" años";
	return 0;
}

