#include <iostream>
/*Realice una función que dado un vector de enteros retorne verdadero si este es un palíndromo,
por ejemplo: [1,2,3,2,1]. Utilice recursividad.*/
using namespace std;
bool palindromo(int v1[], int i, int f);
int main()
{
    int vector[5], inicio = 0, fin = 5;
    cout << "Ingrese un vector de enteros: " << endl;
    for (int i = 0;i < 5;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector[i];
    }
    cout << endl;
    if (palindromo(vector, inicio, fin - 1)){
        cout << "El vector Si es un palindromo" << endl;
    }
    else{
        cout << "El vector No es un palindromo" << endl;
    }
    return 0;
}
bool palindromo(int v1[], int i, int f){
    // Si los índices se cruzan o llegan al centro, todo coincidió
    if (i >= f){
        return true;
    }
    // Comparamos los valores en las posiciones actuales
    if (v1[i] == v1[f]){
        // Si son iguales, devolvemos el resultado de mirar un paso más adentro
        return palindromo(v1, i + 1, f - 1);
    }
    else{
        // Si hay una diferencia, descartamos todo
        return false;
    }
}
