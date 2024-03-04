#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>

using namespace std;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    setIO("teleport");
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int absoluta = abs(a-b);
    int teleportes = abs(a-x)+abs(b-y);
    int teleportes2 = abs(a-y)+abs(b-x);
    cout<<min(absoluta,min(teleportes,teleportes2))<<"\n";
    return 0;
}