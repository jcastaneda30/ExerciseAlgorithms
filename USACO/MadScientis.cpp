#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    setIO("breedflip");
    int N;
    cin>>N;
    string A,B;
    cin>>A>>B;
    bool iguales=false, diferent=false;
    int counter=0;
    for(int i=0;i<N;i++){
        if(A[i]!=B[i]){
            diferent=true;
        }else{
            if(diferent){
                counter++;
                diferent=false;
            }
        }
    }
    cout<<counter<<endl;
    return 0;
}