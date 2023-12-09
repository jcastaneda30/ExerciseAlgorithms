#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> permutation(N,0);
    int fixedPoint=0;
    for(int i=0;i<N;i++) {
        int value;
        cin>>value;
        if(i==value) fixedPoint++;
        permutation[i]=value;
    }
    bool status = false;
    int definitivo=0;
    for(int j=0;j<N;j++){
        if(permutation[j]!=j && !status){
            int valueJ=permutation[j];
            int valueChange=permutation[valueJ];
            swap(permutation[j],permutation[valueJ]);
            if(permutation[j]==j && permutation[valueJ]==valueJ){
                definitivo=2;
                break;
            }else{
                definitivo=1;
            }
            swap(permutation[j],permutation[valueJ]);
        }
    }
    fixedPoint+=definitivo;
    cout<<fixedPoint<<"\n";
}