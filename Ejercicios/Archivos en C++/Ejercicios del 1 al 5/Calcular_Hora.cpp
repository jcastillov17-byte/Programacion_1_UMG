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
	int hora;
	// Se define la varible y el tipo de dato a utilizar
	// Se usara un ciclo Do while hasta que el usuario ingrese el rango correcto de la hora que se le esta pidiendo
	do {
		// Se le pedira al usuario que ingrese una hora del dia entre 0 y 23
		cout << "Ingrese un hora del dia (entre 0 y 23):" << endl;
		cin >> hora;
		// Se utilizaran condicionales para verificar el dia
		if (hora>=0 && hora<=23) {
			// Si el numero que ingreso el usuario esta entre el 0 y 5 se le dira que el dia es de "Madrugada"
			if (hora>=0 && hora<=5) {
				cout << "Madrugada" << endl;
			} else {
				// Si el numero que ingreso el usuario esta entre el 6 y 11 se le dira que el dia es de "Mañana"
				if (hora>=6 && hora<=11) {
					cout << "Mañana" << endl;
				} else {
					// Si el numero que ingreso el usuario esta entre el 12 y 13se le dira que el dia es "Mediodia"
					if (hora>=12 && hora<=13) {
						cout << "Mediodia" << endl;
					} else {
						// Si el numero que ingreso el usuario esta entre el 14 y 19 se le dira que el dia es de "Tarde"
						if (hora>=14 && hora<=19) {
							cout << "Tarde" << endl;
						} else {
							// Si el numero que ingreso el usuario esta entre el 20 y 23 se le dira que el dia es de "Noche"
							if (hora>=20 && hora<=23) {
								cout << "Noche" << endl;
							}
						}
					}
				}
			}
		} else {
			// Si no se cumple la condicion le mostraremos un mensaje dando error
			cout << "La hora que desea ingresar no es valido" << endl;
		}
		// Si el ciclo se cumple se cierra el programa
	} while (!(hora>=0 && hora<=23));
	return 0;
}

