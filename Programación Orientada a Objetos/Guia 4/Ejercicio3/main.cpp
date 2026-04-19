#include <iostream>
#include <cstring>
#include <cctype>
/*Realice una función que dado un vector de cstring y un carácter agregue dicho carácter al
final vector cstring.*/
using namespace std;
void agregar_caracter(char palabra[], char letra);
int main()
{
    char palabra[100], letra;
    cout << "Ingrese una palabra: ";
    cin.getline(palabra, 100);
    cout << endl;
    cout << "Ingrese una letra para agregar a la palabra: ";
    cin >> letra;
    cout << endl;
    agregar_caracter(palabra, letra);
    cout << "Resultado: " << palabra << endl;
    return 0;
}
void agregar_caracter(char palabra[], char letra){
    size_t pos = strlen(palabra);
    palabra[pos] = letra;
    palabra[pos + 1] = '\0';
}
