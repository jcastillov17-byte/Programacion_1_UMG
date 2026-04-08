#include "Calculadora.h"
#include <iostream>
using namespace std;

Calculadora::Calculadora()
{
    //ctor
}

float Calculadora::Suma(int valor1, int valor2)
{
    return valor1 + valor2;
}
float Calculadora::Resta(int valor1, int valor2)
{
    return valor1 - valor2;
}
float Calculadora::Multi(int valor1, int valor2)
{
    return valor1 * valor2;
}
float Calculadora::Division(int valor1, int valor2)
{
    if (valor2 > 0){
        return valor1 / valor2;
    }else{
        cout << "Error" << endl;
        return 0;
    }
}
