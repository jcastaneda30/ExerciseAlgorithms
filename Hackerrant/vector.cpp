#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<int>> matriz(n);      
    for(int i=0;i<n;i++){
        int numbers;
        cin>>numbers;
        matriz[i].resize(numbers);
        for(int j=0;j<numbers;j++){
            cin>>matriz[i][j];
        }
    }
    int m,k;
    for(int h=0;h<q;h++){
        cin>>m>>k;
        cout<<matriz[m][k]<<endl;
    }
    return 0;
}