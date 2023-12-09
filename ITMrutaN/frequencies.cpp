#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>

using namespace std;

int main(){
    int N,K;
    cin>>N>>K;
    vector<int> A(N,0);
    vector<int> S(K,0);
    int maxa=-99;
    for(int i=0;i<N;i++) cin>>A[i];
        
    for(int i=0;i<K;i++) cin>>S[i];
    vector<pair<int,int>> respuestas;
    sort(A.begin(),A.end());
    for(int s_i:S){
        int count = 0;
        vector<bool> sumasPre(2*1e8+1,false);
        for(int i=0;i<N;i++) {
            int suma = s_i-A[i];
            if(suma >= 0 && sumasPre[suma]){
                count++;
            }
            sumasPre[A[i]]=true;
        }
        respuestas.push_back(make_pair(-count,s_i));
    }
    sort(respuestas.begin(),respuestas.end());
    for(auto xd:respuestas){
        cout<< xd.second<<" "<<-xd.first<<endl;
    }
}
    