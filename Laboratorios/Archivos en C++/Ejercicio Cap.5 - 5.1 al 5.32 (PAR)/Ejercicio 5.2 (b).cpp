#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    cout << fixed << left
        << setprecision(1) << setw (15) << 333.546372
        << setprecision(2) << setw (15) << 333.546372
        << setprecision(3) << setw (15) << 333.546372
        << endl;

    return 0;
}
