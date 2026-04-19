#include <iostream>
using namespace std;

// Definición del nodo (la unidad básica de la pila)
struct nodo {
	int dato;           // El valor entero que guardamos
	nodo *siguiente;    // Puntero que guardará la dirección de memoria del nodo de "abajo"
};

// Prototipos: usamos nodo *&pila para pasar el puntero por REFERENCIA. 
// Esto permite que la función modifique el puntero original de la función main.
void agregarPila(nodo *&pila, int n);
void sacarPila(nodo *&pila, int &n);

int main(int argc, char *argv[]) {
	nodo *pila = NULL;  // Inicializamos la pila en NULL (indica que está vacía)
	int dato;
	
	// --- BLOQUE DE ENTRADA (PUSH) ---
	cout << "Digite un numero: "; cin >> dato;
	agregarPila(pila, dato); // Pasamos la dirección de 'pila' y el valor
	cout << endl;
	cout << "Digite otro numero: "; cin >> dato;
	agregarPila(pila, dato); 
	cout << endl;
	// --- BLOQUE DE SALIDA (POP) ---
	cout << "Sacando los elementos de la pila: " << endl;
	while (pila != NULL) {   // Mientras el puntero inicial no apunte al vacío
		sacarPila(pila, dato); // Extraemos el nodo superior
		if (pila != NULL) {
			cout << dato << " , ";
		} else {
			cout << dato << ".";
		}
	}
	return 0;
}

// FUNCIÓN PARA INSERTAR (PUSH)
void agregarPila(nodo *&pila, int n) {
	// 1. Reservamos memoria dinámica para un nuevo nodo
	nodo *nuevo_nodo = new nodo(); 
	
	// 2. Asignamos el valor recibido al campo 'dato' del nuevo nodo
	nuevo_nodo->dato = n; 
	
	// 3. El puntero 'siguiente' del nuevo nodo apunta a donde apuntaba 'pila' actualmente
	// Esto conecta el nuevo nodo con el resto de la estructura existente.
	nuevo_nodo->siguiente = pila; 
	
	// 4. Actualizamos el puntero 'pila' para que ahora apunte al nuevo nodo (el nuevo "tope")
	pila = nuevo_nodo; 
	
	cout << "Elemento " << n << " agregado a PILA correctamente" << endl;
}

// FUNCIÓN PARA ELIMINAR (POP)
void sacarPila(nodo *&pila, int &n) {
	// 1. Creamos un puntero auxiliar que apunte al mismo lugar que 'pila' (el nodo superior)
	nodo *aux = pila; 
	
	// 2. Extraemos el valor del nodo antes de eliminarlo y lo guardamos en 'n'
	n = aux->dato; 
	
	// 3. Movemos el puntero 'pila' al siguiente nodo de la lista (el de abajo)
	// Ahora 'pila' apunta a aux->siguiente
	pila = aux->siguiente; 
	
	// 4. Liberamos la memoria del nodo que estaba arriba (apuntado por aux)
	delete aux; 
}
