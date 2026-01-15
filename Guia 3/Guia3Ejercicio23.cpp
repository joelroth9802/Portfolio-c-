#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float pEstud, pComun, pJubilado, nroColec, cantBolEst, cantBolCom, cantBolJub;
	float acumEst, minNroColec, tEstud, tComun, tJubilado;
	long subtotal, total, minSubTotal;
	cout << "Ingrese el precio del boleto común: ";
	cin >> pComun;
	pEstud = pComun*0.20;
	pEstud = pComun - pEstud;
	pJubilado = pComun*0.40;
	pJubilado = pComun - pJubilado;
	acumEst = 0; total = 0; minSubTotal = 999999999;
	cout << "Ingrese número de colectivo: ";
	cin >> nroColec;
	while (nroColec != 99)
	{
		cout << "Ingrese cantidad boletos de estudiantes: ";
		cin >> cantBolEst;
		cout << "Ingrese cantidad boletos comunes: ";
		cin >> cantBolCom;
		cout << "Ingrese cantidad boletos de jubilados: ";
		cin >> cantBolJub;
		tComun = pComun*cantBolCom;
		tEstud = pEstud*cantBolEst;
		tJubilado = pJubilado*cantBolJub;
		subtotal = tComun + tEstud + tJubilado;
		cout << "Total recaudado del recorrido: $ " << subtotal << endl;
		cout << "-----------------------------------------------" << endl;
		acumEst += cantBolEst;
		if (subtotal < minSubTotal)
		{
			minSubTotal = subtotal;
			minNroColec = nroColec;
		}
		total += subtotal;
		cout << "Ingrese número de colectivo: ";
		cin >> nroColec;
	}
	cout << "Cantidad de boletos estudiantes vendidos: " << acumEst << endl;
	cout << "Total recaudado en todos los recorridos ingresados: $ " << total << endl;
	cout << "Nro de colectivo que menos recaudó: " << minNroColec << endl;
	cout << "Monto: $ " << minSubTotal;
	return 0;
}

