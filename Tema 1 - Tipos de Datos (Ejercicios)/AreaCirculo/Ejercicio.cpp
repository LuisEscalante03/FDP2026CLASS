#include <iostream>

using namespace std;


// Area de un circulo
int main(){
    double radio, area;
    cout << "Escriba el radio del circulo: " << endl;
    cin >> radio;
    area = 3.14159 * radio * radio;
    cout << "El area del circulo es: " << area << endl;
    return 0;
}