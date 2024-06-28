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
    setIO("whereami");
    string cadena;
    int N;
    cin >> N;
    cin >> cadena;
    for (int k = 1; k <= N; k++)
    {
        set<string> unique;
        for (int i = 0; i < N - k + 1; i++)
        {
            string s1;
            for (int j = 0; j < k; j++)
            {
                s1+=cadena[i+j];
            }
            unique.insert(s1);
        }
        if(unique.size()==N-k+1){
            cout<<k<<endl;
            return 0;
        }
    }
    return 0;
}