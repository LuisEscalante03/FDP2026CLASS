#include <iostream>

using namespace std;

int main() {
    int numero;

    //Pide al usuario que ingrese un número
    cout << "Ingrese un número: ";
    cin >> numero;

    //Verificar si el numero es positivo, negativo o cero
    if (numero > 0) 
    {
        cout << "El número es positivo." << endl;
    } else if (numero < 0) 
    {
        cout << "El número es negativo." << endl;
    } else 
    {
        cout << "El número es cero." << endl;
    }

    return 0;
}