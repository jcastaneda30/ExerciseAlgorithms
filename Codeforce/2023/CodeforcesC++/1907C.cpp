#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int tamanho;
        cin>>tamanho;
        string cadena;
        cin>>cadena;
        vector<bool> visitados(tamanho,true);
        int l=0,lpjus=1;
        while(lpjus<tamanho){
            if(cadena[l]!=cadena[lpjus]){
                visitados[l]=false;
                visitados[lpjus]=false;
            }
            l++;
            lpjus++;
        }
        string cadena2;
        for(int i=0;i<tamanho;i++) {
            if(visitados[])
        }
    }

    return 0;
}
