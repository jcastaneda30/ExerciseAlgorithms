#include <iostream>
#include <vector>
#include <map>

using namespace std;


int solve(int x, vector<int>& coins, int level = 0) {
    if (x < 0) return 1000000000;
    if (x == 0) return 0;
    int best = 1000000000;

    for (auto c : coins) {
        for (int i = 0; i < level; i++) cout << "  "; // Espacios para representar el nivel
        cout << "Calling solve(" << x - c << ") at level " << level << "\n";
        best = min(best, solve(x - c, coins, level + 1) + 1);
    }

    for (int i = 0; i < level; i++) cout << "  "; // Espacios para representar el nivel
    cout << "Returning " << best << " at level " << level << "\n";

    return best;
}

int main() {
    vector<int> coins = {1, 3, 4};
    int a = solve(10, coins);
    cout << "Minimum coins required: " << a << "\n";
    return 0;
}
