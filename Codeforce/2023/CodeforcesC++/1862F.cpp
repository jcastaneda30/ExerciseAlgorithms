#include<iostream>
#include<algorithm>
#include<deque>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int w,f;
        cin>>w>>f;
        int n; cin>>n;
        vector<int> fuerzas;
        int suma=0;
        for(int k=0; k<n;k++){
            int value;
            cin>>value;
            fuerzas.push_back(value);
            suma+=value;
        }
        
        int water=w,fire=f;
        int seconds=1;

        cout<<seconds<<"\n";
    }
}