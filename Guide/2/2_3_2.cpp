#include<iostream>
using namespace std;

int main(){
    int x=0; 
    x |= (1<<1); 
    x |= (1<<3); 
    x |= (1<<4); 
    x |= (1<<8);
    cout << __builtin_popcount(x) << "\n"; // 4
    for (int k=31;k>=0;k--){ 
        if (x&(1<<k)) cout << "1"; 
        else cout << "0";
    }
}