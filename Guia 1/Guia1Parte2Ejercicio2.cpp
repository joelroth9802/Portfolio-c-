#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	double t, w, s1, s2, a, b, c;
	cout << "Ingrese los coeficientes de la ecuación: ";
	cin >> a >> b >> c;
	w = sqrt(pow(b,2) - 4*a*c);
	t = 2*a;
	s1 = (-1*b + w)/t;
	s2 = (-1*b - w)/t;
	cout << "Las raices de la ecuación son: " << s1 << " y " << s2;
	return 0;
}

