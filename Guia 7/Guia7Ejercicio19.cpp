#include <iostream>
using namespace std;
/*La siguiente función C++ es invocada de la siguiente forma: BAND=EVALUA (N1,N2,N3),
donde BAND debe ser una variable de tipo lógica. La función indica si un determinado alumno
puede continuar con el cursado en el segundo cuatrimestre, al evaluar lo siguiente: Si N3 es
mayor o igual 25 créditos y la suma de las 3 notas es mayor o igual a 75, entonces la función
devuelve TRUE (distinto de 0), pues el alumno ha promocionado la materia. En caso contrario,
devuelve FALSE (0). Los parámetros N1, N2 y N3 representan los créditos obtenidos en los 3
parciales evaluados.*/
int EVALUA(int n1, int n2, int n3, bool BAND);//Prototipo
int main(int argc, char *argv[]) {
	bool BAND = false;
	int n1, n2, n3;
	//Carga de datos
	cout << "Ingrese los creditos de los 3 parciales: " << endl;
	cout << endl;
	cout << "Parcial 1: ";
	cin >> n1;
	cout << "Parcial 2: ";
	cin >> n2;
	cout << "Parcial 3: ";
	cin >> n3;
	cout << endl;
	//Llamada de la función
	BAND = EVALUA(n1, n2, n3, BAND);
	//Informe
	if (BAND == true)
	{
		cout << "El alumno ha promocionado la materia";
	}
	else
	{
		cout << "El alumno no promociono la materia";
	}
	return 0;
}
//Función
int EVALUA(int n1, int n2, int n3, bool BAND){
	//Suma de los parciales
	int suma = n1 + n2 + n3;
	//Si se cumplen las condiciones, es verdadero
	if ((n3 >= 25) && (suma >= 75))
	{
		BAND = true;
	}
	return BAND;
}

