#include <iostream>

using namespace std;

int main(){

    int opcion;
    float cantidad;

    cout << "Ingrese la cantidad en USD: ";
    cin >> cantidad;
    
    cout << "Selecciona la opcion de converion que quieres: " << endl;
    cout << "1. USD a EUR" << endl;
    cout << "2. USD a JPY" << endl;
    cout << "3. USD a GBP" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "La conversion a EUR es: " << (cantidad * 0.86)<< endl;
        break;

    case 2:
        cout << "La conversion a JPY es: " << (cantidad * 157.23) << endl;
        break;
    case 3:
        cout << "La conversion a GBP es: " << (cantidad * 0.74) << endl;
        break;
    default:
        cout << "Opcion invalida." << endl;
        break;
    }
    
    return 0;

}