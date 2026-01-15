#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*Se dispone del archivo EMPLEADOS.CSV. Se requiere:
a) Verificar que la información guardada de cuil sea la correcta. Se sabe que el cuil esta formado por
PP-DDDDDDDD-V, donde PP es un prefijo que vale 20 si el sexo es ‘M’ y 27 si el sexo es ‘F’;
DDDDDDDD es el documento y V es un dígito verificador. Informar por pantalla, el cuil incorrecto.
b) Informar los sueldos promedio de mujeres y varones*/
int main(int argc, char *argv[]) {
	ifstream datos;//Se declara variable para lectura
	int c = 0;
	long long int valores[10][3];
	string sexo[10], aux[100];
	datos.open("./EMPLEADOS.csv");//Se abre el archivo
	if (datos.fail()){
		cout << "Error en la apertura del archivo";
	}
	else{
		//Lectura de datos
		datos >> valores[c][0];
		while (!datos.eof()){
			datos.ignore(1, ';');
			getline(datos, sexo[c]);
			datos.ignore(1, ';');
			datos >> valores[c][1];
			datos.ignore(1, ';');
			datos >> valores[c][2];
			c++;
			datos >> valores[c][0];
		}
	}
	datos.close();//Se cierra el archivo
	int m = 0, f = 0, pref, sueldoF = 0, sueldoM = 0, promF, promM;
	for (int i = 0;i < c;i++){
		//Calculos
		pref = valores[i][2]/100000000;
		if (pref == 20 && sexo[i] == "M"){
			m++;
			sueldoM += valores[i][1];
		}
		if (pref == 27 && sexo[i] == "F"){
			f++;
			sueldoF += valores[i][1];
		}
		if (pref != 20 && pref != 27){
			cout << "El cuil del empleado número " << i+1 << " es incorrecto." << endl;
		}
	}
	promF = sueldoF/f;
	promM = sueldoM/m;
	cout << endl;
	//Informe
	cout << "Promedio de los sueldos de mujeres: " << promF << endl;
	cout << "Promedio de los sueldos de varones: " << promM;
	return 0;
}

