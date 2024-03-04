#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;
int criba(){
        int n;
        cin>>n;
        vector<int> valores(n+1,0),counter(n+1,0);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a<=n)valores[a]++;
        }
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                counter[j]+=valores[i];
            }
        }
        return (int)(*max_element(counter.begin(),counter.end()));
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       int valor = criba();
       cout<<valor<<endl;
    }
    return 0;
}