#include <iostream>
using namespace std;
/*Asignación dinamica de arreglos
new: reserva el número de bytes solicitado por la declaración.
delete: Libera un bloque de bytes reservado con anterioridad.

Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinamico.*/
//Prototipo de función
void pedirnotas(int &numCalif, int *&calif);
void mostrarnotas(int numCalif, int *calif);
int main(int argc, char *argv[]) {
	int numCalif, *calif;
	pedirnotas(numCalif, calif);
	mostrarnotas(numCalif, calif);
	delete[] calif;
	return 0;
}
void pedirnotas(int &numCalif, int *&calif){
	cout << "Ingrese el número de calificaciones que desea almacenar: ";
	cin >> numCalif;
	cout << endl;
	calif = new int[numCalif];
	for (int i = 0;i < numCalif;i++){
		cout << "Calificación " << i+1 << ": ";
		cin >> calif[i];
	}
	cout << endl;
}
void mostrarnotas(int numCalif, int *calif){
	cout << "Notas almacenadas: " << endl;
	for (int i = 0;i < numCalif;i++){
		cout << "Nota " << i+1 << ": " << calif[i] << endl;
	}
}
