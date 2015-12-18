#include <iostream>

using namespace std;
int main() {


	double maximo=0.0 , minimo=0.0 , numero=0.0 ;


	for (int i=1 ; i<=10 ; i++) {

		cout << "introduzca el numero: " <<endl;
		cin >> numero;
		if (numero>=maximo) {
			maximo = numero;
		}
		else if (numero <= minimo) {
			minimo = numero;
		}
	}
	cout <<"maximo: " << maximo << endl;
	cout << "minimo: " << minimo <<endl;

	return 0;
}
