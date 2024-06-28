#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool es(vector<int> &waos,long long m,long long k){
    long long movimientos=0;
    for(int i=waos.size()/2;i<waos.size();i++){
        if(m-waos[i]>0) movimientos+=m-waos[i];
        if(movimientos>k) return false;
    }
    if(movimientos<=k) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long n,k;
    cin>>n>>k;
    vector<int> valores;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        valores.push_back(value);
    }
    sort(valores.begin(),valores.end());
    long long L=1,R=2000000000;
    while(L!=R){
        long long m=(L+R+1)/2;
        if(es(valores,m,k)){
            L=m;
        }else{
            R=m-1;
        }
    }
    cout<<L<<endl;

    return 0;
}

