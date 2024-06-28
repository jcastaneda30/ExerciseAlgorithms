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
    int N;
    cin >> N;
    set<string> nombres = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};

    // Ordenar los nombres
    cin.ignore(); // Ignorar el carácter de nueva línea pendiente
    map<string, vector<string>> grafo;
    for (int i = 0; i < N; i++)
    {
        string cadena, nombre1, nombre2;
        getline(cin, cadena);
        string eliminar = "must be milked beside ";
        size_t pos = cadena.find(eliminar);
        cadena.erase(pos, eliminar.length());
        bool espacio = false;
        for (auto &caracter : cadena)
        {
            if (caracter == ' ')
            {
                espacio = true;
                continue;
            }
            if (!espacio)
                nombre1 += caracter;
            else
                nombre2 += caracter;
        }
        grafo[nombre1].push_back(nombre2);
        grafo[nombre2].push_back(nombre1);
    }
    
    map<string, vector<string>> grafo2;
    for (auto &elemento:grafo){
        for(int i=0;i<elemento.second.size();i++){
            for(auto copia:grafo){
                if(elemento.second[i]==copia.first && elemento.first!=copia.second[0]){
                    elemento.second.push_back(copia.second[0]);
                }
            }
        }
        if(!grafo2.count(elemento.first))grafo2[elemento.first] = elemento.second;
    }

    for(auto elemento:grafo2){
        cout<<"Vaca"<<elemento.first<<" :";
        for(int i=0;i<elemento.second.size();i++){
            cout<<elemento.second[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
