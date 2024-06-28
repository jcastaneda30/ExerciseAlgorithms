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
        int n;
        cin>>n;
        map<int,int> values;
        for(int i=0;i<n;i++){
            int valor;
            cin>>valor;
            values[valor]++;
        }
        int cantidad=0;
        for(auto valor:values){
            int copy;
            copy=~valor.first;
            copy=copy^(1<<31);
            if(values.count(copy)>0){
                if(values[copy]>=values[valor.first]){
                    values[valor.first]=0;
                }else{
                    values[copy]=0;
                }
            }
        }
        for(auto valor:values){
            cantidad+=valor.second;
        }
        cout<<cantidad<<endl;
    }

    return 0;
}