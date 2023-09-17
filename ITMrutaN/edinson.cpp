#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T,K;
    cin>>T>>K;
    vector<int> lista(T,0);
    for(int i=0;i<T;i++) cin>>lista[i];
    sort(lista.begin(),lista.end());
    for(int i=0;i<K;i++){
        int X;
        cin>>X;
        int a = *lower_bound(lista.begin(),lista.end(),X/3);
        for(int i=0;i<X;i++){

        }
        cout<<endl;
    }
}