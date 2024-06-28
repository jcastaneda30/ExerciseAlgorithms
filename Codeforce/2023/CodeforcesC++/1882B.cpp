#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int t, n, s, s_i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        unordered_set<int> Bigvalues;
        vector<unordered_set<int>> allSets; 
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            unordered_set<int> actually;
            for (int j = 0; j < s; j++)  // Cambiado el nombre de la variable i a j
            {
                cin >> s_i;
                Bigvalues.insert(s_i);
                actually.insert(s_i);
            }
            allSets.push_back(actually);
        }
        int maxi = -1;
        for (int value : Bigvalues)
        {
            unordered_set<int> actually2;
            for (int i = 0; i < allSets.size(); i++)
            {
                if (allSets[i].count(value) == 0)
                {
                    // No puedes usar set_union con unordered_set, debes usar un enfoque diferente
                    actually2.insert(allSets[i].begin(), allSets[i].end());
                }
            }
            maxi = max(maxi, static_cast<int>(actually2.size()));
        }
        cout << maxi << endl;
    }
 
    return 0;
}