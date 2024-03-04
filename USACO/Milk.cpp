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
    // setIO("mixmilk");
    vector<vector<int>> cubos;
    for (int i = 0; i < 3; i++)
    {
        int a, b;
        cin >> a >> b;
        vector<int> xd = {a, b};
        cubos.push_back(xd);
    }
    for (int i = 0; i < 100; i++)
    {
        int actual=i%3;
        int nexto = (i+1)%3;

        int situacion = min(cubos[actual][1],cubos[nexto][0]-cubos[nexto][1]);

        cubos[actual][1]-=situacion;
        cubos[nexto][1]+=situacion;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << cubos[i][1] << endl;
    }

    return 0;
}