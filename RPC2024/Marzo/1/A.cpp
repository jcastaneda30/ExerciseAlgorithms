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
    int N,M,K;
    cin>>N>>M>>K;
    vector<long long> tamanhos(N);
    long long total=0;
    for(long long &t:tamanhos) {
        long long value=0;
        cin>>value;
        t=-value;
        total+=value;
    }
    sort(tamanhos.begin(),tamanhos.end());
    long long perte=0;
    for(int i=0;i<M;i++){
        perte+=-tamanhos[i];
    }
    for(int i=M;i<N && i<M+K;i++){
        perte+=-tamanhos[i];
    }
    float monda=(float)perte/(float)total;
    cout<<monda*100<<endl;
    return 0;
}