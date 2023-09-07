#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MOD = 1000000007;

int main() {
    int n, q;
    cin >> n >> q;
    double result = static_cast<double>(n) / 2.0;
    cout << static_cast<long long>(ceil(result)) << "\n";
}
