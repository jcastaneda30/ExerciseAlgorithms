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
    int n,c;
    cin>>n>>c;
    vector<long long> personas(n);
    for(long long &t:personas) cin>>t;
    vector<long long> values(n);
    vector<long long> ciclos(n);
    
    values[0]=personas[0];
    ciclos[0]=values[0]/c;
    values[0]-=c;
    values[0]=max(values[0],(long long)0);
    long long minimo=min((long long)9223372036854775807,ciclos[0]);
    for(int i=1;i<n;i++){
        values[i]=personas[i]+values[i-1];
        ciclos[i]=values[i]/c;
        values[i]-=c;
        values[i]=max(values[i],(long long)0);
        if(i==n-1 && ciclos[i]>0) ciclos[i]=(long long)9223372036854775807;
        minimo=min(minimo,ciclos[i]);
    }
    int tiempo=0;
    for(int i=0;i<n;i++){
        if(ciclos[i]==minimo){
            tiempo=i;
            break;
        }
    }
    if((personas[0]/c)>=n){
        cout<<"impossible"<<endl;
    }else cout<<tiempo<<endl;
    return 0;
}