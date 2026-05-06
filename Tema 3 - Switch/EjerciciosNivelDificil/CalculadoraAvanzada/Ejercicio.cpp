#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float num1, num2;
    int operacion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Selecciona la operacion a realizar: " << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Potencia" << endl;
    cout << "6. Modulo" << endl;
    cin >> operacion;

    switch(operacion){
        case 1:
            cout << "La suma da: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "La resta da: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "La multiplicacion da: " << num1 * num2 << endl;
            break;
        case 4: 
            cout << "La division da: " << num1 / num2 << endl;
            break;
        case 5:
            cout << "La potencia da: " << pow(num1, num2) << endl;
            break;
        case 6: 
            cout << "El modulo da: " << fmod(num1, num2) << endl;
        default:
            cout << "Operacion no valida" << endl;
            break;
    }

    return 0;
}