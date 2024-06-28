#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>
#include <numeric>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int N;
    cin>>N;
    vector<int> valore(N+1,0);
    vector<int> prefix(N+1,0);
    vector<int> prefixInverso(N+1,0);
    cin>>valore[1];
    prefix[1]=valore[1];
    for(int i=2;i<=N;i++){
        int value;
        cin>>value;
        valore[i]=value;
        prefix[i]=gcd(prefix[i-1],valore[i]);
    }
    prefixInverso[N]=valore[N];
    for(int i=N-1;i>=1;i--){
        prefixInverso[i]=gcd(prefixInverso[i+1],valore[i]);
    }
    if(N==2){
        cout<<max(valore[1],valore[2])<<endl;
        return 0;
    }
    int valor=0;
    for(int i=1;i<=N;i++){
        if(i==1){
            valor = max(valor, max(prefixInverso[i+1],prefixInverso[i]));
            continue;
        }else if(i==N){
            valor = max(valor, max(prefix[i-1],prefix[i]));
            continue;
        }
        
        valor=max(valor, gcd(prefix[i-1],prefixInverso[i+1]));
    }
    cout<<valor<<endl;
    return 0;
}