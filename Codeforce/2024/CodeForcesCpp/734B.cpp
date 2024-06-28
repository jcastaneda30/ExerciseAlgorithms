#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;
long long binarySearch(long long l, long long r, long long number, long long actual){
    long long m = l + (r-l)/2;
    if(number>m){
        return binarySearch(m+1LL,r,number,actual-1LL);
    }else if(number<m){
        return binarySearch(l,m-1LL,number,actual-1LL);
    }else{
        return actual;
    }
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    long long n,k;
    cin>>n>>k;
    long long Fsize = 1;
    for(int i=1; i<n;i++){
        Fsize= Fsize * 2LL +1LL;
    }
    cout<<binarySearch(1LL,Fsize,k,n)<<endl;
    return 0;
}