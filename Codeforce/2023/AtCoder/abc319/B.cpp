#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int N; cin>>N;
    vector<int> valores;
    for(int i=1;i<10;i++){
        if(N%i==0) valores.push_back(i);
    }
    string cadena="";
    for(int j=0;j<N+1;j++){
        int mina = 99999;
        for(int value:valores){
            if(j%(N/value)==0){
                mina =min(mina,value);
            }
        }
        if(mina!=99999){
            cadena+=to_string(mina);
        }else cadena+="-";
    }
    cout<<cadena<<endl;
    return 0;
}