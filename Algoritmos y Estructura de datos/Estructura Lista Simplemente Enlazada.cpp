#include <iostream>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void menuLista(Nodo *lista, int n, int valor);
void insertarLista(Nodo *&lista, int n);
void mostrarLista(Nodo *lista);
void buscarLista(Nodo *lista, int valor);
int main(int argc, char *argv[]) {
	Nodo *lista = NULL;
	int n = 0, valor = 0;
	menuLista(lista, n, valor);
	return 0;
}
void menuLista(Nodo *lista, int n, int valor){
	int opcion;
	do{
		cout << "1. Insertar elemento a la lista" << endl;
		cout << "2. Mostrar los elementos de la lista" << endl;
		cout << "3. Buscar un elemento de la lista" << endl;
		cout << "4. Salir" << endl;
		cout << endl;
		cout << "Opción: ";
		cin >> opcion;
		cout << endl;
		switch (opcion){
		case 1:
			cout << "Digite un número: ";
			cin >> n;
			insertarLista(lista, n);
			system("pause");
			break;
		case 2:
			cout << "Lista: ";
			mostrarLista(lista);
			cout << endl;
			system("pause");
			break;
		case 3:
			cout << "Ingrese un valor para buscar en la lista: ";
			cin >> valor;
			cout << endl;
			buscarLista(lista, valor);
			system("pause");
			break;
		}
		system("cls");
	} while(opcion != 4);
}
void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	Nodo *aux1 = lista;
	Nodo *aux2;
	while ((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	if (lista == aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	nuevo_nodo->siguiente = aux1;
	cout << "El elemento " << n << " ha sido ingresado a Lista correctamente." << endl;
}
void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	while (actual != NULL){
		cout << actual->dato << " ";
		actual = actual->siguiente;
	}
	
}
void buscarLista(Nodo *lista, int valor){
	bool band = false;
	Nodo *actual = new Nodo();
	actual = lista;
	while ((actual != NULL) && (actual->dato <= valor)){
		if (actual->dato == valor){
			band = true;
		}
		actual = actual->siguiente;
	}
	if (band == true){
		cout << "Elemento " << valor << " SI ha sido encontrado en lista." << endl;
	}
	else{
		cout << "Elemento " << valor << " NO ha sido encontrado en lista. " << endl;
	}
}
