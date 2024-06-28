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
        vector<int> a(n);
        vector<int> b(n);
        set<int> prueba;
        for(int &tt:a) cin>>tt;
        for(int &tt:b) {
            cin>>tt;
            prueba.insert(tt);
        }
        
        cin>>m;
        vector<int> d(m);
        map<int,int> valores; 
        for(int &tt:d) {
            cin>>tt;
            if(prueba.count(tt))
                valores[tt]+=1;
        }

        auto it = find(b.begin(),b.end(),d[m-1]);
        if(it==b.end()){
            cout<<"NO"<<'\n';
            continue;
        }
        bool monda = true;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(valores[b[i]]>0){
                    valores[b[i]]--;
                }else{
                    cout<<"NO"<<'\n';
                    monda = false;
                    break;
                }
            }
        }
        if(monda) cout<<"YES"<<'\n';
    }
    return 0;
}