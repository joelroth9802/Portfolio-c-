#include <iostream>
#include <string>
using namespace std;
/*Dadas 3 cadenas de caracteres, ordenarlas de acuerdo a su largo.*/
int main(int argc, char *argv[]) {
	string cadena1, cadena2, cadena3; int long1, long2, long3;
	cout << "Ingrese 3 cadenas de caracteres: " << endl;
	getline(cin, cadena1);
	getline(cin, cadena2);
	getline(cin, cadena3);
	long1 = cadena1.size();
	long2 = cadena2.size();
	long3 = cadena3.size();
	cout << "-----------------------------------------------------" << endl;
	if ((long1 > long2) && (long1 > long3) && (long2 > long3))
	{
		cout << cadena1 << endl;
		cout << cadena2 << endl;
		cout << cadena3;
	}
	else
	{
		if ((long1 > long2) && (long1 > long3) && (long3 > long2))
		{
			cout << cadena1 << endl;
			cout << cadena3 << endl;
			cout << cadena2;
		}
		else
		{
			if ((long2 > long1) && (long2 > long3) && (long1 > long3))
			{
				cout << cadena2 << endl;
				cout << cadena1 << endl;
				cout << cadena3;
			}
			else
			{
				if ((long2 > long1) && (long2 > long3) && (long3 > long1))
				{
					cout << cadena2 << endl;
					cout << cadena3 << endl;
					cout << cadena1;
				}
				else
				{
					if ((long3 > long1) && (long3 > long2) && (long1 > long2))
					{
						cout << cadena3 << endl;
						cout << cadena1 << endl;
						cout << cadena2;
					}
					else
					{
						if ((long3 > long1) && (long3 > long2) && (long2 > long1))
						{
							cout << cadena3 << endl;
							cout << cadena2 << endl;
							cout << cadena1;
						}
					}
				}
			}
		}
	}
	return 0;
}

