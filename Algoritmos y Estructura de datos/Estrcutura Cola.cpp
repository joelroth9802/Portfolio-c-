#include <iostream>
using namespace std;

// Definimos la estructura del Nodo, que es el bloque de construcción de nuestra Cola
struct Nodo{
	int dato;           // Acá guardamos el valor (el número que ingresa el usuario)
	Nodo *siguiente;    // Este puntero es el "enganche" que apunta al próximo nodo de la cola
};
// Prototipos de las funciones: le avisan al compilador que estas funciones existen
// Usamos paso por referencia (*&) en frente y fondo para poder modificarlos permanentemente
void insertarCola(Nodo *&frente, Nodo *&fondo, int n);
void quitarCola(Nodo *&frente, Nodo *&fondo, int &n);
int main(int argc, char *argv[]) {
	// Al principio la cola está vacía, por lo que el principio (frente) y el final (fondo) no apuntan a nada
	Nodo *frente = NULL;
	Nodo *fondo = NULL;
	int n;
	// --- FASE DE INGRESO DE DATOS ---
	cout << "Digite un número: ";
	cin >> n;
	insertarCola(frente, fondo, n); // Encolamos el primer número
	cout << endl;
	cout << "Digite un número: ";
	cin >> n;
	insertarCola(frente, fondo, n); // Encolamos el segundo número
	cout << endl;
	cout << "Digite un número: ";
	cin >> n;
	insertarCola(frente, fondo, n); // Encolamos el tercer número
	cout << endl;
	// --- FASE DE EXTRACCIÓN DE DATOS ---
	cout << "Sacando los elementos de la cola: ";
	// Mientras el frente no sea NULL, significa que todavía hay nodos en la cola
	while (frente != NULL){
		// Sacamos el nodo que está al frente. El valor se guarda en la variable 'n'
		quitarCola(frente, fondo, n);
		// Esta lógica es puramente estética para imprimir bonito (con comas o con un punto al final)
		if (frente != NULL){
			cout << n << " , "; // Si quedan más elementos, ponemos una coma
		}
		else{
			cout << n << ".";   // Si era el último elemento, ponemos un punto final
		}
	}
	return 0;
}
// Función para agregar un elemento al final de la cola (Encolar / Push)
void insertarCola(Nodo *&frente, Nodo *&fondo, int n){
	// 1. Pedimos memoria al sistema para crear un nuevo nodo
	Nodo *nuevo_nodo = new Nodo();	
	// 2. Llenamos el nodo con el dato y decimos que su "siguiente" es NULL (porque será el último)
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	// 3. Verificamos si la cola estaba vacía
	if (fondo == NULL){
		// Si está vacía, este nuevo nodo es el único. Por ende, es el frente y también el fondo
		frente = nuevo_nodo;
	}
	else{
		// Si ya había nodos, enganchamos el último nodo actual (fondo) con este nuevo nodo
		fondo->siguiente = nuevo_nodo;
	}
	// Ahora actualizamos el puntero 'fondo' para que apunte al nuevo nodo, que es el nuevo final
	fondo = nuevo_nodo; 
	cout << "Elemento " << n << " ha sido incertado a cola correctamente." << endl;
}
	// Función para sacar el elemento que está al principio de la cola (Desencolar / Pop)
	void quitarCola(Nodo *&frente, Nodo *&fondo, int &n){
		// 1. Rescatamos el valor numérico del nodo que está al frente para no perderlo
		n = frente->dato;		
		// 2. Creamos un puntero auxiliar que apunte al frente actual. 
		// Lo necesitamos para poder borrar la memoria de este nodo más adelante.
		Nodo *aux = frente;
		// 3. Verificamos si este era el único nodo que quedaba en la cola
		if (frente == fondo){
			// Si el frente y el fondo son el mismo, al sacar este nodo la cola queda completamente vacía
			frente = NULL;
			fondo = NULL;
		}
		else{
			// Si hay más elementos, movemos el frente al siguiente nodo de la fila
			frente = frente->siguiente;
		}
		// 4. Liberamos la memoria del nodo que acabamos de sacar. 
		// Si no hacemos esto, tendríamos una fuga de memoria (memory leak).
		delete aux;
	}
