#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float cantidad;
    cin >> cantidad;
    vector<pair<int, int>> puntos;

    for (int i = 0; i < cantidad; i++) {
        int x, y;
        cin >> x >> y;
        puntos.push_back(make_pair(x, y));
    }

    float distancia = 999999999;
    
    for (auto puntoPivote : puntos) {
        float sumaDistancias = 0;
        
        for (auto puntoAlejados : puntos) {
            sumaDistancias += sqrt(pow(puntoPivote.first - puntoAlejados.first, 2) + pow(puntoPivote.second - puntoAlejados.second, 2));
        }
        
        distancia = min(distancia, sumaDistancias / (cantidad - 1));
    }

    cout << fixed << std::setprecision(9) << distancia << endl; // Usar 'fixed' para mostrar los decimales
}
