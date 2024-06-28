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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini=n+1,miniAns=n+1,ans=0;
        while(n--){
            int a;
            cin>>a;
            if(mini<a && a<miniAns){
                miniAns=a;
                ans++;
            }
            mini=min(a,mini);
        }
        cout<<ans<<endl;
    }
    return 0;
}