#include <iostream>
#include <string>
/*Hacer dos estructuras, una llamada promedio que tendra los siguientes campos: nota1, nota2, nota3; y otro llamada alumno que tendra
 * los siguientes miembros: nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura alumno,  luego pedir
 * todos los datos para un alumno, luego calcular su promedio, y por ultimo imprimir todos sus datos incluido el promedio*/
using namespace std;
struct promedio{
    int nota1, nota2, nota3;
};
struct alumno{
    string nombre, sexo;
    int edad;
    promedio notas;
};
int main()
{
    alumno datos; int prom;
    cout << "Ingrese los datos del alumno: " << endl;
    cout << "Nombre: ";
    getline(cin, datos.nombre);
    cout << "Sexo: ";
    getline(cin, datos.sexo);
    cout << "Edad: ";
    cin >> datos.edad;
    cout << "Nota 1: ";
    cin >> datos.notas.nota1;
    cout << "Nota 2: ";
    cin >> datos.notas.nota2;
    cout << "Nota 3: ";
    cin >> datos.notas.nota3;
    cout << endl;
    prom = (datos.notas.nota1 + datos.notas.nota2 + datos.notas.nota3)/3;
    cout << "Datos del alumno" << endl;
    cout << "Nombre: " << datos.nombre << endl;
    cout << "Sexo: " << datos.sexo << endl;
    cout << "Edad: " << datos.edad << endl;
    cout << "Promedio: " << prom << endl;
    return 0;
}
