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
    setIO("paint");
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    int intersection=min(b,d)-max(a,c);
    int full = b-a+d-c-max(intersection,0);
    cout<<full<<"\n";
    return 0;
}