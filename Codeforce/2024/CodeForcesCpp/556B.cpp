#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> initial(n);
    for (int &t : initial) cin >> t;
    
    vector<int> copy = initial;
    bool notThis=true;
    for (int i = 0; i < n; i++)
    {   
        notThis=true;
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0) copy[j] = (copy[j] + 1) % n;
            else{
                copy[j]--;
                
                if (copy[j] < 0) copy[j] = n - 1;
            }
        }
        
        for (int j = 0; j < n-1; j++) if(copy[j]+1!=copy[j+1]) notThis=false;
        
        if(notThis) break;

    }
    cout<<(notThis?"YES":"NO")<<endl;
    return 0;
}