#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;
    bool t = true;

    cout << "El programa sumará los valores diferentes de 0 y fuera del rango [20-30]" << endl;

    while (t) {
        cin >> numero;

        if (numero != 0 && (numero < 20 || numero > 30)) {
            suma += numero;
        } else {
            t = false;
        }
    }

    cout << suma << endl;
    return 0;
}
