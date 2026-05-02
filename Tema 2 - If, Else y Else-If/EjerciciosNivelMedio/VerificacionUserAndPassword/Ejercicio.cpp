#include <iostream>

using namespace std;

int main(){

    string password, user;

    cout << "Ingrese su usuario: " << endl;
    cin >> user;

    cout << "Ingrese su contraseña: " <<endl;

    cin >> password;

    if (user == "Quesito" && password == "4ShsmpTP"){
        cout << "Bienvenido!!";
    } else {
        cout << "Datos incorrectos, intentalo nuevamente.";
    }

    return 0;

}