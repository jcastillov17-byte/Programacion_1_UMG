#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

int main(){

    cout << left << setw(10) << "Decimal" << setw(15) << "Binario" << setw(10) << "Decimal" << setw(10) << "hexadecimal" << endl;

    for (unsigned int i = 1; i <= 256; i++){
        cout << left << setw(10) << dec << i << setw(15) << bitset<9>(i) << setw(10) << oct << i << setw(10) << hex << i << endl;
    }


    return 0;

}
