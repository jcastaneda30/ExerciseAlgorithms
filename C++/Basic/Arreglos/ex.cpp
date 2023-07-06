#include<iostream>
using namespace std;

int main(){
    int suma=1,numero[]={1,2,3,4,5,6,7,8,9,10};
    for(int i:numero){
        suma*=i;
    }
    cout<<suma;
    return 0;
}