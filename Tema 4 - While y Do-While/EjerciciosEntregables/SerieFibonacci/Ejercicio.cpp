//Muestra los primeros N términos de la serie de Fibonacci utilizando while.

#include <iostream>

using namespace std;

int main(){
    int n, primero = 0, segundo = 1, siguiente = 0, contador = 0;

    cout << "Ingrese los cantidad de elementos para la serie Fibonacci: "<< endl;
    cin >> n;

    cout << "Serie de Fibonacci:" << endl;
    while (contador < n) {
        if (contador <= 1) {
            siguiente = contador;
        } else {
            siguiente = primero + segundo;
            primero = segundo;
            segundo = siguiente;
        }
        cout << siguiente << " ";
        contador++;
    }

    cout << endl;
    return 0;

}