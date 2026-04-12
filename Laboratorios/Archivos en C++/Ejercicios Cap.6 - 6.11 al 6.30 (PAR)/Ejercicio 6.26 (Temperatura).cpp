#include <iostream>
#include <iomanip>
using namespace std;

int celsius(int a){
    return (5 * (a - 32)) / 9;
}

int fahrenheit(int b){
    return (9 * b) / 5 + 32;
}

int main()
{
    int a = 32;
    int b = 0;
    cout << left << setw(15) << "Fahrenheit" << setw(15) << "Celsius" << "|" << setw(15) << "Celsius" << setw(15) << "Fahrenheit" << endl;
    cout << "------------------------------------------------------------" << endl;

    while (b <= 100){
        cout << left << setw(15) << a << setw(15) << celsius(a) << "|" << " " << setw(13) << b << setw(15) << fahrenheit(b) << endl;
        a += 18;
        b += 10;
    }
    return 0;
}
