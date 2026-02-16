// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int edad;
	int num;
	// Se difinara el tipo de variable a utilizar
	// Se le pide al usuario el año en el que nacio
	cout << "-- Programa Para Calcular Su Edad --" << endl;
	cout << "Ingrese en que año nacio: " << endl;
	cin >> num;
	// Se usara una condicional para que el año que ingrese el usuario sea menor o igual a 2026
	if (num<=2026) {
		// El año que ingrese el usuario se lo restamos del año 2026
		edad = 2026-num;
		cout << "Tienes " << edad << " años" << endl;
	} else {
		cout << "El año que desea ingresar es invalido" << endl;
	}
	return 0;
}

