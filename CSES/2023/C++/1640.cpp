#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    int n,x;
    cin>>n>>x;
    set<int> values;
    vector<int> values2;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        values.insert(a);
        values2.push_back(a);
    }
    bool cosa=false;
    for(int i=0;i<n;i++){
        auto it = values.find(x-values2[i]);
        if(it!=values.end()){
            for(int j=0;j<n;j++){
                if(i!=j && values2[j]==(x-values2[i])){
                    cout<<i+1<<" "<<j+1<<endl;
                    cosa=true;
                    break;
                }
            }
        }
        if(cosa) break;
    }

    if(!cosa) cout<<"IMPOSSIBLE"<<endl;
}