#include <iostream>

using namespace std;

int main() {
    int contador;

    cout << "Ingrese un numero: ";
    cin >> contador;

    //Ciclo while
    while (contador >= 0){
        cout << "El contador es: " << contador << endl;
        contador--; //Disminuye el contador
    }

    return 0;
}