// https://cses.fi/problemset/task/1091

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    vector<int> weights(n);
    for(int i=0;i<n;i++) cin>>weights[i];
    sort(weights.begin(),weights.end());
    int ans=0;
    int l =0,r = n-1;
    while(l<=r){
        if(weights[l]+weights[r]<=x){
            ans++;
            l++; r--;
        }else{
            ans++;
            r--;
        }
    }
    cout<<ans<<endl;
    return 0;
}