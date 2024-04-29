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
        int n,k;
        cin>>n>>k;
        vector<int> frutas(n,0);
        vector<int> alturas(n,0);
        for(auto &t:frutas) cin>>t;
        for(auto &t:alturas) cin>>t;

        bool elUno=frutas[0]<=k ? 1 : 0;
        int l=0, tamano=frutas[0]<=k ? 1 : 0, cantidadFrutas=frutas[0];
        for(int i=1;i<n;i++){
            if(alturas[i-1]%alturas[i]==0){
                cantidadFrutas+=frutas[i];                
                while(cantidadFrutas>k && l<i){
                    cantidadFrutas-=frutas[l];
                    l++;
                }
            }else{
                l=i;
                cantidadFrutas=frutas[i];
            }
            tamano = max(tamano,i-l+1);
            if(frutas[i]<=k) elUno=true;
        }
        cout<<(elUno?tamano:0)<<endl;
    }
    return 0;
}