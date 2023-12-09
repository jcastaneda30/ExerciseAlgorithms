#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int cantidad;
    cin>>cantidad;
    vector<int> cantidades(cantidad);
    for(int i=0;i<cantidad;i++) cin>>cantidades[i];
    sort(cantidades.begin(),cantidades.end());
    cout<<(cantidades[0]+cantidades[1])<<endl;
}