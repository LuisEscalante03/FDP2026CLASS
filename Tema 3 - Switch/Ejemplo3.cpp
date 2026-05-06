#include <iostream>

using namespace std;

int main(){
    char c;

    cout<<"Introduce una letra (L,M,m,J,V): ";
    cin>>c;

    switch(c){
        case 'L':
            cout<<"Lunes"<<endl;
            break;
        case 'M':
            cout<<"Martes"<<endl;
            break;
        case 'm':
            cout<<"Miércoles"<<endl;
            break;
        case 'J':
            cout<<"Jueves"<<endl;
            break;
        case 'V':
            cout<<"Viernes"<<endl;
            break;
        default:
            cout<<"Letra no válida"<<endl;
    }

    return 0;

}