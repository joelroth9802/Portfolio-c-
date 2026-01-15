#include <iostream>
#include <string>
using namespace std;
/*En distintas localidades de Buenos Aires, Entre Ríos y Tucumán se realiza el cultivo de
arándanos. Se necesitan hacer algunos cálculos estadísticos generales de lo que sucede en las
diferentes provincias y en Entre Ríos en particular sobre el incremento de su producción.
Se ingresan los datos de las distintas localidades de las provincias de la siguiente forma: código
de la provincia (1: Buenos Aires, 2: Entre Ríos y 3:Tucumán), cantidad de localidades que
producen arándanos y luego, por cada una de esas localidades: código de localidad (1..N),
superficie cosechada (en ha) y producción en toneladas en el año .
Luego, se ingresan sólo para las N localidades de Entre Ríos, lo producido en el año pasado, de la
siguiente manera: código de localidad (1..N) y producción en toneladas en el año anterior.
Se desea calcular e informar:
a) El rendimiento en kg/ha de cada localidad.
b) El promedio de rendimiento entre las tres provincias
c) El nombre de la provincia con mejor rendimiento.
d) De las localidades de la Provincia de Entre Ríos el promedio de producción de los dos
últimos años
Diseñar una función para cada punto.
Obs.: Rendimiento (kg/ha) = producción en tn/superficie cosechada * 1000*/
//Prototipos
void rendimiento(float rend[][50], int cantloc, int sup, int ton, int codprov, int codloc);
float promedio(float rendprov[]);
string maxrend(string nombres[], float rendprov[]);
float promentrerios(int acumprod, int locant);
int main(int argc, char *argv[]) {
	int codprov, sup, ton, cantloc, codloc, tonant;
	float rend[3][50], rendprov[3] = {};
	int acumprod = 0, locant, cantidades[3], acums[3][2] = {};
	string nombres[3] = {"Buenos Aires", "Entre Ríos", "Tucumán"};
	//Carga de datos
	cout << "Datos de las provincias" << endl;
	for (int i = 0;i < 3;i++)
	{
		cout << "Código de provincia: ";
		cin >> codprov;
		--codprov;
		cout << "Cantidad de localidades que producen arandanos: ";
		cin >> cantloc;
		cantidades[i] = cantloc;//Acumulador de cantidades
		//Si la provincia es entre rios, se cargan las localidades a otra variable
		if (codprov == 1)
		{
			locant = cantloc;
		}
		cout << endl;
		for (int j = 0;j < cantloc;j++)
		{
			cout << "Localidad " << j+1 << endl;
			cout << "Código de localidad: ";
			cin >> codloc;
			--codloc;
			cout << "Superficie cosechada en el año: ";
			cin >> sup;
			cout << "Produccion de toneladas en el año: ";
			cin >> ton;
			acums[codprov][0] += sup;//Acumulador de superficie por cada provincia
			acums[codprov][1] += ton;//Acumlador de toneladas por cada provincia
			//Si la provincia es Entre Ríos, se cargan las producciones de toneladas del año anterior
			if (codprov == 1)
			{
				cout << "Producción de toneladas del año pasado: ";
				cin >> tonant;
				acumprod += tonant + ton;//Acumulador de producciones de Entre Ríos
			}
			//Llamada de la funcion a)
			rendimiento(rend, cantloc, sup, ton, codprov, codloc);
			cout << endl;
		}
		//Acumulador de rendimientos por cada provincia
		rendprov[codprov] += (acums[codprov][1]/acums[codprov][0])*1000;
	}
	//Informe y llamadas de las funciones
	cout << "----------------------------------------------------------------" << endl;
	cout << "Rendimiento de cada localidad" << endl;
	for (int i = 0;i < 3;i++)
	{
		cout << nombres[i] << endl;
		for (int j = 0;j < cantidades[i];j++)
		{
			cout << "Localidad " << j+1 << ": " << rend[i][j] << endl;
		}
		cout << endl;
	}
	cout << "Promedio de rendimiento entre las 3 provincias: " << promedio(rendprov) << endl;//Llamada de la funcion b)
	cout << "Nombre de la provincia con mejor rendimiento: " << maxrend(nombres, rendprov) << endl;//Llamada de la funcion c)
	cout << "Promedio de producción de los dos ultimos años de Entre Ríos: " << promentrerios(acumprod, locant);//Llamada de la funcion d)
	return 0;
}
//Punto a)
void rendimiento(float rend[][50], int cantloc, int sup, int ton, int codprov, int codloc){
	rend[codprov][codloc] = (ton/sup)*1000;
}
//Punto b)
float promedio(float rendprov[]){
	float prom = (rendprov[0] + rendprov[1] + rendprov[2])/3;
	return prom;
}
//Punto c)
string maxrend(string nombres[], float rendprov[]){
	float max = 0;
	string maxprov;
	for (int i = 0;i < 3;i++)
	{
		if (rendprov[i] > max)
		{
			max = rendprov[i];
			maxprov = nombres[i];
		}
	}
	return maxprov;
}
//Punto d)
float promentrerios(int acumprod, int locant){
	float prom = acumprod/locant;
	return prom;
}

