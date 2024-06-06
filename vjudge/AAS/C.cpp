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
    long long maximo = -1;
    long long hombros = 0;
    for(int i=0;i<N;i++){
        long long A,B;
        cin>>A>>B;
        hombros+=A;
        maximo=max(B-A,maximo);
    }
    cout<<(hombros+maximo)<<'\n';
    return 0;
}