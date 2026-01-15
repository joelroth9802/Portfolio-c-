#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float altC, supC, supT, supS;
	cout << "Ingrese la altura del cuadrado: ";
	cin >> altC;
	supC = altC*altC;
	supT = (altC*altC)/2;
	supS = supC - supT;
	cout << "Superficie del área sombreada: " << supS << " cm2";
	return 0;
}

