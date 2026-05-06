#include <iostream>

using namespace std;

int main(){

    char apellido;
    int numGrupo = 0;

    cout << "Ingrese la primera inicial de su apellido para saber a que grupo perteneces: " << endl;
    cin >> apellido;

    if (apellido >= 'A' && apellido <= 'M' || apellido >= 'a' && apellido <= 'm') {
        numGrupo = 1;
    } else {
        numGrupo = 2;
    }

    switch(numGrupo){

    case 1: 
        cout << "Perteneces al grupo 1." << endl;
        break;
    case 2: 
        cout << "Pertenes al grupo 2. " << endl;
        break;
    default:
        cout << "Error, ingrese una letra valida." << endl;
    }

    return 0;
}