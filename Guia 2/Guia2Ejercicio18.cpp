#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	long rubro, dni;
	float cant, preciou, subtotal, desc, recar;
	float desctarj, recartarj, total, cuotas;
	string nya, formapago, tipotarjeta, banco, textoR;
	cout << "Ingrese nombre y apellido del cliente: ";
	getline(cin, nya);
	cout << "Ingrese DNI del cliente: ";
	cin >> dni;
	cout << "Productos:" << endl;
	cout << "1 - Calefactores" << endl;
	cout << "2 - Radiadores" << endl;
	cout << "3 - Caloventores" << endl;
	cout << "4 - Cualquier otro producto del local" << endl;
	cout << "Ingrese rubro del producto: ";
	cin >> rubro;
	cout << "Ingrese la cantidad comprada: ";
	cin >> cant;
	cout << "Ingrese el precio unitario del producto: ";
	cin >> preciou;
	cin.ignore();
	cout << "C: Contado - D: Débito - T: Tarjeta de crédito" << endl;
	cout << "Ingrese la forma de pago: ";
	getline(cin, formapago);
	subtotal = preciou*cant;
	if (formapago == "C")
	{
		if ((rubro == 1) || (rubro == 2) || (rubro == 3))
		{
			desc = subtotal*0.15;
			recar = 0;
			desctarj = 0;
			recartarj = 0;
			total = subtotal - desc;
			textoR = "Contado";
		}
		else
		{
			desc = 0;
			recar = 0;
			desctarj = 0;
			recartarj = 0;
			textoR = "Contado";
		}
	}
	else
	{
		if (formapago == "D")
		{
			total = subtotal;
			desc = 0;
			recar = 0;
			desctarj = 0;
			recartarj = 0;
			textoR = "Debito";
		}
		else
		{
			if (formapago == "T")
			{
				cout << "-------------------------------------" << endl;
				cout << "Visa - Mastercard - Naranja" << endl;
				cout << "Ingrese tipo de tarjeta: ";
				getline(cin, tipotarjeta);
				cout << "Bersa - Frances - Galicia - Otros" << endl;
				cout << "Ingrese tipo de banco: ";
				getline(cin, banco);
				cout << "Ingrese cantidad de cuotas 1, 3, 6, 12, 18: ";
				cin >> cuotas;
				desc = 0;
				recar = 0;
				desctarj = 0;
				recartarj = subtotal*0.20;
				total = subtotal + recartarj;
				textoR = "Tarjeta de credito";
				if ((tipotarjeta == "Visa") && (banco == "Bersa"))
				{
					desctarj = total*0.15;
					total -= desctarj;
				}
			}
		}
	}
	cout << "-------------------------------------------------------" << endl;
	cout << "DNI: " << dni << setw(35) << "CLIENTE: " << nya << endl;
	cout << "RUBRO DEL PRODUCTO: " << rubro << setw(28) << "CANTIDAD: " << cant << endl;
	cout << "PRECIO UNITARIO: $ " << preciou << setw(30) << "FORMA DE PAGO: " << formapago << endl;
	cout << "SUBTOTAL: $ " << subtotal << endl;
	cout << "DESCUENTOS: $ " << desc << endl;
	cout << "RECARGOS: $ " << recar << endl;
	cout << "DESCUENTO TARJETA CREDITO: $ " << desctarj << endl;
	cout << "RECARGO TARJETA CREDITO: $ " << recartarj << endl;
	cout << "TOTAL A PAGAR: $ " << total;
	return 0;
}

