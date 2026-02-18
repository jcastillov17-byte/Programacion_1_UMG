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
    // Definimos el tipo de dato que se utilizara en la variable
	int cantidadDividida;
	float montoIngresado;
	int residuoDeLaDivision;
	// Se le pide al usuario que ingrese el monto
	cout << "Ingrese el monto: " << endl;
	cin >> montoIngresado;
	// Se usara un condicional donde el monto sea > 0
	if (montoIngresado>0) {
		// Se multiplicara el monto por 100 para poder sacar los centavos y lo redondeamos
		residuoDeLaDivision = int((montoIngresado*100)+.5);
		// Se calcula el billete de a 200
		cantidadDividida = int(residuoDeLaDivision/20000);
		residuoDeLaDivision = residuoDeLaDivision%20000;
		cout << "Billete de a 200: " << cantidadDividida << endl;
		// Se calcula el billete de a 100
		cantidadDividida = int(residuoDeLaDivision/10000);
		residuoDeLaDivision = residuoDeLaDivision%10000;
		cout << "Billete de a 100: " << cantidadDividida << endl;
		// Se calcula el billete de a 50
		cantidadDividida = int(residuoDeLaDivision/5000);
		residuoDeLaDivision = residuoDeLaDivision%5000;
		cout << "Billete de a 50: " << cantidadDividida << endl;
		// Se calula el billete de a 20
		cantidadDividida = int(residuoDeLaDivision/2000);
		residuoDeLaDivision = residuoDeLaDivision%2000;
		cout << "Billete de a 20: " << cantidadDividida << endl;
		// Se calcula el billete de a 10
		cantidadDividida = int(residuoDeLaDivision/1000);
		residuoDeLaDivision = residuoDeLaDivision%1000;
		cout << "Billete de a 10: " << cantidadDividida << endl;
		// Se calcula el billete de a 5
		cantidadDividida = int(residuoDeLaDivision/500);
		residuoDeLaDivision = residuoDeLaDivision%500;
		cout << "Billete de a 5: " << cantidadDividida << endl;
		// Se calcula el billete de a 1
		cantidadDividida = int(residuoDeLaDivision/100);
		residuoDeLaDivision = residuoDeLaDivision%100;
		cout << "Billete de a 1: " << cantidadDividida << endl;
		// Se calcula la moneda de 50 centavos
		cantidadDividida = int(residuoDeLaDivision/50);
		residuoDeLaDivision = residuoDeLaDivision%50;
		cout << "Moneda de a 50 centavos: " << cantidadDividida << endl;
		// Se calcula la moneda de 10 centavos
		cantidadDividida = int(residuoDeLaDivision/10);
		residuoDeLaDivision = residuoDeLaDivision%10;
		cout << "Moneda de a 10 centavos: " << cantidadDividida << endl;
		// Se calcula la moneda de 5 centavos
		cantidadDividida = int(residuoDeLaDivision/5);
		residuoDeLaDivision = residuoDeLaDivision%5;
		cout << "Moneda de a 5 centavos: " << cantidadDividida << endl;
		// Se calcula la moneda de 1 centavos
		cantidadDividida = int(residuoDeLaDivision/1);
		residuoDeLaDivision = residuoDeLaDivision%1;
		cout << "Moneda de a 1 centavos: " << cantidadDividida << endl;
	} else {
		cout << "Monto no valido" << endl;
	}
	return 0;
}

