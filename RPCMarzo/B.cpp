#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

vector<vector<long long>> multiply(vector<vector<long long>> &a, vector<vector<long long>> &b)
{
    int n = a.size();
    vector<vector<long long>> mul(n, vector<long long>(n, 0)); // Inicializa una matriz n x n con todos los elementos 0

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                mul[i][j] = (mul[i][j] + (a[i][k] * b[k][j]) % MOD) % MOD;
            }
        }
    }

    return mul;
}

vector<vector<long long>> get(long long n) {
    vector<vector<long long>> v = {
        {3, 2, 1, 3},
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 0, 1}
    };
    if (n == 1)
        return v;
    vector<vector<long long>> tmp = get(n / 2);
    tmp = multiply(tmp, tmp);
    if (n & 1)
        tmp = multiply(tmp, v);
    return tmp;
}

void solve() {
    long long n;
    cin >> n;
    if (n == 1)
        cout << "2\n";
    else if (n == 2)
        cout << "3\n";
    else {
        vector<vector<long long>> v = get(n - 2);
        long long ans = 3 * v[0][0] + 2 * v[0][1] + v[0][2] + v[0][3];
        ans %= MOD;
        cout << ans << endl;
    }
}

int main()
{

    solve();
    return 0;
}
