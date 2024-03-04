#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;
bool myComparison(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int> values;
    for(int i=0;i<n;i++){
        int b,d;
        cin>>b>>d;
        values[b]++;
        values[d]--;
    }
    int dia=0,maximoCounter=0,actually=0; 
    for(auto value:values){
        actually+=value.second;
        if(actually>maximoCounter){
            dia=value.first;
            maximoCounter=actually;
        }
    }   
    cout<<dia<<' '<<maximoCounter<<"\n";
    return 0;
}