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

void voltear(vector<vector<bool>> &valore, int index, int &n)
{
    for (int i = index % n; i >= 0; i--)
    {
        for (int j = index / n; j >= 0; j--)
        {
            valore[j][i] = !valore[j][i];
        }
    }
}

bool ceros(vector<vector<bool>> &valore, int &N)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (valore[i][j])
                return false;
        }
    }
    return true;
}

void backTracking(vector<vector<bool>> &valore, int index, int &n, int &minimo, int contador)
{
    if (ceros(valore, n))
    {
        minimo = min(minimo, contador);
        return;
    }
    if (index >= n * n)
        return;
    backTracking(valore, index + 1, n, minimo, contador);
    voltear(valore, index, n);
    backTracking(valore, index + 1, n, minimo, contador + 1);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    setIO("cowtip");
    int N;
    cin >> N;
    vector<vector<bool>> valore;
    for (int i = 0; i < N; i++)
    {
        string cadena;
        cin >> cadena;
        vector<bool> provitional;
        for (auto &caracter : cadena)
        {
            int a = caracter - '0';
            provitional.push_back(a);
        }
        valore.push_back(provitional);
    }
    int contador = 0;
    for (int i = N * N - 1; i >= 0; i--)
    {
        if (valore[i / N][i % N])
        {
            voltear(valore, i, N);
            contador++;
        }

        if (ceros(valore, N))
        {
            cout << contador << endl;
            break;
        }
    }
    return 0;
}