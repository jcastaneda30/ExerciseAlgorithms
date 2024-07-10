// https://cses.fi/problemset/task/1632

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> values(n);
    for(int i=0;i<n;i++) cin>>values[i].second>>values[i].first;
    sort(values.begin(),values.end());
    multiset<int> partipantes;
    for(int i=0;i<k;i++) partipantes.insert(0);
    int counter =0;
    for(int i=0;i<n;i++){
        auto it = partipantes.upper_bound(values[i].second);
        if(it==partipantes.begin()) continue;
        partipantes.erase(--it);
        partipantes.insert(values[i].first);
        ++counter;
    }
    cout<<counter<<endl;
    return 0;
}