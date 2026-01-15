#include <iostream>
#include <iomanip>
using namespace std;
/*Una fábrica de calzado recibe pedidos de distribuidores, codificados de 1 a 10, sobre tres
modelos de calzado de dama A, B y C que se encuentran en oferta. Al principio se ingresa el
precio unitario de cada modelo.
Luego, por cada pedido se ingresa: código de distribuidor (1..10), el modelo (A, B, C), y la cantidad
pedida. Tener en cuenta que puede ser que haya más de un pedido por distribuidor y que los
pedidos están ordenados por distribuidor. Un nro de distribuidor = 999 indica el fin de datos.
a) Se desea informar por cada distribuidor según el siguiente formato:
Nro de Distribuidor : xx
Modelo Cantidad pedida Monto
A       xxxxxx         xxxxxxx
B       xxxxxx         xxxxxxx
C       xxxxxx         xxxxxxx
b) Indicar el nombre del modelo más vendido por cada distribuidor. Para este cálculo plantear una
función.*/
void modMasVendPorDistr(int acumMod[], char &modmasvend, char nom[]);//Prototipo
int main(int argc, char *argv[]) {
	int calzA, calzB, calzC, cod, cant;
	int mod[3][2] = {};
	char modelo, nom[3] = {'A','B','C'}, distr[10], modmasvend;
	//Carga de datos
	cout << "Ingrese los precios unitarios de los modelos: " << endl;
	cout << "Modelo A: ";
	cin >> calzA;
	cout << "Modelo B: ";
	cin >> calzB;
	cout << "Modelo C: ";
	cin >> calzC;
	cout << endl;
	cout << "Datos de los pedidos" << endl;
	cout << "Ingrese código de distribuidor: ";
	cin >> cod;
	while (cod != 999)
	{
		//Corte de control
		int ant = cod, acumMod[3] = {};
		while (cod == ant)
		{
			cout << "Ingrese modelo del calzado (A, B, C): ";
			cin >> modelo;
			cout << "Ingrese cantidad pedida: ";
			cin >> cant;
			switch (modelo)
			{
			case 'A': mod[0][0] += cant;//Acumulador de cantidades por modelo
			          mod[0][1] += cant*calzA;//Acumulador de monto por modelo
					  acumMod[0] += cant;//Acumulador de cantidades de modelo para calcular el maximo
			break;
			case 'B': mod[1][0] += cant;
			          mod[1][1] += cant*calzB;
					  acumMod[1] += cant;
			break;
			case 'C': mod[2][0] += cant;
					  mod[2][1] += cant*calzC;
					  acumMod[2] += cant;
			break;
			}
			cout << endl;
			cout << "Ingrese código de distribuidor: ";
			cin >> cod;
		}
		modMasVendPorDistr(acumMod, modmasvend, nom);//Llamada de la función
		distr[ant-1] = modmasvend;//Modelos mas vendidos por cada distribuidor
	}
	//Informe
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "Modelo" << setw(20) << "Cantidad" << setw(20) << "Monto" << endl;
	for (int i = 0;i < 3;i++)
	{
		cout << setw(3) << nom[i] << setw(23) << mod[i][0] << setw(20) << mod[i][1] << endl;
	}
	cout << endl;
	cout << "Modelo más vendido por cada distribuidor" << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << "Distribuidor " << i+1 << ": Modelo " << distr[i] << endl;
	}
	return 0;
}
//Función
void modMasVendPorDistr(int acumMod[], char &modmasvend, char nom[]){
	int max = 0;
	for (int i = 0;i < 3;i++)
	{
		if (acumMod[i] > max)
		{
			max = acumMod[i];
			modmasvend = nom[i];
		}
	}
}
