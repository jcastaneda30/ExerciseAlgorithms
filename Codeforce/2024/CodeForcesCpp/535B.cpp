#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;
void backtracking(vector<string> &ans,string numero,long long maximo){
    if(numero!=""){long long value = stoll(numero);
    if(value>maximo) return;}
    vector<string> valores = {"4","7"};
    ans.push_back(numero);
    for(int i=0;i<2;i++){
        backtracking(ans,numero+valores[i],maximo);
    }
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    vector<string> ans;
    vector<long long> ans2;
    backtracking(ans,"",1e9);
    for(int i=0;i<ans.size();i++){
        if(ans[i]!="")ans2.push_back(stoll(ans[i]));
    }
    sort(ans2.begin(),ans2.end());
    int n;
    cin>>n;
    auto it = lower_bound(ans2.begin(),ans2.end(),n);
    int index = it-ans2.begin();
    cout<<index+1<<endl;
    return 0;
}