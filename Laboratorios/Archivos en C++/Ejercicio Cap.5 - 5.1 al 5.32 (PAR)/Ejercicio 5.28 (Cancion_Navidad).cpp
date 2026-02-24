#include <iostream>
using namespace std;

int main(){
    for (unsigned int i = 1; i <= 12; i++){
        cout << "\nEn el ";
        switch(i){
        case 1:
            cout << "primer";
            break;
        case 2:
            cout << "segundo";
            break;
        case 3:
            cout << "tercero";
            break;
        case 4:
            cout << "cuarto";
            break;
        case 5:
            cout << "quinto";
            break;
        case 6:
            cout << "sexto";
            break;
        case 7:
            cout << "septimo";
            break;
        case 8:
            cout << "octavo";
            break;
        case 9:
            cout << "noveno";
            break;
        case 10:
            cout << "decimo";
            break;
        case 11:
            cout << "undecimo";
            break;
        case 12:
            cout << "doudecimo";
            break;
        }

        cout << " dia de navidad, mi verdadero amor me envio:" << endl;

        switch(i){
        case 12:
            cout << "Doce tamborileros tamborilenado" << endl;
        case 11:
            cout << "Once gaiteros tocando" << endl;
        case 10:
            cout << "Diez señores saltando" << endl;
        case 9:
            cout << "Nueve damas danzando" << endl;
        case 8:
            cout << "ocho sirvientas danzando" << endl;
        case 7:
            cout << "Siete cisne nadando" << endl;
        case 6:
            cout << "Seis ocas empollando" << endl;
        case 5:
            cout << "Cinco anillos de oro" << endl;
        case 4:
            cout << "Cuatro pajaros cantores" << endl;
        case 3:
            cout << "tres gallinas francesas" << endl;
        case 2:
            cout << "Dos tortolas," << endl;
        case 1:
            if (i == 1){
                cout << "Una perdiz en peral." << endl;
            }else {
                cout << "y una perdiz en un peral." << endl;
            }
            break;
        }
    }


 return 0;
}





