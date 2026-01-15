#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/* Una fábrica cuenta con los datos de sus 25 clientes, que se leen al inicio: código de cliente (no
correlativo), Nro de documento y Estado (A: Paga a término, B: Moroso, C: Incobrable).
Desea actualizar el Estado, según lo ocurrido en el mes. Para lo cual se rige por las siguientes reglas: Si
el cliente paga en fecha el estado, es A. Si el pago se realiza luego de la fecha requerida de cobro, es B.
Si no paga es C.
Se ingresan los pagos del mes: código de cliente, fecha de pago, fecha en que debía pagar, monto. El
ingreso no sigue ningún orden, y los clientes realizan pagos mensuales. (Sólo uno por cliente, o ninguno
si no paga). Las fechas se leen como aaaa, mm, dd (3 variables diferentes)
Se desea obtener: 
a) La cantidad total de clientes de cada tipo.
b) Realizar un listado ordenado en forma ascendente por Nro. de Documento de los clientes Incobrables.*/
int main(int argc, char *argv[]) {
	//Variables
	int datos[10][3], inc[10], cod, aaaa, mm, dd, aaaa1, mm1, dd1, monto, aux, aux1;
	string estado[10];
	cout << "Ingrese los datos de los 10 clientes: " << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << "Cliente " << i+1 << endl;
		cout << "Código: ";
		cin >> datos[i][0];
		cout << "Nro de documento: ";
		cin >> datos[i][1];
		cin.ignore();
		cout << "Estado (A: Paga a término - B: Moroso - C: Incobrable): ";
		getline(cin, estado[i]);
		cout << endl;
		inc[i] = 0;//Acumulador para los documentos
		datos[i][2] = 0;//Acumulador para los montos
	}
	int c = 0, m = 0, entermino = 0, moroso = 0, incobrable = 0;
	while (c < 10)
	{
		cout << "Ingrese código de cliente: ";
		cin >> cod;
		//Busqueda para ver si el codigo se encuentra en el arreglo
		for (m = 0;(m < 10) && (cod != datos[m][0]);m++)
			;
		if (m < 10)
		{
			cout << "Ingrese fecha de pago: " << endl;
			cout << "Presione 0 si el cliente no realizo el pago" << endl;
			cout << "Año: ";
			cin >> aaaa;
			cout << "Mes: ";
			cin >> mm;
			cout << "Día: ";
			cin >> dd;
			cout << "Ingrese fecha en que debia pagar: " << endl;
			cout << "Año: ";
			cin >> aaaa1;
			cout << "Mes: ";
			cin >> mm1;
			cout << "Día: ";
			cin >> dd1;
			cout << "Pago del mes: ";
			cin >> monto;
			//Si el cliente pago en fecha, se actualiza el estado y aumentan los contadores
			if ((aaaa == aaaa1) && (mm == mm1) && (dd == dd1))
			{
				estado[m] = "A";
				entermino++;
				c++;
			}
			else
			{//Si el cliente pago fuera de término
				if ((aaaa > aaaa1) || (mm > mm1) || (dd > dd1))
				{
					estado[m] = "B";
					moroso++;
					c++;
				}
				else
				{//Si el cliente no realizo el pago
					estado[m] = "C";
					inc[incobrable] += datos[m][1];//Se pasan los DNI al vector de incobrables
					datos[incobrable][2] += monto;//Se acumulan los montos
					incobrable++;//Se incrementa la cantida de clientes que no pagaron
					c++;
				}
			}
		}
		else
		{
			cout << "El código ingresado no se encuentra en la base de datos." << endl;
		}
		cout << endl;
		m = 0;//Se inicializa en 0 para volver a realizar la busqueda
	}
	//Ordenamiento
	for (int i = 0;i < (incobrable-1);i++)
	{
		for (int j = i+1;j < incobrable;j++)
		{
			if (inc[i] > inc[j])
			{
				aux = inc[i];
				inc[i] = inc[j];
				inc[j] = aux;
				
				aux1 = datos[i][2];
				datos[i][2] = datos[j][2];
				datos[j][2] = aux1;
			}
		}
	}
	//Informe
	cout << "----------------------------------------------------------------------------" << endl;
	cout << "Cantidad total de clientes de cada tipo:" << endl;
	cout << "Pago en término: " << entermino << endl;
	cout << "Moroso: " << moroso << endl;
	cout << "Incobrable: " << incobrable << endl;
	cout << endl;
	cout << "Listado de los clientes que no pagaron" << endl;
	cout << "Nro. Documento" << setw(15) << "Monto" << endl;
	for (int i = 0;i < incobrable;i++)
	{
		cout << inc[i] << setw(21) << datos[i][2] << endl;
	}
	return 0;
}

