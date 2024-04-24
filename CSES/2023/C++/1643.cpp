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
    int N;
    cin>>N;
    vector<long long> prefix(N+1,0);
    set<int> posiciones;
    for(int i=1;i<=N;i++){
        int value;
        cin>>value;
        prefix[i]=prefix[i-1]+value;
    }
    long long suma=prefix[1], minimo = prefix[0] ;
    for(int i=1;i<=N;i++){
        suma = max(suma,prefix[i]-minimo);
        minimo = min(minimo, prefix[i]);
    }
    cout<<suma<<endl;
    return 0;
}