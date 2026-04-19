#include <iostream>
#include <cstring>
#include <cctype>
/*Realice una función que dado un vector de cstring y un carácter elimine todas las ocurrencias*/
using namespace std;
void eliminar_ocurrencia(char palabra[], char letra);
int main()
{
    char palabra[100], letra;
    cout << "Ingrese una palabra: ";
    cin.getline(palabra, 100);
    cout << endl;
    cout << "Ingrese una letra que desea eliminar: ";
    cin >> letra;
    cout << endl;
    eliminar_ocurrencia(palabra, letra);
    cout << "Resultado: " << palabra << endl;
    return 0;
}
void eliminar_ocurrencia(char palabra[], char letra){
    size_t longitud = strlen(palabra);
    for (size_t i = 0;i < longitud;i++){
        size_t j = 0;
        for (j = 0;(j < longitud) && (palabra[j] != letra);j++);
        if (j < longitud){
            memmove(&palabra[j], &palabra[j + 1], longitud - j);
        }
    }
}