// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int cantidad;
	float monto;
	int residuo;
	// Definimos el tipo de dato que se utilizara en la variable
	// Se le pide al usuario que ingrese el monto
	cout << "Ingrese el monto: " << endl;
	cin >> monto;
	// Se usara un condicional donde el monto sea > 0
	if (monto>0) {
		// Se multiplicara el monto por 100 para poder sacar los centavos y lo redondeamos
		residuo = int((monto*100)+.5);
		// Se calcula el billete de a 200
		cantidad = int(residuo/20000);
		residuo = residuo%20000;
		cout << "Billete de a 200: " << cantidad << endl;
		// Se calcula el billete de a 100
		cantidad = int(residuo/10000);
		residuo = residuo%10000;
		cout << "Billete de a 100: " << cantidad << endl;
		// Se calcula el billete de a 50
		cantidad = int(residuo/5000);
		residuo = residuo%5000;
		cout << "Billete de a 50: " << cantidad << endl;
		// Se calula el billete de a 20
		cantidad = int(residuo/2000);
		residuo = residuo%2000;
		cout << "Billete de a 20: " << cantidad << endl;
		// Se calcula el billete de a 10
		cantidad = int(residuo/1000);
		residuo = residuo%1000;
		cout << "Billete de a 10: " << cantidad << endl;
		// Se calcula el billete de a 5
		cantidad = int(residuo/500);
		residuo = residuo%500;
		cout << "Billete de a 5: " << cantidad << endl;
		// Se calcula el billete de a 1
		cantidad = int(residuo/100);
		residuo = residuo%100;
		cout << "Billete de a 1: " << cantidad << endl;
		// Se calcula la moneda de 50 centavos
		cantidad = int(residuo/50);
		residuo = residuo%50;
		cout << "Moneda de a 50 centavos: " << cantidad << endl;
		// Se calcula la moneda de 10 centavos
		cantidad = int(residuo/10);
		residuo = residuo%10;
		cout << "Moneda de a 10 centavos: " << cantidad << endl;
		// Se calcula la moneda de 5 centavos
		cantidad = int(residuo/5);
		residuo = residuo%5;
		cout << "Moneda de a 5 centavos: " << cantidad << endl;
		// Se calcula la moneda de 1 centavos
		cantidad = int(residuo/1);
		residuo = residuo%1;
		cout << "Moneda de a 1 centavos: " << cantidad << endl;
	} else {
		cout << "Monto no valido" << endl;
	}
	return 0;
}

