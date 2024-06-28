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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n, 0);
        vector<int> b(m, 0);
        map<int, int> elementos;
        unordered_set<int> existe;
        for (int &tt : a)
            cin >> tt;
        for (int &tt : b)
        {
            cin >> tt;
            elementos[tt]++;
            existe.insert(tt);
        }
        int counter2 = 0;
        for (int j = 0; j < m; j++)
        {   
            if (elementos[a[j]] > 0)
            {
                elementos[a[j]]--;
                counter2++;
            }else if(elementos[a[j]]<=0) elementos[a[j]]--;
        }
        int counter = 0;
        if (counter2 >= k)
                counter++;
        for (int i = m; i < n; i++)
        {

            if (existe.count(a[i - m]) && elementos[a[i-m]]>=0)
            {
                counter2--;
                elementos[a[i - m]]++;
            }else if(existe.count(a[i - m])) elementos[a[i-m]]++;
            if (elementos[a[i]] > 0)
            {
                counter2++;
                elementos[a[i]]--;
            }else if(elementos[a[i]]<=0) elementos[a[i]]--;


            if (counter2 >= k)
                counter++;

        }
        cout << counter << "\n";
    }
    return 0;
}