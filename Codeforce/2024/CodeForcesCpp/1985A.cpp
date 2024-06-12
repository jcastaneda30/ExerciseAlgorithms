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
        string cadena1,cadena2;
        cin>>cadena1>>cadena2;
        swap(cadena1[0],cadena2[0]);
        cout<<cadena1<<' '<<cadena2<<'\n';
    }
    return 0;
}