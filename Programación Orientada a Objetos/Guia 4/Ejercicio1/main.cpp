#include <iostream>
#include <cstring>
#include <cctype>
/*Realice una función que dado un vector de cstring retorne el mismo cstring en mayúscula*/
using namespace std;
void mayuscula(char palabra[]);
int main()
{
    char palabra[100];
    cout << "Ingrese una palabra en minuscula: ";
    cin.getline(palabra, 100);
    cout << endl;
    mayuscula(palabra);
    cout << "Palabra en mayuscula: " << palabra << endl;
    return 0;
}
void mayuscula(char palabra[]){
    size_t longitud = strlen(palabra);
    for (size_t i = 0;i < longitud;i++){
        palabra[i] = toupper(palabra[i]);
    }
}
