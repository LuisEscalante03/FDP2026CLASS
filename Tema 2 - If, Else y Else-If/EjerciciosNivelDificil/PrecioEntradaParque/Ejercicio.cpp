#include <iostream>

using namespace std;

int main(){

    //Un parque cobra diferente según la edad: 
    //Niños menores de 5 entran gratis, entre 5 y 12 pagan $5, mayores de 12 pagan $10.

    int Edad;

    cout << "Ingrese la edad de la persona: " << endl;
    cin >> Edad;

    if (Edad < 5){
        cout << "Entrada gratis" << endl;
    } else if (Edad >= 5 && Edad <= 12){
        cout << "Pagar $5";
    } else {
        cout << "Pagar $10";
    }

    return 0;
}