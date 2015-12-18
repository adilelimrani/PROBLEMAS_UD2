#include <iostream>

using namespace std;
int main() {

	double numero, sumatorio=0;

	cout << "introducir sumatorio: " << endl;
	cin >> numero;

	for ( int i = 1 ; i <= numero ; i++) {
		sumatorio = sumatorio+i;
	}		
	cout << "el sumatorio de " << numero << " es " << sumatorio << endl;

	return 0;

}
