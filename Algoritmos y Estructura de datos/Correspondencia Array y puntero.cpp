#include <iostream>
using namespace std;
//Correspondencia entre arreglos y punteros
int main(int argc, char *argv[]) {
	int numeros[] = {1,2,3,4,5};
	int *dir_num;//Creamos variable tipo puntero
	
	dir_num = numeros;//Guardamos la dirección de memoria del primer elemento del vector, osea lo guardamos en dir_num
	
	for (int i = 0;i < 5;i++){
		//Imprimimos el contenido que se encuentra en la direccion de memoria del primer elemento del vector, y le aumentamos 4 bytes (int)
		//para que muestre el segundo elemento del vector y asu sucesivamente.
		cout << "Elemento del vector " << i << ": " << *dir_num++ << endl;
	}
	return 0;
}

