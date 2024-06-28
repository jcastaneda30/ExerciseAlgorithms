//https://vjudge.net/contest/599507#problem/A

#include<iostream>
#include<vector>

using namespace std;

int main(){
    freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);
    int N,Q;
    cin>>N>>Q;
    vector<int> vacas(N);
    vector<int> vacas1(N+1,0);
    vector<int> vacas2(N+1,0);
    vector<int> vacas3(N+1,0);
    for(int i=0;i<N;i++){
        cin>>vacas[i];

    }
    for(int i=0;i<N;i++){
        if(vacas[i]==1){
            vacas1[i+1]=vacas1[i]+1;
            vacas2[i+1]=vacas2[i];
            vacas3[i+1]=vacas3[i];
        }
        else if(vacas[i]==2){
            vacas1[i+1]=vacas1[i];
            vacas2[i+1]=vacas2[i]+1;
            vacas3[i+1]=vacas3[i];
        }
        else{
            vacas1[i+1]=vacas1[i];
            vacas2[i+1]=vacas2[i];
            vacas3[i+1]=vacas3[i]+1;
        }
    }

    for(int k=0;k<Q;k++){
        int a,b;
        cin>>a>>b;
        cout<<vacas1[b]-vacas1[a-1]<<" "<<vacas2[b]-vacas2[a-1]<<" "<<vacas3[b]-vacas3[a-1]<<endl;
    }
    return 0;
}