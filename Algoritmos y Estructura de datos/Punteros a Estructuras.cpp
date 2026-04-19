#include <iostream>
#include <string>
using namespace std;
//Punteros a Estructuras
struct Persona{
	string nombre;
	int edad;
};
// Prototipos de funciones.
// Recibe una referencia a un puntero a Persona (*&).
void pedirDatos(Persona *&puntero_persona);
// Recibe un puntero a Persona pasado por valor (*).
void mostrarDatos(Persona *puntero_persona);
int main(int argc, char *argv[]) {
	Persona people;
	// El operador '&' obtiene la dirección de memoria física de 'people'.
	// Esa dirección se almacena en la variable 'puntero_persona'.
	Persona *puntero_persona = &people;
	//Llamada a funciones pasando el puntero como argumento. Osea le pasamos la dirección de memoria a las funciones.
	pedirDatos(puntero_persona);
	mostrarDatos(puntero_persona);
	return 0;
}
void pedirDatos(Persona *&puntero_persona){
	cout << "Digite su numbre: ";
	// El operador '->' (acceso a miembro a través de puntero) desreferencia 
	// el puntero y accede al miembro 'nombre' en una sola operación. 
	// Es equivalente a hacer: (*puntero_persona).nombre
	getline(cin, puntero_persona->nombre);
	cout << "Digite su edad: ";
	cin >> puntero_persona->edad;
	cout << endl;
}
void mostrarDatos(Persona *puntero_persona){
	// Se lee directamente desde la dirección de memoria apuntada.
	cout << "Nombre: " << puntero_persona->nombre << endl;
	cout << "Edad: " << puntero_persona->edad << endl;
}
