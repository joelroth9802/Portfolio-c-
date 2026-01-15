#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	//Variables
	string desc[5];
	int afiliado[5][4], doc, trab, dia, mes, acumgen = 0;
	int meses[5][4] = {}, extrac[5][4] = {}, aux;
	float totales[5][2] = {};
	cout << "Carga de datos de los empleados: " << endl;
	for(int i=0; i<5; i++){
		cout << "Empleado " << i+1 << endl;
		cout<<"Documento: ";
		cin>>afiliado[i][0];
		cout<<"Número de afiliado: ";
		cin>>afiliado[i][1];
		cout<<"Cantidad de extracciones: ";
		cin>>afiliado[i][2];
		cout<<"Cantidad  de arreglos: ";
		cin>>afiliado[i][3];
		extrac[i][0] = afiliado[i][2] + afiliado[i][3];//Acumulador para la cantidad de trabajos
		extrac[i][1] = afiliado[i][0];//Se pasan los documentos a otro arreglo para poder ordenarlos
		cout << endl;
	}
	//Carga de las descripciones de los tipos de trabajos
	desc[0] = "Extracción diente";
	desc[1] = "Extracción molar";
	desc[2] = "Tratamiento de conducto";
	desc[3] = "Arreglo de caries";
	desc[4] = "Tratamiento de raices";
	cout << "Cargas de datos de los trabajos" << endl;
	cout << "Ingrese (0) para finalizar con la carga de datos." << endl;
	cout << "Ingrese nro de documento: ";
	cin >> doc;
	while (doc != 0)
	{
		//Verificación para saber si el documento ingresado se encuentra en el arreglo
		int i = 0;
		for (i = 0;(i < 5) && (doc != afiliado[i][0]);i++)
			;
		if (i < 5)
		{
			cin.ignore();
			cout << "1: Extracción diente - 2: Extracción molar - 3: Tratamiento de conducto - 4: Arreglo de caries - 5: Tratamiento de raices" << endl;
			cout << "Ingrese tipo de trabajo: ";
			cin >> trab;
			cout << "Día: ";
			cin >> dia;
			cout << "Mes del trabajo (de enero a abril): ";
			cin >> mes;
			acumgen++;//Acumulador general de los trabajos
			//Acumulador para las extracciones
			if ((trab == 1) || (trab == 2))
			{
				extrac[i][2]++;
			}
			//Acumulador para los arreglos
			else
			{
				extrac[i][3]++;
			}
			//Acumuladores para los meses
			if (mes == 1)
			{
				meses[i][0]++;
			}
			else
			{
				if (mes == 2)
				{
					meses[i][1]++;
				}
				else
				{
					if (mes == 3)
					{
						meses[i][2]++;
					}
					else
					{
						if (mes == 4)
						{
							meses[i][3]++;
						}
					}
				}
			}
			//Acumuladores para los tipos de trabajos
			if (trab == 1)
			{
				totales[i][0]++;
			}
			else
			{
				if (trab == 2)
				{
					totales[i][0]++;
				}
				else
				{
					if (trab == 3)
					{
						totales[i][0]++;
					}
					else
					{
						if (trab == 4)
						{
							totales[i][0]++;
						}
						else
						{
							if (trab == 5)
							{
								totales[i][0]++;
							}
						}
					}
				}
			}
		}
		else
		{
			cout << endl;
			cout << "El nro de documento ingresado no se encuentra en la base de datos" << endl;
		}
		cout << endl;
		cout << "Ingrese nro de documento: ";
		cin >> doc;
	}
	cout << endl;
	int totalpor = 0;
	for (int i = 0;i < 5;i++)
	{
		//Calculo para obtener el porcentaje de cada tipo de trabajo
		totales[i][1] = (totales[i][0]/acumgen)*100;
		totalpor += totales[i][1];//Acumulador para el porcentaje general
	}
	//Ordenamiento en base a las cantidades de trabajos en forma decreciente
	for (int i = 0;i < (5-1);i++)
	{
		for(int j = i+1;j < 5;j++)
		{
			if (extrac[i][0] < extrac[j][0])
			{
				for (int k = 0;k < 4;k++)
				{
					aux = extrac[i][k];
					extrac[i][k] = extrac[j][k];
					extrac[j][k] = aux;
				}
			}
		}
	}
	//Informe
	cout << "----------------------------------------------------------------------------------------------------------" << endl;
	cout << "DOCUMENTO" << setw(30) << "CANT. EXTRACCIONES" << setw(30) << "CANT. ARREGLOS" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << extrac[i][1] << setw(24) << extrac[i][2] << setw(32) << extrac[i][3] << endl;
	}
	cout << "----------------------------------------------------------------------------------------------------------" << endl;
	cout << "DOCUMENTO" << setw(20) << "ENERO" << setw(20) << "FEBRERO" << setw(20) << "MARZO" << setw(20) << "ABRIL" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << afiliado[i][0] << setw(19) << meses[i][0] << setw(19) << meses[i][1] << setw(21) << meses[i][2] << setw(20) << meses[i][3] << endl;
	}
	cout << "----------------------------------------------------------------------------------------------------------" << endl;
	cout << setw(13) << "TIPO" << setw(34) << "CANTIDAD TOTAL" << setw(25) << "PORCENTAJES" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << desc[i] << setw(18) << totales[i][0] << setw(27) << totales[i][1] << endl;
	}
	cout << "TOTALES" << endl;
	cout << "Cantidad: " << acumgen << setw(20) << "Porcentajes: % " << totalpor;
	return 0;
}

