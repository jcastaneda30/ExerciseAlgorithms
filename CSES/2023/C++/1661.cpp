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
    int N,x;
    cin>>N>>x;
    unordered_map<long long,int> valores;
    valores[0]++;
    long long counter=0,acumulador=0;
    for(int i=1;i<=N;i++){
        int value;
        cin>>value;
        acumulador+=value;
        if(valores.count(acumulador-x)) {
            counter+=valores[acumulador-x];
        }
        valores[acumulador]++;
    }
    cout<<counter<<endl;

    return 0;
}