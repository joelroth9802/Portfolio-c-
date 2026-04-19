#include <iostream>
using namespace std;
/*Se desea realizar la simulación de una farmacia que posee un sistema
turnador que entrega turnos para 3 colas:
- Cola O: Clientes con Obra Social.
- Cola P: Clientes Particulares.
- Cola E: Mujeres embarazadas y jubilados, independientemente si tienen obra social.
Cada caso contendrá: el dni, el tipo de cola que usará, la duración de la
atención, y el minuto en que arriba a la farmacia.
Implemente una cola de pacientes con toda su información, considerando casos
donde arriben pacientes de todo tipo. Pruebe la cola ingresando y obteniendo
los siguientes casos concretos:
1. Alta ArriboMinuto 0: Cliente Particular dni 12, tiempo de atención 8 minutos.
2. Alta ArriboMinuto 5: Cliente Jubilado de 77 años dni 3, tiempo atención 19 min.
3. Alta ArriboMinuto 7: Cliente Particular dni 78, tiempo de atención 4 minutos.
4. Baja: Cliente Particular dni 12.
5. Alta ArriboMinuto 10: Cliente Obra Social dni 14, tiempo de atención 11 minutos.
6. Baja: Cliente Jubilado dni 3.
Vacíe la cola, descargando completamente su contenido y mostrando por consola esta
funcionalidad. Compruebe antes y después de esta operación si la cola está vacía o no.
Salida Esperada:
Cola de Farmacia - punto 3
----------------------------------
Arribos y bajas solicitados
---------------------------
--> [Agregar minuto:0](dni 12,duracion 8,tipo P)
--> [Agregar minuto:5](dni 3,duracion 19,tipo E)
--> [Agregar minuto:7](dni 78,duracion 4,tipo P)
--> [Obtener minuto:0](dni 12,duracion 8,tipo P)
--> [Agregar minuto:7](dni 78,duracion 4,tipo P)
--> [Agregar minuto:10](dni 14,duracion 11,tipo O)
--> [Obtener minuto:5](dni 3,duracion 19,tipo E)
Estado de la cola, vacia: falso
Vaciando la cola
-----------------
--> [Vaciado minuto:7](dni 78,duracion 4,tipo P)
--> [Vaciado minuto:7](dni 78,duracion 4,tipo P)
--> [Vaciado minuto:10](dni 14,duracion 11,tipo O)
Estado de la cola, vacia: verdadero*/
struct Paciente{
	int dni, duracion, minArribo;
	char tipoC;
};
struct NCola{
	Paciente persona;
	NCola *link;
};
void insertar_cola(NCola *&frente, NCola *&fondo, Paciente p);
void quitar_cola(NCola *&frente, NCola *&fondo, Paciente &p);
void vaciar_cola(NCola *&frente, NCola *&fondo, Paciente &p);
int main(int argc, char *argv[]) {
	NCola *frenteO = NULL, *fondoO = NULL;
	NCola *frenteP = NULL, *fondoP = NULL;
	NCola *frenteE = NULL, *fondoE = NULL;
	Paciente p;
	cout << "Cola de Farmacia - punto 3" << endl;
	cout << "----------------------------------" << endl;
	cout << "Arribos y bajas solicitados" << endl;
	cout << "---------------------------" << endl;
	p = {12, 8, 0, 'P'};
	insertar_cola(frenteP, fondoP, p);
	p = {3, 19, 5, 'E'};
	insertar_cola(frenteE, fondoE, p);
	p = {78, 4, 7, 'P'};
	insertar_cola(frenteP, fondoP, p);
	quitar_cola(frenteP, fondoP, p);
	p = {14, 11, 10, 'O'};
	insertar_cola(frenteO, fondoO, p);
	quitar_cola(frenteE, fondoE, p);
	cout << "Estado de la cola, vacia: ";
	if (frenteO == NULL && frenteP == NULL && frenteE == NULL){
		cout << "Verdadero" << endl;
	}
	else{
		cout << "Falso" << endl;
	}
	cout << endl;
	cout << "Vaciando la cola" << endl;
	cout << "----------------" << endl;
	while (frenteP != NULL) vaciar_cola(frenteP, fondoP, p);
	while (frenteE != NULL) vaciar_cola(frenteE, fondoE, p);
	while (frenteO != NULL) vaciar_cola(frenteO, fondoO, p);
	cout << "Estado de la cola, vacia: ";
	if (frenteO == NULL && frenteP == NULL && frenteE == NULL){
		cout << "Verdadero" << endl;
	}
	else{
		cout << "Falso" << endl;
	}
	return 0;
}
void insertar_cola(NCola *&frente, NCola *&fondo, Paciente p){
	NCola *nuevo_nodo = new NCola();
	nuevo_nodo->persona = p;
	nuevo_nodo->link = NULL;
	if (fondo == NULL){
		frente = nuevo_nodo;
	}
	else{
		fondo->link = nuevo_nodo;
	}
	fondo = nuevo_nodo;
	cout << "--> [Agregar minuto:" << p.minArribo << "](dni " << p.dni << ",duracion " << p.duracion << ",tipo " << p.tipoC << ")" << endl;
}
void quitar_cola(NCola *&frente, NCola *&fondo, Paciente &p){
	p = frente->persona;
	NCola *aux = frente;
	if (frente == fondo){
		frente = NULL;
		fondo = NULL;
	}
	else{
		frente = frente->link;
	}
	delete aux;
	cout << "--> [Obtener minuto:" << p.minArribo << "](dni " << p.dni << ",duracion " << p.duracion << ",tipo " << p.tipoC << ")" << endl;
}
void vaciar_cola(NCola *&frente, NCola *&fondo, Paciente &p){
	p = frente->persona;
	NCola *aux = frente;
	if (frente == fondo){
		frente = NULL;
		fondo = NULL;
	} else {
		frente = frente->link;
	}
	delete aux;
	// Imprime "Vaciado" en vez de "Obtener"
	cout << "--> [Vaciado minuto:" << p.minArribo << "](dni " << p.dni << ",duracion " << p.duracion << ",tipo " << p.tipoC << ")" << endl;
	}
