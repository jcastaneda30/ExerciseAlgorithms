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
    setIO("cownomics");
    int N, M;
    cin >> N >> M;
    vector<string> manchas(N);
    vector<string> sinManchas(N);
    for (string &valor : manchas)
        cin >> valor;
    for (string &valor : sinManchas)
        cin >> valor;

    vector<string> verticalManchas;
    for (int i = 0; i < M; i++)
    {
        string nuevo="";
        for (int j = 0; j < N; j++)
        {
            nuevo+=manchas[j][i];
        }
        verticalManchas.push_back(nuevo);
    }

    vector<string> sinVerticalManchas;
    for (int i = 0; i < M; i++)
    {
        string nuevo="";
        for (int j = 0; j < N; j++)
        {
            nuevo+=sinManchas[j][i];
        }
        sinVerticalManchas.push_back(nuevo);
    }
    int counter=0;
    for(int i =0;i<M;i++){
        bool monda=false;
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if(verticalManchas[i][j]==sinVerticalManchas[i][k]){
                    monda=true;
                }
            }   
        }
        if(!monda) counter++;
    }
    cout<<counter<<endl;
    return 0;
}