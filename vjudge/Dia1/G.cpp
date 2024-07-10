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
    int t;
    cin>>t;
    while(t--){
        int k,q;
        cin>>k>>q;
        vector<int> a(k);
        for(int i=0;i<k;i++) cin>>a[i]; 
        for(int i=0;i<q;i++){
            int n;
            cin>>n;
            if(n<a[0]){
                cout<<n<<' ';
            }else{
                cout<<a[0]-1<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}
