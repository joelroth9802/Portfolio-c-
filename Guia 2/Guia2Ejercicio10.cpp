#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float ant, montAnt, sueltotal, sueldob;
	int cat;
	string nya;
	cout << "Ingrese apellido y nombre: ";
	getline(cin, nya);
	cout << "Ingrese categoria: ";
	cin >> cat;
	cout << "Ingrese antigüedad: ";
	cin >> ant;
	switch (cat)
	{
		case 1: sueldob = 60000;
	    break;
	    case 2: sueldob = 50000;
	    break;
	    case 3: sueldob = 40000;
	    break;
	    case 4: sueldob = 30000;
		break;
	}
	if ((ant > 0) && (ant <= 10))
	{
		montAnt = sueldob*0.20;
		sueltotal = sueldob + montAnt;
	}
	else
	{
		if ((ant >= 11) && (ant <= 15))
		{
			montAnt = sueldob*0.50;
			sueltotal = sueldob + montAnt;
		}
		else
		{
			if ((ant >= 16) && (ant <= 20))
			{
				montAnt = sueldob*0.80;
				sueltotal = sueldob + montAnt;
			}
		}
	}
	cout << "--------------------------------------" << endl;
	cout << "Categoria: " << cat << setw(30) << "Sueldo básico: $ " << sueldob << endl;
	cout << "Antigüedad: " << ant << " años" << setw(26) << "Monto antigüedad: $ " << montAnt << endl;
	cout << "Sueldo total: $ " << sueltotal;
	return 0;
}

