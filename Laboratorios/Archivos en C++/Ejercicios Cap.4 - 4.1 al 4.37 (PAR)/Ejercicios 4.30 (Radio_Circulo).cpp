#include <iostream>
using namespace std;

double diametroCirculo(double radioCirculo);
double circunferenciaCirculo(double radioCirculo, const double PI);
double areaCirculo(double radioCirculo, double PI);


int main(){
    const double PI = 3.14159;
    double radioCirculo;

    cout << "Ingrese el radio del circulo: "; cin >> radioCirculo;
    cout << "El diametro del circulo es: " << diametroCirculo(radioCirculo) << endl;
    cout << "La circuferencia del circulo es: " << circunferenciaCirculo(radioCirculo, PI) << endl;
    cout << "El area del circulo es: " << areaCirculo(radioCirculo, PI) << endl;
    return 0;
}

double diametroCirculo(double radioCirculo){
    return radioCirculo * 2;
}

double circunferenciaCirculo(double radioCirculo, const double PI){
    return radioCirculo * 2 * PI;
}

double areaCirculo(double radioCirculo, const double PI){
    return radioCirculo * radioCirculo * PI;
}
