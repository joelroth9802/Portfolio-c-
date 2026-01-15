#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
/*Se desea procesar la información contenida en el archivo “CENSO.TXT”.
A - Un listado ordenado de mayor a menor por cantidad de hectáreas cosechas en un año.
B - El rendimiento promedio obtenido por hectárea por cada productor
C - Generar un archivo “RENDIMIENTOS.TXT” con la información de los productores que hayan
obtenido rendimientos mayores al promedio.*/
//Prototipos
void ordenamiento(float valores[][3], int nProd);
void rendimiento_prom(float valores[][3], float rend[], int nProd, float &acumRend);
//Main
int main(int argc, char *argv[]) {
	ifstream productores;//Archivo para lectura
	ofstream rendimientos;//Archivo para escritura
	float valores[20][3], rend[20], acumRend = 0, promGen = 0;
	int nProd = 0;
	productores.open("./CENSO.txt");//Se abre archivo
	if (productores.fail()){
		cout << "Error en la apertura del archivo";
	}
	else{
		//Lectura de datos
		productores >> valores[nProd][0];
		while (!productores.eof()){
			productores >> valores[nProd][1];
			productores >> valores[nProd][2];
			nProd++;
			productores >> valores[nProd][0];
		}
	}
	productores.close();//Se cierra archivo
	//Llamadas de las funciones
	ordenamiento(valores, nProd);
	rendimiento_prom(valores, rend, nProd, acumRend);
	promGen = acumRend/nProd;//Promedio general de los rendimientos
	rendimientos.open("./RENDIMIENTOS.txt");//Se abre archivo para escritura
	if (rendimientos.fail()){
		cout << "Error en la apertura del archivo";
	}
	else{
		//Escritura de los datos
		rendimientos << "Informacion de los productores que obtuvieron rendimientos mayor al promedio:" << endl;
		for (int i = 0;i < nProd;i++){
			if (rend[i] > promGen){
				rendimientos << valores[i][0] << " " << valores[i][1] << " " << valores[i][2] << " " << rend[i] << endl;
			}
		}
	}
	rendimientos.close();//Se cierra el archivo
	//Informe
	cout << left  << setw(10) << "Código" << right << setw(20) << "Cant. Hectáreas" << right << setw(20) << "Cant. Toneladas" << right << setw(20) << "Rendimiento" << endl;
	for (int i = 0;i < nProd;i++){
		cout << setw(4) << valores[i][0] << right << setw(20) << valores[i][1] << right << setw(20) << valores[i][2] << right << setw(24) << rend[i] << endl;
	}
	return 0;
}
//Funciones
void rendimiento_prom(float valores[][3], float rend[], int nProd, float &acumRend){
	for (int i = 0;i < nProd;i++){
		rend[i] = valores[i][2]/valores[i][1];
		acumRend += rend[i];
	}
}
void ordenamiento(float valores[][3], int nProd){
	float aux;
	for (int i = 0;i < nProd-1;i++){
		for (int j = i+1;j < nProd;j++){
			if (valores[i][1] < valores[j][1]){
				for (int k = 0;k < 3;k++){
					aux = valores[i][k];
					valores[i][k] = valores[j][k];
					valores[j][k] = aux;
				}
			}
		}
	}
}

