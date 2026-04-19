#include <iostream>
/*Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatros alumnos*/
using namespace std;

int main()
{
    int alum1, alum2, alum3, alum4, promedio;
    cout << "Ingrese las notas de los alumnos: " << endl;
    cout << "Alumno 1: ";
    cin >> alum1;
    cout << "Alumno 2: ";
    cin >> alum2;
    cout << "Alumno 3: ";
    cin >> alum3;
    cout << "Alumno 4 ";
    cin >> alum4;
    cout << endl;
    promedio = (alum1 + alum2 + alum3 + alum4)/4;
    cout << "Promedio del alumnado: " << promedio << endl;
    return 0;
}
