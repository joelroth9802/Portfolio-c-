#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float numpul, edad;
	cout << "Ingrese edad de la persona: ";
	cin >> edad;
	numpul = (220 - edad)/10;
	cout << "------------------------------------" << endl;
	cout << "Número de pulsaciones de la persona ingresada cada 10 segundos: " << numpul << " pulsaciones";
	return 0;
}

