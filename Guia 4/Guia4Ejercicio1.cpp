#include <iostream>
#include <string>
using namespace std;
/*Dadas 3 cadenas de caracteres, ordenarlas de acuerdo a su orden alfabético.*/
int main(int argc, char *argv[]) {
	string palabra1, palabra2, palabra3;
	cout << "Ingrese 3 palabras:" << endl;
	getline(cin, palabra1);
	getline(cin, palabra2);
	getline(cin, palabra3);
	cout << "---------------------------------------" << endl;
	if ((palabra1 < palabra2) && (palabra1 < palabra3) && (palabra2 < palabra3))
	{
		cout << palabra1 << endl;
		cout << palabra2 << endl;
		cout << palabra3 << endl;
	}
	else
    {
		if ((palabra1 < palabra2) && (palabra1 < palabra3) && (palabra3 < palabra2))
		{
			cout << palabra1 << endl;
			cout << palabra3 << endl;
			cout << palabra2 << endl;
		}
		else
		{
			if ((palabra2 < palabra1) && (palabra2 < palabra3) && (palabra1 < palabra3))
			{
				cout << palabra2 << endl;
				cout << palabra1 << endl;
				cout << palabra3 << endl;
			}
			else
			{
				if ((palabra2 < palabra1) && (palabra2 < palabra3) && (palabra3 < palabra1))
				{
					cout << palabra2 << endl;
					cout << palabra3 << endl;
					cout << palabra1 << endl;
				}
				else
		        {
					if ((palabra3 < palabra1) && (palabra3 < palabra2) && (palabra1 < palabra2))
					{
						cout << palabra3 << endl;
						cout << palabra1 << endl;
						cout << palabra2 << endl;
					}
					else
					{
						if ((palabra3 < palabra1) && (palabra3 < palabra2) && (palabra2 < palabra1))
						{
							cout << palabra3 << endl;
							cout << palabra2 << endl;
							cout << palabra1 << endl;
						}
					}
				}
			}
		}
	}
	
	return 0;
}

