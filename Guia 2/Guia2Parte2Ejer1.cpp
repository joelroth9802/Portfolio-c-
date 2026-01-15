#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int dd, mm, aa, fecha, aux;
	string mes;
	cout << "Ingrese fecha de la forma DDMMAA: ";
	cin >> fecha;
	dd = (fecha/10000);
	aux = fecha - (dd*10000);
	mm = (aux/100);
	aa = aux - (mm*100);
	if (aa <= 24)
	{
		aa += 2000;
	}
	else
	{
		aa += 1900;
	}
	switch (mm)
	{
	case 1: 
		mes = "de enero de";
		break;
	case 2: 
		mes = "de febrero de";
		break;
	case 3: 
		mes = "de marzo de";
		break;
	case 4: 
		mes = "de abril de";
		break;
	case 5: 
		mes = "de mayo de";
		break;
	case 6: 
		mes = "de junio de";
		break;
	case 7: 
		mes = "de julio de";
		break;
	case 8: 
		mes = "de agosto de";
		break;
	case 9: 
		mes = "de septiembre de";
		break;
	case 10: 
		mes = "de octubre de";
		break;
	case 11: 
		mes = "de noviembre de";
		break;
	case 12: 
		mes = "de diciembre de";
		break;
	}
	cout << "---------------------------------------------" << endl;
	cout << "Formato largo: " << dd << " " << mes << " " << aa;
	return 0;
}

