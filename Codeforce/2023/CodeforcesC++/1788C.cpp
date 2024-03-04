#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> numbers;
        for (int i = 1; i <= 2 * n; i++)
            numbers.insert(i);
        vector<pair<int, int>> values;
        numbers.erase(1);
        for (auto numeros : numbers)
        {
            set<int> copy = numbers;
            int actually;
            actually = 1 + numeros;
            values.push_back(make_pair(1, numeros));

            int numeroActual = 2;
            copy.erase(numeros);
            bool monda = false;
            for (int i = 1; i < n; i++)
            {
                if (copy.count(actually + 1 - numeroActual) > 0)
                {
                    values.push_back(make_pair(numeroActual, actually + 1 - numeroActual));
                    copy.erase(actually + 1 - numeroActual);
                    actually++;
                }
                else
                {
                    values = {};
                    break;
                }
                if (i == n - 1 && values.size()==n)
                {
                    monda = true;
                }
            }
            if (monda)
                break;
        }
        if (values.size() == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (auto valores : values)
            {
                cout << valores.first << ' ' << valores.second << endl;
            }
        }
    }
    return 0;
}