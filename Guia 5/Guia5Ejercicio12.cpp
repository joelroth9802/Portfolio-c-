#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/*Un centro pluviométrico desea agrupar las lluvias en rangos, de acuerdo a los milímetros
llovidos, a saber: [0..100), [100..200), [200..300), [300..400), [400..500) [500 y mayores].
Por cada lluvia producida se ingresa: cantidad de milímetros, ciudad. Se desea informar para
cada rango de valores: la cantidad de lluvias, la máxima cantidad llovida y en qué ciudad se
produjo.
El fin de datos se da cuando se ingresa una cantidad de mm igual a 0.*/
int main(int argc, char *argv[]) {
	//Se declaran las variables y matrices
	int valores[6][2], cantmil;
	string desc[6][2], ciudad;
	//Se inicializan los contadores en 0 con un for
	for(int i = 0;i < 6;i++)
	{
		valores[i][0] = 0;
		valores[i][1] = 0; //Variable para saber el máximo
	}
	//Se cargan los rangos en la primer columna
	desc[0][0] = "[ 0 ..100)";
	desc[1][0] = "[100..200)";
	desc[2][0] = "[200..300)";
	desc[3][0] = "[300..400)";
	desc[4][0] = "[400..500)";
	desc[5][0] = "[500.. + ]";
	//Se cargan los datos mediante un bucle while y se agrupan los valores en cada rango
	cout << "Ingrese cantidad de milímetros llovidos: ";
	cin >> cantmil;
	while (cantmil != 0)
	{
		cin.ignore();
		cout << "Ingrese ciudad en la que se produjo la lluvia: ";
		getline(cin, ciudad);
		//Mediante if anidados se procede a la acumulacion de contadores y maximos dependiendo las cantidades de milímetros llovidos
		if ((cantmil >= 0) && (cantmil < 100))
		{
			valores[0][0]++;
			if (cantmil > valores[0][1])
			{
				valores[0][1] = cantmil;
				desc[0][1] = ciudad;
			}
		}
		else
		{
			if ((cantmil >= 100) && (cantmil < 200))
			{
				valores[1][0]++;
				if (cantmil > valores[1][1])
				{
					valores[1][1] = cantmil;
					desc[1][1] = ciudad;
				}
			}
			else
			{
				if ((cantmil >= 200) && (cantmil < 300))
				{
					valores[2][0]++;
					if (cantmil > valores[2][1])
					{
						valores[2][1] = cantmil;
						desc[2][1] = ciudad;
					}
				}
				else
				{
					if ((cantmil >= 300) && (cantmil < 400))
					{
						valores[3][0]++;
						if (cantmil > valores[3][1])
						{
							valores[3][1] = cantmil;
							desc[3][1] = ciudad;
						}
					}
					else
					{
						if ((cantmil >= 400) && (cantmil < 500))
						{
							valores[4][0]++;
							if (cantmil > valores[4][1])
							{
								valores[4][1] = cantmil;
								desc[4][1] = ciudad;
							}
						}
						else
						{
							if (cantmil >= 500)
							{
								valores[5][0]++;
								if (cantmil > valores[5][1])
								{
									valores[5][1] = cantmil;
									desc[5][1] = ciudad;
								}
							}
						}
					}
				}
			}
		}
		cout << "----------------------------------------------------------------------------------------" << endl;
		cout << "Ingrese cantidad de milímetros llovidos: ";
		cin >> cantmil;
	}
	cout << "----------------------------------------------------------------------------------------" << endl;
	//Se imprime en pantalla mediante un bucle for la carga de datos
	cout << setw(8) << "Rangos" << setw(24) << "Cant.Lluvias" << setw(20) << "Max.Cant" << setw(21) << "Ciudad" << endl;
	for (int i = 0;i < 6;i++)
	{
		cout << desc[i][0] << setw(17) << valores[i][0] << setw(22) << valores[i][1] << setw(25) << desc[i][1] << endl;
	}
	return 0;
}

