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
    // Definimos las varibles y el tipo de dato a utilizar
	float adicionalDeDescuento;
	float descuentoDeSueldo;
	float edadDelUsuario;
	float sueldoDelUsuario;
	float totalADescontar;
	// Inicializamos estas dos varibles para el calculo
	descuentoDeSueldo = 0;
	adicionalDeDescuento = 0;
	// Se utilizo un bucle Do while para que el usuario pueda agregar una edad valido
	do {
		cout << "Ingrese su edad: " << endl;
		cin >> edadDelUsuario;
		if (edadDelUsuario>0) {
			cout << "Su edad es valido" << endl;
		} else {
			cout << "La edad que desea ingresar no es valido" << endl;
		}
	} while (edadDelUsuario<=0);
	// Se utilizo un bucle Do while para que el usuario pueda agregar un sueldo valido
	do {
		cout << "Ingrese su sueldo anual: " << endl;
		cin >> sueldoDelUsuario;
		if (sueldoDelUsuario>0) {
			cout << "Su sueldo es valido" << endl;
		} else {
			cout << "El sueldo que desea ingresar no es valido" << endl;
		}
	} while (sueldoDelUsuario<=0);
	// Aqui la condicion es si el usuario tiene 30 años o menos se le agregarara un descuento extra del 20%
	if (edadDelUsuario<=30) {
		// Se calculara el sueldo menor a 10000 y se le descontara el 0.5%
		if (sueldoDelUsuario<10000) {
			descuentoDeSueldo = sueldoDelUsuario*0.005;
			adicionalDeDescuento = descuentoDeSueldo*0.2;
			totalADescontar = sueldoDelUsuario-descuentoDeSueldo-adicionalDeDescuento;
			adicionalDeDescuento = adicionalDeDescuento+descuentoDeSueldo;
			cout << "Su sueldo actual es de: " << sueldoDelUsuario << endl;
			cout << "Se le descontara el 0.5% y un extra del el 20%: " << adicionalDeDescuento << endl;
			cout << "Total: " << totalADescontar << endl;
		} else {
			// Se calculara el sueldo de un rango entre 10000 y 19999 y se le descontara el 1%
			if (sueldoDelUsuario>=10000 && sueldoDelUsuario<=19999) {
				descuentoDeSueldo = sueldoDelUsuario*0.01;
				adicionalDeDescuento = descuentoDeSueldo*0.2;
				totalADescontar = sueldoDelUsuario-descuentoDeSueldo-adicionalDeDescuento;
				adicionalDeDescuento = adicionalDeDescuento+descuentoDeSueldo;
				cout << "Su sueldo actual es de: " << sueldoDelUsuario << endl;
				cout << "Se le descontara el 1% y un extra el 20%: " << adicionalDeDescuento << endl;
				cout << "Total: " << totalADescontar << endl;
			} else {
				// Se calculara el sueldo de un rango entre 20000 y 29999 y se le descontara el 2%
				if (sueldoDelUsuario>=20000 && sueldoDelUsuario<=29999) {
					descuentoDeSueldo = sueldoDelUsuario*0.02;
					adicionalDeDescuento = descuentoDeSueldo*0.2;
					totalADescontar = sueldoDelUsuario-descuentoDeSueldo-adicionalDeDescuento;
					adicionalDeDescuento = adicionalDeDescuento+descuentoDeSueldo;
					cout << "Su sueldo actual es de: " << sueldoDelUsuario << endl;
					cout << "Se le descontara el 2% y un extra el 20%: " << adicionalDeDescuento << endl;
					cout << "Total: " << totalADescontar << endl;
				} else {
					// Se calculara el sueldo mayor a 30000 y se le descontara el 2.5%
					if (sueldoDelUsuario>30000) {
						descuentoDeSueldo = sueldoDelUsuario*0.025;
						adicionalDeDescuento = descuentoDeSueldo*0.2;
						totalADescontar = sueldoDelUsuario-descuentoDeSueldo-adicionalDeDescuento;
						adicionalDeDescuento = adicionalDeDescuento+descuentoDeSueldo;
						cout << "Su sueldo actual es de: " << sueldoDelUsuario << endl;
						cout << "Se le descontara el 2.5% y un extra del 20%: " << adicionalDeDescuento << endl;
						cout << "Total: " << totalADescontar << endl;
					}
				}
			}
		}
		// Si la condicion no se cumple no se le descontara el 20%
	} else {
		if (sueldoDelUsuario<10000) {
			// Se calculara el sueldo menor a 10000 y se le descontara el 0.5%
			descuentoDeSueldo = sueldoDelUsuario*0.005;
			totalADescontar = sueldoDelUsuario-descuentoDeSueldo;
			cout << "Su sueldo actual es de: " << sueldoDelUsuario << endl;
			cout << "Se le descontara el 0.5%: " << descuentoDeSueldo << endl;
			cout << "Total: " << totalADescontar << endl;
		} else {
			// Se calculara el sueldo de un rango entre 10000 y 19999 y se le descontara el 1%
			if (sueldoDelUsuario>=10000 && sueldoDelUsuario<=19999) {
				descuentoDeSueldo = sueldoDelUsuario*0.01;
				totalADescontar = sueldoDelUsuario-descuentoDeSueldo;
				cout << "Su sueldo actual es de: " << sueldoDelUsuario << endl;
				cout << "Se le descontara el 1%: " << descuentoDeSueldo << endl;
				cout << "Total: " << totalADescontar << endl;
			} else {
				// Se calculara el sueldo de un rango entre 20000 y 29999 y se le descontara el 2%
				if (sueldoDelUsuario>=20000 && sueldoDelUsuario<=29999) {
					descuentoDeSueldo = sueldoDelUsuario*0.02;
					totalADescontar = sueldoDelUsuario-descuentoDeSueldo;
					cout << "Su sueldo actual es de: " << sueldoDelUsuario << endl;
					cout << "Se le descontara el 2%: " << descuentoDeSueldo << endl;
					cout << "Total: " << totalADescontar << endl;
				} else {
					// Se calculara el sueldo mayor a 30000 y se le descontara el 2.5%
					if (sueldoDelUsuario>30000) {
						descuentoDeSueldo = sueldoDelUsuario*0.025;
						totalADescontar = sueldoDelUsuario-descuentoDeSueldo;
						cout << "Su sueldo actual es de: " << sueldoDelUsuario << endl;
						cout << "Se le descontara el 2.5%: " << descuentoDeSueldo << endl;
						cout << "Total: " << totalADescontar << endl;
					}
				}
			}
		}
	}
	return 0;
}

