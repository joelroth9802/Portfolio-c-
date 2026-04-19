#include <iostream>
#include <cstring>
/*Realice una función que dado un vector de cstring y un carácter devuelva un vector de
cstring con el conjunto de palabras separadas por este carácter. Por ejemplo dado “hola
Mundo” y ‘ ‘ retorne “hola” y “Mundo”*/
using namespace std;
void separar_palabras(char cadena[], char letra, char *&cadena2);
int main()
{
    char cadena[100], letra, *cadena2;
    cout << "Ingrese una frase: ";
    cin.getline(cadena, 100);
    cout << endl;
    cout << "Ingrese un letra para separar las palabras: ";
    cin >> letra;
    cout << endl;
    separar_palabras(cadena, letra, cadena2);
    cout << "Resultado: " << cadena2 << endl;
    delete[] cadena2;
    return 0;
}
void separar_palabras(char cadena[], char letra, char *&cadena2){
    int longitud = strlen(cadena);
    cadena2 = new char[longitud + 1];
    cadena2[0] = '\0';
    char separador[2] = {letra, '\0'};
    char *token = strtok(cadena, " ");
    if (token != NULL){
        strncat(cadena2, token, strlen(token));
        token = strtok(NULL, " ");
    }
    while (token != NULL){
        strncat(cadena2, " ", 1);
        strncat(cadena2, separador, 1);
        strncat(cadena2, " ", 1);
        strncat(cadena2, token, strlen(token));
        token = strtok(NULL, " ");
    }
}