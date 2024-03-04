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
    map<long long,long long> slimes;
    for(int i=0;i<N;i++){
        int S,C;
        cin>>S>>C;
        slimes[S]=C;
    }
    for(auto value:slimes){
        if(value.second>1){
        long long cantidad=value.second;
        if(value.second%2==0){
            cantidad=value.second/2;
        }else{
            cantidad=(value.second-1)/2;
        }
        if(slimes.count(value.first*2)==0){
            slimes[value.first*2]=cantidad;
        }else{
            slimes[value.first*2]+=cantidad;
        }
        
        slimes[value.first]=value.second-cantidad*2;}
    }
    int contador=0;
    for(auto value:slimes){
        if(value.second>=1){
            contador++;
        }
    }
    
    cout<<contador<<endl;
    return 0;
}