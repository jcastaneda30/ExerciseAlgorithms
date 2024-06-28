#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>> values;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        values.push_back(make_pair(a,b));
    }
    sort(values.begin(),values.end());
    int minimo=values[0].second;
    for(int i=1;i<n;i++){
        if(values[i].second>=minimo){
            minimo=values[i].second;
        }else{
            minimo=values[i].first;
        }
    }
    cout<<minimo<<endl;
    return 0;
}