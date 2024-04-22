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
    setIO("maxcross");
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int N,K,B;
    cin>>N>>K>>B;
    vector<bool> entradas(N+1,0);
    for(int i=0;i<B;i++){
        int value;
        cin>>value;
        entradas[value]=true;
    }
    vector<int> buenas(N+1,0);
    vector<int> malas(N+1,0);
    for(int i=1;i<=N;i++){
        buenas[i]= !entradas[i]? buenas[i-1]+1: buenas[i-1];
        malas[i]= entradas[i]? malas[i-1]+1: malas[i-1];
    }
    int cantidad=1e9;
    for(int i=K;i<=N;i++){
        if(buenas[i]-buenas[i-K] + malas[i]-malas[i-K]>=K){
            cantidad = min(cantidad, malas[i]-malas[i-K]);
        }
    }
    cout<<cantidad<<"\n";
    return 0;
}