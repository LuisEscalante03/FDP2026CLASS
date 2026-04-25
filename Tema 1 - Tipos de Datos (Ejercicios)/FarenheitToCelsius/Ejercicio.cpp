#include <iostream>

using namespace std;

// Farenheit a Celsius
int main(){
    double farenheit, celsius;
    cout << "Escriba la temperatura en farenheit: ";
    cin >> farenheit;
    celsius = (farenheit - 32) * 5.0 / 9.0;
    cout << "Temperatura en Celsius: " << celsius << endl;
    return 0;
}


