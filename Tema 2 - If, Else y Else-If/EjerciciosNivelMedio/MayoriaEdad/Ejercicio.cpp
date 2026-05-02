#include <iostream>

using namespace std;

int main(){
    int Edad;

    cout << "Ingresa tu edad: " << endl;
    cin >> Edad;

    if (Edad >= 18){
        cout << "Mayor de edad" << endl;
    } else {
        cout << "Menor de edad" << endl;
    }

    return 0;
}