// averiguar cual es el maximo de tres numero.




#include <iostream>
using namespace std;

int main() {

//variables que necesitamos
	double primero=0.0, segundo=0.0, tercero=0.0; 
// entradas y salidas del programa
	cout << "introduzca primero numero: ";
	cin >> primero;
	cout << "introduzca segundo numero: ";
	cin >> segundo;
	cout << "introduzca tercer numero: ";
	cin >> tercero;

//ahora vamos a condicionar la salida del programa
	if (primero>segundo) {
		if (primero>tercero) {
			cout << "el mayor de todos es:" << primero << endl;
		}
		else {
			cout << "el mayor de todos es: " << tercero << endl;
		}
	}	
	else {
		if (segundo>tercero) {
			cout << "el mayor de todos es: " << segundo << endl;
		}
		else {
			cout << "el mayor de todos es: " << tercero << endl;
		}
	}
	return 0;
}
