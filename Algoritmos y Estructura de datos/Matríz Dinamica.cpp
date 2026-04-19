#include <iostream>
using namespace std;
//Prototipos
void pedirDatos(int **&puntero_matriz, int &nFilas, int &nCol);
void mostrarMatriz(int **puntero_matriz, int nFilas, int nCol);
int main(int argc, char *argv[]) {
	int **puntero_matriz, nFilas, nCol;
	pedirDatos(puntero_matriz, nFilas, nCol);
	mostrarMatriz(puntero_matriz, nFilas, nCol);
	//Liberar memoria que hemos utilizado en la matriz
	//Destruir primero las columnas
	for (int i = 0;i < nFilas;i++){
		delete[] puntero_matriz[i];
	}
	//Destrir finalmente el arreglo de punteros
	delete[] puntero_matriz;
	return 0;
}
void pedirDatos(int **&puntero_matriz, int &nFilas, int &nCol){
	cout << "Digite el número de filas: ";
	cin >> nFilas;
	cout << "Digite el número de columnas: ";
	cin >> nCol;
	cout << endl;
	//Reservar memoria para la matriz dinamica
	puntero_matriz = new int*[nFilas];//Reservando memoria para las filas
	for (int i = 0;i < nFilas;i++){
		puntero_matriz[i] = new int[nCol];//Reservando memoria para las columnas
	}
	cout << "Digitando elementos de la matriz: " << endl;
	for (int i = 0;i < nFilas;i++){
		cout << "Fila " << i+1 << ":" << endl;
		for (int j = 0;j < nCol;j++){
			cout << "Columna " << j+1 << ": ";
			cin >> puntero_matriz[i][j];
		}
		cout << endl;
	}
}
void mostrarMatriz(int **puntero_matriz, int nFilas, int nCol){
	for (int i = 0;i < nFilas;i++){
		cout << "Fila " << i+1 << ": ";
		for (int j = 0;j < nCol;j++){
			cout << puntero_matriz[i][j] << ' ';
		}
		cout << endl;
	}
}
