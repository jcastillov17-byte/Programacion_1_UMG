#include <iostream>
using namespace std;

int main(){;
    int espacios;
    int asterisco;
    int i;

    for (i = 1; i <= 10; i++){
        for (asterisco = 1; asterisco <= i; asterisco++){
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n";

    for (i = 10; i >= 1; i--){
        for (asterisco = 1; asterisco <= i; asterisco++){
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n";

     for (i = 0; i <= 10; i++){
        for (espacios = 0; espacios <= i; espacios++){
            cout << " ";
        }
        for (asterisco = 0; asterisco <= (10-i); asterisco++){
            cout << "*";
        }
        cout << endl;
    }

    for (i = 10; i >= 1; i--){
        for (espacios = 0; espacios <= i; espacios++){
            cout << " ";
        }
        for (asterisco = 0; asterisco <= (10-i); asterisco++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
