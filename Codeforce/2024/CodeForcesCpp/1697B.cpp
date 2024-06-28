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
    int N,Q;
    cin>>N>>Q;
    vector<int> values(N+1,0);
    vector<long long> prefix(N+1,0);
    for(int i=1;i<N+1;i++){
        int value;
        cin>>value;
        values[i]=value;
    }
    sort(values.begin(),values.end());
    for(int i=1;i<N+1;i++){
        prefix[i]=prefix[i-1]+values[i];
    }
    for(int i=0;i<Q;i++){
        int x,y,a,b;
        cin>>x>>y;
        a=N-x;
        b=a+y;
        cout<<prefix[b]-prefix[a]<<"\n";
    }
    return 0;
}