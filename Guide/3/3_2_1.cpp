#include<iostream>
using namespace std;

int main(){
    int hola[]={-1,2,4,-3,5,2,-5,66};
    int best = 0;
    int n=8;
    for (int a=0;a<n;a++){ 
        for (int b=a;b<n;b++) {
        int sum = 0;
            for (int k = a; k <= b; k++) { 
                sum += hola[k];
            }
        best = max(best,sum); 
        }
    }
    cout << best << "\n";
    return 0;
}