#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> values;
        vector<long long> suma(m, 0);
        for (int i = 0; i < n; i++)
        {
            vector<int> provitional;

            for (int j = 0; j < m; j++)
            {
                int value;
                cin >> value;
                provitional.push_back(value);
            }
            sort(provitional.begin(), provitional.end());
            values.push_back(provitional);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                suma[j] += values[i][j];
            }
        }
        sort(values.begin(), values.end());
        long long ganancias = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                long long provitional = values[i][j] * i;
                suma[j] -= values[i][j];
                ganancias += abs(provitional - suma[j]);
            }
        }
        cout << ganancias << endl;
    }
    return 0;
}