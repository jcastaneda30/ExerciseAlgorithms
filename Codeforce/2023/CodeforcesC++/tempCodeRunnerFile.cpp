#include<iostream>
#include<vector>
#include <set>
#include<algorithm>
using namespace std;
int dp(int n, vector<int> cosas){
    if(n==0) return 0;
    if(n<0) return INT_MIN;
    
    int best = INT_MIN;
    for(auto x:cosas){
        best=max(best,dp(n-x,cosas)+1);
    }
    return best;
}



int main(){
    int n;
    vector<int> cosas(3);
    cin>>n;
    for(int i=0;i<3;i++){
        cin>>cosas[i];
    }
    int ans=dp(n,cosas);
    cout<<ans;
    return 0;
}