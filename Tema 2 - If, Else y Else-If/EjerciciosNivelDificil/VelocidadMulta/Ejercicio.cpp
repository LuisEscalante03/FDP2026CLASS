#include <iostream>

using namespace std;

int main(){

    int multa;

    cout << "Ingrese su velocidad: " << endl;
    cin >> multa;

    cout << "Se registro su velocidad: " << multa << " km/h" << endl;

    if (multa > 60 && multa < 80){
        cout << "Usted tiene una multa de $50.";
    } else if (multa > 80){
        cout << "Usted tiene una multa de $150.";
    } else {
        cout << "No tiene multas.";
    }

    return 0;

}