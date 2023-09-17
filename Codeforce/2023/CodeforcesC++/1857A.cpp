#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        int k;
        cin>>k;
        int count=0;
        for(int h=0;h<k;h++){
            int number;
            cin>>number;
            if(number%2!=0) count++;
        }
        if(count%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return 0;
}