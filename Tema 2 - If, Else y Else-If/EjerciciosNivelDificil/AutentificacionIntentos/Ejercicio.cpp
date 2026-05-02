#include <iostream>
using namespace std;

int main()
{
    string username, password;
    int intentos = 3;

    cout << "Introduce el nombre de usuario: " << endl;
    cin >> username;
    cout << "Introduce la contraseña: " << endl;
    cin >> password;

    if (username == "Quesito" && password == "4ShsmpTP")
    {
        cout << "¡Bienvenido!" << endl;
    }
    else
    {
        intentos--;
        cout << "Datos incorrectos. Te quedan " << intentos << " intentos.\n";

        cout << "Introduce el nombre de usuario: " << endl;
        cin >> username;
        cout << "Introduce la contraseña: " << endl;
        cin >> password;

        if (username == "Quesito" && password == "4ShsmpTP")
        {
            cout << "¡Bienvenido!" << endl;
        }
        else
        {
            intentos--;
            cout << "Datos incorrectos. Te quedan " << intentos << " intentos.\n";

            cout << "Introduce el nombre de usuario: " << endl;
            cin >> username;
            cout << "Introduce la contraseña: " << endl;
            cin >> password;

            if (username == "Quesito" && password == "4ShsmpTP")
            {
                cout << "¡Bienvenido!" << endl;
            }
            else
            {
                cout << "¡Has agotado tus intentos!" << endl;
                cout << "Intentalo mas tarde." << endl;
            }
        }
    }

    return 0;
}