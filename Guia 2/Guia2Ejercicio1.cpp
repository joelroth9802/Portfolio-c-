#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1, n2;
	cout << "Ingrese 2 números: ";
	cin >> n1 >> n2;
	cout << "----------------------" << endl;
	if (n1 > n2)
	{
		cout << "Número menor: " << n2 << " Número mayor: " << n1;
	}
	else
	{
		if (n1 < n2)
		{
			cout << "Número menor: " << n1 << " Número mayor: " << n2;
		}
		else
		{
			cout << "Los números son iguales";
		}
	}
	return 0;
}

