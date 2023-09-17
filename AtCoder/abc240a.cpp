#include<iostream>

using namespace std;

int main(){
    bool graph[11][11];
    graph[1][2]=true;
    graph[2][3]=true;
    graph[3][4]=true;
    graph[4][5]=true;
    graph[5][6]=true;
    graph[6][7]=true;
    graph[7][8]=true;
    graph[8][9]=true;
    graph[9][10]=true;
    graph[1][10] = true;
    int a,b;
    cin>>a>>b;
    string mensaje = graph[a][b] ? "Yes" : "No";
    cout<<mensaje<<endl;
    return 0;
}