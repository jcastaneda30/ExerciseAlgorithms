#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}


int main(){
    setIO("blist");
    int N;
    cin>>N;
    vector<pair<int,int>> intervalo;
    vector<int> buckets;
    for(int i=0;i<N;i++){
        int a,b,c;
        cin>>a>>b>>c;
        intervalo.push_back(make_pair(a,b));
        buckets.push_back(c);
    }
    int totales = -1;
    for(int i=1;i<1001;i++){
        int baldes = 0;
        for(int j=0;j<N;j++){
            if((intervalo[j].first<=i && intervalo[j].second>=i)){
                baldes = baldes+buckets[j];
            }
        }
        totales=max(baldes,totales);
    }
    cout<<totales<<"\n";
    return 0;
}