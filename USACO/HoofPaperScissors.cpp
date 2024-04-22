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
    setIO("hps");
    int N;
    cin>>N;
    vector<vector<int>> juego(3,vector<int>(N+1,0));
    for(int i=1;i<=N;i++){
        char value;
        cin>>value;
        juego[0][i] = value == 'S' ? juego[0][i-1] + 1: juego[0][i-1]; 
        juego[1][i] = value == 'P' ? juego[1][i-1] + 1: juego[1][i-1]; 
        juego[2][i] = value == 'H' ? juego[2][i-1] + 1: juego[2][i-1]; 
    }
    long long win=-1, h=-1,s=-1, p=-1;
    for(int i=1;i<=N;i++){
        h = max(juego[0][N]-juego[0][i]+juego[1][i], juego[0][N]-juego[0][i]+juego[2][i]);
        s = max(juego[1][N]-juego[1][i]+juego[0][i], juego[1][N]-juego[1][i]+juego[2][i]);
        p = max(juego[2][N]-juego[2][i]+juego[1][i], juego[2][N]-juego[2][i]+juego[0][i]);
        win = max(win, max(h,max(s,p)));
    }
    cout<<win<<endl;
    return 0;
}