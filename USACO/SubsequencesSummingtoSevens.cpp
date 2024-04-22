#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    setIO("div7");
    int N;
    cin>>N;
    vector<long long> values (7,-1);
    long long acumulador=0;
    long long distance = 1;
    for(int i=0;i<N;i++){
        long long value;
        cin>>value;
        acumulador+=value;
        long long residuo=acumulador%7;
        if(values[residuo]==-1){
            values[residuo]=i;
        }else{
            distance = max(distance,i-values[residuo]);
        }
    }
    cout<<distance<<"\n";
    return 0;
}