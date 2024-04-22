#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int N;
    cin>>N;
    unordered_map<long long, int> cantidad;
    cantidad[0]=1;
    long long acumulador =0, counter=0;
    for(int i=0;i<N;i++){
        int value;
        cin>>value;
        acumulador=(acumulador+value)%N;
        if(acumulador<0)acumulador+=N;
        counter+=cantidad[acumulador];
        cantidad[acumulador]++;
    }
    cout<<counter<<endl;
    return 0;
}