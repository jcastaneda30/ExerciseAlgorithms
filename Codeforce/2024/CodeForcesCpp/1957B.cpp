#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
string obtenerBinario(int numero)
{
    if (numero == 0)
        return "0";

    string binario = "";
    while (numero > 0)
    {
        binario = (numero % 2 == 0 ? "0" : "1") + binario;
        numero >>= 1;
    }
    return binario;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, copy;
        cin >> n >> k;
        string binario = obtenerBinario(k);
        vector<int> values(n, 0);
        int valor = 0;
        for (int i = binario.size() - 1; i >= 1; i--)
        {
            valor += pow(2, (int)binario.size() - i -1 );
        }
        values[0] = k - valor;
        values[1] = valor;
        if (n > 1)
        {
            for (auto &value : values)
                cout << value << " ";
            cout << endl;
        }
        else
            cout << k << endl;

    }
    return 0;
}
