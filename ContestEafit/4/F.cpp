#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        bool possible = n%m==0;
        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
