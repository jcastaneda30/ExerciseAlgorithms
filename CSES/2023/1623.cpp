#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;

void backTracking(vector<long long> &ans, long long b, long long a,int index, int n,vector<int> &elementos){
    if(index==n){
        ans.push_back(abs(a-b));
        return;
    }
    backTracking(ans,b+elementos[index],a,index+1,n,elementos);
    backTracking(ans,b,a+elementos[index],index+1,n,elementos);
}


int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> elementos(n);
    for( int &t:elementos) cin>>t;
    vector<long long> ans;
    long long value = 9223372036854775807;
    backTracking(ans,0,0,0,n,elementos);
    sort(ans.begin(),ans.end());
    cout<<ans[0]<<endl;
    return 0;
}