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
    setIO("cowsignal");
    int M,N,K;
    cin>>M>>N>>K;
    vector<string> figura;
    for(int i=0;i<M;i++){
        string actually;
        cin>>actually;
        string nuevo="";
        for(int j=0;j<N;j++){
            for(int t=0;t<K;t++){
                nuevo+=actually[j];
            }
        }
        for(int j=0;j<K;j++){
            figura.push_back(nuevo);
        }
    }
    for(int i=0;i<figura.size();i++){
        cout<<figura[i]<<"\n";
    }
    return 0;
}