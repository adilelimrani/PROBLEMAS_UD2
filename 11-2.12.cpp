#include <iostream>
using namespace std;

int main() {

	double primero,segundo,signo;
	char c;

	cout << "Introduzca los dos numeros: ";
	cin >> primero >> segundo;
	cout << "introduzca operacion [s]uma/[r]esta/[d]ivision/[m]ultiplicacion: ";
	cin >> c;

	switch (c) {
	case 'S':
	case 's':
		cout << primero+segundo << endl;
		break;
	case 'r':
	case 'R':
		cout << primero-segundo << endl;
		break;
	case 'd':
	case 'D':
		cout << primero/segundo << endl;
		break;
	case 'm':
	case 'M':
		cout << primero*segundo << endl;
		break;
	default:
		cout << "respuesta no permitida";
	}
}
