#include <iostream>
#include <string>
/*Hacer un programa que guarde datos de clientes de un banco, los almacene en cola,
 * y por ultimo muestre los clientes en el orden correcto.*/
using namespace std;
struct cliente{
    string nombre;
    int dni, edad;
};
struct nodo{
    cliente dato;
    nodo *link;
};
void insertarCola(nodo *&frente, nodo *&fondo, cliente persona);
void quitarCola(nodo *&frente, nodo *&fondo, cliente &persona);
int main()
{
    nodo *frente = NULL;
    nodo *fondo = NULL;
    cliente persona;
    for (int i = 0;i < 3;i++){
        cout << "Datos del cliente" << endl;
        cout << "Nombre: ";
        getline(cin, persona.nombre);
        cout << "DNI: ";
        cin >> persona.dni;
        cout << "Edad: ";
        cin >> persona.edad;
        cin.ignore();
        cout << endl;
        insertarCola(frente, fondo, persona);
        cout << endl;
    }
    cout << "Sacando los clientes del sistema:" << endl;
    while (frente != NULL){
        quitarCola(frente, fondo, persona);
        cout << "Nombre: " << persona.nombre << endl;
        cout << "DNI: " << persona.dni << endl;
        cout << "Edad: " << persona.edad << endl;
        cout << endl;
    }
    return 0;
}
void insertarCola(nodo *&frente, nodo *&fondo, cliente persona){
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->dato = persona;
    /*nuevo_nodo->dato.nombre = persona.nombre;
    nuevo_nodo->dato.dni = persona.dni;
    nuevo_nodo->dato.edad = persona.edad;*/
    nuevo_nodo->link = NULL;
    if (fondo == NULL){
        frente = nuevo_nodo;
    }
    else{
        fondo->link = nuevo_nodo;
    }
    fondo = nuevo_nodo;
    cout << "Los datos del cliente " << persona.nombre << " han sido ingresado al sistema." << endl;
}
void quitarCola(nodo *&frente, nodo *&fondo, cliente &persona){
    persona = frente->dato;
    /*persona.nombre = frente->dato.nombre;
    persona.dni = frente->dato.dni;
    persona.edad = frente->dato.edad;*/
    nodo *aux = frente;
    if (frente == fondo){
        frente = NULL;
        fondo = NULL;
    }
    else{
        frente = frente->link;
    }
    delete aux;
}