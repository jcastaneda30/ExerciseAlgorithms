#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;
struct Compare {
    bool operator() (const pair<long long, string>& a, const pair<long long, string>& b) const {
        if (a.first != b.first) {
            return a.first < b.first;
        }

        return a.second > b.second;
    }
};
int main(){
    int n,a;
    cin>>n>>a;
    set<pair<long long, string>,Compare> empleados;
    map<string,long long> empledosNomina;
    for(int i=0;i<n;i++){
        string fuck;
        long long monda;
        cin>>fuck>>monda;
        empledosNomina[fuck]+=monda;
        empleados.insert({monda,fuck});
    }
    for(int i=0;i<a;i++){
        int action;
        cin>>action;
        if(action==1){
            int pasta;
            string nombre;
            cin>>nombre>>pasta;
            empleados.erase({empledosNomina[nombre],nombre});
            empledosNomina[nombre]+=pasta;
            empleados.insert({empledosNomina[nombre],nombre});
        }else{
            auto it = empleados.rbegin(); // Iterador al último elemento
            cout<<(*it).second<<' '<<(*it).first<<'\n';
            empleados.erase(std::prev(it.base())); 
        }
    }

    return 0;
}