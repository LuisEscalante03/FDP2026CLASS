//Tabla de Multiplicar 

#include <iostream>

using namespace std;

int main(){
    int numeroTabla;

    cout << "Ingrese el numero de su tabla: ";
    cin >> numeroTabla;

    cout << "La tabla de multiplicar del " << numeroTabla << " es:" <<endl;

    for (int i = 1; i <= 10; i++){
        cout << numeroTabla << " x " << i << " = " << (numeroTabla * i)<< endl;
    }

    return 0;
}