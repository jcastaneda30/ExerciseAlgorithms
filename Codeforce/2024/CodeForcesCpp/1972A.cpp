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
        int n;
        cin>>n;
        vector<int> a(n,0);
        vector<int> b(n,0);
        for(int &tt:a) cin>>tt;
        for(int &tt:b) cin>>tt;
        int counter = 0;
        for(int i=0;i<n;i++){
            int provitional = 0;
            for(int j=i;j<n;j++){
                if(a[i]>b[j])provitional++;
            }            
            counter = max(counter,provitional);
        }
        cout<<counter<<'\n';
    }
    
    return 0;
}