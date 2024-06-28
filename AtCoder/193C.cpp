#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int main(){
    long long N;
    cin>>N;
    unordered_set<long long> values;

    for(long long i=2;i*i<=N;i++){
        long long x=i*i;
        while(x<=N){
            values.insert(x);
            x*=i;
        }
    }

    cout<<N-values.size()<<endl;
    return 0;
}