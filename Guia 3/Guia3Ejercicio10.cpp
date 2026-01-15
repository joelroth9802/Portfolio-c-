#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	int cont, num, val;
	cont = 0;
	cout << "Ingrese un número de 0 a 999 para la detención: ";
	cin >> val;
	srand(time(NULL));
	do
	{
		cont++;
		num = (rand() % 999) + 1;
		cout << num << endl;
	} while(num != val);
	cout << "----------------------------------------" << endl;
	cout << "Cantidad de números generados: " << cont;
	return 0;
}

