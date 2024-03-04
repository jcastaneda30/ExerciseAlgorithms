#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    
    int N;
    cin>>N;
    vector<int> flores(N);
    for(int &t:flores) cin>>t;
    int counter=0;
    for(int i=0;i<N;i++){
        int suma=0;
        for(int j=i;j<N;j++){
            suma+=flores[j];
            for(int k=i;k<=j;k++){
                if((suma%(j-i+1))==0 && (suma/(j-i+1))==flores[k]){
                    counter++;
                    break;
                }
            }
        }
    }
    cout<<counter<<"\n";
    return 0;
}