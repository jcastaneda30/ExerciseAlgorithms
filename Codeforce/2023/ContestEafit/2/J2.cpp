#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    int T, N;
    vector<int> A;
    cin >> T;
    for (int j = 0; j < T; j++) {
        cin >> N;
        A.resize(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        bool comprobante = true;
        string perdedor = "";
        bool cosa = true;
        bool turno = false; //="Yalalov" true = "Shin"
        while (cosa) {
            if (turno) {
                if ((*min_element(A.begin(), A.end())) == 0) {
                    auto it = find(A.begin(), A.end(), *max_element(A.begin(), A.end()));
                    if (*it != 0) {
                        (*it)--;
                    } else {
                        perdedor = "Shin";
                        comprobante = false;
                    }
                } else {
                    for (int p = 0; p < N; p++) {
                        A[p]--;
                    }
                }
            } else {
                if ((*min_element(A.begin(), A.end())) == 0) {
                    auto it = find(A.begin(), A.end(), *max_element(A.begin(), A.end()));
                    if (*it != 0) {
                        (*it)--;
                    } else {
                        perdedor = "Yalalov";
                        comprobante = false;
                    }
                } else {
                    for (int k = 0; k < N; k++) {
                        A[k]--;
                    }
                }
            }
            
            if (!comprobante) {
                break;
            }
            
            turno = !turno; // Cambiar el turno después de cada movimiento
        }
        
        cout << perdedor << endl;
    }
    
    return 0;
}
