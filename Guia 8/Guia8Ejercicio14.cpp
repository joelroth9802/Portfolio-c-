#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*Se desea generar un archivo con la información de los alumnos de Fundamentos de
Programación. Para ello se ingresa por cada alumno: documento, apellido y nombre, nota del primer
parcial, nota del segundo parcial. El ingreso se realiza sin ningún tipo de orden. Un nro de
documento igual a 0 indica el fin de datos. La información en el archivo “FUPRO_2.TXT” se quiere
guardar ordenada por nro de documento. En el archivo se guardará nro de documento y apellido y
nombre en un renglón, y las notas de los parciales en otro.
Obs: Si un alumno no rindió un parcial, se ingresó un 0 como nota.*/
void ordenamiento(int dniNotas[][3], string nombres[], int c);//Prototipo
int main(int argc, char *argv[]) {
	ofstream alumnos;//Archivo para escritura
	string nombres[50];
	int dniNotas[50][3], c = 0, a = 1;
	//Carga de datos
	cout << "Ingrese datos de los alumnos: " << endl;
	cout << "Alumno " << a << endl;
	cout << "Nro de documento: ";
	cin >> dniNotas[c][0];
	while (dniNotas[c][0] != 0){
		cin.ignore();
		cout << "Apellido y nombre: ";
		getline(cin, nombres[c]);
		cout << "Nota del primer parcial: ";
		cin >> dniNotas[c][1];
		cout << "Nota del segundo parcial: ";
		cin >> dniNotas[c][2];
		cout << endl;
		c++;
		cout << "Alumno " << ++a << endl;
		cout << "Nro de documento: ";
		cin >> dniNotas[c][0];
	}
	alumnos.open("./FUPRO_2.txt");//Se abre el archivo
	if (alumnos.fail()){
		cout << "Error en la apertura del archivo";
	}
	else{
		ordenamiento(dniNotas, nombres, c);//Llamada de la función
		for (int i = 0;i < c;i++){
			//Se escribe los datos en el archivo
			alumnos << dniNotas[i][0] << " " << nombres[i] << endl;
			alumnos << dniNotas[i][1] << " " << dniNotas[i][2] << endl;
		}
	}
	alumnos.close();//Se cierra el archivo
	return 0;
}
//Función
void ordenamiento(int dniNotas[][3], string nombres[], int c){
	int aux; 
	string aux1;
	for (int i = 0;i < c-1;i++){
		for (int j = i+1;j < c;j++){
			if (dniNotas[i][0] > dniNotas[j][0]){
				for (int k = 0;k < 3;k++){
					aux = dniNotas[i][k];
					dniNotas[i][k] = dniNotas[j][k];
					dniNotas[j][k] = aux;
				}
				aux1 = nombres[i];
				nombres[i] = nombres[j];
				nombres[j] = aux1;
			}
		}
	}
}
