#include <iostream>

using namespace std;

int main(){
    int n, primero = 0, segundo = 1, tercero;

    cout << "Ingrese el numero de terminos de la serie Fibonacci: ";
    cin >> n;

    cout << "Serie Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << primero << " ";
        tercero = primero + segundo;
        primero = segundo;
        segundo = tercero;
    }

    return 0;
}