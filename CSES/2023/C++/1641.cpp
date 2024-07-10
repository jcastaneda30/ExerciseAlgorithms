#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<algorithm>
 
using namespace std;
 
int main(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> values;
    for(int i=1;i<=n;i++) {
        pair<int,int> aa;
        cin>>aa.first;
        aa.second=i;
        values.push_back(aa);
    }
    sort(values.begin(),values.end());
    for(int i=0;i<n;i++){
        int l = 0, r = n - 1;
        int target = x - values[i].first;
        while(l<r){
            if(l!=i && r!=i && values[l].first + values[r].first == target){
                cout<<values[i].second<<' '<<values[l].second<<' '<<values[r].second<<endl;
                return 0;
            }
            if(values[l].first + values[r].first<target) l++;
            else r--;
        } 
    }
    
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}