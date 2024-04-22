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
    int n;
    cin>>n;

    map<int,int> elementos;
    for(int i=0;i<n;i++) {
        int t;
        cin>>t;
    elementos[t]++;}
    cout<<(int)elementos.size()<<endl;
    return 0;
}