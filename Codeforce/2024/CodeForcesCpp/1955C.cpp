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
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<int> naves(n);
        for (int &t : naves)
            cin >> t;
        int l = 0, r = n - 1, contador=0,ataque=0;
        naves[ataque]-=1;

        k--;
        ataque=n-1;
        long long saltos=0;
        while (l < r && k>0)
        {   
            long long minimo = min(naves[l],naves[r]);
            if(l!=r && minimo==naves[ataque]){
                long long ataques = 2*minimo-1;
                if(k-ataques<0)break;
                if(ataques>0)contador++;
                k-=ataques;
                if(ataque==l){
                    naves[r]-=ataques-1;
                    l++;
                    ataque=r;
                }else{
                    naves[l]-=ataques-1;
                    r--;
                    ataque=l;
                }
            }
            else if(l!=r && minimo!=naves[ataque]){
                long long ataques = 2*minimo;
                if(k-ataques<0)break;
                k-=ataques;
                if(ataques>0)contador++;
                if(ataque==l){
                    naves[r]-=ataques;
                    l++;
                    ataque=r;
                }else{
                    naves[l]-=ataques;
                    r--;
                    ataque=l;
                }
            }
        }
        if(l==r){
            if(naves[l]<k)contador++;
        }
        cout<<contador<<"\n";
    }
    return 0;
}