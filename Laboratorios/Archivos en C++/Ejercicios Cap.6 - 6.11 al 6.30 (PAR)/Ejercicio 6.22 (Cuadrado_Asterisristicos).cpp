#include <iostream>
using namespace std;

int cuadroAsteristicos(int lado);

int main()
{
    cuadroAsteristicos(4);
    return 0;
}

int cuadroAsteristicos(int lado)
{
    for (int i = 1; i <= lado; ++i){
        for (int j = 1; j <= lado; ++j)
            cout << "*";
            cout << endl;
    }
    return lado;
}
