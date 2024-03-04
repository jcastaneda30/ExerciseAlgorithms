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
    int K;
    cin>>K;

    string numero;
    cin>>numero;
    for(int i=0;i<numero.size();i++){
        if(numero[i]=='0' || numero[i]=='6' || numero[i]=='8') K--; 
    }
    cout<<K<<endl;
    return 0;
}