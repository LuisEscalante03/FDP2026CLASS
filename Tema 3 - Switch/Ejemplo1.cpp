#include <iostream>

using namespace std;

int main(){
    int res, n;

    cout << "Ingrese un numero entero: ";
    cin >> n;
    res = n % 2;


    switch (res)
    {    case 0:
        cout << "El numero es par" << endl;
        break;
    case 1:
        cout << "El numero es impar" << endl;
        break;  
    default:
        cout << "Error: Ingrese un numero entero valido" << endl;   
        break;
    }
    return 0;
}