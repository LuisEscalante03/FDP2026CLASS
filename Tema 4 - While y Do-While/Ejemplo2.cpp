#include <iostream>

using namespace std;

int main() {
    int contador = 1;

    do{
        cout << "El contador es: " << contador << endl;
        contador++; //Incrementa el contador

    } while (contador <= 5);
    cout << "salio del bucle" << endl;

    return 0;
}