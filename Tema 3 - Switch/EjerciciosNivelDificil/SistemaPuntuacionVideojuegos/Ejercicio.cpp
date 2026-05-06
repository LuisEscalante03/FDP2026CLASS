#include <iostream>

using namespace std;

int main (){
    //Pide el puntaje de un jugador (1-5 estrellas) y muestra un mensaje acorde a su desempeño.
    int puntaje;

    cout << "Ingrese el puntaje del jugador: " <<endl;
    cin >> puntaje;
    
    switch (puntaje){
        case 1:
            cout << "Necesitas mejorar la verdad." <<endl;
            break;
        case 2: 
            cout << "Puedes hacerlo mejor, tu puedes." <<endl;
            break;
        case 3:
            cout << "No esta mal, pero puedes seguir mejorando." <<endl;
            break;
        case 4:
            cout << "Muy bien, eres bueno." <<endl;
            break;
        case 5:
            cout << "Hermano eres la fuckin cabra" << endl;
            break;
        default:
            cout << "Puntaje no válido." << endl;
            break;
    }

    return 0;
}