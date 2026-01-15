#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int comun, est, cantest, cantcomun, canttrab, trab;
	int comunI, comunF, estI, estF, trabI, trabF, total;
	cout << "Ingrese el precio del boleto estudiante: ";
	cin >> est;
	cout << "---------------Boletos comunes-------------------" << endl;
	cout << "Numeración inicial: ";
	cin >> comunI;
	cout << "Numeración final: ";
	cin >> comunF;
	cout << "---------------Boletos estudiantes---------------" << endl;
	cout << "Numeración inicial: ";
	cin >> estI;
	cout << "Numeración final: ";
	cin >> estF;
	cout << "---------------Boletos trabajadores---------------" << endl;
	cout << "Numeración inicial: ";
	cin >> trabI;
	cout << "Numeración final: ";
	cin >> trabF;
	cantcomun = comunF - comunI;
	cantest = estF - estI;
	canttrab = trabF - trabI;
	comun = est*2;
	trab = comun*0.40;
	total = (cantcomun*comun) + (cantest*est) + (canttrab*trab);
	cout << "--------------------------------------------------" << endl;
	cout << "Cantidad de boletos comunes vendidos: " << cantcomun << endl;
	cout << "Cantidad de boletos de estudiantes vendidos: " << cantest << endl;
	cout << "Cantidad de boletos de trabajadores vendidos: " << canttrab << endl;
	cout << "Total recaudado: $ " << total;
	return 0;
}

