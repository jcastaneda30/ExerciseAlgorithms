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
    int n;
    cin>>n;
    vector<int> valores(n);
    for(int &t:valores) cin>>t;
    string disponibles;
    cin>>disponibles;
    vector<int> minimos(n,INT_MAX);
    minimos[n-1] = valores[n-1];
    for(int i=n-2;i>=0;i--){
        minimos[i] = min(minimos[i+1],valores[i]);
    }
    int valorMax=valores[0];
    bool posible = true;
    for(int i=0;i<disponibles.size();i++){
        if(disponibles[i]=='1') valorMax = max(valorMax,valores[i]);
        else if(disponibles[i]=='0'){
            valorMax = max(valorMax,valores[i]);
            if(valorMax>minimos[i+1]){
                posible=false;
                break;
            }
        }
    }
    cout<<(posible?"YES":"NO")<<endl;

    return 0;
}