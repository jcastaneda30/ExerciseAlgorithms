#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    int N;
    cin>>N;
    long long suma=0,X;
    vector<int> values(N);
    for(int i=0;i<N;i++){
        cin>>values[i];
        suma+=values[i];
    }
    cin>>X;
    if(suma>X){
        long long actually=0;
        for(int i=0;i<N;i++){
            actually+=values[i];
            if(actually>X){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else{
        long long k=(X/suma)*N;
        long long actually=suma*(X/suma);
        for(int i=0;i<N;i++){
            actually+=values[i];
            if(actually>X){
                cout<<k+i+1<<endl;
                break;
            }
        }
    
    }
    return 0;
}