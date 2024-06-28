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
        int n;
        cin>>n;
        vector<int> alturas(n);
        for(int &a_i:alturas) cin>>a_i;
        long long operaciones=0;
        if(n>1 && alturas[0]>alturas[1]){
            operaciones=alturas[0]-alturas[1];
            alturas[0]=alturas[1];
        }
        long long counter=alturas[0];
        if(n>1 && alturas[n-1]>alturas[n-2]){
            operaciones+=alturas[n-1]-alturas[n-2];
            alturas[n-1]=alturas[n-2];
        }
        counter+=alturas[n-1];
        for(int i=1;i<n-1;i++){
            if(alturas[i-1]<alturas[i] && alturas[i]>alturas[i+1]){
                operaciones+=alturas[i]-max(alturas[i-1],alturas[i+1]);
                alturas[i]=max(alturas[i-1],alturas[i+1]);
            }
        }
        for(int i=0;i<n-1;i++){
            counter+=abs(alturas[i]-alturas[i+1]);
        }
        if(n==1) counter = alturas[0];
        counter+=operaciones;
        cout<<counter<<'\n';
    }
    return 0;
}