//Crea un menú que se repita hasta que el usuario elija la opción de salir.
#include <iostream>

using namespace std;

int main(){

    int opcionMenu = 4;
    int intento;

    cout << "Menu: " << endl;
    cout << "1. Entradas " << endl;
    cout << "2. Platos Fuertes " << endl;
    cout << "3. Postres " << endl;
    cout << "4. Salir " << endl;
    cout << "Ingrese una opcion del menu: ";
    cin >> intento;

    while (intento != opcionMenu){
        if (intento < 1 || intento > 4){
            cout << "Opcion invalida, escriba una de las siguientes opciones: ";
            cout << "Menu: " << endl;
            cout << "1. Entradas " << endl;
            cout << "2. Platos Fuertes " << endl;
            cout << "3. Postres " << endl;
            cout << "4. Salir " << endl;
        } else{
        cout << "Imagina que ya te sirvieron el plato, ahora quieres pedir algo nuevo XD" <<endl;
        cout << "Menu: " << endl;
        cout << "1. Entradas " << endl;
        cout << "2. Platos Fuertes " << endl;
        cout << "3. Postres " << endl;
        cout << "4. Salir " << endl;
        cout << "Ingrese una opcion del menu: ";
        }
        cin >> intento;
    }

    cout << "Has salido del menu, chale bro, gracias por visitarnos :D" << endl;

    return 0;
}