/* vamos a crear un programa que lea dos valores reales, escribe en la salida 
estandar un mensaje indicando cual es mayor*/



#include <iostream>
using namespace std;

int main() {


	double a=0.0,b=0.0;

	cout << "introduzca el primer numero: " <<endl;
	cin >> a;
	cout << "introduzca segundo numero: " << endl;
	cin >> b;

// si "a" es mayor que "b" el programa dará salida a la sentencia 22
	if (a>b) {
		cout << a << ">" << b << endl;
	}
// si no se cumple la sentencia 21 el programa dara salida a la sentencia 26
	else 
		cout << a << "<" << b << endl;
	return 0;

}
