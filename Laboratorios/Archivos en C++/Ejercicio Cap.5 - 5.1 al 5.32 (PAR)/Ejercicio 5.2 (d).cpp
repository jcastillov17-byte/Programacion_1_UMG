#include <iostream>
using namespace std;

int main(){
    unsigned int x = 1;

    while (x <= 20){
        if (x % 5 == 0){
            cout << x << endl;
    }else{
        cout << x << "\t";
    }
    ++x;
    }

    return 0;
}
