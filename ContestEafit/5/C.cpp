#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,a,b,cost,min,max;
    cin>>n>>a>>b;
    vector<int> dancers(n,0);
    for(int i=0;i<n;i++) cin>>dancers[i];
    if(a>b){
        max=a;
        min=b;
    }else{
        max=b;
        min=a;
    }
    int r=n-1,l=0;
    bool palindromo=true;
    while(l<=r){
        if(dancers[l]==dancers[r] && dancers[l]==2){
            if(l!=r){
                cost+=2*min;
            }else{
                cost+=min;
            }
        }

        if(dancers[l]!=dancers[r]){
            if(dancers[l]!=2 && dancers[r]!=2){
                palindromo=false;
            }else if(dancers[l]==2){
                if(dancers[r]==1){
                    cost+=b;
                }else{
                    cost+=a;
                }
            }else if(dancers[r]==2){
                if(dancers[l]==1){
                    cost+=b;
                }else{
                    cost+=a;
                }
            }
        }
        l++; r--;
    }
    if(palindromo){
        cout<<cost;
    }else{
        cout<<-1;
    }
    return 0;
}