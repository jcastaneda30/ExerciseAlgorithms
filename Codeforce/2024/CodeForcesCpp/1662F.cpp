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
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> power(n,0);
        for(int &t:power) cin>>t;
        int l=a-1;
        int count =0;
        for(int r=a;r<b-1;r++){
            if(abs(l-r)<=min(power[l],power[r])){
                continue;
            }else{
                count++;
                l=r;
            }
        }
        if(a==b) cout<<"0\n";
        else cout<<count<<'\n';
    }
    return 0;
}