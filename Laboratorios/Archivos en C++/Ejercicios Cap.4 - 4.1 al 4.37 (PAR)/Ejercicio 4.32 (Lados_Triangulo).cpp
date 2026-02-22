#include <iostream>
using namespace std;

double primeraSuma(double a, double b);
double segundaSuma(double a, double c);
double terceraSuma(double b, double c);

int main(){
    double a;
    double b;
    double c;
    double total;

    cout << "Ingrese el primer valor:"; cin >> a;
    cout << "Ingrese el segundo valor:"; cin >> b;
    cout << "Ingrese el tercer valor:"; cin >> c;

    if (primeraSuma(a, b) > c && segundaSuma(a, c) > b && terceraSuma(b, c) > a){
        cout << "Representan un triangulo" << endl;
    }else{
        cout << "No representan un triangulo" << endl;
    }


    return 0;
}

double primeraSuma(double a, double b){
    return a + b;
}

double segundaSuma(double a, double c){
    return a + c;
}

double terceraSuma(double b, double c){
    return b + c;
}


