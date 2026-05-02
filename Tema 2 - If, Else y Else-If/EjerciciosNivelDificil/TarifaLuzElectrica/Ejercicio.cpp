#include <iostream>

using namespace std;

int main(){

    //Calcula la tarifa según el consumo: menor a 100 kWh, 
    //tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.

    float consumo;
    
    cout << "Ingrese su consumo de energia: " << endl;
    cin >> consumo;

    if (consumo < 100){
        cout << "Tarifa baja.";
    } else if (consumo >= 100 && consumo <= 200){
        cout << "Trafia media.";
    } else {
        cout << "Tarifa alta.";
    }

    return 0;

}