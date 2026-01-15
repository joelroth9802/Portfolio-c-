#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/*Una cooperadora desea obtener la nómina de personas que han adquirido un bono
contribución, numerados del 1 al 100. Para ello se ingresan los nombres de cada una de las
100 personas que compraron dicho bono, ordenados por número de bono. Se quiere mostrar
al finalizar la carga, un listado con el siguiente formato;
NRO BONO PERSONA QUE ADQUIRIÓ EL BONO
1 XXXXXXXXXXXXXXXXX
2 XXXXXXXXXXXXXXXXX*/
int main(int argc, char *argv[]) {
	string personas[100];int c;
	cout << "Ingrese los nombres de las personas con posesión de bonos: " << endl;
	c = 0;
	//Leer los nombres de las personas
	for (int i = 0;i < 100;i++)
	{
		cout << "Nro Bono " << ++c << ": ";
		getline(cin, personas[i]);
	}
	cout << "---------------------------------------------" << endl;
	//Mostrar listado de los nombres con nro de bono
	c = 0;
	cout << "NRO BONO" << setw(30) << "PERSONA QUE ADQUIRIO EL BONO" << endl;
	for (int i = 0;i < 100;i++)
	{
		cout << setw(3) << ++c << setw(26) << personas[i] << endl;
	}
	return 0;
}

