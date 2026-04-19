#include <iostream>
using namespace std;
/* &n = La direccion de n, me muestra la primera direccion de memoria y me lo muestra en hexadecimal.
*n = la variable cuya direccion esta almacenada en n. El operador * antepuesto a una vaiable de apuntador produce la variable a la que apunta.
Se llama operador de desreferenciación.*/
int main(int argc, char *argv[]) {
	int num, *dir_num;
	
	num = 20;
	dir_num = &num;//Establece a dir_num de modo que apunte a la variable num
	
	cout << "Número: " << *dir_num << endl;// Quiero que me imprima lo que encuentre en la dirección de memoria que le he pasado
	cout << "Dirección de memoria: " << dir_num;// Sin el asterisco me dice la direccion de memoria
	return 0;
}

