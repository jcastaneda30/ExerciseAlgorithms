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
        string cadena;
        int x,n;
        cin>>cadena;
        cin>>x;
        n=cadena.size();
        string W(n,'1');
        for(int i=0;i<n;i++){
            if(cadena[i]=='0'){
                if(i-x>=0)W[i-x]='0';
                if(i+x<n)W[i+x]='0';
            }
        }
        bool monda = true;
        for(int i=0;i<n;i++){
            bool element = false;
            element = element || (i-x>=0 && W[i-x]=='1');
            element = element || (i+x<n && W[i+x]=='1');

            if(cadena[i]!='0'+element){
                monda = false;
                cout<<-1<<'\n';
                break;
            }
        }
        if(monda) cout<<W<<'\n';
    }
    return 0;
}