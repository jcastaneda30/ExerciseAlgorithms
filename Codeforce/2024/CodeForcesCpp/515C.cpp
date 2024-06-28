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
    string cadena,respuesta;
    cin>>cadena;
    vector<int> primos = {2,3,5,7};
    for(int i=0;i<n;i++){
        if(cadena[i]=='0') continue;
        int numero = cadena[i]-'0';
        for(int j=numero;j>1;j--){
            int copy = j;
            auto it = std::find(primos.begin(), primos.end(), j);
            if (it != primos.end()) {
                respuesta+=to_string(j);
                break;        
            }
            bool monda = false;
            for(int t=3;t>=0;t--){
                while(copy%primos[t]==0){
                    auto it = std::find(primos.begin(), primos.end(), copy/primos[t]);
                    if (it != primos.end()) {
                        respuesta+=to_string(copy/primos[t]);
                        monda = true;
                        break;        
                    }
                    respuesta+=to_string(primos[t]);
                    copy/=primos[t];
                }
            }
        }
    }
    sort(respuesta.rbegin(),respuesta.rend());
    cout<<respuesta<<endl;
    return 0;
}