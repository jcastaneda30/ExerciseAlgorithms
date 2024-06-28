#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    vector<int> values(n);
    for (int i = 0; i < n; i++)
        cin >> values[i];
    int  r = 0, suma = 0, maxio = -1;
    bool sumado=false;
    for (int i = 0; i < n; i++){
        while(r<n && suma+values[r]<=t){
            suma+=values[r];
            r++;
        }
        maxio=max(maxio,r-i);
        suma-=values[i];
    }

    
    cout << maxio << endl;
    return 0;
}