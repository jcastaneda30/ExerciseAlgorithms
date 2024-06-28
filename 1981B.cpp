#include<iostream>
#include<algorithm>
 
using namespace std;
int main(){
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
        valorL=c;
        valorR=c;
        dineroTotal=c;
        cout<<dineroTotal<<endl;
        for(int i=1;i<n;i++){
            cin>>l>>r>>c;
            if(l<left && r>right){
                left=l;
                right=r;
                dineroR=c;
                dineroL=c;
                valorL=c;
                valorR=c;
                dineroTotal=c;
            }else if(l==left && r==right){
                dineroTotal=min(dineroTotal,c);
                
            }
            cout<<dineroTotal<<endl;
        }
    }
    return 0;
}