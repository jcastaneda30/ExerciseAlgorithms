#include<iostream>
using namespace std;

int main(){
    int x=20000; 
    for (int i = 0; i < 32; i++) {
    if (x&(1<<i)) cout << i << " "; 
    }
}