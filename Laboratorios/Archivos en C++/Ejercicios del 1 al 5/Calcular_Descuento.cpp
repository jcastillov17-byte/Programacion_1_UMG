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
	float adicional;
	float descuento;
	float edad;
	float sueldo;
	float total;
	// Definimos las varibles y el tipo de dato a utilizar
	// Inicializamos estas dos varibles para el calculo
	descuento = 0;
	adicional = 0;
	// Se utilizo un bucle Do while para que el usuario pueda agregar una edad valido
	do {
		cout << "Ingrese su edad: " << endl;
		cin >> edad;
		if (edad>0) {
			cout << "Su edad es valido" << endl;
		} else {
			cout << "La edad que desea ingresar no es valido" << endl;
		}
	} while (edad<=0);
	// Se utilizo un bucle Do while para que el usuario pueda agregar un sueldo valido
	do {
		cout << "Ingrese su sueldo anual: " << endl;
		cin >> sueldo;
		if (sueldo>0) {
			cout << "Su sueldo es valido" << endl;
		} else {
			cout << "El sueldo que desea ingresar no es valido" << endl;
		}
	} while (sueldo<=0);
	// Aqui la condicion es si el usuario tiene 30 años o menos se le agregarara un descuento extra del 20%
	if (edad<=30) {
		// Se calculara el sueldo menor a 10000 y se le descontara el 0.5%
		if (sueldo<10000) {
			descuento = sueldo*0.005;
			adicional = descuento*0.2;
			total = sueldo-descuento-adicional;
			adicional = adicional+descuento;
			cout << "Su sueldo actual es de: " << sueldo << endl;
			cout << "Se le descontara el 0.5% y un extra del el 20%: " << adicional << endl;
			cout << "Total: " << total << endl;
		} else {
			// Se calculara el sueldo de un rango entre 10000 y 19999 y se le descontara el 1%
			if (sueldo>=10000 && sueldo<=19999) {
				descuento = sueldo*0.01;
				adicional = descuento*0.2;
				total = sueldo-descuento-adicional;
				adicional = adicional+descuento;
				cout << "Su sueldo actual es de: " << sueldo << endl;
				cout << "Se le descontara el 1% y un extra el 20%: " << adicional << endl;
				cout << "Total: " << total << endl;
			} else {
				// Se calculara el sueldo de un rango entre 20000 y 29999 y se le descontara el 2%
				if (sueldo>=20000 && sueldo<=29999) {
					descuento = sueldo*0.02;
					adicional = descuento*0.2;
					total = sueldo-descuento-adicional;
					adicional = adicional+descuento;
					cout << "Su sueldo actual es de: " << sueldo << endl;
					cout << "Se le descontara el 2% y un extra el 20%: " << adicional << endl;
					cout << "Total: " << total << endl;
				} else {
					// Se calculara el sueldo mayor a 30000 y se le descontara el 2.5%
					if (sueldo>30000) {
						descuento = sueldo*0.025;
						adicional = descuento*0.2;
						total = sueldo-descuento-adicional;
						adicional = adicional+descuento;
						cout << "Su sueldo actual es de: " << sueldo << endl;
						cout << "Se le descontara el 2.5% y un extra del 20%: " << adicional << endl;
						cout << "Total: " << total << endl;
					}
				}
			}
		}
		// Si la condicion no se cumple no se le descontara el 20%
	} else {
		if (sueldo<10000) {
			// Se calculara el sueldo menor a 10000 y se le descontara el 0.5%
			descuento = sueldo*0.005;
			total = sueldo-descuento;
			cout << "Su sueldo actual es de: " << sueldo << endl;
			cout << "Se le descontara el 0.5%: " << descuento << endl;
			cout << "Total: " << total << endl;
		} else {
			// Se calculara el sueldo de un rango entre 10000 y 19999 y se le descontara el 1%
			if (sueldo>=10000 && sueldo<=19999) {
				descuento = sueldo*0.01;
				total = sueldo-descuento;
				cout << "Su sueldo actual es de: " << sueldo << endl;
				cout << "Se le descontara el 1%: " << descuento << endl;
				cout << "Total: " << total << endl;
			} else {
				// Se calculara el sueldo de un rango entre 20000 y 29999 y se le descontara el 2%
				if (sueldo>=20000 && sueldo<=29999) {
					descuento = sueldo*0.02;
					total = sueldo-descuento;
					cout << "Su sueldo actual es de: " << sueldo << endl;
					cout << "Se le descontara el 2%: " << descuento << endl;
					cout << "Total: " << total << endl;
				} else {
					// Se calculara el sueldo mayor a 30000 y se le descontara el 2.5%
					if (sueldo>30000) {
						descuento = sueldo*0.025;
						total = sueldo-descuento;
						cout << "Su sueldo actual es de: " << sueldo << endl;
						cout << "Se le descontara el 2.5%: " << descuento << endl;
						cout << "Total: " << total << endl;
					}
				}
			}
		}
	}
	return 0;
}

