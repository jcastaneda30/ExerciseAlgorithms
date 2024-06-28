#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        long long max_sum = 0, min_sum = 0;
        min_sum = (k * (k + 1)) / 2;
        max_sum = ((2 * n - k + 1) * k) / 2;
        if (x < min_sum || x > max_sum) {
            cout << "NO" << endl;
            continue;
        }

        cout <<"YES"<<endl;
    }

    return 0;
}
