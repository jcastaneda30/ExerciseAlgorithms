#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> inquilinos(n);
    vector<int> apartamentos(m);

    for (int i = 0; i < n; ++i) {
        cin >> inquilinos[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> apartamentos[i];
    }

    sort(inquilinos.begin(), inquilinos.end());
    sort(apartamentos.begin(), apartamentos.end());

    int counter = 0;
    int j = 0;

    for (int i = 0; i < n; ++i) {
        while (j < m && apartamentos[j] < inquilinos[i] - k) {
            j++;
        }

        if (j < m && apartamentos[j] <= inquilinos[i] + k) {
            counter++;
            j++;
        }
    }

    cout << counter << endl;

    return 0;
}
