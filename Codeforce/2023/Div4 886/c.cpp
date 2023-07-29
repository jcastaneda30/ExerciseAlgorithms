#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string matriz[8];
    for(int i=0;i<t;i++){
        for(int h=0;h<8;h++){
            string cadena;
            for(int f=0;f<8;f++){
                char element;
                cin>>element;
                cadena+=element;
            }
            matriz[h]=cadena;
        }
        string palabra;
        for(int j=0;j<8;j++) for(int g=0;g<8;g++){
            if(matriz[j][g]!='.'){
                palabra+=matriz[j][g];
            }
        }
        cout<<palabra<<"\n";
    }
    return 0;
}