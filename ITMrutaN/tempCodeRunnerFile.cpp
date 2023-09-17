#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;

int main(){
    int N,K;
    cin>>N>>K;
    vector<int> A(N,0);
    vector<int> S(K,0);
    unordered_map<int, unordered_set<int>> sumasPre;
    for(int i=0;i<N;i++) cin>>A[i];
    for(int i=0;i<K;i++) cin>>S[i];
    for(int s_i:S){
        int count = 0;
        
        for(int i=0;i<N;i++) {
            if(sumasPre[s_i].find(s_i-A[i])!=sumasPre[s_i].end()){
                count++;
            }
            sumasPre[s_i].insert(A[i]);
        }
        cout<<s_i<<" "<<count<<endl;
    }
}
    