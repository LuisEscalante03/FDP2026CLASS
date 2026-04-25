#include <iostream>

using namespace std;

// Promedio de 3 numeros
int main(){
    double num1, num2, num3, promedio;
    cout << "Escriba el primer numero: ";
    cin >> num1;
    cout << "Escriba el segundo numero: ";
    cin >> num2;
    cout << "Escriba el tercer numero: ";
    cin >> num3;
    promedio = (num1 + num2 + num3) / 3.0;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}
