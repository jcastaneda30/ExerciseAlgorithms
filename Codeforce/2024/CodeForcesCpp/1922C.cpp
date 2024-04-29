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
        int n,m;
        cin>>n;
        
        vector<int> distancias(n,0);
        for(int &tt:distancias) cin>>tt;
        vector<int> izqDer(n,0);
        vector<int> derIzq(n,0);
        izqDer[0] = 0;
        izqDer[1] = 1;
        derIzq[n-1] = 0;
        derIzq[n-2] = 1;
        if(n>2){
        for(int i=1;i<n-1;i++){
            if(abs(distancias[i]-distancias[i+1])<abs(distancias[i]-distancias[i-1])){
                izqDer[i+1]=izqDer[i]+1;
            }else izqDer[i+1]=izqDer[i]+abs(distancias[i]-distancias[i+1]);
        }
        for(int i=n-2;i>=1;i--){
            if(abs(distancias[i]-distancias[i-1])<abs(distancias[i]-distancias[i+1])){
                derIzq[i-1]=derIzq[i]+1;
            }else derIzq[i-1]=derIzq[i]+abs(distancias[i]-distancias[i-1]);
        }
        }
        cin>>m;
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            if(n==2) cout<<1<<endl;
            else if(a<b) cout<<izqDer[b-1]-izqDer[a-1]<<"\n";
            else cout<<abs(derIzq[a-1]-derIzq[b-1])<<'\n';
        }
    }
    return 0;
}