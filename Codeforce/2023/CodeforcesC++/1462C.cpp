#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

// Función para generar todas las posibilidades y almacenarlas en 'all'
void allPosibilities(int k, int n, string &actual, set<string> &all) {
    if (k == n + 1) {
        // Ordenar antes de insertar para eliminar duplicados
        sort(actual.begin(), actual.end());
        all.insert(actual);
    } else {
        string copy = actual;
        actual+=to_string(k);
        allPosibilities(k + 1, n, actual, all);
        actual=copy;
        allPosibilities(k + 1, n, actual, all);
    }
}


int main() {
    int t, x;
    cin >> t;

    // Generar todas las permutaciones y almacenarlas en 'values'
    set<string> values;
    string actual;
    allPosibilities(1, 9, actual, values);

    // Crear mapa de sumas a cadenas
    map<int, string> respuestas;
    for (const auto &elementos : values) {
        int suma = 0;
        string joa;
        for (auto valor : elementos) {
            suma += static_cast<int>(valor - '0');
            joa +=valor;
        }
        auto monda = respuestas.find(suma);
        if(monda==respuestas.end()){
            respuestas[suma] = joa;
        }else{
            if(stoi(respuestas[suma])>stoi(joa)){
                respuestas[suma]=joa;
            }
        }
    }

    // Procesar consultas
    while (t--) {
        cin >> x;
        auto damm = respuestas.find(x);
        if (damm != respuestas.end()) {
            cout << respuestas[x] << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
