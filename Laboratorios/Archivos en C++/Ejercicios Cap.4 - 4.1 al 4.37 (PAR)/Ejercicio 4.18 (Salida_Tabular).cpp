#include <iostream>
using namespace std;

int main(){

    unsigned int N = 0;
    unsigned int x = 0;

    cout << "N\t10*N\t100*N\t1000*N" << "\n" << endl;
    while (x < 5){
        x += 1;
        N += 1;
        cout << x << "\t" << N*10 << "\t" << N * 100 << "\t" << N * 1000 << endl;
    }




    return 0;
}
