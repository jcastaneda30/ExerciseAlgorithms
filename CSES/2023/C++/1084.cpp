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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> inquilinos(n);
    vector<int> apartamentos(m);
    for(int &t:inquilinos) cin>>t;
    for(int &t:apartamentos) cin>>t;
    sort(inquilinos.begin(), inquilinos.end());
    sort(apartamentos.begin(), apartamentos.end());
    int l=0;
    int ans=0;
    for(int r=0;r<n;r++){
        while(l<m && apartamentos[l]<inquilinos[r]-k){
            l++;
        }
        if(l<m && apartamentos[l]<=inquilinos[r]+k){
            ans++;
            l++;
        }
    }
    cout<<ans<<endl;
    return 0;
}