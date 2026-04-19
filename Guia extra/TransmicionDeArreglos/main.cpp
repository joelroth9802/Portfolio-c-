#include <iostream>
/*Transmision de arreglos
 * Ejemplo: Hallar el máximo elemento de un arreglo.*/
using namespace std;
int hallarMax(int *dirVec, int nElementos);//Prototipo
int main()
{
    const int nElementos = 5;
    int numeros[nElementos] = {3,5,2,8,1};

    //Le pasamos la primera direccion de memoria del vector
    cout << "El mayor elemento es: " << hallarMax(numeros, nElementos) << endl;
    return 0;
}
int hallarMax(int *dirVec, int nElementos){
    int max = 0;

    for (int i = 0;i < nElementos;i++){
        // Usamos paréntesis para evaluar primero (dirVec + i)
        if (*(dirVec + i) > max){//Recorriendo el arreglo
            max = *(dirVec + i);
        }
        //Se puede usar tambien dirVec[i]
    }

    return max;
}
