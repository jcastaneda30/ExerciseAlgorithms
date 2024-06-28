#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

void setIO(string s)
{
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    //setIO("milkorder");
    vector<int> vacas(101, 0);
    vector<int> Posiciones;
    set<int> estan;
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        Posiciones.push_back(a);
    }
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        vacas[b] = a;
        estan.insert(a);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j < 101; j++)
        {
            if(Posiciones[i]==vacas[j]){
                int copy=j-1,copy2=i-1;
                while(copy>0 && copy2>=0 ){
                    if(estan.count(Posiciones[copy2])){
                        copy2--;
                        continue;
                    }
                    if(vacas[copy]==0){
                        vacas[copy]=Posiciones[copy2];
                        copy2--;
                    }
                    copy--;
                }
                copy=100,copy2=Posiciones.size()-1;
                while(copy<101 && copy2>i){
                    if(estan.count(Posiciones[copy2])){
                        copy2--;
                        continue;
                    }
                    if(vacas[copy]==0){
                        vacas[copy]=Posiciones[copy2];
                        copy2--;
                    }
                    copy--;
                }
                break;
            }
        }
    }
    for(int i=1;i<101;i++){
        if(vacas[i]==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}