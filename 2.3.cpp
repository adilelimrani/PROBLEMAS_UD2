#include <iostream>
using namespace std;

int main() {

	int dato;
	cout <<"Introduzca un valor entero distinto de cero" << endl;
	cin >> dato;
	if (dato!=0) 
		cout << "Ha escrito " << dato <<" que es distinto de cero" << endl;
		cout << "eres un alumno muy obediente" << endl;

	if (dato==0)
		cout << "Ups! que desobediente..." << endl;

}

//las llaves sirven para unir varias sentencias bajo la condicion "if"
//si eliminamos las llaves entonces la condicion "if" solo afectaria
//a una sola sentencia, la que viene justo despues del "if"
