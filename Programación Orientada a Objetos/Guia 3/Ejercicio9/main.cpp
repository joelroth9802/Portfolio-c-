#include <iostream>
#include <iomanip>
/*Realice una función que dado un vector dinámico de enteros, retorne una matriz que
contenga en una fila el número y el número de repeticiones de dicho número.*/
using namespace std;
void retornar_matriz(int *&vector, int cant);
int main()
{
    int *vector, cant;
    cout << "Ingrese la cantidad de elementos para el vector: ";
    cin >> cant;
    vector = new int[cant];
    cout << endl;
    cout << "Ingrese los valores del vector:" << endl;
    for (int i = 0;i < cant;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector[i];
    }
    cout << endl;
    retornar_matriz(vector, cant);
    delete[] vector;
    return 0;
}
void retornar_matriz(int *&vector, int cant){
    //Calculamos la cantidad de filas necesarias (Elementos Únicos)
    //En lugar de buscar únicos directamente, contamos cuánta igualdades hay.
    int nFilas = 0;
    // Recorremos cada elemento del vector original como pivote
    for (int i = 0; i < cant;i++){
        // Miramos estrictamente hacia el "futuro" del arreglo (desde i+1 hasta el final)
        for (int j = i + 1;j < cant;j++){
            // Si el elemento pivote vuelve a aparecer más adelante...
            if (vector[i] == vector[j]){
                nFilas++; //registramos que encontramos una igualdad
                break;
            }
        }
    }
    // Elementos Únicos = Total de elementos (cant) - Elementos redundantes (nFilas)
    nFilas = cant - nFilas;
    int **puntero_matriz = new int*[nFilas];
    for (int i = 0;i < nFilas;i++){
        puntero_matriz[i] = new int[2];
    }
    int filaActual = 0; // Nos dice en qué fila de la matriz estamos guardando
    // Recorremos el vector completo, elemento por elemento
    for (int i = 0; i < cant; i++) {
        // FASE 1: Mirar al PASADO
        int ya_lo_vimos = 0; // Usamos un int clásico: 0 significa "No", 1 significa "Sí"
        // Recorremos desde el inicio (0) hasta justo antes de 'i'
        for (int k = 0; k < i; k++) {
            if (vector[i] == vector[k]) {
                ya_lo_vimos = 1; // Encontramos una copia en el pasado
                break; // Rompemos este pequeño bucle porque ya confirmamos que existe
            }
        }
        // FASE 2 y 3: Solo trabajamos si es la primera vez que vemos el número
        if (ya_lo_vimos == 0) {
            // Lo guardamos en la columna 0
            puntero_matriz[filaActual][0] = vector[i];
            int frecuencia = 0;
            // Contamos cuántos hay desde nuestra posición 'i' hasta el final del vector
            for (int j = i; j < cant; j++) {
                if (vector[i] == vector[j]) {
                    frecuencia++;
                }
            }
            // Guardamos la frecuencia en la columna 1 y avanzamos de fila para el próximo
            puntero_matriz[filaActual][1] = frecuencia;
            filaActual++;
        }
    }
    cout << setw(10) << "Numero" << setw(20) << "Ocurrencias" << endl;
    for (int i = 0;i < nFilas;i++){
        cout << setw(7) << puntero_matriz[i][0] << setw(18) << puntero_matriz[i][1] << endl;
    }
    for (int i = 0;i < nFilas;i++){
        delete[] puntero_matriz[i];
    }
    delete[] puntero_matriz;
}
