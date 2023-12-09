#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> a_i(n,0);
        unordered_map<int,int> counter;
        int max = -99;
        for(int j=0;j<n;j++){
            cin>>a_i[j];
            counter[a_i[j]]++;
            if(max<counter[a_i[j]]) max = counter[a_i[j]];
        }
        int variable = min(max, static_cast<int>(counter.size()) - 1);
        if(variable<=max-2){
            variable++;
        }
        cout<<variable<<"\n";
    }
    return 0;
}