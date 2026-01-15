#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*Se desea generar un archivo “FUPRO_3.TXT”, actualizando la información del archivo
“FUPRO_2.TXT” luego de rendido el tercer parcial. Por cada alumno que rindió el parcial se ingresa:
nro de documento y nota. Un nro de documento igual a 0 indica el fin de datos. La carga de datos
se realiza sin orden. En el archivo se guardará nro de documento y apellido y nombre en un renglón,
y las notas de los tres parciales en otro.
Realizar una función llamada busqueda_binaria para encontrar el registro correspondiente al
documento ingresado.*/
//Prototipos
void busqueda_binaria(int dni[][2],int dniNotas[][3], int j, int c, ofstream &archivo2);
void ordenamiento(int dni[][2], int i);
//Main
int main(int argc, char *argv[]) {
	ifstream archivo1;//Archivo para lectura
	ofstream archivo2;//Archivo para escritura
	string nombres[50];
	int dni[50][2], dniNotas[50][3], i = 0, a = 1, c = 0;
	//Carga de datos
	cout << "Ingrese datos de los alumnos: " << endl;
	cout << "Alumno " << a << endl;
	cout << "Nro de documento: ";
	cin >> dni[i][0];
	while (dni[i][0] != 0){
		cout << "Nota del tercer parcial: ";
		cin >> dni[i][1];
		i++;
		cout << endl;
		cout << "Alumno " << ++a << endl;
		cout << "Nro de documento: ";
		cin >> dni[i][0];
	}
	ordenamiento(dni, i);//Función para el ordenar los documentos
	cout << endl;
	archivo1.open("./FUPRO_2.txt");//Se abre el archivo
	if (archivo1.fail()){
		cout << "Error en la apertura del archivo";
	}
	else{
		//Lectura de datos
		archivo1 >> dniNotas[c][0];
		while (!archivo1.eof()){
			archivo1.ignore();
			getline(archivo1, nombres[c]);
			archivo1 >> dniNotas[c][1];
			archivo1 >> dniNotas[c][2];
			c++;
			archivo1 >> dniNotas[c][0];
		}
	}
	archivo1.close();//Se cierra el archivo
	archivo2.open("./FUPRO_3.txt");//Se abre el 2do achivo
	if (archivo2.fail()){
		cout << "Error en la apertura del archivo";
	}
	else{
		//Se escriben los datos del primer archivo en el 2do
		for (int j = 0;j < c;j++){
			archivo2 << dniNotas[j][0] << " " << nombres[j] << endl;
			archivo2 << dniNotas[j][1] << " " << dniNotas[j][2] << " ";
			//Llamada de la función para la busqueda binaria
			busqueda_binaria(dni, dniNotas, j, c, archivo2);
		}
	}
	return 0;
}
//Función ordenamiento
void ordenamiento(int dni[][2], int i){
	int aux;
	for (int j = 0;j < i-1;j++){
		for (int k = j+1;k < i;k++){
			if (dni[j][0] > dni[k][0]){
				for (int m = 0;m < 2;m++){
					aux = dni[j][m];
					dni[j][m] = dni[k][m];
					dni[k][m] = aux;
				}
			}
		}
	}
}
//Función busqueda binaria, se pasa el archivo por parametro
void busqueda_binaria(int dni[][2],int dniNotas[][3], int j, int c, ofstream &archivo2){
	int li = 0, ls = c - 1, medio = (li + ls)/2;
	while (li <= ls && dni[j][0] != dniNotas[medio][0]){
		if (dni[j][0] < dniNotas[medio][0])
			ls = medio - 1;
		else li = medio + 1;
		medio = (li + ls)/2;
	}
	if (li > ls){
		cout << "Error: no se encontro el registro correspondiente para el documento: " << dni[j][0] << endl;
	}
	else{
		//Si se encontro el documento ingresado en el vector, se ingresa la nota del tercer parcial en el archivo
		archivo2 << dni[j][1] << endl;
	}
}

