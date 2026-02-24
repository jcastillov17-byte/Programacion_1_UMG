#include <iostream>
using namespace std;

int main(){

    cout << boolalpha;
    int x = 10;
    int y = 2;
    int a = 5;
    int b = 5;
    int g = 10;

    //inciso a
    cout << "Original: " << (!((x < 5) && (y >= 6))) << endl;
    cout << "Transformada: " << ((x >= 5) || (y < 7))<< endl;
    cout << "\n" << endl;
    //inciso b
    cout << "Original: " << (!((a == b) || !(g != 5))) << endl;
    cout << "Transformada: " << ((a != b) || (g == 7))<< endl;
    cout << "\n" << endl;
    //inciso c
    cout << "Original: " << (!((x <= 8) && (y > 4))) << endl;
    cout << "Transformada: " << ((x > 8) || (y <= 4))<< endl;
    cout << "\n" << endl;
    //inciso d
    cout << "Original: " << (!((x > 4) || (y <= 6))) << endl;
    cout << "Transformada: " << ((x <= 4) && (y > 4))<< endl;


    return 0;
}
