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
    vector<int> valores(n);
    for(int &t:valores) cin>>t;
    long long maximo = -1;
    for(int i=0;i<n;i++){
        long long temporal = valores[i];
        maximo = max(maximo,temporal);

        for(int j=i+1;j<n;j++){
            temporal^=valores[j];
            maximo = max(maximo,temporal);
        }
    }
    cout<<maximo<<'\n';
    return 0;
}