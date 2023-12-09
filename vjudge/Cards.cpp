//https://vjudge.net/contest/597198#problem/C

//https://vjudge.net/contest/597198#problem/B

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string S,T;
    cin>>S;
    cin>>T;
    int arrobas=0;
    vector<int> letras(125,0);
    vector<int> letrasS(125,0);
    vector<int> letrasT(125,0);
    for(int i=0;i<S.size();i++){
        int ss = S[i];
        int tt = T[i];
        letras[ss]++;
        letras[tt]--;
        letrasS[ss]++;
        letrasT[tt]++;

    }
    for(int i=0;i<letras.size();i++){
        if(i==97 || i==116 || i==99 || i==111 || i==100 || i==101 || i==114 || i == 64) continue;
        if(letras[i]!=0){
            cout<<"No"<<endl;
            return 0;
        }
    }

    int a=letras[97];
    int t=letras[116];
    int c=letras[99];
    int o=letras[111];
    int d=letras[100];
    int e=letras[101];
    int r=letras[114];
    vector<int> finally = {a,t,c,o,d,e,r};
    for(int i=0;i<7;i++){
        if(finally[i]<0){
            letrasS[64]-=abs(finally[i]);
        }else if(finally[i]>0){
            letrasT[64]-=abs(finally[i]);
        }
    }
    if(letrasS[64]<0){
        cout<<"No"<<endl;
    }else if(letrasT[64]<0){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
}