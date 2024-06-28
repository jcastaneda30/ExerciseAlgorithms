#include<iostream>
#include <numeric>
using namespace std;




int main(){
    int A,length=0,sum=0;
    cin>>A;

    for(int i=2;i<A;i++){
        int copy=A;
        length+=1;
        while(copy){
            sum+=copy%i;
            copy=copy/i;
        }
    }

    int gcdASum=gcd(sum,length);
    cout<<sum/gcdASum<<'/'<<length/gcdASum<<endl;
}