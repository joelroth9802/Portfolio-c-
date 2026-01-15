#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float valorcosto, venta, porgan, ganancia;
	cout << "Ingrese el precio de venta del producto: ";
	cin >> venta;
	cout << "Ingrese el porcentaje de ganancia: ";
	cin >> porgan;
	ganancia = (porgan*venta)/100;
	valorcosto = venta - ganancia;
	cout << "------------------------------------------" << endl;
	cout << "Valor costo del producto: $ " << valorcosto;
	return 0;
}

