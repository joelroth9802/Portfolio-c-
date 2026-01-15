#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b;
	cout << "Ingrese 2 números: ";
	cin >> a >> b;
	cout << "-------------------------------------" << endl;
	while (a <= b)
	{
		cout << a << endl;
		a++;
	}
	return 0;
}

