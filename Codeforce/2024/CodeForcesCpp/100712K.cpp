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
        int n,k;
        cin>>n>>k;
        vector<int> values(n);
        map<int,vector<int>> elementos;
        for(int i=0;i<n;i++){
            cin>>values[i];
        }
        sort(values.begin(),values.end());

        for(int i=0;i<n;i++){
           elementos[values[i]].push_back(i);
        }
        bool monda = true;
        for(int i=0;i<n;i++){
            if(values[i]==0){
                continue;
            }
            if(k%values[i]!=0) continue;
            if(elementos[(k/values[i])].size()>0){
                for(int j=0;j<(int)elementos[(k/values[i])].size();j++){
                    if(elementos[(k/values[i])][j]!=i){
                        cout<<values[i]<<' '<<(k/values[i])<<'\n';
                        monda = false;
                        break;
                    }
                }
            }
            if(!monda) break;
        }
        if(monda) cout<<-1<<'\n';
    }
    return 0;
}