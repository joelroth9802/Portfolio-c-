#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/*Una empresa periodística está realizando una encuesta sobre las necesidades de
capacitación de la gente en diversos temas.
Para la encuesta tomó un muestreo de 500 personas a las cuales les preguntó en que temas
necesitaban capacitarse.
Se ingresan inicialmente los temas seleccionados por la empresa, de la siguiente forma:
Código de tema (1 a 20), nombre del tema, costo de capacitación de una persona, no
necesariamente ordenados por código de tema.
Luego por cada uno de los encuestados se ingresa: código de tema en el que quiere
capacitarse, pudiendo contestar que quiere capacitarse en varios temas, y sabiendo que
finalizan los datos de cada encuestado con un código de tema = 0.
Se desea:
• Por cada encuestado total de temas en que quiere capacitarse.
• Total de encuestados que eligieron cada tema, de la siguiente manera:
Descripción del tema          Cantidad de interesados
xxxxx                         xxxxxx
• Número de encuestados que eligieron más de 10 temas.
• Presupuesto necesario para capacitar a todas las personas en los temas que eligieron.*/
int main(int argc, char *argv[]) {
	//Declaración de variables
	int valores[20][2], cod, masdediez, total; 
	string temas[20];
	total = 0; masdediez = 0;//Acumuladores generales
	cout << "Ingrese los temas seleccionados por la empresa: " << endl;
	cout << endl;
	//Se leen los datos para la descipción del tema y el costo por capacitación
	for (int i = 0;i < 20;i++)
	{
		cout << "Tema " << i+1 << ": ";
		getline(cin, temas[i]);
		cout << "Ingrese costo de capacitación por persona: ";
		cin >> valores[i][0];
		valores[i][1] = 0;//Acumulador para la cantidad de interesados por tema
		cin.ignore();
	}
	cout << endl;
	for(int i = 0;i < 30;i++)
	{
		//Se lee el codigo de tema en la que quiere capacitarse cada persona
		cout << "Persona " << i+1 << endl;
		cout << "Ingrese código de tema en el que quiere capacitarse: ";
		cin >> cod;
		int encuestados = 0;//Acumulador de temas por cada persona
		//Cada persona se puede capacitar a más de un tema
		while(cod != 0)
		{
			--cod;
			valores[cod][1]++;//Incremento de la cantidad de interesados
			encuestados++;//Incremento para la cantidad de temas por encuestado
			total += valores[cod][0];//Incremento para el presupuesto total de las capacitaciones
			cout << "Ingrese código de tema en el que quiere capacitarse: ";
			cin >> cod;
		}
		//Si el encuestado esta interesado por mas de 10 temas, el contador "masdediez" se incrementa en 1
		if (encuestados > 10)
		{
			masdediez++;
		}
		//Se imprime en pantalla por cada encuestado
		cout << "Total de temas en que quiere capacitarse: " << encuestados << endl;
	}
	//Informe completo
	cout << "----------------------------------------------------------------" << endl;
	cout << setw(6) << "Tema" << setw(35) << "Cantidad de interesados" << endl;
	for (int i = 0;i < 20;i++)
	{
		cout << temas[i] << setw(20) << valores[i][1] << endl;
	}
	cout << endl;
	cout << "Encuestados que eligieron más de 10 temas: " << masdediez << endl;
	cout << "Presupuesto total para capacitar a todas las personas: $ " << total;
	return 0;
}

