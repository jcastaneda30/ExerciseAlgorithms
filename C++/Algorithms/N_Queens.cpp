#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

bool safe(const vector<string>& tablero, int fila, int columna) {
    // Solo se comprueba la izquierda debido a que el código va en orden
    // Por lo que no debería haber una reina delante de nosotros.
    for (int i = fila; i >=0; i--) {
        if (tablero[i][columna] == 'Q') return false;  // Se debe comparar con 'Q'
    }
    // Diagonal izquierda o sea esta \   /
    for (int i = fila, j = columna; i >= 0 && j >= 0; i--, j--) {
        if (tablero[i][j] == 'Q') return false;  // Se debe comparar con 'Q'
    }
    for (int i = fila, j = columna; j < tablero.size() && i >= 0; i--, j++) {
        if (tablero[i][j] == 'Q') return false;  // Se debe comparar con 'Q'
    }

    return true;
}

void solve(vector<string>&tablero, int fila, vector<vector<string>>&tableroRespuesta) {
    if (fila == tablero.size()) {
        tableroRespuesta.push_back(tablero);
        return;
    }

    for (int i = 0; i < tablero.size(); i++) {
        if (safe(tablero, fila, i)) {
            tablero[fila][i] = 'Q';
            solve(tablero, fila + 1, tableroRespuesta);
            tablero[fila][i] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        
        solve(board,0, ans);
        
        return ans;
    }

void printVectorOfVector(int n, vector<vector<string>> board) {
    for (int i=0;i<board.size();i++) {
        for (string j:board[i]) {
            cout << j << "\n";
        }
        cout << endl;
    }
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    int n;
    cin >> n;
    vector<vector<string>> a = solveNQueens(n);
    cout<<a.size()<<endl;
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;
    //printVectorOfVector(n,a);
    double elapsedTime = elapsed.count();
    std::cout << "Tiempo transcurrido: " << elapsedTime << " milisegundos" << std::endl;
    return 0;
}
