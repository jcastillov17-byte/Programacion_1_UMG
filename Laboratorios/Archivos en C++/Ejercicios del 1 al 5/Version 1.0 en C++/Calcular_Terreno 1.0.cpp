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
    // Definimos las variables y el tipo de dato a utilizar
	float anchoDelTerreno;
	float largoDelTerreno;
	float precioDelMetroCuadrado;
	float totalDeAlambre;
	float totalDelTerreno;
	// Inicializamos la varible total
	totalDelTerreno = 0;
	totalDeAlambre = 0;
	// Se utilizar 3 ciclos Do while por si el usuario ingresa un dato no valido
	do {
		// Se le pedira al usuario que ingre el ancho
		cout << "Ingrese el ancho: " << endl;
		cin >> anchoDelTerreno;
		// Se le mostra al usuario que se esta trabajando en metros
		cout << anchoDelTerreno << "m" << endl;
		// Se utilizara una condicion para que el usario solo pueda ingresar numeros mayor que 0
		if (anchoDelTerreno>0) {
			cout << "El numero es valido" << endl;
			// Si no se cumpla la condicion se le mostrara un error
		} else {
			cout << "El dato que desea ingresar no es valido" << endl;
		}
		// Si la condición del bucle se cumple pasara al siguiente dato
	} while (anchoDelTerreno<=0);
	do {
		// Se le pedira al usuario que ingre el largo
		cout << "Ingrese el largo: " << endl;
		cin >> largoDelTerreno;
		// Se le mostra al usuario que se esta trabajando en metros
		cout << largoDelTerreno << "m" << endl;
		// Se utilizara una condicion para que el usario solo pueda ingresar numeros mayor que 0
		if (largoDelTerreno>0) {
			cout << "El numero es valido" << endl;
		} else {
			cout << "El dato que desea ingresar no es valido" << endl;
		}
		// Si la condición del bucle se cumple pasara al siguiente dato
	} while (largoDelTerreno<=0);
	do {
		// Se le pedira al usuario que ingre el precio
		cout << "Ingrese el precio del metro cuadrado de tierra: " << endl;
		cin >> precioDelMetroCuadrado;
		// Se le mostra al usuario que el precio es en quetzales
		cout << "Q" << precioDelMetroCuadrado << endl;
		// Se utilizara una condicion para que el usario solo pueda ingresar numeros mayor que 0
		if (precioDelMetroCuadrado>0) {
			cout << "El numero es valido" << endl;
		} else {
			cout << "El dato que desea ingresar no es valido" << endl;
		}
		// Si la condición del bucle se cumple pasara a los calculos y le mostrara el total
	} while (precioDelMetroCuadrado<=0);
	// Al terminar los bucles y el usuario ingrese los valores correctos se haran calculos para
	// Determinar el precio total del terreno y metros de alambre a utilzar
	totalDelTerreno = (anchoDelTerreno*largoDelTerreno)*precioDelMetroCuadrado;
	cout << "Precio total seria de: Q" << totalDelTerreno << endl;
	totalDeAlambre = (anchoDelTerreno+largoDelTerreno)*2;
	totalDeAlambre = totalDeAlambre*3;
	cout << "Total de metros de alambre a utilizar es de: " << totalDeAlambre << " metros de alambre" << endl;
	return 0;
}

