#include <iostream>

using namespace std;

int main(){
    for (int i = 1; i <= 5; i++){

        // En cada linea imprimimos 'i' asteriscos
        for (int j = 1; j <= i; j++){
            cout << "*";
        }

        cout << endl; // Imprime un salto de linea despues de cada fila
    }

    return 0;
}