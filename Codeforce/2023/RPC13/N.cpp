#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    long long velas,contador=0,actually=2;
    cin>>velas;
    while(1){
        if(velas==0 || velas == 1 || velas == 2){
            break;
        }
        if(actually*(actually+1)/2<=velas){
            velas-=actually*(actually+1)/2;
            contador+=1;
            actually++;
        }else{
            actually=2;
        }
    }
    cout<<contador<<" "<<velas<<endl;
    return 0;
}
