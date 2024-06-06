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
        string letras(200,'a');
        cout<<letras<<endl;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            letras[a] = letras[a]=='a'? 'b':'a';
            cout<<letras<<endl;
        }
    }
    return 0;
}