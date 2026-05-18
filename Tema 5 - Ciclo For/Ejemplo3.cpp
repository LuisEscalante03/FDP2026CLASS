#include <iostream>

using namespace std;

int main (){
    int n, suma= 0;
    cout << "Ingrese un numero entero: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        
        suma = suma + i;
    }
    
    cout << "La suma de los numeros del 1 al " << n << " es: " << suma << endl;

    return 0;
}