#include <iostream>
/*Realice una función que dado un vector lo transforme de modo tal que el primer elemento sea el
último y el ultimo el primero, el segundo el antepenúltimo, etc. Utilice recursividad.*/
using namespace std;
void cambiar_vector(int v1[], int i, int f);
int main()
{
    int vector[10], inicio = 0, fin = 10;
    cout << "Ingrese valores para el vector: " << endl;
    for (int i = 0;i < 10;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector[i];
    }
    cout << endl;
    cambiar_vector(vector, inicio, fin - 1);
    cout << "Resultado: ";
    for (int i = 0;i < 10;i++){
        cout << vector[i] << ' ';
    }
    cout << endl;
    return 0;
}
void cambiar_vector(int v1[], int i, int f){
    int aux;
    if (i >= f){
        return;
    }
    aux = v1[i];
    v1[i] = v1[f];
    v1[f] = aux;
    return cambiar_vector(v1, i + 1, f - 1);
}
