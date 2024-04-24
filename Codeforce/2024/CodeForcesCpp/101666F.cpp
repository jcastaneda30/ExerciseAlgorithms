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
    vector<int> valor(N);
    for(int &t:valor) cin>>t;
    sort(valor.begin(),valor.end());
    int Alice=0, Bob=0;
    bool turno=true;
    for(int i=N-1;i>=0;i--){
        if(turno){Alice+=valor[i]; turno=false;}
        else {Bob+=valor[i]; turno=true;}
    }
    cout<<Alice<<" "<<Bob<<endl;
    return 0;
}