#include <iostream>

using namespace std;

int main()
{

    float grade = 0;

    cout << "Ingrese la calificacion del alumno (del 5 al 10): ";
    cin >> grade;

    int gradeRange = grade;
    switch (gradeRange)
    {
    case 10:
        cout << "Excelente" << endl;
        break;
    case 9:
        cout << "Muy bien" << endl;
        break;
    case 8:
        cout << "Bien" << endl;
        break;
    case 7:
        cout << "Regular" << endl;
        break;
    case 6:
        cout << "Suficiente" << endl;
        break;
    case 5:
        cout << "Insuficiente" << endl;
        break;

    default:
        cout << "Calificacion no valida." << endl;
        break;
    }
}