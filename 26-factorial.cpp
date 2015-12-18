#include <iostream>

using namespace std;
int main() {

	double numero, factorial=1;

	cout << "introducir factorial: " << endl;
	cin >> numero;

	for ( int i = 1 ; i <= numero ; i++) {
		factorial = factorial*i;
	}		
	cout << "el factorial de " << numero << " es " << factorial<< endl;

	return 0;

}
