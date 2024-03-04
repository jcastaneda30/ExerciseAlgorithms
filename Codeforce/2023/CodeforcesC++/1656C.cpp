#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        set<int> values;
        for(int i=0;i<n;i++){
            int value;
            cin>>value;
            values.insert(value);
        }
        vector<int> elementos(values.begin(),values.end());
        if(elementos.size()<2){
            cout<<"YES"<<endl;
            continue;
        }
        if(elementos[0]==0 && elementos[1]==1){
            cout<<"NO"<<endl;
            continue;
        }
        if(elementos[0]==1){
            bool indicador=false;
            for(int i=1;i<elementos.size();i++){
                if(elementos[i-1]==elementos[i]-1){
                    cout<<"NO"<<endl;
                    indicador=true;
                    break;
                }
            }
            if(indicador){
                continue;
            }
        }
        cout<<"YES"<<endl;
    }
}