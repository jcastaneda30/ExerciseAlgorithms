#include <iostream>
#include <vector>
using namespace std;

vector<int> memo;

int allSolution(vector<int> &coins, int x) {
    if (x < 0) return 0;
    if (x == 0) return 1;
    if (memo[x] != -1) return memo[x];

    int suma = 0;
    for (int i : coins) {
        suma += allSolution(coins, x - i);
    }
    
    memo[x] = suma;
    return suma;
}

int main() {
    vector<int> coins = {1, 2, 5};
    int x = 5;
    
    memo.resize(x + 1, -1); // Inicializar la tabla de memoización con -1
    
    int a = allSolution(coins, x);
    cout << a << endl;

    return 0;
}
