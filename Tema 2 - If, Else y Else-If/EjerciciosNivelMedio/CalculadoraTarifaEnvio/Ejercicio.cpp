#include <iostream>

using namespace std;

int main()
{

    float peso;
    int cobro;
    int billetera = 50;

    cout << "Ingresa el peso del paquete: " << endl;
    cin >> peso;

    if (peso > 0 && peso <= 5)
    {
        cobro = 5;
        cout << "El costo del envio es: " << (cobro) << " dolares" << endl;
        cout << "El dinero restante en tu billetera es: " << (billetera - cobro) << " dolares" << endl;
    }
    else if (peso >= 6 && peso <= 10)
    {
        cobro = 10;
        cout << "El costo del envio es: " << (cobro) << " dolares" << endl;
        cout << "El dinero restante en tu billetera es: " << (billetera - cobro) << " dolares" << endl;
    }
    else if (peso >= 11)
    {
        cobro = 15;
        cout << "El costo del envio es: " << (cobro) << " dolares" << endl;
        cout << "El dinero restante en tu billetera es: " << (billetera - cobro) << " dolares" << endl;
    }
    else
    {
        cout << "Peso no valido" << endl;
    }

    return 0;
}