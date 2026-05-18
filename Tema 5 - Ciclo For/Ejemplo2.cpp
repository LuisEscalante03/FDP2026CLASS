#include <iostream>

using namespace std;

int main(){

    int n;
    bool esPrimo =true;

    cout << "Ingrese un numero entero: ";
    cin >> n;

    if (n <= 1){
        esPrimo = false;
    } else {
        esPrimo = true;
    }

    for (int i = 2; i * i <= n; i++){
        cout << "i: " << i << endl;
        cout << "n: " << n << endl;
        if (n % i == 0){
            esPrimo = false;
        }
    }

    if (esPrimo){
        cout << n << " es primo" << endl;

    } else {
        cout << n << " no es primo" << endl;
    }

    return 0;
}