#include <iostream>
/*La calificación final de un estudiante es la media ponderada de tres notas: la nota de prácticas que cuenta un
 * 30% del total, la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante. Escriba un
 * programa que lea de la entrada estándar las tres notas de un alumno y escriba en la salida estándar su nota final.*/
using namespace std;

int main()
{
    int notaPrac, notaTeo, notaPart, notaFinal = 0;
    cout << "Ingrese las notas del alumno: " << endl;
    cout << "Nota Practica: ";
    cin >> notaPrac;
    cout << "Nota teorica: ";
    cin >> notaTeo;
    cout << "Nota de participacion: ";
    cin >> notaPart;
    cout << endl;
    notaPrac *= 0.30;
    notaTeo *= 0.60;
    notaPart *= 0.10;
    notaFinal = notaPrac + notaTeo + notaPart;
    cout << "Nota final: " << notaFinal << endl;
    return 0;
}
