#include <iostream>
using namespace std;
/*Una distribuidora de Alimentos para Mascotas dispone de una lista con los códigos de cliente
(números) y su saldo. La cantidad de clientes se lee al inicio.
Se pide ingresar el código de cliente y a través de ese dato informar su saldo. De no existir el código
ingresado informar un mensaje que indique “CLIENTE INEXISTENTE”*/
int main(int argc, char *argv[]) {
	//Arreglos
	int clientes[20][2], cant, cod;
	//Datos
	cout << "Ingrese la cantidad de clientes: ";
	cin >> cant;
	cout << endl;
	cout << "Ingrese los datos de cada cliente: " << endl;
	for (int i = 0;i < cant;i++)
	{
		cout << "Cliente nro " << i+1 << endl;
		cout << "Código: ";
		cin >> clientes[i][0];
		cout << "Saldo: ";
		cin >> clientes[i][1];
		cout << endl;
	}
	cout << "Ingrese código de cliente: ";
	cin >> cod;
	int i;
	for (i = 0;(i < cant) && (cod != clientes[i][0]);i++)
		;
	//Informe
	cout << "------------------------------------------------------" << endl;
	if (i == cant)
	{
		cout << "El código ingresado, no fue encontrado.";
	}
	else
	{
		cout << "Saldo: $ " << clientes[i][1];
	}
	return 0;
}

