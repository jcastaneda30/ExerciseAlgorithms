#include<iostream>
using namespace std;

int main(){
    int hola[]={-1,2,4,-3,5,2,-5,66};
    int n=8;
    int best = 0, sum = 0;
    for (int k=0;k<n;k++){
        cout<<"  "<<sum<<endl;
        sum = max(hola[k],sum+hola[k]); 
        best = max(best,sum);
    }
    cout << best << "\n";
    return 0;
}