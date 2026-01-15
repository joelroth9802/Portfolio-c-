#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float xa, ya, xb, yb, xc, yc, da, db, dc, total;
	cout << "Ingrese las coordenadas del punto A: ";
	cin >> xa >> ya;
	cout << "Ingrese las coordenadas del punto B: ";
	cin >> xb >> yb;
	cout << "Ingrese las coordenadas del punto C: ";
	cin >> xc >> yc;
	da = sqrt(pow((xb - xa),2) + pow((yb - ya),2));
	db = sqrt(pow((xc - xb),2) + pow((yc - yb),2));
	dc = sqrt(pow((xc - xa),2) + pow((yc - ya),2));
	total = round(da + db + dc);
	cout << "----------------------------------------" << endl;
	cout << "Distancia total que debe recorrer el avion: " << total << " km";
	return 0;
}

