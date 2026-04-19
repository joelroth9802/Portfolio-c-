#include <iostream>
#include <cstring>
#include <cctype>
/*Realice una función que dado un vector de cstring retorne el mismo cstring en minúscula*/
using namespace std;
void minuscula(char palabra[]);
int main()
{
    char palabra[100];
    cout << "Ingrese una palabra en mayuscula para convertirlo en minuscula: ";
    cin.getline(palabra, 100);
    cout << endl;
    minuscula(palabra);
    cout << "Resultado: " << palabra << endl;
    return 0;
}
void minuscula(char palabra[]){
    size_t longitud = strlen(palabra);
    for (size_t i = 0;i < longitud;i++){
        palabra[i] = tolower(palabra[i]);
    }
}
