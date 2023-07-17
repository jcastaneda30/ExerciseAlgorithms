#include<iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    auto start = high_resolution_clock::now();
    int a, b;
    string x;
    cin >> a >> b >> x;
    cout << a << " " << b << " " << x << "\n";
    auto end = high_resolution_clock::now();

    // Calcula la duración en milisegundos
    auto duration = duration_cast<milliseconds>(end - start);

    // Imprime el tiempo de ejecución
    std::cout << "Tiempo de ejecución: " << duration.count() << " milisegundos" << std::endl;

    return 0;
}