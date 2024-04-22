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
    int t;
    cin >> t;
    t=2*t;
    vector<int> pesos(t);
    for (int &h : pesos)
        cin >> h;
    int ans=1e6;
    for(int i=0;i<t-1;i++){
        for(int j=i+1;j<t;j++){
            int suma=0;
            vector<int> provitional;
            for(int k=0;k<t;k++){
                if(k!=i && k!=j){
                    provitional.push_back(pesos[k]);
                }
            }
            sort(provitional.begin(),provitional.end());
            for(int k=0;k<provitional.size();k+=2){
                suma+=provitional[k+1]-provitional[k];
            }
            ans=min(ans, suma);
        }
    }
    cout<<ans<<endl;
    return 0;
}