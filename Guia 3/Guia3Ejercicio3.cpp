#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num, n;
	cout << "Ingrese un número entero positivo: ";
	cin >> num;
	cout << "--------------------------------------" << endl;
	n = 0;
	do
	{
		n = n + 1;
		cout << num << " x " << n << " = " << num*n << endl;
	} while(n < 10);
	return 0;
}

