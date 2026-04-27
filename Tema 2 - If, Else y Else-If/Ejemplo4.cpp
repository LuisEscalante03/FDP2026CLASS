#include <iostream>

using namespace std;

int main(){

    float temperatura;

    cout << "Ingresa la temperatura en celcius: ";
    cin >> temperatura;

    if (temperatura <= 20){
        cout << "el agua esta fria" << endl;
    }
    else if (temperatura >= 21 && temperatura <= 35){
        cout << "el agua esta templada" << endl;
    }
    else {
        cout << "el agua esta caliente" << endl;
    }

    return 0;
}