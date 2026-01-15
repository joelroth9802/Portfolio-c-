#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float dulce, frutal, mouse, subtotal, iva, total, recargo, desc;
	string cliente, gusto, regalo;
	int tipocaja;
	cout << "Ingrese el precio unitario del alfajor de dulce de leche: ";
	cin >> dulce;
	cout << "Ingrese el precio unitario del alfajor frutal: ";
	cin >> frutal;
	cout << "Ingrese el precio unitario del alfajor de mouse: ";
	cin >> mouse;
	cin.ignore();
	cout << "Ingrese el nombre del cliente: ";
	getline(cin, cliente);
	cout << "Ingrese el gusto del alfajor: ";
	getline(cin, gusto);
	cout << "Ingrese el tipo de caja x6 - x12 x24: ";
	cin >> tipocaja;
	cin.ignore();
	cout << "Regalo V o F: ";
	getline(cin, regalo);
	if (gusto == "Dulce de leche")
	{
		switch (tipocaja)
		{
		case 6: 
			subtotal = tipocaja*dulce;
		    iva = subtotal*0.21;
		    total = subtotal + iva;
			break;
		case 12:
			desc = dulce*0.10;
			dulce -= desc;
			subtotal = tipocaja*dulce;
			iva = subtotal*0.21;
			total = subtotal + iva;
			break;
		case 24:
			desc = dulce*0.20;
			dulce -= desc;
			subtotal = tipocaja*dulce;
			iva = subtotal*0.21;
			total = subtotal + iva;
			break;
		}
	}
	else
	{
		if (gusto == "Frutal")
		{
			switch (tipocaja)
			{
			case 6: 
				subtotal = tipocaja*frutal;
				iva = subtotal*0.21;
				total = subtotal + iva;
				break;
			case 12:
				desc = frutal*0.10;
				frutal -= desc;
				subtotal = tipocaja*frutal;
				iva = subtotal*0.21;
				total = subtotal + iva;
				break;
			case 24:
				desc = frutal*0.20;
				frutal -= desc;
				subtotal = tipocaja*frutal;
				iva = subtotal*0.21;
				total = subtotal + iva;
				break;
			}
		}
		else
		{
			switch (tipocaja)
			{
			case 6: 
				subtotal = tipocaja*mouse;
				iva = subtotal*0.21;
				total = subtotal + iva;
				break;
			case 12:
				desc = mouse*0.10;
				mouse -= desc;
				subtotal = tipocaja*mouse;
				iva = subtotal*0.21;
				total = subtotal + iva;
				break;
			case 24:
				desc = mouse*0.20;
				mouse -= desc;
				subtotal = tipocaja*mouse;
				iva = subtotal*0.21;
				total = subtotal + iva;
				break;
			}
		}
	}
	if (regalo == "V")
	{
		total += 250;
		recargo = 250;
	}
	else
	{
		recargo = 0;
	}
	cout << "------------------------------------------------------------" << endl;
	cout << "Cliente: " << cliente << setw(26) << "Tipo de caja: x" << tipocaja << setw(30) << "Gusto: " << gusto << endl;
	cout << "Subtotal: $ " << subtotal << setw(30) << "Recargo regalo: $ " << recargo << endl;
	cout << "Iva %21: $ " << iva << endl;
	cout << "Total: $ " << total;
	return 0;
}

