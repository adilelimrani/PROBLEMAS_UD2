//tabla de multiplicar de cualquier entero


#include <iostream>
using namespace std;
int main() {

	int numero=0,a=0;

	
		cout<<"Introduzca el numero que quiere multiplicar: "<<endl;
		cin >> numero;
	do {
		a=a+1;
		cout << numero << " X " << a << "= " <<numero*a << endl;
	} while (a<10);
}
