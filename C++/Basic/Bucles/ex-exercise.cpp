#include <iostream>
using namespace std;

int main() {
    int numero;
    string a;
    char hola;
    
    while (hola != '0') {
        cout << "Ingrese numeros ('0' para salir): ";
        cin >> hola;
        if (hola > '0') {
            a += hola;
            a += ' ';
        }
    }
    cout << a << endl;
    return 0;
}