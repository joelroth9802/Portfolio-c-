#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	//Variables
	string asociados[5][3], aux, codasoc, codalfa[5];
	int cuotasoc, serv[5][10] = {}, costserv[10] = {}, codserv, totales[5][3] = {}, aux1;
	//Carga de datos
	cout << "Ingrese importe de la cuota societaria: ";
	cin >> cuotasoc;
	cout << endl;
	cout << "Ingrese costos de los 10 servicios que presta la mutual:" << endl;
	cout << endl;
	//Costos de cada servicio
	for (int i = 0;i < 10;i++)
	{
		cout << "Servicio " << i+1 << endl;
		cout << "Costo: ";
		cin >> costserv[i];
		cout << endl;
	}
	cout << "Ingrese datos de los asociados: " << endl;
	cout << endl;
	cin.ignore();
	//Datos de cada asociado
	for (int i = 0;i < 5;i++)
	{
		cout << "Asociado " << i+1 << endl;
		cout << "Código del asociado: ";
		getline(cin, asociados[i][0]);
		cout << "Apellido y nombre: ";
		getline(cin, asociados[i][1]);
		cout << "Código de plan (PS200: Plan Senior - PJ500: Plan Joven): ";
		getline(cin, asociados[i][2]);
		codalfa[i] = asociados[i][0];//Se traspasa el codigo de asociado a otro arreglo para que no se le aplique el ordenamiento
		cout << endl;
	}
	cout << "Ingrese las cargas de las atenciones de los asociados en la mutual: " << endl;
	cout << "Ingrese (zzz) para finalizar con la carga de datos." << endl;
	cout << "Código de asociado: ";
	getline(cin, codasoc);
	while (codasoc != "zzz")
	{
		//Verificación para saber si el código de asociado se encuentra en el arreglo
		int i = 0;
		for (i = 0;(i < 5) && (codasoc != asociados[i][0]);i++)
			;
		if (i < 5)
		{
			cout << "Código de servicio utilizado (del 1 al 10): ";
			cin >> codserv;
			--codserv;
			//Acumulador para cada servicio requerido para cada asociado
			serv[i][codserv]++;
			//Si el plan del asociado es Plan Joven, se aplica el descuento
			if (asociados[i][2] == "PJ500")
			{
				totales[i][0] = cuotasoc*0.75;
			}
			else
			{
				totales[i][0] = cuotasoc;
			}
			totales[i][1] += costserv[codserv];//Acumulador del costo de servicios para cada asociado
			totales[i][2] += costserv[codserv];//Acumulador del para el total a cobrar para cada asociado
			cin.ignore();
		}
		else
		{
			cout << "El código de asociado ingresado no se encuentra en la base de datos." << endl;
		}
		cout << endl;
		cout << "Código de asociado: ";
		getline(cin, codasoc);
	}
	//Ordenamiento según el nombre de forma ascendente
	for (int i = 0;i < (5-1);i++)
	{
		for (int j = i+1;j < 5;j++)
		{
			if (asociados[i][1] < asociados[j][1])
			{
				for (int k = 0;k < 3;k++)
				{
					aux = asociados[i][k];
					asociados[i][k] = asociados[j][k];
					asociados[j][k] = aux;
				}
				for (int k = 0;k < 10;k++)
				{
					aux1 = serv[i][k];
					serv[i][k] = serv[j][k];
					serv[j][k] = aux1;
				}
			}
		}
	}
	//Informe
	cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "COD. ASOC" << setw(27) << "APELLIDO Y NOMBRE" << setw(12) << "PLAN" << setw(10) << "S.1" << setw(10) << "S.2" << setw(10) << "S.3" << setw(10) << "S.4" << setw(10) << "S.5" << setw(10) << "S.6" << setw(10) << "S.7" << setw(10) << "S.8" << setw(10) << "S.9" << setw(10) << "S.10" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << asociados[i][0] << setw(30) << asociados[i][1] << setw(12) << asociados[i][2] << setw(10) << serv[i][0] << setw(10) << serv[i][1] << setw(10) << serv[i][2] << setw(10) << serv[i][3] << setw(10) << serv[i][4] << setw(10) << serv[i][5] << setw(10) << serv[i][6] << setw(10) << serv[i][7] << setw(10) << serv[i][8] << setw(10) << serv[i][9] << endl;
	}
	cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "COD. ASOC" << setw(25) << "VALOR CUOTA" << setw(30) << "TOTAL POR SERVICIOS" << setw(30) << "TOTAL A COBRAR" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << codalfa[i] << setw(28) << totales[i][0] << setw(30) << totales[i][1] << setw(30) << totales[i][2] + totales[i][0] << endl;
	}
	return 0;
}

