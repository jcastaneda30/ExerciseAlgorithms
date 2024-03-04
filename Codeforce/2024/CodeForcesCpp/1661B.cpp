#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,counter=99;
        cin>>a;
        
        for(int j=0;j<=15;j++){
            for(int t=0;t<=15;t++){
                if(((a+j)*(int)pow(2,t))%32768==0) counter=min(counter,t+j);
            }
        }
        cout<<counter<<" ";
    }
    cout<<"\n";
    return 0;
}