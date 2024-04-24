#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int N,Q;
    cin>>N>>Q;
    vector<string> arboleda;
    for(int i=1;i<=N;i++){
        string cadena;
        cin>>cadena;
        arboleda.push_back(cadena);
    }
    vector<vector<long long>> arboles(N+1,vector<long long>(N+1,0));
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(arboleda[i-1][j-1]=='*') arboles[i][j]=arboles[i-1][j]+arboles[i][j-1]-arboles[i-1][j-1]+1;
            else arboles[i][j]=arboles[i-1][j]+arboles[i][j-1]-arboles[i-1][j-1];
        }
    }

    for(int i=1;i<=Q;i++){
        int y1,x1,y2,x2;
        cin>>y1>>x1>>y2>>x2;
        long long value = arboles[y2][x2] - arboles[y2][x1-1] - arboles[y1-1][x2]+arboles[y1-1][x1-1];
        cout<<value<<endl;    
    }
    return 0;
}