#include <iostream>
using namespace std;

int main(){
    unsigned int x;

    for (x = 1; x <= 20; ++x){
        if(x % 5 == 0){
            cout << x << endl;
        }else{
            cout << x << "\t";
        }
    }
    return 0;
}
