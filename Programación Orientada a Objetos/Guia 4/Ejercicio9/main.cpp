#include <iostream>
#include <cstring>
#include <cctype>
/*Realice una función que dado un vector de cstring y un carácter retorne el indice donde se
encontro la primera ocurrencia, de no ser encontrado se debe retornar -1.*/
using namespace std;
int buscar_posicion(char palabra[], char letra);
int main()
{
    char palabra[100], letra;
    cout << "Ingrese una palabra: ";
    cin.getline(palabra, 100);
    cout << endl;
    cout << "Ingrese una letra para saber su posicion: ";
    cin >> letra;
    cout << endl;
    cout << "Posicion: " << buscar_posicion(palabra, letra) << endl;
    return 0;
}
int buscar_posicion(char palabra[], char letra){
    int longitud = strlen(palabra), i = 0;
    for (i = 0;(i < longitud) && (palabra[i] != letra);i++);
    if (i < longitud){
        return i;
    }
    else{
        return -1;
    }
}