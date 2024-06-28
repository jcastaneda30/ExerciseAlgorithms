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
        int n, k;
        cin >> n >> k;
        map<int, int> valores;
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            valores[value]++;
        }
        vector<pair<int, int>> cantidad;
        for (auto &tt : valores)
        {
            cantidad.push_back({tt.first, tt.second});
        }



        bool atLeast1 = cantidad[0].second>=k ? true:false, primero = cantidad[0].second>=k ? false:true;
        int lNumero = cantidad[0].first, rNumero = cantidad[0].first, finalL = 0, finalR = 0, diferencia = -1;



        for (int i = 1; i < cantidad.size(); i++)
        {
            if(cantidad[i].first-cantidad[i-1].first>1 && cantidad[i].second>=k){
                lNumero = cantidad[i].first;
                rNumero = cantidad[i].first;
                diferencia = max(diferencia, rNumero-lNumero);
                primero = false;
                atLeast1 = true;
            }else if(cantidad[i].second>=k){
                if(primero) lNumero=cantidad[i].first;
                primero = false;
                rNumero = cantidad[i].first;
                if(rNumero-lNumero>=diferencia){
                    finalL = lNumero;
                    finalR= rNumero;
                    diferencia = rNumero-lNumero;
                }
                atLeast1  = true;
            }else{
                primero = true;
            }
        }
        if (rNumero - lNumero >= diferencia)
        {
            finalL = lNumero;
            finalR = rNumero;
        }
        if(atLeast1)cout << finalL << " " << finalR << endl;
        else cout<<"-1"<<endl;
        }

    return 0;
}