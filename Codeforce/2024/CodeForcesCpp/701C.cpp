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
    int n;
    cin>>n;
    string cadena;
    cin>>cadena;
    set<char> uniqueCounter(cadena.begin(),cadena.end());
    map<char,int> counter;
    int unique = uniqueCounter.size(),l=0;
    int ans = n;
    for(int i=0;i<n;i++){
        counter[cadena[i]]++;
        while(l<i && counter[cadena[l]]>1){
            counter[cadena[l]]--;
            l++;
        }
        if((int)counter.size() == unique){
            ans = min(ans,i-l+1);
        }
    }
    cout<<ans<<'\n';
    return 0;
}