#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    setIO("bcount");
    int N,Q;
    cin>>N>>Q;
    vector<vector<int>> vacas(4,vector<int>(N+1,0));
    for(int i=1;i<=N;i++){
        int value;
        cin>>value;
        vacas[1][i]= value==1? vacas[1][i-1]+1:vacas[1][i-1];
        vacas[2][i]= value==2? vacas[2][i-1]+1:vacas[2][i-1];
        vacas[3][i]= value==3? vacas[3][i-1]+1:vacas[3][i-1];
    }
    for(int i=0;i<Q;i++){
        int a,b;
        cin>>a>>b;
        cout<<vacas[1][b] - vacas[1][a-1] <<' ' <<vacas[2][b] - vacas[2][a-1] <<' '<<vacas[3][b] - vacas[3][a-1] <<"\n";
    }
    return 0;
}