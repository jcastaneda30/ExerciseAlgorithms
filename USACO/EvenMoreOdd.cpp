#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

void setIO(string s)
{
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> values(n);
    vector<bool> seleccionados(n, false);
    for (auto &value : values)
        cin >> value;
    sort(values.begin(), values.end());
    bool ultimo = 0;
    int contador = ultimo;
    for (int i = 0; i < n; i++)
    {
        if (!seleccionados[i] && (values[i] % 2 == ultimo || (i==0 && values[i]%2==1)))
        {
            bool monda = false;
            for (int j = i + 1; j < n; j++)
            {
                if (values[j] % 2 != ultimo)
                {
                    swap(values[i], values[j]);
                    monda=true;
                    ultimo = values[j] % 2;
                    contador++;
                    break;
                }
            }
            if(monda) continue;
            for (int j = i + 1; j < n; j++)
            {
                if (values[i]!=values[j] && values[i]+values[j] % 2 != ultimo)
                {
                    seleccionados[j]=true;
                    ultimo = values[i]+values[j] % 2;
                    contador++;
                    break;
                }
            }
        }else if(!seleccionados[i] && values[i] % 2 != ultimo){
            ultimo = values[i]%2;
            contador++;
        }
    }
    cout<<contador<<endl;
    return 0;
}