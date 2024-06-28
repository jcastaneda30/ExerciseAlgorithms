#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;
void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    setIO("gymnastics");
    int K,N;
    cin>>K>>N;
    vector<vector<int>> matriz(K, std::vector<int>(N, 0));    
    for(int i=0;i<K;i++){
        for(int j=0;j<N;j++){
            cin>>matriz[i][j];
        }
    }
    int counter=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            ++counter;
            for(int t=0;t<K;t++){
                if(matriz[t][i] < matriz[t][j]) {
                    --counter;
                    break;
                }
            }
        }
    }
    cout<<ceil(float(counter)/(float)2)<<endl;
    return 0;
}
