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
        string cadena;
        cin>>cadena;
        int r=cadena.size()-1;
        int counterUnos = 0;
        long long acumulador=0;
        for(int r=0;r<cadena.size();r++){
            if(cadena[r]=='1'){
                counterUnos++;
            }else if(cadena[r]=='0'){
                if(counterUnos==0)continue;
                acumulador+=counterUnos+1;
            }
        }
        cout<<acumulador<<'\n';
    }
    return 0;
}