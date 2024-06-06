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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> values(n,0), lock(n,0), hellnaw;
        for(int &k:values) cin>>k;
        for(int &k:lock) cin>>k;
        for(int i=0;i<n;i++){
            if(!lock[i]) hellnaw.push_back(values[i]);
        }
        sort(hellnaw.rbegin(),hellnaw.rend());
        int index =0;
        for(int i=0;i<n;i++){
            if(lock[i]) cout<<values[i]<<' ';
            else {cout<<hellnaw[index]<<' ';index++;}
        }
        cout<<'\n';
    }
    return 0;
}