#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> aPos(k + 1, 0); 
        vector<int> aNeg(k + 1, 0); 
        vector<int> b(k + 1, 0);
        for(int i = 1; i <= k; i++){
            int value;
            cin >> value;
            aPos[i] = value;
            aNeg[i] = -value;
        }
        for(int i = 1; i <= k; i++){
            int value;
            cin >> value;
            b[i] = value;
        }
        sort(aNeg.begin(), aNeg.end()); 
        for(int i = 0; i < q; i++){
            int search;
            cin >> search;
            auto it = lower_bound(aNeg.begin(), aNeg.end(), -search);
            auto elemento = lower_bound(aPos.begin(), aPos.end(), -(*it));
            int index = elemento - aPos.begin();
            if(aPos[index]==aPos[aPos.size()-1]){
                cout<<b[index]<<' ';
                continue;
            }
            long long distancia = aPos[index+1]-aPos[index];
            long long tiempo = b[index+1] - b[index];
            long double  velocidad = (long double)distancia/(long double)tiempo;
            long long ans = (long long)b[index] + (long double)(search-aPos[index])/velocidad;
            cout<<ans<<' ';
        }
        cout<<endl;
    }
    return 0;
}
