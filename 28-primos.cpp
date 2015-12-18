#include <iostream>

using namespace std;
int main() {

	int numero=0 , i=0 , contador=0;

	cout << "introducir numero: " << endl;
	cin >> numero;

	for ( i=1 ; i<=numero ; i++) {
		if (numero%i==0)
			contador++;
	}
	if (contador==2){
		cout << "CONGRATULATIONS!!!! el numero "<<numero<<" es primo."<<endl;
	}
	else {
		cout << "el numero "<<numero<<" no es primo."<<endl;
	}
	return 0;
}
