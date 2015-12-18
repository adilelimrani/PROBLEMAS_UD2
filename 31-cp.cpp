#include <iostream>
using namespace std;
int main() {

	int numero=0,contador=0,i=0;

	cout << "introducir el numero que crees que es cuadrado perfecto: "<<endl;
	cin >> numero;

	for (i=1 ; i<=numero ; i++) {
		contador=i*i;
	}
		if (contador == numero) {
			cout << "el numero " << numero << " es cuadrado perfecto"<< endl;
			cout << i << " X " << i << " = " << numero << endl;
		}
		else
			cout << "el numero " << numero << " no es cuadrado perfecto"<<endl;

	return 0;
}
