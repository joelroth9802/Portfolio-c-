#include <iostream>
#include <cstring>
#include <cctype>
/*Realice una función que dado un vector de cstring devuelva un vector con las palabras que
comiencen con una letra ingresada por parámetros.*/
using namespace std;
void nueva_cadena(char palabra[], char letra, char *&frase2);
int main()
{
    char frase[100], letra, *frase2;
    cout << "Ingrese una frase: ";
    cin.getline(frase, 100);
    cout << endl;
    cout << "Ingrese una letra: ";
    cin >> letra;
    cout << endl;
    nueva_cadena(frase, letra, frase2);
    cout << "Resultado: " << frase2 << endl;
    delete[] frase2;
    return 0;
}
void nueva_cadena(char palabra[], char letra, char *&frase2){
    int longitud = strlen(palabra);
    frase2 = new char[longitud + 1];
    frase2[0] = '\0';
    char *token = strtok(palabra, " ");
    while (token != NULL){
        if (token[0] == letra){
            strncat(frase2, token, strlen(token));
            strncat(frase2, " ", 1);
        }
        token = strtok(NULL, " ");
    }
}