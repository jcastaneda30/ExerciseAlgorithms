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
    string S,T;
    cin>>S;
    cin>>T;
    int r=0;
    for(int i=0;i<S.size();i++){
        while(r<T.size() && S[i]!=T[r]){
            r++;
        }
        cout<<r+1<<' ';
        r++;
    }
    cout<<'\n';
    return 0;
}