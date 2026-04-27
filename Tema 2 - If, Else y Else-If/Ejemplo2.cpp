#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float radio, pi = 3.1416;
    int area;
    
    cout << "Ingrese el radio del circulo: "<< endl;
    cin >> radio;

    area = pi * (pow(radio, 2));

    cout << "El area del circulo es: " << area << endl;

    //Verificar si el area es par o impar
    if (area % 2 == 0){
        cout << "El area del circulo es par: " << area << endl;
    }
    else{
        cout << "El area del circulo es impar: " << area << endl;
    }

    return 0;
}