#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    
    int t; // Número de casos de prueba
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        string x; 
        cin >> n >> x;
        string a(n,'0'), b(n,'0');
        for(int j=0;j<n;j++){
            if(x[j]=='0'){
                a[j]='0';
                b[j]='0';
            }else if(x[j]=='1'){
                a[j]='1';
                b[j]='0';
                for(int k=j+1;k<n;k++){
                    b[k]=x[k];
                }
                break;
            }else{
                a[j]='1';
                b[j]='1';
            }
        }
        cout << a << "\n";
        cout << b << "\n";
    }
    return 0;
}