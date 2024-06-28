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
    int n,p;
    cin>>n>>p;
    vector<int> values(n);
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        values[i]=value;
    }
    sort(values.begin(),values.end());
    auto it = lower_bound(values.begin(),values.end(),p);
    if(p>values[n-1]) it = values.end()-1;
    if(*it>p){
        it--;
    }
    cout<<*it<<endl;
   return 0;
}