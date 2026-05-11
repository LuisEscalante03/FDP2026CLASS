#include <iostream>

using namespace std;

int main () {
    int numeroSecreto = 7;
    int intento;

    cout << "Adivina el numero secreto (1-10): ";
    cin >> intento;

    while (intento != numeroSecreto) {
        if (intento > numeroSecreto) {
            cout << "El número es demasiado alto. Inténtalo de nuevo: ";
        } else {
            cout << "El número es demasiado bajo. Inténtalo de nuevo: ";
        }
        cin >> intento;  // Leer un nuevo intento
    }

    cout << "¡Felicidades! Has adivinado el número secreto." << endl;
    return 0;

}