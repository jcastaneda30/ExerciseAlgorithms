#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<string> asciArboles(N);
    vector<vector<int>> arboleda;
    vector<vector<long long>> prefix(N + 1, vector<long long>(N + 1, 0));
    for (int i = 0; i < N; i++)
    {
        cin >> asciArboles[i];
    }
    for (int i = 0; i < N; i++)
    {
        vector<int> fila(N);
        for (int j = 0; j < N; j++)
        {
            if (asciArboles[i][j] == '*')
                fila[j] = 1;
            else
                fila[j] = 0;
        }
        arboleda.push_back(fila);
    }
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < N + 1; j++)
        {
            prefix[i][j] = prefix[i][j - 1] + prefix[i - 1][j] - prefix[i - 1][j - 1] + arboleda[i - 1][j - 1];
        }
    }
    int x1, y1, x2, y2;
    long long ans;
    for (int i = 0; i < Q; ++i)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        ans = prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
        cout<<ans<<endl;
    }
    
    return 0;
}