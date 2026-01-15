#include <iostream>
using namespace std;
/*Se ingresan los DNI y las edades de los miembros de una asociación cooperadora. El fin de
datos está dado por edad = 200. Determinar el integrante de mayor edad e informar su DNI con
una leyenda alusiva.
Validar la entrada de los datos correspondientes a las edades, las cuales deben estar entre los 12
y los 90 años, con una función llamada validar_edad() en base a la cual, al verificarse una
edad fuera del rango, se debe indicar un mensaje de error y permitir el reingreso del dato*/
void validar_edad(int edad);//Prototipo
int main(int argc, char *argv[]) {
	int dni, edad, maxedad = 0, maxdni, c = 1;
	//Carga de datos
	cout << "Ingrese los datos de los miembros: " << endl;
	cout << "Miembro 1" << endl;
	cout << "Edad: ";
	cin >> edad;
	while (edad != 200)
	{
		//LLamada de la función
		validar_edad(edad);
		cout << "DNI: ";
		cin >> dni;
		//Calculo para saber la edad máxima
		if (edad > maxedad)
		{
			maxedad = edad;
			maxdni = dni;
		}
		cout << endl;
		cout << "Miembro " << ++c << endl;
		cout << "Edad: ";
		cin >> edad;
	}
	cout << endl;
	//Informe
	cout << "El integrante de mayor edad es la persona con el DNI " << maxdni;
	return 0;
}
//Función
void validar_edad(int edad){
	//Verificación de la edad
	if ((edad < 12) || (edad > 90))
	{
		cout << "Error, la edad ingresada no esta permitida" << endl;
		cout << endl;
		cout << "Edad: ";
		cin >> edad;
	}
}

