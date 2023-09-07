#include <iostream>
#include <vector>
using namespace std;
 
const int MOD = 1000000007;
const int INVERSO_DE_2 = 500000004;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, Q;
    cin >> N >> Q;
    vector<long long> prefix_sumSubstancias(N + 1, -1);
    vector<long long> prefix_sumCuadrados(N + 1, -1);
    vector<long long> substances(N);
    for (int i = 0; i < N; ++i) {
        cin >> substances[i];
        prefix_sumSubstancias[i + 1] = (prefix_sumSubstancias[i] + substances[i]) % MOD;
        prefix_sumCuadrados[i + 1] = (prefix_sumCuadrados[i] + substances[i] * substances[i]) % MOD;
    }
    for (int i = 0; i < Q; ++i) {
        int L, R;
        cin >> L >> R;
 
        long long sumaSustancias = (prefix_sumSubstancias[R] - prefix_sumSubstancias[L-1] + MOD) % MOD;
 
        long long sumatoriaParejas = (
            (sumaSustancias * sumaSustancias)% MOD - (prefix_sumCuadrados[R] - prefix_sumCuadrados[L-1] + MOD) % MOD + MOD
        ) % MOD;
 
        long long resultado = (sumatoriaParejas * INVERSO_DE_2) % MOD;
        cout << resultado << "\n";
    }
 
    return 0;
}