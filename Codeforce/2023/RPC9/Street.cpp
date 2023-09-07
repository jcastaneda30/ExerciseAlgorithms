#include<iostream>
#include<vector>
#include<string>
#include <unordered_map>


using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<string> calles(n);
    unordered_map<string, int> posiciones;
    for(int i=0;i<n;i++) {
        cin>>calles[i];
        posiciones[calles[i]]=i;
        }
    for(int j=0;j<q;j++){
        string inicio,fin;
        cin>>inicio>>fin;
        int pos1=posiciones[inicio],pos2=posiciones[fin];
        cout<<abs(pos1-pos2)-1<<"\n";
    }


    return 0;
}