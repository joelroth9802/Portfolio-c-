#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
/*Se desea generar un archivo de texto que guarde los valores de x e y donde y = a x2 + bx + c.
Los valores de a, b y c son ingresados por teclado. Los valores de x son números enteros desde 1
hasta 1000.
En cada renglón del archivo deben estar los valores de x e y separados por un espacio en blanco.
Utlizar una función llamada funcion_cuadratica que recibe de parámetros los coeficientes a, b, c y el
valor de x y devuelve el valor de y*/
int funcion_cuadratica(int a, int b, int c, int x);//Prototipo
int main(int argc, char *argv[]) {
	int a, b, c, y, x;
	//Carga de las constantes
	cout << "Datos de las constantes: " << endl;
	cout << "Variable a: ";
	cin >> a;
	cout << "Variable b: ";
	cin >> b;
	cout << "Variable c: ";
	cin >> c;
	cout << endl;
	ofstream archivo;//Se declara variable del archivo para escritura
	archivo.open("./Guia8Ejercicio1.txt");//Se abre el archivo
	for(x = 1;x <= 1000;x++){
		y = funcion_cuadratica(a, b, c, x);//Llamada de la función
		cout << "Y: " << y << ", X: " << x << endl; 
		archivo << y << " " << x << endl;//Informe
	}
	archivo.close();
	return 0;
}
//Función
int funcion_cuadratica(int a, int b, int c, int x){
	return (a*pow(x,2) + b*x + c);
}

