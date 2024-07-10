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
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    vector<pair<int,string>> valores(m);
    for(auto &valor:valores) cin>>valor.first>>valor.second;
    sort(valores.begin(),valores.end());
    int counter =0;
    long long gasto =0;

    for(int i=0;i<m;i++){
        if(a>0 && valores[i].second=="USB"){
            --a;
            counter++;
            gasto += valores[i].first;
        }else if(b>0 && valores[i].second=="PS/2"){
            --b;
            counter++;
            gasto += valores[i].first;
        }else if(c>0){
            --c;
            counter++;
            gasto += valores[i].first;
        }
    }
    cout<<counter<<' '<<gasto<<endl;
    return 0;
}