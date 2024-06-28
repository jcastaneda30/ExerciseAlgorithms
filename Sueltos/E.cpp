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
    vector<int> values(N);
    for(int &t:values) cin>>t;
    int conteo=0;
    unordered_map<int,int> element;
    for(int i=0;i<N;i++){
        if(element[values[i]+1]>0){
            element[values[i]+1]--;
            element[values[i]]++;
        }else{
            element[values[i]]++;
            conteo++;
        }
    }
    cout<<conteo<<endl;
    return 0;
}