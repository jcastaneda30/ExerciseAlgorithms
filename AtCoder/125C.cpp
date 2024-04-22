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
    vector<int> valore(N+2,0);
    vector<int> prefix(N+2,0);

    for(int i=1;i<=N;i++){
        int value;
        cin>>value;
        valore[i]=value;
        prefix[i]=prefix[i-1]+valore[i];
    }


    return 0;
}