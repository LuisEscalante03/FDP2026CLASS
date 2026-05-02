#include <iostream>

using namespace std;

int main(){

    float nota;

    cout << "Ingrese su nota: " << endl;
    cin >> nota;

    if (nota >= 6.0){
        cout << "Aprobado :D";
    } 
    else {
        cout << "Reprobado :(";
    }

    return 0;
}