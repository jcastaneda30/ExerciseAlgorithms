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
    int n;
    cin>>n;
    vector<int> a(n,0);
    vector<int> b(n,0);
    vector<int> c(n,0);
    for(int &tt:a) cin>>tt;
    for(int &tt:b) cin>>tt;
    
    for(int i=0;i<n;i++){
        c[i] = a[i] -b[i];
    }
    sort(c.begin(),c.end());
    long long counter =0;
    for(int i=0;i<n;i++){
        if(c[i]<=0) continue;
        int pos = upper_bound(c.begin(),c.end(),-c[i]) - c.begin();
        counter+=i-pos;
    }
    cout<<counter<<endl;
    return 0;
}