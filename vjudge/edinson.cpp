#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> XD(N, 0);
    unordered_map<int, vector<pair<int, int>>> waos;
    unordered_set<int> aaaa;

    for (int i = 0; i < N; i++)
    {
        cin >> XD[i];
        aaaa.insert(XD[i]);
    }

    sort(XD.begin(), XD.end());
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            waos[XD[i] + XD[j]].push_back(make_pair(i, -j));
        }
    }
    for (int i = 0; i < Q; i++)
    {
        int query;
        cin >> query;

        if (aaaa.find(query) == aaaa.end())
        {
            cout << "NO\n";
            continue;
        }

        bool situacion = false;
        bool situacion2 = false;
        int menor, medio, mayor;

        for (int k = 0; k < N; k++)
        {
            int value = query - XD[k];

            if (waos[value].size() > 0)
            {   
                for (auto values : waos[value])
                {  
                    if (k != values.first && -k != values.second)
                    {
                        situacion = true;
                        situacion2 = true;
                        menor = values.first;
                        medio = k;
                        mayor = -values.second;
                        break;
                    }

                }
                if(situacion2) break;
            }
        }
        vector<int> posiciones = {menor, medio, mayor};
        sort(posiciones.begin(), posiciones.end());
        if (situacion)
        {
            cout << XD[posiciones[0]] << " " << XD[posiciones[1]] << " " << XD[posiciones[2]] << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}