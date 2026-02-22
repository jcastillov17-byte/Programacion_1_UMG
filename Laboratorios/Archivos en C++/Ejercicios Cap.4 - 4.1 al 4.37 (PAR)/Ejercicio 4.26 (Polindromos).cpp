#include <iostream>
using namespace std;

int main(){
    int numeroPolindromo;
    int digitoUno;
    int digitoDos;
    int digitoTres;
    int digitoCuatro;
    int digitoCinco;

    cout << "Ingrese 5 digitos enteros: "; cin >> numeroPolindromo;
    digitoUno = numeroPolindromo / 10000;
    numeroPolindromo = numeroPolindromo % 10000;
    digitoDos = numeroPolindromo / 1000;
    numeroPolindromo = numeroPolindromo % 1000;
    digitoTres = numeroPolindromo / 100;
    numeroPolindromo = numeroPolindromo % 100;
    digitoCuatro = numeroPolindromo / 10;
    digitoCinco = numeroPolindromo % 10;

    if (digitoUno == digitoCinco && digitoDos == digitoCuatro){
        cout << "El digito es un polindromo" << endl;
    }else{
        cout << "No es polindromo" << endl;
    }
    return 0;
}
