#include <iostream>
/*Generar los números primos de un valor ingresado por el usuario. Mostrar en pantalla,
además, cuantos números primos tiene y cuales son*/
using namespace std;

int main()
{
    // 'num' guarda el valor inicial que nos da el usuario.
    // 'c' es nuestro contador para llevar la cuenta de cuántos números encontramos.
    int num, c = 0;
    cout << "Ingrese un valor para saber cuantos numeros primos tiene: ";
    cin >> num;
    cout << endl;
    // Paso 1: Recorremos todos los números empezando desde el 2 hasta llegar al número del usuario.
    // La variable 'i' va a representar cada uno de esos números que vamos probando.
    cout << "Numeros primos: ";
    for (int i = 2;i < num;i++){
        // Antes de revisar cada número 'i', preparamos nuestras herramientas.
        int creciente = 2;// Nuestro divisor de prueba, arranca en 2.
        bool esPrimo = true;// Le ponemos la etiqueta de "es primo" por defecto.
        // Paso 2: Revisamos si el número 'i' actual es realmente primo.
        // El bucle sigue dando vueltas MIENTRAS siga teniendo la etiqueta "esPrimo"
        // y mientras nuestro divisor de prueba sea menor que 'i'.
        while (esPrimo && creciente < i){
            // Intentamos dividir 'i' por nuestro divisor de prueba.
            if (i%creciente == 0){
                // Si la división es exacta (resto 0), descubrimos que no es primo.
                esPrimo = false;
            }
            else{
                // Si no se pudo dividir, le sumamos 1 al divisor para probar con el siguiente.
                creciente++;
            }
        }
        // Paso 3: Evaluamos los resultados del número 'i'.
        if (esPrimo){
            // Si el número sobrevivió al bucle anterior y conservó su etiqueta de primo...

            // Verificamos si, además de ser primo, es capaz de dividir al número original del usuario.
            if (num%i == 0){
                cout << i << ' ';// Lo imprimimos en la pantalla.
                c++;// Sumamos 1 a nuestro contador total de hallazgos.
            }
        }
    }
    // Imprimimos el resultado final del contador.
    cout << endl;
    cout << "Cantidad: " << c << endl;
}
