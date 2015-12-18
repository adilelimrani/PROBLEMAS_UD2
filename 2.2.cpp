/* vamos a crear un programa que lea un valor entero, escribe en la salida 
estandar un mensaje indicando si es par o impar*/



#include <iostream>
using namespace std;

int main() {


	int a=0;

	cout << "introduzca un numero: " <<endl;
	cin >> a;


// si el resultado de la division de a/2 es 0 el programa dará salida a la sentencia 21
	if (a%2==0) {
		cout << "el numero es par" << endl;
	}
// si no se cumple la sentencia 20 el programa dara salida a la sentencia 25
	else 
		cout << "el numero es impar" << endl;
	return 0;

}
