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
    int n,k;
    cin>>n>>k;
    vector<int> damage(n);
    string button;
    for(int &t:damage) cin>>t;
    cin>>button;
    unordered_map<char,int> toquesDisponibles;
    unordered_map<char,multiset<int>> damages;
    for(int i=0;i<=25;i++) {
        char value = 'a'+i;
        toquesDisponibles[value]=k;
    }
    for(int i=0;i<n;i++){
        damages[button[i]].insert(damage[i]);
    }
    for(int i=0;i<=25;i++){
        char value = i+'a';
        while(damages[value].size()>k){
            damages[value].erase(damages[value].begin());
        }
    }
    long long totaldmg = 0;
    for(int i=0;i<n;i++){
        auto it = damages[button[i]].find(damage[i]);
        if(it!=damages[button[i]].end()){
            
            totaldmg+=damage[i];
            damages[button[i]].erase(it);
        }
    }
    cout<<totaldmg<<endl;
    return 0;
}       