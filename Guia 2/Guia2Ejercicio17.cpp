#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int tipo;
	float p1, p2, p3, p4, cantidad, pre, total, desc, totalp;
	string men, color;
	cout << "Ingrese los precios de cada tipo de papel (de 1 a 4): ";
	cin >> p1 >> p2 >> p3 >> p4;
	cout << "Ingrese tipo de papel: ";
	cin >> tipo;
	cout << "Ingrese cantidad comprada: ";
	cin >> cantidad;
	switch (tipo)
	{
	case 1:
		men = "Blanco 80 gramos";
		pre = p1;
		break;
	case 2:
		men = "Blanco 70 gramos";
		pre = p2;
		break;
	case 3:
		men = "Papel prensa";
		pre = p3;
		break;
	default:
		men = "Ilustración color (blanco, azul, rojo)";
		pre = p4;
		cin.ignore();
		cout << "Ingrese color: ";
		getline(cin, color);
		if (color != "Blanco")
		{
			pre *= 1.05;
		}
	}
	total = cantidad*pre;
	if (cantidad > 10)
	{
		desc = total*0.15;
	}
	else
	{
		desc = 0;
	}
	totalp = total - desc;
	cout << "-------------------------------------------------------------" << endl;
	cout << "Papelera Papelitos" << endl;
	cout << "Tipo de Papel: " << tipo << endl;
	cout << "Precio de Referencia: $ " << pre << endl;
	cout << "Total: $ " << total << setw(30) << "Descuento: $ " << desc << endl;
	cout << "Total a abonar: " << totalp;
	return 0;
}

