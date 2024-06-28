#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    setIO("lostcow");
    int x,y;
    cin>>x>>y;
    bool direccion = y>=x ? 1 : 0;
    int distancia=0;
    int counter=0;
    int actually=x;
    while(true){
       if(direccion){
            x=x+pow((-1),counter)*pow(2,counter);
            distancia+=pow(2,counter);
            if(x>=y){
                distancia-=x-y;
                break;
            }
            x=x-pow((-1),counter)*pow(2,counter);
            distancia+=pow(2,counter);
       }else{
            x=x+pow((-1),counter)*pow(2,counter);
            distancia+=pow(2,counter);
            if(x<=y){
                distancia-=abs(x-y);
                break;
            }
            x=x-pow((-1),counter)*pow(2,counter);
            distancia+=pow(2,counter);
       }
       counter++;
    }
    cout<<distancia<<"\n";
    return 0;
}