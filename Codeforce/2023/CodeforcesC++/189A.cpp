#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> memo;

int dp(int n, vector<int>& cosas) {
    if (n == 0) return 0;
    if (n < 0) return INT_MIN;

    if (memo[n] != -1) return memo[n];

    int best = INT_MIN;
    for (auto x : cosas) {
        best = max(best, dp(n - x, cosas) + 1);
    }

    memo[n] = best;
    return best;
}

int main() {
    int n;
    vector<int> cosas(3);
    cin >> n;
    for (int i = 0; i < 3; i++) {
        cin >> cosas[i];
    }

    memo.resize(n + 1, -1);
    int ans = dp(n, cosas);
    cout << ans << endl;
    return 0;
}
