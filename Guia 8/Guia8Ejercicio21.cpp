#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*Se dispone de la información de un grupo de empleados de una empresa. Se desea generar un
archivo de texto que contenga: dni ; sexo (‘M’ o ‘F’) ; sueldo ; cuil. Los datos se ingresan sin orden.
Un DNI igual a 0 indica el fin de datos.
El archivo se debe llamar EMPLEADOS.CSV. La información de cada empleado se graba en un
mismo renglón, separado por ;*/
int main(int argc, char *argv[]) {
	ofstream datos;//Se declara archivo para escritura
	//Variables
	int dni, sueldo; 
	long long int cuil;
	string sexo;
	datos.open("./EMPLEADOS.csv");//Se abre el archivo
	if (datos.fail()){
		cout << "Error en la apertura del archivo";
	}
	else{
		int c = 1;
		//Carga de datos en el archivo
		cout << "Ingrese los datos de los empleados:" << endl;
		cout << "Empleado " << c << endl;
		cout << "DNI: ";
		cin >> dni;
		while (dni != 0){
			cin.ignore();
			cout << "Sexo (M o F): ";
			getline(cin, sexo);
			cout << "Sueldo: ";
			cin >> sueldo;
			cout << "Cuil: ";
			cin >> cuil;
			datos << dni << ';' << sexo << ';' << sueldo << ';' << cuil << endl;
			cout << endl;
			cout << "Empleado " << ++c << endl;
			cout << "DNI: ";
			cin >> dni;
		}
	}
	datos.close();//Se cierra el archivo
	return 0;
}

