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
    //setIO("diamond");
    int N,K;
    cin>>N>>K;
    int tamano=N;
    vector<int> value(N);
    for(auto &t:value) cin>>t;
    for(int i=1;i<N;i++){
        cout<<abs(value[i-1]-value[i])<<"\n";
        if(abs(value[i-1]-value[i])>K) --tamano;
    }
    cout<<tamano<<"\n";
   return 0;
}