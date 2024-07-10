#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> ans;
    if(n==1) {
        cout<<1<<endl;
        return 0;}
    else if(n<=3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }else{
        int imparPar = n%2 ? n-1 : n;
        for(int i=imparPar-1;i>=1;i-=2){
            ans.push_back(i);
        }
        for(int i=imparPar;i>=2;i-=2){
            ans.push_back(i);
        }
        for(int a:ans) cout<<a<<' ';
        if(n%2) cout<<n<<' ';
        cout<<endl;
    }
    return 0;
}
