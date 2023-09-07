#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int calculate_total_energy(const vector<int>& prefix_sum, const vector<int>& substances, int L, int R) {
    int total_energy = 0;

    for (int i = L-1; i < R; ++i) {
        int partial_sum = (substances[i] * (prefix_sum[R-1] - prefix_sum[i])) % MOD;
        total_energy = (total_energy + partial_sum) % MOD;
    }

    return total_energy;
}

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> substances(N);
    for (int i = 0; i < N; ++i) {
        cin >> substances[i];
    }
    
    vector<int> prefix_sum(N + 1, 0);
    prefix_sum[0]=substances[0];
    for (int i = 1; i < N; ++i) {
        prefix_sum[i] = (prefix_sum[i-1] + substances[i]) % MOD;        
    }

    for (int i = 0; i < Q; ++i) {
        int L, R;
        cin >> L >> R;
        int result = calculate_total_energy(prefix_sum, substances, L, R);
        cout << result << endl;
    }

    return 0;
}
