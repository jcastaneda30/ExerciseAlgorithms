#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;
void ordenar(vector<pair<int, char>> &valores)
{

    while (true)
    {   int cambio=0;
        for (int i = 0; i < valores.size() - 1; i++)
        {
            if (-valores[i].first > -valores[i + 1].first)
            {
                continue;
            }
            else if (-valores[i].first == -valores[i+1].first)
            {
                if (valores[i + 1].second == 'A' && (valores[i].second == 'T' || valores[i].second == 'G' || valores[i].second == 'C'))
                {
                    cambio++;
                    swap(valores[i], valores[i + 1]);
                    continue;
                }
                if (valores[i + 1].second == 'T' && (valores[i].second == 'G' || valores[i].second == 'C'))
                {
                    cambio++;
                    swap(valores[i], valores[i + 1]);
                    continue;
                }
                if (valores[i + 1].second == 'G' && valores[i].second == 'C')
                {
                    cambio++;
                    swap(valores[i], valores[i + 1]);
                    continue;
                }
            }
        }
        if(!cambio){
            break;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string cadena;
    cin >> cadena;
    int n;
    cin >> n;
    vector<int> T(cadena.size() + 1, 0);
    vector<int> A(cadena.size() + 1, 0);
    vector<int> G(cadena.size() + 1, 0);
    vector<int> C(cadena.size() + 1, 0);

    for (int i = 0; i < cadena.size(); i++)
    {
        if (cadena[i] == 'T')
        {
            T[i + 1] = T[i] + 1;
            A[i + 1] = A[i];
            G[i + 1] = G[i];
            C[i + 1] = C[i];
        }
        else if (cadena[i] == 'A')
        {
            T[i + 1] = T[i];
            A[i + 1] = A[i] + 1;
            G[i + 1] = G[i];
            C[i + 1] = C[i];
        }
        else if (cadena[i] == 'G')
        {
            T[i + 1] = T[i];
            A[i + 1] = A[i];
            G[i + 1] = G[i] + 1;
            C[i + 1] = C[i];
        }
        else if (cadena[i] == 'C')
        {
            T[i + 1] = T[i];
            A[i + 1] = A[i];
            G[i + 1] = G[i];
            C[i + 1] = C[i] + 1;
        }
    }
    while (n--)
    {
        int L, R;
        cin >> L >> R;
        int cantidadA = A[R] - A[L - 1];
        int cantidadT = T[R] - T[L - 1];
        int cantidadG = G[R] - G[L - 1];
        int cantidadC = C[R] - C[L - 1];
        vector<pair<int, char>> values = {{-cantidadA, 'A'}, {-cantidadC, 'C'}, {-cantidadT, 'T'}, {-cantidadG, 'G'}};
        sort(values.begin(), values.end());
        ordenar(values);
        for (int i = 0; i < values.size(); i++)
        {
            cout << values[i].second;
        }
        cout << "\n";
    }
    return 0;
}