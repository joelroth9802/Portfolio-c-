#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string nom1, nom2, nom3;
	cout << "Ingrese 3 nombres: " << endl;
	cout << "Nombre 1: ";
	getline(cin, nom1);
	cout << "Nombre 2: ";
	getline(cin, nom2);
	cout << "Nombre 3: ";
	getline(cin, nom3);
	cout << "-----------------------------" << endl;
	if ((nom1 <= nom2) && (nom1 <= nom3))
	{
		cout << nom1 << endl;
		if (nom2 <= nom3)
		{
			cout << nom2 << endl;
			cout << nom3;
		}
		else
		{
			cout << nom3 << endl;
			cout << nom2;
		}
	}
	if ((nom2 <= nom1) && (nom2 <= nom3))
	{
		cout << nom2 << endl;
		if (nom1 <= nom3)
		{
			cout << nom1 << endl;
			cout << nom3;
		}
		else
		{
			cout << nom3 << endl;
			cout << nom1;
		}
	}
	if ((nom3 <= nom1) && (nom3 <= nom2))
	{
		cout << nom3 << endl;
		if (nom1 <= nom2)
		{
			cout << nom1 << endl;
			cout << nom2;
		}
		else
		{
			cout << nom2 << endl;
			cout << nom1;
		}
	}
	return 0;
}

