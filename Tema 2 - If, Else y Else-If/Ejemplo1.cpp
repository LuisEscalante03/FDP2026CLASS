#include <iostream>
#include <cmath> //Para utilizar la función pow

using namespace std;

int main(){
    int y, x;
    
    //Solicitar al usuario que ingrese dos números enteros
    cout << "Ingrese el primer número entero: " << endl;
    cin >> y;
   
    //Calcular x = y^y
    x = pow(y, y);

    //¿X es impar o par?
    if (x % 2 == 0) {
        cout << "El numero: " << x << " es par" << endl;
    } else {
        cout << "El numero: " << x << " es impar" << endl;
    }

    //Verificar si es positivo o negativo
    if (x > 0) {
        cout << "El numero: " << x << " es positivo" << endl;
    } else if (x < 0) {
        cout << "El numero: " << x << " es negativo" << endl;
    }
    
    return 0;
}