#include <iostream>
using namespace std;

int main(){

    unsigned int N = 0;
    unsigned int x = 0;

    cout << "N\t10*N\t100*N\t1000*N" << "\n" << endl;
    while (x < 5){
        x += 1;
        cout << x << "\t" << x*10 << "\t" << x* 100 << "\t" << x* 1000 << endl;
    }




    return 0;
}
