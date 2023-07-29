#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:

    int maximumPopulation(vector<vector<int>>& logs) {
        vector<pair<int,char>> elemento;
        for(int i=0;i<logs.size();i++){
            for(int j=0;j<2;j++){
                if(j==0){
                    elemento.push_back(pair<int,char>{logs[i][j],'N'});
                }else{
                    elemento.push_back(pair<int,char>{logs[i][j],'D'});
                }
            }
        }
        sort(elemento.begin(),elemento.end());
        int MaxPopulation=0;
        int PoblacionActual=0;
        int Anho;
        for(pair<int,char> waos:elemento){
            if(waos.second=='N'){
                PoblacionActual++;
            }else{
                PoblacionActual--;
            }
            if(PoblacionActual>MaxPopulation){
                MaxPopulation=max(PoblacionActual,MaxPopulation);
                Anho=waos.first;

            }else{
                MaxPopulation=max(PoblacionActual,MaxPopulation);
            }
            
        }
        return Anho;
    }
};

int main() {
    vector<vector<int>> elemento = {{1950,1961},{1960,1971},{1970,1981}};
    Solution waos;
    int elemento2 = waos.maximumPopulation(elemento);
    cout << "El vector es: "<<elemento2;
    cout << endl;

    return 0;
}