#include<iostream>
#include<vector>

using namespace std;

int main(){

    long long N,acumulador=0,acumulador2=0;
    cin>>N;
    vector<int> Ai(N);
    vector<long long> Ai_acumulate(N);
    vector<long long> Ai_2(N);
    for(int i=0;i<N;i++){
        cin>>Ai[i];
        acumulador+=Ai[i];
        acumulador2+=Ai[i]*Ai[i];
        Ai_acumulate[i]=(acumulador);
        Ai_2[i]=(acumulador2);
    }
    long long ans=0;
    for(int i=1;i<N;i++){
        ans+=(i)*Ai[i]*Ai[i]-2*Ai[i]*Ai_acumulate[i-1]+Ai_2[i-1];
    }
    cout<<ans<<endl;
    return 0;
}