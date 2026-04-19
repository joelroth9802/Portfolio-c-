#include <iostream>
#include <cstring>
#include <cctype>
/*Realice una función que dado un vector de cstring y un carácter elimine la primer ocurrencia.*/
using namespace std;
void eliminar_letra(char palabra[], char letra);
int main()
{
    char palabra[100], letra;
    cout << "Ingrese una palabra: ";
    cin.getline(palabra, 100);
    cout << endl;
    cout << "Ingrese una letra para eliminar: ";
    cin >> letra;
    cout << endl;
    eliminar_letra(palabra, letra);
    cout << "Resultado: " << palabra << endl;
    return 0;
}
void eliminar_letra(char palabra[], char letra){
    size_t longitud = strlen(palabra), i = 0;
    for (i = 0;(i < longitud) && (palabra[i] != letra);i++);
    if (i < longitud){
        memmove(&palabra[i], &palabra[i + 1], longitud - i);
    }
}
