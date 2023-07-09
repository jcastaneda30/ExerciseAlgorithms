#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int matriz[100][100];
    int matriz3[100][100];
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
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz2[i][j] = rand();
        }
    }
    // Imprimir la matriz en forma de matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            for (int k=0;k<columnas;k++){
                matriz3[i][j]+= matriz[i][k] * matriz2[k][j];
            }
        }
    }
    cout << endl;
    // Imprimir la matriz en forma de matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[j][i] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    // Imprimir la matriz en forma de matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz2[j][i] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    // Imprimir la matriz en forma de matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz3[j][i] << "\t";
        }
        cout << endl;
    }
    

    
    return 0;
}
