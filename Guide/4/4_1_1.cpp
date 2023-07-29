#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> elemento={5,6,8,4,3,8,3,9,7,1,9,8,1,6};
    int n=14;
        for(int i=0;i<elemento.size();i++){
            for(int j=0;j<elemento.size()-1;j++){
                if(elemento[j]>elemento[j+1]) swap(elemento[j],elemento[j+1]);
            }

        }
    for (int h=0;h<n;h++){
        cout<<elemento[h]<<" ";
    }
    return 0;
}