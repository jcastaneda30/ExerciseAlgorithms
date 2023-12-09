#include<iostream>
#include<algorithm>
 
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long l,r,c=0,n;
        long long left=INT_MAX,right=INT_MIN,dineroL=0,dineroR=0,dineroTotal=0,valorR=INT_MAX,valorL=INT_MAX;
        cin>>n;
        cin>>l>>r>>c;
        left=l;
        right=r;
        dineroR=c;
        dineroL=c;
        dineroTotal=c;
        valorL=c;
        valorR=c;
        bool indicador=true;
        cout<<dineroR<<endl;
        for(int i=1;i<n;i++){
            cin>>l>>r>>c;
            if(l<left && r>right){
                indicador=true;
                dineroTotal=c;
                dineroL=c;
                dineroR=c;
                valorR=c;
                valorL=c;
                left=l;
                right=r;
            } 
            if(l==left && r>right){
                valorL=min(valorL,c);
                indicador=true;
                dineroTotal=c;
                dineroL=c;
                dineroR=c;
                
                right=r;
            }
            if(l<left && r==right){
                valorR=min(valorR,c);
                indicador=true;
                dineroTotal=c;
                dineroL=c;
                dineroR=c;
                
                left=l;
            }
            if(l==left && r==right && dineroTotal>c){
                valorR=min(valorR,c);
                valorL=min(valorL,c);
                indicador=true;
                dineroL=c;
                dineroR=c;

                dineroTotal=dineroR;
            }
            if(l<left && r<right){
                valorL=min(valorL,c);
                indicador=false;
                left=l;
                dineroL=c;
                
                dineroTotal=valorR+dineroL;
            } 
            if(l>left && r>right){
                valorR=min(valorR,c);
                indicador=false;
                right=r;
                dineroR=c;
                
                dineroTotal=dineroR+valorL;
            }
            if(l==left && r<right && !indicador){
                if(dineroL>c){
                    valorL=min(valorL,c);
                    dineroL=c;
                    dineroTotal=dineroL+dineroR;
                    
                }
            } if(l>left && r==right && !indicador){
                if(dineroR>c){
                    valorR=min(valorR,c);
                    dineroR=c;
                    dineroTotal=dineroL+dineroR;
                    
                }
            }
            cout<<dineroTotal<<endl;
        }
    }
    return 0;
}