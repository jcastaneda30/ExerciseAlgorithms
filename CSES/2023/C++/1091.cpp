// https://cses.fi/problemset/task/1091

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    set<pair<int, int>> precios;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        precios.insert(make_pair(-a, i));
    }
    for (int i = 0; i < m; i++)
    {
        int actually;
        cin >> actually;
        auto it = precios.lower_bound(make_pair(-actually, -1));
        if (it == precios.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << -(*(it)).first << endl;
            precios.erase(it);
        }
    }
    return 0;
}