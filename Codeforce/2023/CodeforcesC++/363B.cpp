#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    int n,k;
    cin >> n>> k;
    vector<int> tablas(n);
    for (int i = 0; i < n; i++) {
        cin >> tablas[i];
    }
    int sum=0;
    for(int t=0;t<k;t++){
        sum+=tablas[t];
    }
    int sum2=sum;
    int min=sum;
    int indice=0;
    for(int tt=k;tt<n;tt++){
        sum2=sum2+tablas[tt]-tablas[tt-k];
        if(sum2<sum){
            sum=sum2;
            indice=tt-k+1;
        }
    }
    cout << indice+1 << endl;
    return 0;
}
