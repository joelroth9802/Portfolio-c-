#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	string prop, marca;
	int mode, diaven, mesven, anioven;
	float imp, desc;
	long aval;
	cout << "Ingrese el propietario del auto: ";
	getline(cin, prop);
	cout << "Ingrese la marca del auto: ";
	getline(cin, marca);
	cout << "Ingrese el modelo del auto: ";
	cin >> mode;
	cout << "Ingrese el valor del auto: ";
	cin >> aval;
	cout << "Ingrese la fecha de vencimiento: ";
	cin >> diaven >> mesven >> anioven;
	imp = aval*0.3;
	imp /= 4;
	desc = imp - (imp*0.10);
	cout << "Propietario: " << prop << endl; 
	cout << "Marca: " << marca << setw(24) << "Modelo: " << mode << setw(41) << "Avaluo: $ " << aval << endl;
	cout << "Impuesto: $ " << imp << setw(30) << "Pago en termino: $ " << desc << setw(30) << "Fec.Venc: " << diaven << "/" << mesven << "/" << anioven;
	return 0;
}

