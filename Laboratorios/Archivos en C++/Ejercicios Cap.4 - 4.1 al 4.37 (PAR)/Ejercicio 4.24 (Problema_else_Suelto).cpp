#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 8;
    int z = 7;

    if ( y == 8){
            if ( x == 5){
                    cout << "a) @@@@@" << endl;
                    cout << "   $$$$$" << endl;
                    cout << "   &&&&&" << endl;
            }
    }else{
        cout << "#####" << endl;
    }

    cout << "\n" << endl;

    if ( y == 8){
            if ( x == 5){
                    cout << "b) @@@@@" << endl;
            }
    }else{
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
        cout << "&&&&&" << endl;
    }

    cout << "\n" << endl;

     if ( y == 8){
            if ( x == 5){
                    cout << "c) @@@@@" << endl;
                    cout << "   &&&&&" << endl;
            }
    }else{
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
    }

    cout << "\n" << endl;

    if ( z == 8){
            if ( x == 5){
                    cout << "c) @@@@@" << endl;
            }
    }else{
        cout << "d) #####" << endl;
        cout << "   $$$$$" << endl;
        cout << "   &&&&&" << endl;
    }

    return 0;
}
