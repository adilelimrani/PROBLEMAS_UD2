//procedemos a crear un programa de un satelite que recibe reales,
//siempre y cuando los numero sean positivos seguira pidiendo mas
//numeros.



#include <iostream>
using namespace std;
int main() {

	double numero=0.0; 
	
	while (numero>=0) {
		cout << "introducir número: ";
		cin >> numero;
		cout << "recibido: " << numero << endl;
	}
	cout << "fin de transmisión" << endl;
	return 0;
}
