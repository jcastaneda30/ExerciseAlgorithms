#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int matriz[100][100];
    int matriz2[100][100], filas, columnas;
    cout << "Columnas: ";
    cin >> columnas;
    cout << "Filas: ";
    cin >> filas;
    srand((unsigned)time(NULL));
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand();
        }
    }
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz2[i][j] = matriz[i][j];
        }
    }
    
    // Imprimir la matriz en forma de matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz2[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}
