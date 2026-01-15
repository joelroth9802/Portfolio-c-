#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	long preLeche, preBot, codCC, cantLeche, cantBot, subLeche, subBot, subtotal, montoLeche, montoBot;
	long totLeche, totBot, total, maxtotLeche, maxCodCC, ant, cont, cont2;
	cout << "Ingrese el precio unitario de la leche en polvo: ";
	cin >> preLeche;
	cout << "Ingrese el precio unitario de la botella de aceite: ";
	cin >> preBot;
	cout << "Ingrese código del centro comunitario: ";
	cin >> codCC;
	totLeche = 0; totBot = 0; total = 0; maxtotLeche = 0; cont2 = 0;
	while (codCC != 0)
	{
		ant = codCC; cont = 0; subLeche = 0; subBot = 0; subtotal = 0;
		while (codCC == ant)
		{
			cont++;
			cout << "Pedido " << cont << endl;
			cout << "Ingrese cantidad de cajas de leche en polvo: ";
			cin >> cantLeche;
			cout << "Ingrese cantidad de botellas de aceite: ";
			cin >> cantBot;
			montoLeche = preLeche*cantLeche;
			montoBot = preBot*cantBot;
			subLeche += cantLeche;
			subBot += cantBot;
			subtotal += montoLeche + montoBot;
			cout << "----------------------------------------------" << endl;
			cout << "PROGRAMA ALIMENTARIO PARA CENTROS COMUNITARIOS" << endl;
			cout << "CC" << setw(30) << "CANT. CAJAS LECHE" << setw(30) << "CANT. BOT. ACEITE" << setw(30) << "MONTO TOTAL ($)" << endl;
			cout << ant << setw(23) << subLeche << setw(28) << subBot << setw(30) << "$ " << subtotal << endl;
			cout << "----------------------------------------------" << endl;
			cout << "Ingrese código del centro comunitario: ";
			cin >> codCC;
		}
		if (subLeche > maxtotLeche)
		{
			maxtotLeche = subLeche;
			maxCodCC = ant;
		}
		if (subtotal > 30000)
		{
			cont2++;
		}
		totLeche += subLeche;
		totBot += subBot;
		total += subtotal;
	}
	cout << "------------------------------------------------------" << endl;
	cout << "TOTALES" << setw(30) << "CANT. CAJAS LECHE" << setw(30) << "CANT. BOT. ACEITE" << setw(30) << "MONTO TOTAL ($)" << endl;
	cout << setw(28) << totLeche << setw(30) << totBot << setw(30) << "$ " << total << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Centro comunitario que más cajas de leche recibió: " << maxCodCC << endl;
	cout << "Centros comunitarios que gastaron más de $30000: " << cont2;
	return 0;
}

