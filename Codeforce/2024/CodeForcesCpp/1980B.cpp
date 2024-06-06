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
        int n, f, k;
        cin>>n>>f>>k;
        vector<int> values(n);
        for(int i=0;i<n;i++) cin>>values[i];
        int favorite = values[f-1];
        vector<int> inferior=values;
        vector<int> superior(n);
        for(int i=0;i<n;i++){
            superior[i] = -values[i];
        }
        sort(inferior.begin(),inferior.end());
        sort(superior.begin(),superior.end());

        auto upper = upper_bound(inferior.begin(),inferior.end(),favorite);
        auto lower = upper_bound(superior.begin(),superior.end(),-favorite);

        int indexUpper = n-(upper-inferior.begin())-1;
        int indexLower = (lower-superior.begin());

        if(k-1<=indexUpper) cout<<"NO"<<'\n';
        else if(k-1>indexUpper && k-1<indexLower-1) cout<<"MAYBE"<<'\n';
        else if(k-1>=indexLower-1) cout<<"YES"<<'\n';
    }
    return 0;
}