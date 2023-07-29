#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> list(n,0);
    for(int i=0;i<n;i++) cin>>list[i];

    for(int x=0;x<n;x++){
        int orS=0; int andS=0; int ceronts=0;
        for(int y=0;y<n;y++){
            if((list[x]|list[y])==list[x]){
                orS++;
            }
            if((list[x]&list[y])==list[x]){
                andS++;
            }
            if((list[x]&list[y])!=0){
                ceronts++;
            }
        }
        cout<<orS<<" "<<andS<<" "<<ceronts<<endl;
    }
}