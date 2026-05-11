//Pide un número N al usuario y usa while para calcular la suma de los números pares desde 1 hasta N.
#include <iostream>

using namespace std;

int main(){
    int contador = 1;
    int num;
    int sumaPares = 0;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (contador <= num){
        if (contador % 2 == 0){
            sumaPares += contador;
        }
        contador++;
    }

    cout << "La suma desde 1 hasta " << num << " es: " << sumaPares << endl;

    return 0;
}