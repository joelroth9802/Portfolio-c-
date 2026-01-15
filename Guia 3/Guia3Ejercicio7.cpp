#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int c, num, aux;
	cout << "Ingrese un número para saber el factorial: ";
	cin >> num;
	cout << "---------------------------------------------" << endl;
	c = 1; aux = 1;
	if (num > 0)
	{
		do
		{
			c += 1;
			aux *= c;
		} while(c < num);
		cout << "El factor de " << num << " es " << aux;
	}
	else
	{
		cout << "El número ingresado es negativo";
	}
	return 0;
}

