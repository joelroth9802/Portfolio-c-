#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float cantart, preciouni, desc, total;
	string nya;
	cout << "Ingrese nombre y apellido del cliente: ";
	cin.ignore();
	getline(cin, nya);
	cout << "Ingrese cantidad comprada del artículo: ";
	cin >> cantart;
	cout << "Ingrese precio unitario del artículo: ";
	cin >> preciouni;
	total = preciouni*cantart;
	desc = total*0.05;
	total = (total - desc)*1.21;
	cout << "------------------------------------------" << endl;
	cout << "Nombre y apellido: " << nya << endl;
	cout << "Total a cobrar: $ " << total;
	return 0;
}

