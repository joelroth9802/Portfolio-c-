#include <iostream>
using namespace std;
/*Asignación dinamica de arreglos
new: reserva el número de bytes solicitado por la declaración.
delete: Libera un bloque de bytes reservado con anterioridad.
¡¡¡ USANDO typedef !!!
Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinamico.*/
//Podemos asignar un nombre a una definición de tipo y luego usar el nombre de tipo para declarar variables
typedef int* Apuntint;
//Prototipo de función
void pedirnotas(int &numCalif, Apuntint &calif);
void mostrarnotas(int numCalif, Apuntint calif);
int main(int argc, char *argv[]) {
	int numCalif; 
	//El nombre de tipo Apuntint se puede usar entonces para declarar apuntadores a variables dinámicas de tipo int
	//Ejemplo: Apuntint apuntadaor1, apuntador2; seria lo mismo que int *apuntador1, *apuntador2;
	Apuntint calif;
	pedirnotas(numCalif, calif);
	mostrarnotas(numCalif, calif);
	delete[] calif;
	return 0;
}
void pedirnotas(int &numCalif, Apuntint &calif){
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
	void mostrarnotas(int numCalif, Apuntint calif){
		cout << "Notas almacenadas: " << endl;
		for (int i = 0;i < numCalif;i++){
			cout << "Nota " << i+1 << ": " << calif[i] << endl;
		}
	}
