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
    int n,m;
    cin>>n>>m;
    vector<int> ciudaddes(n);
    vector<int> torres(m);

    for(int i=0;i<n;i++) cin>>ciudaddes[i];
    for(int i=0;i<m;i++) cin>>torres[i];

    int j=0;
    int ans =0;
    for(int i=0;i<n;i++){
        while(j+1<m && abs(ciudaddes[i]-torres[j])>=abs(ciudaddes[i]-torres[j+1]))j++;
        ans = max(ans,abs(ciudaddes[i]-torres[j]));
    }

    cout<<ans<<endl;
    return 0;
}