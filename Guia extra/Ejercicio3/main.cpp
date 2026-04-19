#include <iostream>
#include <string>
/*Realice un programa que lea de la entrada estándar los siguientes datos de una persona: edad, sexo, altura.
 * Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/
using namespace std;

int main()
{
    int edad; float altura; string sexo;

    cout << "Ingrese los datos de la persona: " << endl;
    cout << "Edad: ";
    cin >> edad;
    cin.ignore();
    cout << "Sexo: ";
    getline(cin, sexo);
    cout << "Altura: ";
    cin >> altura;
    cout << endl;
    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << endl;
    return 0;
}
