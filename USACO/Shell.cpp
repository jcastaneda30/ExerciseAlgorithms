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
    setIO("shell");
    int n;
    cin >> n;

    vector<vector<int>> values;
    for (int i = 0; i < n; i++)
    {
        int a, b, g;
        cin >> a >> b >> g;
        vector<int> xd = {a, b, g};
        values.push_back(xd);
    }
    int maximo = -1;
    for (int i = 0; i < 3; i++)
    {
        int counter = 0;
        bool array[3] = {0, 0, 0};
        array[i] = true;
        for (int j = 0; j < n; j++)
        {
            vector<int> actual = values[j];
            swap(array[actual[0]-1],array[actual[1]-1]);
            if(array[actual[2]-1]) counter++;
        }
        maximo=max(maximo,counter);
    }
    cout<<maximo<<"\n";
    return 0;
}