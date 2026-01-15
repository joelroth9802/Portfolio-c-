#include <iostream>
#include <string>
using namespace std;
/*Una fábrica produce 10 tipos de herramientas y los comercializa a través de 25 distribuidoras.
Se ingresa al inicio por cada herramienta: código de herramienta (de 1 a 10), descripción y precio
unitario. Estos datos se ingresan sin ningún orden.
Luego, se ingresa lo enviado a cada distribuidora para su venta: nro de distribuidora (1-25), código
de herramienta (1 a 10), cantidad de ese tipo enviada. Un nro de distribuidora=99 indica fin de
datos. En el mes puede haberse hecho más de un envío a cada distribuidora y el ingreso NO se
realiza en ningún orden determinado.
Se desea:
a) conocer el monto facturado a cada distribuidora en cada tipo de herramienta en concepto de
todo lo enviado.
b) conocer la descripción y el código de herramienta que se le envió en mayor cantidad total a la
distribuidora 25.
Utilizar funciones donde lo crea conveniente*/
//Prototipos
void distribuidora25(int herram[][2], int cant25[], string desc[], int &maxcod, string &maxdesc);
void montos(int distr[][10], int cant, int herram[][2], int nrodistr, int i);
int main(int argc, char *argv[]) {
	int herram[10][2], nrodistr, codherr, cant;
	int distr[25][10] = {}, cant25[3] = {}, maxcod;
	string desc[10], maxdesc;
	//Carga de datos
	cout << "Datos de las herramientas" << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << "Herramienta tipo " << i+1 << endl;
		cout << "Ingrese código de herramienta (de 1 a 10): ";
		cin >> herram[i][0];
		cin.ignore();
		cout << "Ingrese descripción de la herramienta: ";
		getline(cin, desc[i]);
		cout << "Ingrese precio unitario: ";
		cin >> herram[i][1];
		cout << endl;
	}
	cout << "Pedidos para cada distribuidora" << endl;
	cout << "Ingrese nro de distribuidora (de 1 a 10): ";
	cin >> nrodistr;
	while (nrodistr != 99)
	{
		--nrodistr;
		cout << "Ingrese código de herramienta: ";
		cin >> codherr;
		//Verificación de código
		int i = 0;
		for (i = 0;(i < 10) && (codherr != herram[i][0]);i++)
			;
		if (i < 10)
		{
			--codherr;
			cout << "Ingrese cantidad enviada: ";
			cin >> cant;
			montos(distr, cant, herram, nrodistr, i);//Función
			if (nrodistr == 24)
			{
				cant25[i] += cant;//Acumulador para calcular el máximo de la distr 25
			}
		}
		else
		{
			cout << endl;
			cout << "El código de herramienta ingresado no se encuentra en la base de datos" << endl;
		}
		cout << endl;
		cout << "Ingrese nro de distribuidora: ";
		cin >> nrodistr;
	}
	distribuidora25(herram, cant25, desc, maxcod, maxdesc);//Función
	//Informe
	cout << "----------------------------------------------------------------------------------------" << endl;
	cout << "Monto facturado a cada distribuidora" << endl;
	for (int i = 0;i < 25;i++)
	{
		cout << "Distribuidora " << i+1 << endl;
		for (int j = 0;j < 10;j++)
		{
			cout << desc[j] << ": $ " << distr[i][j] << endl;
		}
		cout << endl;
	}
	cout << "Distribuidora 25" << endl;
	cout << "Herramienta más enviada: " << maxdesc << endl;
	cout << "Código: " << maxcod;
	return 0;
}
//Función punto a)
void montos(int distr[][10], int cant, int herram[][2], int nrodistr, int i){
	distr[nrodistr][i] += cant*herram[i][1];
}
//Función punto b)
void distribuidora25(int herram[][2], int cant25[], string desc[], int &maxcod, string &maxdesc){
	int maxherram = 0;
	for (int i = 0;i < 10;i++)
	{
		if (cant25[i] > maxherram)
		{
			maxherram = cant25[i];
			maxcod = herram[i][0];
			maxdesc = desc[i];
		}
	}
}
