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
        vector<int> alturas(n);
        for(auto &h:alturas) cin>>h;
        if(alturas[0]!=n){
            cout<<"NO"<<'\n';
            continue;
        }
        vector<int> horizontal(n);
        int l=0,altura=1;
        for(int r=n-1;r>=0;r--){
            horizontal[r]=altura;
            if(alturas[l]==r+1){
                altura++;
                l++;
            }
            cout<<horizontal[r]<<endl;
        }

    }
    return 0;
}