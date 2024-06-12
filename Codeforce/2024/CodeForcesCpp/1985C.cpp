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
        vector<int> values(n);
        for(int &tt:values) cin>>tt;
        long long suma = 0, mayor = values[0];
        int counter = 0;
        for(int i=0;i<n;i++){
            suma+=values[i];
            mayor=max(mayor,(long long)values[i]);
            if(mayor==suma-mayor){
                counter++;
            }
        }
        cout<<counter<<'\n';
    }
    return 0;
}