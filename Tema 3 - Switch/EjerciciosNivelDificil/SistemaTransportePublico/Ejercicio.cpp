#include <iostream>

using namespace std; 

int main(){
    //Pide un tipo de transporte (1 = Bus, 2 = Metro, 3 = Taxi) y muestra el costo estimado de un viaje.

    int tipoTransporte;

    cout << "Ingrese el tipo de transporte: " << endl;
    cout << "1. Bus" << endl;
    cout << "2. Metro" << endl;
    cout << "3. Taxi" << endl;
    cin >> tipoTransporte;

    switch (tipoTransporte) {
        case 1:
            cout << "El costo estimado del viaje en Bus es de $2.50." << endl;
            break;
        case 2:
            cout << "El costo estimado del viaje en Metro es de $3.00." << endl;
            break;
        case 3:
            cout << "El costo estimado del viaje en Taxi es de $10.00." << endl;
            break;
        default:
            cout << "Tipo de transporte no válido." << endl;
    }

    return 0;

}