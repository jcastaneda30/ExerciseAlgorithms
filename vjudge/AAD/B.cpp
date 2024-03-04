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
    int N;
    cin>>N;
    vector<int> values(N,0);
    for(int i=0;i<N;i++){
        string cadena;
        cin>>cadena;
        for(int j=0;j<N;j++){
            if(cadena[j]=='o'){
                ++values[i];
            }else if(cadena[j]=='x'){
                ++values[j];
            }
        }
    }
    vector<pair<int,int>> numeros;
    for(int i = 0;i<N;i++){
        numeros.push_back(make_pair(-values[i],i+1));
    }
    sort(numeros.begin(),numeros.end());
    for(int i = 0;i<N;i++){
        cout<<numeros[i].second<<' ';
    }
    cout<<"\n";
    return 0;
}