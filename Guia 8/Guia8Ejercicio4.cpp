#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
/*El club del ejercicio anterior decide realizar un control estadístico de la cantidad de veces que han
estado detenidos sus integrantes. Para ello use el archivo BARRAS.TXT generado en el ejercicio
anterior.
Informar de acuerdo al siguiente informe:
Cantidad de Detenciones Cantidad de integrantes
1                              XXXX
2 – 4                          XXXX
5 – 10                         XXXX
más de 10                      XXXX
Cantidad de integrantes de la barra: XXXX
Desean conocer además el apodo del integrante que más detenciones ostenta*/
//Prototipos
void cantidades(int detenciones[], int cant[], int c);
string max_detenciones(int detenciones[], string apodos[], int c);
int main(int argc, char *argv[]) {
	//Variables
	int cant[4] = {}, c = 0, detenciones[20];
	string valores[4] = {"1","2 - 4","5 - 10","más de 10"};
	string apodos[20];
	ifstream archivo;
	archivo.open("BARRAS.txt");//Se abre el archivo
	if (archivo.fail())
	{
		cout << "Error en la apertura del archivo";
	}
	else
	{
		//Lectura de datos
		getline(archivo,apodos[c],'|');
		while (!archivo.eof())
		{
			archivo >> detenciones[c];
			archivo.ignore();
			c++;
			getline(archivo,apodos[c],'|');
		}
	}
	archivo.close();//Se cierra el archivo
	cantidades(detenciones, cant, c);//Llamada de la función para acumular las cantidades
	//Informe
	cout << "Cantidad de Detenciones" << setw(30) << "Cantidad de integrantes" << endl;
	for (int i = 0;i < 4;i++)
	{
		cout << setw(11) << valores[i] << setw(30) << cant[i] << endl;
	}
	cout << endl;
	cout << "Cantidad de integrantes de la barra: " << c << endl;
	//Llamada de la función para calcular el máximo de detenciones
	cout << "Apodo del integrante que más detenciones ostenta: " << max_detenciones(detenciones, apodos, c);
	return 0;
}
//Funciones
void cantidades(int detenciones[], int cant[], int c){
	for (int i = 0;i < c;i++)
	{
		if (detenciones[i] == 1)
		{
			cant[0]++;
		}
		else
		{
			if ((detenciones[i] >= 2) && (detenciones[i] <= 4))
			{
				cant[1]++;
			}
			else
			{
				if ((detenciones[i] >= 5) && (detenciones[i] <= 10))
				{
					cant[2]++;
				}
				else
				{
					cant[3]++;
				}
			}
		}
	}
}
string max_detenciones(int detenciones[], string apodos[], int c){
	string maxApod;
	int maxDet = 0;
	for (int i = 0;i < c;i++)
	{
		if (detenciones[i] > maxDet)
		{
			maxDet = detenciones[i];
			maxApod = apodos[i];
		}
	}
	return maxApod;
}
