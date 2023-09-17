#include <iostream>
#include <climits>
#include <unordered_map>
#include <string>

using namespace std;
unordered_map<string, bool> partidas;
bool solucion(int N, int turno,bool player) {
    string key = to_string(turno)+","+to_string(N);
    if(partidas.contains(key)){
        return (partidas[key] ? player : !player);
    }
    else{
        if(turno>=N){
            return player;
        }else{
            for (int i = turno; i >0; i--) {
                if(solucion(N-i,turno+1,!player)==player){
                    partidas[key]=true;
                    return player;
                }
            }
            partidas[key]=false;
            return !player;
        }
    }
}
int main() {
    int N;
    cin >> N;
    
    bool resultado = solucion(N, 1,true);


    cout << (resultado ? "Jane" : "John") << "\n";
    
    return 0;
}
