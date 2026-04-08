#include <iostream>
using namespace std;

void calculoValores(int x)
{
    x = x + 10;
    cout << "Valor de x: " << x << endl;
}

void calculoReferencia(int& y)
{
    y = y + 10;
    cout << "Valor de y: " << y << endl;
}

int main()
{
    cout << "Parametro por valor" << endl;
    int x = 20;
    calculoValores(x);
    cout << x << endl;
    cout << "\n" << endl;
    cout << "Parametro por referencia" << endl;
    int y = 20;
    calculoReferencia(y);
    cout << y << endl;
    return 0;
}
