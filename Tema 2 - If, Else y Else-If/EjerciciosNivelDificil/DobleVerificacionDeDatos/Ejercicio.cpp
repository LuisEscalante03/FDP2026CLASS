#include <iostream>

using namespace std;

int main(){

    //Pide dos contraseñas y verifica si coinciden antes de continuar.

    string username, password1, password2;

    cout << "Introduce el nombre de usuario: " << endl;
    cin >> username;
    cout << "Introduce la contraseña: " << endl;
    cin >> password1;
    cout << "Introduce la contraseña nuevamente: " << endl;
    cin >> password2;

    if (password1 == password2){
        cout << "Bienvenido";
    } else {
        cout << "Las contraseñas no coindicen, intentalo de nuevo mas tarde.";
    }

    return 0;
}