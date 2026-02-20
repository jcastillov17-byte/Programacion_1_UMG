// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<windows.h>
#include<clocale>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
    setlocale(LC_ALL, "Spanish");
    SetConsoleOutputCP(CP_UTF8);

	char finalizarCalculadora;
	int numeroDos;
	int numeroExtra;
	int numeroUno;
	char opcionLetra;
	int opcionOperaciones;
	int resultadoOperaciones;
	resultadoOperaciones = 0;
	cout << "----- Calculadora ------" << endl;
	cout << "************************" << endl;
	cout << "Opciones de Operaciones" << endl;
	cout << "************************" << endl;
	cout << "1. Suma" << endl;
	cout << "2. División" << endl;
	cout << "3. Resta" << endl;
	cout << "4. Multipicación" << endl;
	cout << "5. Modulo" << endl;
	do {
		cout << "¿Qué opción desea escoger?: " << endl;
		cin >> opcionOperaciones;
		if (opcionOperaciones >= 1 && opcionOperaciones <= 5) {
			switch (opcionOperaciones) {
			case 1:
				cout << "Ingrese el primer numero: " << endl;
				cin >> numeroUno;
				cout << "Ingrese el segundo numero: " << endl;
				cin >> numeroDos;
				resultadoOperaciones = numeroUno+numeroDos;
				break;
			case 2:
				do {
					cout << "Ingrese el primer numero: " << endl;
					cin >> numeroUno;
					cout << "Ingrese el sugundo numero: " << endl;
					cin >> numeroDos;
					if (numeroDos == 0) {
						cout << "Error no se puede divir dentro 0" << endl;
					}
				} while (numeroDos != 0);
                resultadoOperaciones = numeroUno / numeroDos;
				break;
			case 3:
				cout << "Ingrese el primer numero: " << endl;
				cin >> numeroUno;
				cout << "Ingrese el sugundo numero: " << endl;
				cin >> numeroDos;
				resultadoOperaciones = numeroUno - numeroDos;
				break;
			case 4:
				cout << "Ingrese el primer numero: " << endl;
				cin >> numeroUno;
				cout << "Ingrese el sugundo numero: " << endl;
				cin >> numeroDos;
				resultadoOperaciones = numeroUno * numeroDos;
				break;
			case 5:
				cout << "Ingrese el primer numero: " << endl;
				cin >> numeroUno;
				cout << "Ingrese el sugundo numero: " << endl;
				cin >> numeroDos;
				resultadoOperaciones = numeroUno % numeroDos;
				break;
			}
		} else {
			cout << "La opción que desea escoger no se encuentra, Intente de nuevo" << endl;
		}
	} while (opcionOperaciones >= 1 || opcionOperaciones <= 5);

	cout << "¿Desea agregar otra operación S/N?" << endl;
	cin >> opcionLetra;
	switch (opcionLetra) {
	case 'S':
		do {
			cout << "Ingrese un numero:" << endl;
			cin >> numeroExtra;
			cout << "Que tipo de operaciones desea hacer: " << endl;
			cout << "1. Suma" << endl;
			cout << "2. Division" << endl;
			cout << "3. Resta" << endl;
			cout << "4. Multipicación" << endl;
			cin >> opcionOperaciones;
			switch (opcionOperaciones) {
			case 1:
				resultadoOperaciones = resultadoOperaciones + numeroExtra;
				break;
			case 2:
				resultadoOperaciones = resultadoOperaciones / numeroExtra;
				break;
			case 3:
				resultadoOperaciones = resultadoOperaciones - numeroExtra;
				break;
			case 4:
				resultadoOperaciones = resultadoOperaciones * numeroExtra;
				break;
			}
			cout << "¿Desea finalizar la calculadora S/N?" << endl;
			cin >> finalizarCalculadora;
		} while (finalizarCalculadora != 'N');
		cout << "Resultado: " << resultadoOperaciones << endl;
		break;
	case 'N':
		cout << "Resultado: " << resultadoOperaciones << endl;
		break;
	}
	return 0;
}

