#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int matriz[100][100];
    int matriz2[100][100], filas, columnas;
    cout << "Columnas y filas: ";
    cin >> columnas;
    filas=columnas;
    srand((unsigned)time(NULL));
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand();
        }
    }
    // Imprimir la matriz en forma de matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz2[i][j] = matriz[i][j];
        }
    }
    
    // Imprimir la matriz en forma de matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz2[j][i] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}
