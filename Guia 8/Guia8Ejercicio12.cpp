#include <iostream>
#include <fstream>
using namespace std;
/*En un triatlón participaron N competidores y por cada uno de ellos se tienen: el número de
competidor y los 3 pares de datos con la siguiente información:
- Código de Deporte (1= natación, 2=carrera, 3=bicicleta)
- Tiempo que hizo en ese deporte (en minutos)
Los pares de datos no vienen ordenados por código de deporte.
La cantidad N de participantes se ingresa como primer dato.
Se desea generar 3 archivos: NATACION.TXT, CARRERA.TXT y BICICLETA.TXT. Los archivos
tienen la misma estructura: Cod de competidor (0..N-1), espacio en blanco y Tiempo (en minutos).
Nota: Todos los competidores completaron las 3 pruebas.*/
int main(int argc, char *argv[]) {
	int comp, nroComp, cod, tiempo;
	ofstream natacion, carrera, bicicleta;//Archivos para escritura
	cout << "Ingrese la cantidad de participantes: ";
	cin >> comp;
	cout << endl;
	//Se abren los archivos
	natacion.open("./NATACION.txt");
	carrera.open("./CARRERA.txt");
	bicicleta.open("./BICICLETA.txt");
	if (natacion.fail() || carrera.fail() || bicicleta.fail()){
		cout << "Error en la apertura del archivo";
	}
	else{
		//Carga de datos
		cout << "Datos de los competidores" << endl;
		cout << "Código de deporte: 1 = Natación - 2 = Carrera - 3 = Bicicleta" << endl;
		cout << endl;
		for (int i = 0;i < comp;i++){
			cout << "Competidor " << i+1 << endl;
			cout << "Nro de competidor: ";
			cin >> nroComp;
			for (int j = 0;j < 3;j++){
				cout << "Código de deporte: ";
				cin >> cod;
				if (cod >= 1 && cod <= 3){
					cout << "Tiempo de finalización en minutos: ";
					cin >> tiempo;
					//Depende el código, se hace la escritura correspondiente en el archivo
					switch (cod){
					case 1: natacion << nroComp << " " << tiempo << endl;
					break;
					case 2: carrera << nroComp << " " << tiempo << endl;
					break;
					case 3: bicicleta << nroComp << " " << tiempo << endl;
					break;
					}
					cout << endl;
				}
				else{
					//Si el código ingresado es incorrecto, se vuelve a iterar el bucle
					cout << "El código ingresado es incorrecto" << endl;
					j--;
					cout << endl;
				}
			}
		}
	}
	//Se cierran los archivos
	natacion.close();
	carrera.close();
	bicicleta.close();
	return 0;
}

