#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    
    for(int i=1;i<1E8+1;i++){
        int suma=0;
        for(int j=1;j<i;j++){
            suma+=j;
        }
        if(suma==i){
            cout<<i<<endl;
        }
    }
}