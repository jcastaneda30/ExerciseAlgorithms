#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    setIO("pails");
    int X,Y,M;
    cin>>X>>Y>>M;
    
    if(!M%X || !M%Y){
        cout<<M<<endl;
        return 0;
    }
    int consta=0;
    int value2=X;
    while(X<M){
        int value = (M-X)/Y;
        int actually = value*Y;
        int xdd = X+actually;
        consta = max(consta,xdd);
        X+=value2;
    }
    consta = max(consta,X-value2);
    cout<<consta<<endl;
    return 0;
}