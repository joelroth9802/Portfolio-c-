#include <iostream>
/*Hacer un programa en c++ utilizando Colas que contenga el siguiente menu:
 * 1.Insertar caracter a una cola
 * 2.Mostrar todos los elementos de la cola
 * 3.Salir
 */
using namespace std;
struct nodo{
    char dato;
    nodo *link;
};
void insertarCola(nodo *&frente, nodo *&fondo, char letra);
void quitarCola(nodo *&frente, nodo *&fondo, char &letra);
int main()
{
    nodo *frente = NULL;
    nodo *fondo = NULL;
    char letra;
    int opcion;
    cout << "1.Insertar caracter a una cola" << endl;
    cout << "2.Mostrar todos los elementos de la cola" << endl;
    cout << "3.Salir" << endl;
    cout << endl;
    cout << "Opcion: ";
    cin >> opcion;
    while (opcion != 3){
        switch (opcion) {
        case 1:
            cout << endl;
            cout << "Digite una letra: ";
            cin >> letra;
            insertarCola(frente, fondo, letra);
            break;
        case 2:
            if (frente == NULL){
                cout << endl;
                cout << "No ha insertado ningun elemento a la cola" << endl;
            }
            else{
                cout << endl;
                cout << "Sacando elementos de la cola: ";
                while (frente != NULL){
                    quitarCola(frente, fondo, letra);
                    cout << letra << " ";
                }
            }
            break;
        }
        cout << endl;
        cout << "1.Insertar caracter a una cola" << endl;
        cout << "2.Mostrar todos los elementos de la cola" << endl;
        cout << "3.Salir" << endl;
        cout << endl;
        cout << "Opcion: ";
        cin >> opcion;
    }
    return 0;
}
void insertarCola(nodo *&frente, nodo *&fondo, char letra){
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->dato = letra;
    nuevo_nodo->link = NULL;
    if (fondo == NULL){
        frente = nuevo_nodo;
    }
    else{
        fondo->link = nuevo_nodo;
    }
    fondo = nuevo_nodo;
    cout << "La letra " << letra << " ha sido incertado a la cola correctamente." << endl;
}
void quitarCola(nodo *&frente, nodo *&fondo, char &letra){
    letra = frente->dato;
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