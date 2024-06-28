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
        int h,n;
        long long maxDamage = 0, maxCooldo;
        cin>>h>>n;
        vector<int> damages(n);
        vector<int> coolDown(n);
        for(int i=0;i<n;i++){
            cin>>damages[i];
            maxDamage+=damages[i];
        }
        for(int i=0;i<n;i++){
            cin>>coolDown[i];
        }

    }
    return 0;
}