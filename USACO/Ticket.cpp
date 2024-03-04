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
    int N, M;
    setIO("speeding");
    cin >> N >> M;
    vector<pair<int, int>> Nvalores;
    vector<pair<int, int>> Mvalores;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        Nvalores.push_back(make_pair(a, b));
    }
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        Mvalores.push_back(make_pair(a, b));
    }
    int maximo=0;
    int inferior=0, superior=0;
    for (int i = 0; i < N; i++)
    {   
        inferior=superior+1;
        superior+=Nvalores[i].first;
        int intervalInf = 0,intervalSup=0;
        for (int j = 0; j < M; j++){
            intervalInf=intervalSup+1;
            intervalSup+=Mvalores[j].first;
            if(inferior>intervalSup || superior<intervalInf){
                continue;
            }else{
                maximo=max(maximo,Mvalores[j].second-Nvalores[i].second);
            }
        }
    }
    cout<<maximo<<endl;
    return 0;
}