#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> values(n,0);
    vector<pair<long long,int>> pares;
    for(auto &t:values) cin>>t;
    long long acumulador =0,acumulador2=0;
    for(int i = 0;i<k;i++){
        acumulador += (i+1LL) * values[i];
        acumulador2 += values[i];
    }
    pares.push_back({acumulador,1});
    for(int i = k;i<n;i++){
        acumulador += (long long)values[i] * k - acumulador2;
        acumulador2 += values[i] - values[i-k];  
        pares.push_back({acumulador,i-k+2});
    }
    sort(pares.begin(),pares.end());
    for(auto &par:pares){
        cout<<par.second<<" "<<par.first<<"\n";
    }
    return 0;
}
