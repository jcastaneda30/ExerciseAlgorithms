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
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        map<int, int> contador;
        for(int i=0;i<N;i++){
            int value;
            cin>>value;
            contador[value]++;
        }
        int elementos=0;
        for(auto &valor:contador){
            if(valor.second>=3){
                elementos+=valor.second/3;
            }
        }
        cout<<elementos<<"\n";
    }
    return 0;
}