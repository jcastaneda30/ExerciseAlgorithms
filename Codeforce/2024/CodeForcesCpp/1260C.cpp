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
    string s;
    cin>>s;
    int minimo = s[0];
    for(int i=0;i<s.size();i++){
        if(minimo>=s[i]){
            cout<<"Mike"<<'\n';
        }else{
            cout<<"Ann"<<'\n';
        }
        minimo= min(minimo,(int)s[i]);
    }
    return 0;
}