#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<long long> normal(N + 1, 0);
    vector<long long> reves(N + 1, 0);
    vector<long long> prefixNormal(N + 1, 0);
    vector<long long> prefixReves(N + 1, 0);
    for (int i = 1, j = N; i < N + 1 && j >= 1; i++, j--)
    {
        int value;
        cin >> value;
        normal[i] = value;
        reves[j] = value;
    }
    for (int i = 1; i < N + 1 ; i++)
    {
        int diferencia=0;
        if(normal[i]<normal[i-1]) diferencia = normal[i-1] - normal[i];
        prefixNormal[i]=prefixNormal[i-1] + diferencia;
        diferencia=0;
        if(reves[i]<reves[i-1]) diferencia = reves[i-1] - reves[i];
        prefixReves[i]=prefixReves[i-1] + diferencia;
    }

    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        if(a>b) cout<<prefixReves[N+1-b]-prefixReves[N+1-a]<<endl;
        else cout<<prefixNormal[b]-prefixNormal[a]<<endl;
    }

    return 0;
}