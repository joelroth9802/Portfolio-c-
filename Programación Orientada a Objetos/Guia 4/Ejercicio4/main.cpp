#include <iostream>
#include <cstring>
#include <cctype>
/*Realice una función que dado un vector de ctring y un carácter agregue dicho carácter al
principio del vector cstring.*/
using namespace std;
void agregar_letra(char palabra[], char letra);
int main()
{
    char palabra[100], letra;
    cout << "Ingrese una palabra: ";
    cin.getline(palabra, 100);
    cout << endl;
    cout << "Ingrese una letra para agregar al principo de la palabra: ";
    cin >> letra;
    cout << endl;
    agregar_letra(palabra, letra);
    cout << "Resultado: " << palabra << endl;
    return 0;
}
void agregar_letra(char palabra[], char letra){
    size_t longitud = strlen(palabra);
    /*memmove(destino, origen, cantidad_de_bytes)
    Movemos desde el inicio (palabra) hacia una posición adelante (palabra + 1)
    Movemos (longitud + 1) bytes para asegurarnos de incluir el '\0'*/
    memmove(palabra + 1, palabra, longitud + 1);
    palabra[0] = letra;
}
