#include <iostream>

using namespace std;

int main(){
    int mes;

    cout << "Ingresa tu mes de nacimiento: "<< endl;
    cout << "1. Enero" << endl;
    cout << "2. Febrero" << endl;
    cout << "3. Marzo" << endl;
    cout << "4. Abril" << endl;
    cout << "5. Mayo" << endl;
    cout << "6. Junio" << endl;
    cout << "7. Julio" << endl;
    cout << "8. Agosto" << endl;
    cout << "9. Septiembre" << endl;
    cout << "10. Octubre" << endl;
    cout << "11. Noviembre" << endl;
    cout << "12. Diciembre" << endl;
    cin >> mes;

    switch(mes) {
        case 1:
            cout << "Si naciste del 1 al 20 de Enero, tu signo es Capricornio." << endl;
            cout << "Si naciste del 21 al 31 de Enero, tu signo es Acuario." << endl;
            break;
        case 2: 
            cout << "Si naciste del 1 al 20 de Febrero, tu signo es Acuario." << endl;
            cout << "Si naciste del 21 al 29 de Febrero, tu signo es Piscis." << endl;
            break;
        case 3:
            cout << "Si naciste del 1 al 20 de Marzo, tu signo es Piscis." << endl;
            cout << "Si naciste del 21 al 31 de Marzo, tu signo es Aries." << endl;
            break;
        case 4: 
            cout << "Si naciste del 1 al 20 de Abril, tu signo es Aries." << endl;
            cout << "Si naciste del 21 al 30 de Abril, tu signo es Tauro." << endl;
            break;
        case 5:
            cout << "Si naciste del 1 al 20 de Mayo, tu signo es Tauro." << endl;
            cout << "Si naciste del 21 al 31 de Mayo, tu signo es Géminis." << endl;
            break;
        case 6:
            cout << "Si naciste del 1 al 20 de Junio, tu signo es Géminis." << endl;
            cout << "Si naciste del 21 al 30 de Junio, tu signo es Cáncer." << endl;
            break;
        case 7: 
            cout << "Si naciste del 1 al 20 de Julio, tu signo es Cáncer." << endl;
            cout << "Si naciste del 21 al 31 de Julio, tu signo es Leo." << endl;
            break;
        case 8:
            cout << "Si naciste del 1 al 20 de Agosto, tu signo es Leo." << endl;
            cout << "Si naciste del 21 al 31 de Agosto, tu signo es Virgo." << endl;
            break;
        case 9:
            cout << "Si naciste del 1 al 20 de Septiembre, tu signo es Virgo." << endl;
            cout << "Si naciste del 21 al 30 de Septiembre, tu signo es Libra." << endl;
            break;
        case 10:
            cout << "Si naciste del 1 al 20 de Octubre, tu signo es Libra." << endl;
            cout << "Si naciste del 21 al 31 de Octubre, tu signo es Escorpio." << endl;
            break;
        case 11: 
            cout << "Si naciste del 1 al 20 de Noviembre, tu signo es Escorpio." << endl;
            cout << "Si naciste del 21 al 30 de Noviembre, tu signo es Sagitario." << endl;
            break;
        case 12:
            cout << "Si naciste del 1 al 20 de Diciembre, tu signo es Sagitario." << endl;
            cout << "Si naciste del 21 al 31 de Diciembre, tu signo es Capricornio." << endl;
            break;
        default:
            cout << "Mes no válido. Por favor, ingresa un número del 1 al 12." << endl; 
            break;
    }

    return 0;

}