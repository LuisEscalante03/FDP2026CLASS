//Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados.

#include <iostream>

using namespace std;

int main(){
    int num;
    int suma = 0;

     cout << "Ingrese un numero, escriba 0 para terminar: " << endl;
     cin >> num;

     while (num != 0){
        suma += num;
        cin >> num;
     }

     cout << "La suma de los numeros es: " << suma << endl;
}