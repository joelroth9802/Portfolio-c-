#include <iostream>
#include <fstream>
using namespace std;
/*En un censo agropecuario se ha obtenido información sobre la producción agrícola de distintos
productores.
Entre otros datos se han registrado los siguientes: Código de productor, Cantidad de hectáreas
sembradas en un año, Total de Toneladas cosechadas en un año.
La cantidad de productores censados se lee como primer dato.
Genere un archivo “CENSO.TXT” con la información ingresada, La información de cada productor se
guarda en un mismo renglón, separada por espacios.*/
int main(int argc, char *argv[]) {
	ofstream productores;
	int codProd, cantHect, totTon, nProd;
	cout << "Ingrese la cantidad de productores censados: ";
	cin >> nProd;
	productores.open("./CENSO.txt");
	if (productores.fail()){
		cout << "Error en la apertura del archivo";
	}
	else{
		cout << "Datos de los productores censados en un año" << endl;
		for (int i = 0;i < nProd;i++){
			cout << "Productor " << i+1 << endl;
			cout << "Código de productor: ";
			cin >> codProd;
			cout << "Cantidad de hectáreas sembradas: ";
			cin >> cantHect;
			cout << "Total de toneladas cosechadas: ";
			cin >> totTon;
			productores << codProd << " " << cantHect << " " << totTon << endl;
			cout << endl;
		}
	}
	productores.close();
	return 0;
}
