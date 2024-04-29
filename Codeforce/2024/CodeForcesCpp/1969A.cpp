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
        vector<int> valores(n,0);
        for(int &tt:valores){
            cin>>tt;
            tt=tt-1;
        }
        bool monda=false;
        for(int i=0;i<n;i++){

            if(i==valores[valores[i]]){
                cout<<2<<'\n';
                monda = true;
                break;
            }
        }
        if(!monda) cout<<3<<'\n';
        
    }
    return 0;
}