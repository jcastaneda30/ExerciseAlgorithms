#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}


int main(){
    setIO("shuffle");
    int N;
    cin>>N;
    vector<int> Posiciones;
    vector<int> IDS;
    for(int i =0; i<N;i++){
        int a;
        cin>>a;
        Posiciones.push_back(a-1);
    }
    for(int i =0; i<N;i++){
        int a;
        cin>>a;
        IDS.push_back(a);
    }
    vector<pair<int,int>> monda;

    for(int i = 0; i<N;i++){
        int value = IDS[i];
        int position=i;
        for(int j=0;j<3;j++){
            for(int t=0;t<N;t++){
                if(position==Posiciones[t]){
                    position=t;
                    break;
                }
            }
        }
        monda.push_back(make_pair(position,value));
    }
    sort(monda.begin(),monda.end());
    for(auto value:monda){
        cout<<value.second<<endl;
    }
    return 0;
}