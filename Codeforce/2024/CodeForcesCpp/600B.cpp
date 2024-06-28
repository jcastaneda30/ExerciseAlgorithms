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
    int n,m;
    cin>>n>>m;
    vector<int> valores(n,0);
    vector<int> comparar(m,0);
    for(auto &t:valores) {
        cin>>t;
        t=-t;
    }
    for(auto &t:comparar) cin>>t;
    sort(valores.begin(),valores.end());
    long long counter=0;
    for(int i=0;i<m;i++){
        int pos = valores.end() - lower_bound(valores.begin(),valores.end(),-comparar[i]);
        cout<<pos<<' ';
    }
    cout<<endl;
    return 0;
}