#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n,x;
    cin>>n>>x;
    vector<int> values(n);
    for(int i=0;i<n;i++) cin>>values[i];
    int l=0,r=0,counter=0;
    long long sum = 0;
    while(r<n){
        while(sum<x){
            sum+=values[r];
            r++;
        }
        while(sum>=x){
            if(sum==x) counter++;
            sum-=values[l];
            l++;
        }
    }
    cout<<counter<<endl;
    return 0;
}